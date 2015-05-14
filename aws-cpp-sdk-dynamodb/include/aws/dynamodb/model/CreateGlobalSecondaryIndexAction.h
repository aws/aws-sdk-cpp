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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/Projection.h>
#include <aws/dynamodb/model/ProvisionedThroughput.h>
#include <aws/dynamodb/model/KeySchemaElement.h>

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
    <p>Represents a new global secondary index to be added to an existing table.</p>
  */
  class AWS_DYNAMODB_API CreateGlobalSecondaryIndexAction
  {
  public:
    CreateGlobalSecondaryIndexAction();
    CreateGlobalSecondaryIndexAction(const Aws::Utils::Json::JsonValue& jsonValue);
    CreateGlobalSecondaryIndexAction& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>The name of the global secondary index to be created.</p>
    */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    /*
     <p>The name of the global secondary index to be created.</p>
    */
    inline void SetIndexName(const Aws::String& value) { m_indexName = value; }

    /*
     <p>The name of the global secondary index to be created.</p>
    */
    inline void SetIndexName(const char* value) { m_indexName.assign(value); }

    /*
     <p>The name of the global secondary index to be created.</p>
    */
    inline CreateGlobalSecondaryIndexAction&  WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /*
     <p>The name of the global secondary index to be created.</p>
    */
    inline CreateGlobalSecondaryIndexAction& WithIndexName(const char* value) { SetIndexName(value); return *this;}

    /*
     <p>The key schema for the global secondary index.</p>
    */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const{ return m_keySchema; }
    /*
     <p>The key schema for the global secondary index.</p>
    */
    inline void SetKeySchema(const Aws::Vector<KeySchemaElement>& value) { m_keySchema = value; }

    /*
     <p>The key schema for the global secondary index.</p>
    */
    inline CreateGlobalSecondaryIndexAction&  WithKeySchema(const Aws::Vector<KeySchemaElement>& value) { SetKeySchema(value); return *this;}

    /*
     <p>The key schema for the global secondary index.</p>
    */
    inline CreateGlobalSecondaryIndexAction& AddKeySchema(const KeySchemaElement& value) { m_keySchema.push_back(value); return *this; }

    
    inline const Projection& GetProjection() const{ return m_projection; }
    
    inline void SetProjection(const Projection& value) { m_projection = value; }

    
    inline CreateGlobalSecondaryIndexAction&  WithProjection(const Projection& value) { SetProjection(value); return *this;}

    
    inline const ProvisionedThroughput& GetProvisionedThroughput() const{ return m_provisionedThroughput; }
    
    inline void SetProvisionedThroughput(const ProvisionedThroughput& value) { m_provisionedThroughput = value; }

    
    inline CreateGlobalSecondaryIndexAction&  WithProvisionedThroughput(const ProvisionedThroughput& value) { SetProvisionedThroughput(value); return *this;}

  private:
    Aws::String m_indexName;
    Aws::Vector<KeySchemaElement> m_keySchema;
    Projection m_projection;
    ProvisionedThroughput m_provisionedThroughput;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
