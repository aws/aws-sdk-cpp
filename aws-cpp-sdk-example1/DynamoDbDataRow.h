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
#include <aws/core/utils/memory/stl/AWSMap.h>

#include <iosfwd>
#include <memory>

namespace Aws
{
namespace DynamoDB
{
    class DynamoDBClient;

namespace Model
{
    class AttributeValue;
} // namespace Model
} // namespace Dynamo

namespace Example1
{

class AttributeBindingInterface;

class DynamoDBDataRowBase
{
    public:

        DynamoDBDataRowBase(const Aws::String& tableName, const Aws::String& keyAttributeName, const Aws::String& keyValue);

        bool WriteToDb(const std::unique_ptr<Aws::DynamoDB::DynamoDBClient>& dynamoClient);
        bool ReadFromDb(const std::unique_ptr<Aws::DynamoDB::DynamoDBClient>& dynamoClient);

        bool SetAttributeValue(const Aws::String& attributeName, const Aws::String& value);

    protected:

        typedef Aws::Map<Aws::String, AttributeBindingInterface*> BindingMapType;

        virtual const BindingMapType& GetBindings() const = 0;

    private:

        friend std::ostream& operator<<(std::ostream& os, const DynamoDBDataRowBase& dataRow);

        bool SetAttributeValue(const Aws::String& attributeName, const Aws::DynamoDB::Model::AttributeValue& attributeValue);

        void InvalidateOptionalData();

        AttributeBindingInterface* GetBindingForAttribute(const Aws::String& attributeName);

        Aws::String m_tableName;
        Aws::String m_keyAttributeName;
        Aws::String m_keyValue;

};

std::ostream& operator<<(std::ostream& os, const DynamoDBDataRowBase& dataRow);

/*
If you have a class that represents a single-keyed set of data in dynamoDb, this helper class lets you easily set up bindings so that you
can read and write the data to dynamoDb with no extra work.

To use it:

(1) Supposing your class type is "MyClass", have MyClass derive publicly from DynamoDBDataRow<MyClass>
(2) Declare DynamoDBDataRow<MyClass> as a friend in MyClass's definition (needed so that the initialization for s_bindings has privileged visibility into your class)
(3) In MyClass's implementation file, define the static bindings map, s_bindings, with bindings for all data members in MyClass that you wish to persist
(4) Now you can call ReadFromDb to initialize an instance of your class from DynamoDB, and after updating members, call WriteToDb to persist it back.  As you add
    new data to MyClass, simply add an appropriate binding entry for the new member in s_bindings.

For safety's sake, Aws::String data members that use this binding technique should be OptionalDbStrings so that being empty doesn't cause persistence to fail.

For a concrete example, see PlayerData and how it's used.

*/
template<typename T>
class DynamoDBDataRow : public DynamoDBDataRowBase
{
    public:

        typedef DynamoDBDataRowBase Base;

        DynamoDBDataRow(const Aws::String& tableName, const Aws::String& keyAttributeName, const Aws::String& keyValue) :
            Base(tableName, keyAttributeName, keyValue)
        {}

    protected:

        virtual const BindingMapType& GetBindings() const final { return s_bindings; }

    private:

        static BindingMapType s_bindings;
};

} // namespace Example1
} // namespace Aws
