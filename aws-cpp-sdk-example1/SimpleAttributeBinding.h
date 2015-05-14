/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#pragma once

#include <AttributeBinding.h>

#include <OptionalDbValue.h>

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dynamodb/model/ScalarAttributeType.h>
#include <aws/dynamodb/model/AttributeValue.h>

#include <stdint.h>
#include <ctime>
#include <sstream>

namespace Aws
{
namespace Example1
{

template<typename T>
bool SetAttributeValue(T& data, const Aws::String&value)
{
    Aws::StringStream ss(value);

    ss >> data;
    return true;
}

// partial specialization to handle optional data in a special way
template<typename T>
bool SetAttributeValue(OptionalDbValue<T>& data, const Aws::String&value)
{
    bool success = SetAttributeValue(data.GetData(), value);
    if(success)
    {
        data.SetDataValid(true);
    }

    return success;
}

// if this were a template specialization, it would never get called (see http://www.gotw.ca/publications/mill17.htm, "Why Not Specialize" section)
inline bool SetAttributeValue(OptionalDbValue<Aws::String>& data, const Aws::String& value)
{
    if(value.size() == 0)
    {
        data.SetDataValid(false);
        return true;
    }

    data.SetData(value);
    return true;
}

template<typename T>
Aws::String GetAttributeStringValue(const T& value)
{
    Aws::StringStream ss;
    ss << value;

    return ss.str();
}

static const char* INVALID_DATA = "**None**";

// partial specialization to handle optional data in a special way
template<typename T>
Aws::String GetAttributeStringValue(const OptionalDbValue<T>& value)
{
    if(!value.IsDataValid())
    {
        return Aws::String(INVALID_DATA);
    }

    return GetAttributeStringValue(value.GetData());
}

class AttributeBindingBase : public AttributeBindingInterface
{
    public:

        AttributeBindingBase(const Aws::String& attributeName, Aws::DynamoDB::Model::ScalarAttributeType attributeType) :
            m_attributeName(attributeName),
            m_attributeType(attributeType)
        {}

        virtual bool SetValueByAttribute(void *pointerToS, const Aws::DynamoDB::Model::AttributeValue& attribute) const override
        {
            switch(m_attributeType)
            {
                case Aws::DynamoDB::Model::ScalarAttributeType::S:
                    return SetValueByString(pointerToS, attribute.GetS());
                    break;

                case Aws::DynamoDB::Model::ScalarAttributeType::N:
                    return SetValueByString(pointerToS, attribute.GetN());
                    break;

                default:
                    break;
            }

            return false;
        }

        virtual bool SetAttribute(const void* pointerToS, Aws::DynamoDB::Model::AttributeValue& attribute) const override
        {
            switch(m_attributeType)
            {
            case Aws::DynamoDB::Model::ScalarAttributeType::S:
                    attribute.SetS(GetValueAsString(pointerToS));
                    return true;
                    break;

            case Aws::DynamoDB::Model::ScalarAttributeType::N:
                    attribute.SetN(GetValueAsString(pointerToS));
                    return true;
                    break;

                default:
                    break;
            }

            return false;
        }

        virtual Aws::String GetName() const override { return m_attributeName; }

    private:

        Aws::String m_attributeName;
        Aws::DynamoDB::Model::ScalarAttributeType m_attributeType;
};

template< typename T, typename S >
class SimpleAttributeBinding : public AttributeBindingBase
{
    public:
        typedef AttributeBindingBase Base;

        SimpleAttributeBinding(const Aws::String& attributeName, Aws::DynamoDB::Model::ScalarAttributeType attributeType, T S::* memberOffset) :
            Base(attributeName, attributeType),
            m_memberOffset(memberOffset)
        {}

        virtual bool SetValueByString(void* pointerToS, const Aws::String& value) const override {
            return SetAttributeValue(reinterpret_cast<S*>(pointerToS)->*m_memberOffset, value);
        }

        virtual void InvalidateData(void* data) override { AWS_UNREFERENCED_PARAM(data); }
        virtual bool IsValidData(void* data) override { 
            AWS_UNREFERENCED_PARAM(data); 
            return true; 
        }

        virtual Aws::String GetValueAsString(const void* pointerToS) const override
        {
            return GetAttributeStringValue(reinterpret_cast<const S*>(pointerToS)->*m_memberOffset);
        }

    private:

        Aws::DynamoDB::Model::ScalarAttributeType m_attributeType;
        T S::* m_memberOffset;
};

// partial specialization to handle optional data in a special way
template< typename T, typename S >
class SimpleAttributeBinding<OptionalDbValue<T>, S> : public AttributeBindingBase
{
    public:
        typedef AttributeBindingBase Base;

        SimpleAttributeBinding(const Aws::String& attributeName, Aws::DynamoDB::Model::ScalarAttributeType attributeType, OptionalDbValue<T> S::* memberOffset) :
            Base(attributeName, attributeType),
            m_memberOffset(memberOffset)
        {}

        virtual bool SetValueByString(void* pointerToS, const Aws::String& value) const override {
            return SetAttributeValue(reinterpret_cast<S*>(pointerToS)->*m_memberOffset, value);
        }

        virtual void InvalidateData(void* pointerToS) override {
            (reinterpret_cast<S*>(pointerToS)->*m_memberOffset).SetDataValid(false);
        }

        virtual bool IsValidData(void* pointerToS) override {
            return (reinterpret_cast<S*>(pointerToS)->*m_memberOffset).IsDataValid();
        }

        virtual Aws::String GetValueAsString(const void* pointerToS) const override
        {
            return GetAttributeStringValue(reinterpret_cast<const S*>(pointerToS)->*m_memberOffset);
        }

    private:

        Aws::DynamoDB::Model::ScalarAttributeType m_attributeType;
        OptionalDbValue<T> S::* m_memberOffset;
};

// simple function so that was can avoid specifying template parameters when creating bindings and let type inference do the work for us
template<typename T, typename S>
SimpleAttributeBinding<T, S>* MakeSimpleBinding(const Aws::String& attributeName, Aws::DynamoDB::Model::ScalarAttributeType attributeType, T S::* memberOffset)
{
    return new SimpleAttributeBinding<T, S>(attributeName, attributeType, memberOffset);
}

} // namespace Example1
} // namespace Aws
