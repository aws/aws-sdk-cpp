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
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ProvisionedThroughput.h>
#include <aws/dynamodb/model/AttributeDefinition.h>
#include <aws/dynamodb/model/GlobalSecondaryIndexUpdate.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /*
    <p>Represents the input of an <i>UpdateTable</i> operation.</p>
  */
  class AWS_DYNAMODB_API UpdateTableRequest : public DynamoDBRequest
  {
  public:
    UpdateTableRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /*
     <p>An array of attributes that describe the key schema for the table and indexes. If you are adding a new global secondary index to the table, <i>AttributeDefinitions</i> must include the key element(s) of the new index.</p>
    */
    inline const Aws::Vector<AttributeDefinition>& GetAttributeDefinitions() const{ return m_attributeDefinitions; }
    /*
     <p>An array of attributes that describe the key schema for the table and indexes. If you are adding a new global secondary index to the table, <i>AttributeDefinitions</i> must include the key element(s) of the new index.</p>
    */
    inline void SetAttributeDefinitions(const Aws::Vector<AttributeDefinition>& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions = value; }

    /*
     <p>An array of attributes that describe the key schema for the table and indexes. If you are adding a new global secondary index to the table, <i>AttributeDefinitions</i> must include the key element(s) of the new index.</p>
    */
    inline UpdateTableRequest&  WithAttributeDefinitions(const Aws::Vector<AttributeDefinition>& value) { SetAttributeDefinitions(value); return *this;}

    /*
     <p>An array of attributes that describe the key schema for the table and indexes. If you are adding a new global secondary index to the table, <i>AttributeDefinitions</i> must include the key element(s) of the new index.</p>
    */
    inline UpdateTableRequest& AddAttributeDefinitions(const AttributeDefinition& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions.push_back(value); return *this; }

    /*
     <p>The name of the table to be updated.</p>
    */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    /*
     <p>The name of the table to be updated.</p>
    */
    inline void SetTableName(const Aws::String& value) { m_tableName = value; }

    /*
     <p>The name of the table to be updated.</p>
    */
    inline void SetTableName(const char* value) { m_tableName.assign(value); }

    /*
     <p>The name of the table to be updated.</p>
    */
    inline UpdateTableRequest&  WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /*
     <p>The name of the table to be updated.</p>
    */
    inline UpdateTableRequest& WithTableName(const char* value) { SetTableName(value); return *this;}

    
    inline const ProvisionedThroughput& GetProvisionedThroughput() const{ return m_provisionedThroughput; }
    
    inline void SetProvisionedThroughput(const ProvisionedThroughput& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }

    
    inline UpdateTableRequest&  WithProvisionedThroughput(const ProvisionedThroughput& value) { SetProvisionedThroughput(value); return *this;}

    /*
     <p>An array of one or more global secondary indexes for the table. For each index in the array, you can request one action:</p> <ul> <li><p><i>Create</i> - add a new global secondary index to the table.</p></li> <li><p><i>Update</i> - modify the provisioned throughput settings of an existing global secondary index.</p></li> <li><p><i>Delete</i> - remove a global secondary index from the table.</p></li> </ul>
    */
    inline const Aws::Vector<GlobalSecondaryIndexUpdate>& GetGlobalSecondaryIndexUpdates() const{ return m_globalSecondaryIndexUpdates; }
    /*
     <p>An array of one or more global secondary indexes for the table. For each index in the array, you can request one action:</p> <ul> <li><p><i>Create</i> - add a new global secondary index to the table.</p></li> <li><p><i>Update</i> - modify the provisioned throughput settings of an existing global secondary index.</p></li> <li><p><i>Delete</i> - remove a global secondary index from the table.</p></li> </ul>
    */
    inline void SetGlobalSecondaryIndexUpdates(const Aws::Vector<GlobalSecondaryIndexUpdate>& value) { m_globalSecondaryIndexUpdatesHasBeenSet = true; m_globalSecondaryIndexUpdates = value; }

    /*
     <p>An array of one or more global secondary indexes for the table. For each index in the array, you can request one action:</p> <ul> <li><p><i>Create</i> - add a new global secondary index to the table.</p></li> <li><p><i>Update</i> - modify the provisioned throughput settings of an existing global secondary index.</p></li> <li><p><i>Delete</i> - remove a global secondary index from the table.</p></li> </ul>
    */
    inline UpdateTableRequest&  WithGlobalSecondaryIndexUpdates(const Aws::Vector<GlobalSecondaryIndexUpdate>& value) { SetGlobalSecondaryIndexUpdates(value); return *this;}

    /*
     <p>An array of one or more global secondary indexes for the table. For each index in the array, you can request one action:</p> <ul> <li><p><i>Create</i> - add a new global secondary index to the table.</p></li> <li><p><i>Update</i> - modify the provisioned throughput settings of an existing global secondary index.</p></li> <li><p><i>Delete</i> - remove a global secondary index from the table.</p></li> </ul>
    */
    inline UpdateTableRequest& AddGlobalSecondaryIndexUpdates(const GlobalSecondaryIndexUpdate& value) { m_globalSecondaryIndexUpdatesHasBeenSet = true; m_globalSecondaryIndexUpdates.push_back(value); return *this; }

  private:
    Aws::Vector<AttributeDefinition> m_attributeDefinitions;
    bool m_attributeDefinitionsHasBeenSet;
    Aws::String m_tableName;
    ProvisionedThroughput m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet;
    Aws::Vector<GlobalSecondaryIndexUpdate> m_globalSecondaryIndexUpdates;
    bool m_globalSecondaryIndexUpdatesHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
