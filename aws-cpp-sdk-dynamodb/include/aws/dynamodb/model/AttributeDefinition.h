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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ScalarAttributeType.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{
  /*
    <p>Represents an attribute for describing the key schema for the table and indexes.</p>
  */
  class AWS_DYNAMODB_API AttributeDefinition
  {
  public:
    AttributeDefinition();
    AttributeDefinition(const Aws::Utils::Json::JsonValue& jsonValue);
    AttributeDefinition& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>A name for the attribute.</p>
    */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }
    /*
     <p>A name for the attribute.</p>
    */
    inline void SetAttributeName(const Aws::String& value) { m_attributeName = value; }

    /*
     <p>A name for the attribute.</p>
    */
    inline void SetAttributeName(const char* value) { m_attributeName.assign(value); }

    /*
     <p>A name for the attribute.</p>
    */
    inline AttributeDefinition&  WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /*
     <p>A name for the attribute.</p>
    */
    inline AttributeDefinition& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}

    /*
     <p>The data type for the attribute.</p>
    */
    inline const ScalarAttributeType& GetAttributeType() const{ return m_attributeType; }
    /*
     <p>The data type for the attribute.</p>
    */
    inline void SetAttributeType(const ScalarAttributeType& value) { m_attributeType = value; }

    /*
     <p>The data type for the attribute.</p>
    */
    inline AttributeDefinition&  WithAttributeType(const ScalarAttributeType& value) { SetAttributeType(value); return *this;}

  private:
    Aws::String m_attributeName;
    ScalarAttributeType m_attributeType;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
