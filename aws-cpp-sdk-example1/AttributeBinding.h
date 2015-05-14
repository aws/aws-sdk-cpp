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

#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{
    class AttributeValue;
} // namespace Model
} // namespace DynamoDb

namespace Example1
{

class AttributeBindingInterface
{
    public:

        virtual bool SetValueByString(void* data, const Aws::String& value) const = 0;
        virtual bool SetValueByAttribute(void* data, const Aws::DynamoDB::Model::AttributeValue& attribute) const = 0;

        virtual void InvalidateData(void* data) = 0;
        virtual bool IsValidData(void* data) = 0;

        virtual bool SetAttribute(const void* data, Aws::DynamoDB::Model::AttributeValue& attribute) const = 0;

        virtual Aws::String GetValueAsString(const void* data) const = 0;

        virtual Aws::String GetName() const = 0;
};

} // namespace Example1
} // namespace Aws
