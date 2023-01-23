/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/BillingMode.h>
#include <aws/dynamodb/model/ProvisionedThroughput.h>
#include <aws/dynamodb/model/SSESpecification.h>
#include <aws/dynamodb/model/AttributeDefinition.h>
#include <aws/dynamodb/model/KeySchemaElement.h>
#include <aws/dynamodb/model/GlobalSecondaryIndex.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p> The parameters for the table created as part of the import operation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/TableCreationParameters">AWS
   * API Reference</a></p>
   */
  class TableCreationParameters
  {
  public:
    AWS_DYNAMODB_API TableCreationParameters();
    AWS_DYNAMODB_API TableCreationParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API TableCreationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the table created as part of the import operation. </p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p> The name of the table created as part of the import operation. </p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p> The name of the table created as part of the import operation. </p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p> The name of the table created as part of the import operation. </p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p> The name of the table created as part of the import operation. </p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p> The name of the table created as part of the import operation. </p>
     */
    inline TableCreationParameters& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p> The name of the table created as part of the import operation. </p>
     */
    inline TableCreationParameters& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p> The name of the table created as part of the import operation. </p>
     */
    inline TableCreationParameters& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p> The attributes of the table created as part of the import operation. </p>
     */
    inline const Aws::Vector<AttributeDefinition>& GetAttributeDefinitions() const{ return m_attributeDefinitions; }

    /**
     * <p> The attributes of the table created as part of the import operation. </p>
     */
    inline bool AttributeDefinitionsHasBeenSet() const { return m_attributeDefinitionsHasBeenSet; }

    /**
     * <p> The attributes of the table created as part of the import operation. </p>
     */
    inline void SetAttributeDefinitions(const Aws::Vector<AttributeDefinition>& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions = value; }

    /**
     * <p> The attributes of the table created as part of the import operation. </p>
     */
    inline void SetAttributeDefinitions(Aws::Vector<AttributeDefinition>&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions = std::move(value); }

    /**
     * <p> The attributes of the table created as part of the import operation. </p>
     */
    inline TableCreationParameters& WithAttributeDefinitions(const Aws::Vector<AttributeDefinition>& value) { SetAttributeDefinitions(value); return *this;}

    /**
     * <p> The attributes of the table created as part of the import operation. </p>
     */
    inline TableCreationParameters& WithAttributeDefinitions(Aws::Vector<AttributeDefinition>&& value) { SetAttributeDefinitions(std::move(value)); return *this;}

    /**
     * <p> The attributes of the table created as part of the import operation. </p>
     */
    inline TableCreationParameters& AddAttributeDefinitions(const AttributeDefinition& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions.push_back(value); return *this; }

    /**
     * <p> The attributes of the table created as part of the import operation. </p>
     */
    inline TableCreationParameters& AddAttributeDefinitions(AttributeDefinition&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p> The primary key and option sort key of the table created as part of the
     * import operation. </p>
     */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const{ return m_keySchema; }

    /**
     * <p> The primary key and option sort key of the table created as part of the
     * import operation. </p>
     */
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }

    /**
     * <p> The primary key and option sort key of the table created as part of the
     * import operation. </p>
     */
    inline void SetKeySchema(const Aws::Vector<KeySchemaElement>& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }

    /**
     * <p> The primary key and option sort key of the table created as part of the
     * import operation. </p>
     */
    inline void SetKeySchema(Aws::Vector<KeySchemaElement>&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::move(value); }

    /**
     * <p> The primary key and option sort key of the table created as part of the
     * import operation. </p>
     */
    inline TableCreationParameters& WithKeySchema(const Aws::Vector<KeySchemaElement>& value) { SetKeySchema(value); return *this;}

    /**
     * <p> The primary key and option sort key of the table created as part of the
     * import operation. </p>
     */
    inline TableCreationParameters& WithKeySchema(Aws::Vector<KeySchemaElement>&& value) { SetKeySchema(std::move(value)); return *this;}

    /**
     * <p> The primary key and option sort key of the table created as part of the
     * import operation. </p>
     */
    inline TableCreationParameters& AddKeySchema(const KeySchemaElement& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }

    /**
     * <p> The primary key and option sort key of the table created as part of the
     * import operation. </p>
     */
    inline TableCreationParameters& AddKeySchema(KeySchemaElement&& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(std::move(value)); return *this; }


    /**
     * <p> The billing mode for provisioning the table created as part of the import
     * operation. </p>
     */
    inline const BillingMode& GetBillingMode() const{ return m_billingMode; }

    /**
     * <p> The billing mode for provisioning the table created as part of the import
     * operation. </p>
     */
    inline bool BillingModeHasBeenSet() const { return m_billingModeHasBeenSet; }

    /**
     * <p> The billing mode for provisioning the table created as part of the import
     * operation. </p>
     */
    inline void SetBillingMode(const BillingMode& value) { m_billingModeHasBeenSet = true; m_billingMode = value; }

    /**
     * <p> The billing mode for provisioning the table created as part of the import
     * operation. </p>
     */
    inline void SetBillingMode(BillingMode&& value) { m_billingModeHasBeenSet = true; m_billingMode = std::move(value); }

    /**
     * <p> The billing mode for provisioning the table created as part of the import
     * operation. </p>
     */
    inline TableCreationParameters& WithBillingMode(const BillingMode& value) { SetBillingMode(value); return *this;}

    /**
     * <p> The billing mode for provisioning the table created as part of the import
     * operation. </p>
     */
    inline TableCreationParameters& WithBillingMode(BillingMode&& value) { SetBillingMode(std::move(value)); return *this;}


    
    inline const ProvisionedThroughput& GetProvisionedThroughput() const{ return m_provisionedThroughput; }

    
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }

    
    inline void SetProvisionedThroughput(const ProvisionedThroughput& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }

    
    inline void SetProvisionedThroughput(ProvisionedThroughput&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::move(value); }

    
    inline TableCreationParameters& WithProvisionedThroughput(const ProvisionedThroughput& value) { SetProvisionedThroughput(value); return *this;}

    
    inline TableCreationParameters& WithProvisionedThroughput(ProvisionedThroughput&& value) { SetProvisionedThroughput(std::move(value)); return *this;}


    
    inline const SSESpecification& GetSSESpecification() const{ return m_sSESpecification; }

    
    inline bool SSESpecificationHasBeenSet() const { return m_sSESpecificationHasBeenSet; }

    
    inline void SetSSESpecification(const SSESpecification& value) { m_sSESpecificationHasBeenSet = true; m_sSESpecification = value; }

    
    inline void SetSSESpecification(SSESpecification&& value) { m_sSESpecificationHasBeenSet = true; m_sSESpecification = std::move(value); }

    
    inline TableCreationParameters& WithSSESpecification(const SSESpecification& value) { SetSSESpecification(value); return *this;}

    
    inline TableCreationParameters& WithSSESpecification(SSESpecification&& value) { SetSSESpecification(std::move(value)); return *this;}


    /**
     * <p> The Global Secondary Indexes (GSI) of the table to be created as part of the
     * import operation. </p>
     */
    inline const Aws::Vector<GlobalSecondaryIndex>& GetGlobalSecondaryIndexes() const{ return m_globalSecondaryIndexes; }

    /**
     * <p> The Global Secondary Indexes (GSI) of the table to be created as part of the
     * import operation. </p>
     */
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }

    /**
     * <p> The Global Secondary Indexes (GSI) of the table to be created as part of the
     * import operation. </p>
     */
    inline void SetGlobalSecondaryIndexes(const Aws::Vector<GlobalSecondaryIndex>& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = value; }

    /**
     * <p> The Global Secondary Indexes (GSI) of the table to be created as part of the
     * import operation. </p>
     */
    inline void SetGlobalSecondaryIndexes(Aws::Vector<GlobalSecondaryIndex>&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::move(value); }

    /**
     * <p> The Global Secondary Indexes (GSI) of the table to be created as part of the
     * import operation. </p>
     */
    inline TableCreationParameters& WithGlobalSecondaryIndexes(const Aws::Vector<GlobalSecondaryIndex>& value) { SetGlobalSecondaryIndexes(value); return *this;}

    /**
     * <p> The Global Secondary Indexes (GSI) of the table to be created as part of the
     * import operation. </p>
     */
    inline TableCreationParameters& WithGlobalSecondaryIndexes(Aws::Vector<GlobalSecondaryIndex>&& value) { SetGlobalSecondaryIndexes(std::move(value)); return *this;}

    /**
     * <p> The Global Secondary Indexes (GSI) of the table to be created as part of the
     * import operation. </p>
     */
    inline TableCreationParameters& AddGlobalSecondaryIndexes(const GlobalSecondaryIndex& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(value); return *this; }

    /**
     * <p> The Global Secondary Indexes (GSI) of the table to be created as part of the
     * import operation. </p>
     */
    inline TableCreationParameters& AddGlobalSecondaryIndexes(GlobalSecondaryIndex&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<AttributeDefinition> m_attributeDefinitions;
    bool m_attributeDefinitionsHasBeenSet = false;

    Aws::Vector<KeySchemaElement> m_keySchema;
    bool m_keySchemaHasBeenSet = false;

    BillingMode m_billingMode;
    bool m_billingModeHasBeenSet = false;

    ProvisionedThroughput m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet = false;

    SSESpecification m_sSESpecification;
    bool m_sSESpecificationHasBeenSet = false;

    Aws::Vector<GlobalSecondaryIndex> m_globalSecondaryIndexes;
    bool m_globalSecondaryIndexesHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
