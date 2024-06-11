﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dynamodb/model/ProvisionedThroughput.h>
#include <aws/dynamodb/model/OnDemandThroughput.h>
#include <aws/dynamodb/model/BillingMode.h>
#include <aws/dynamodb/model/KeySchemaElement.h>
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
   * <p>Contains the details of the table when the backup was created. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/SourceTableDetails">AWS
   * API Reference</a></p>
   */
  class SourceTableDetails
  {
  public:
    AWS_DYNAMODB_API SourceTableDetails();
    AWS_DYNAMODB_API SourceTableDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API SourceTableDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the table for which the backup was created. </p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline SourceTableDetails& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline SourceTableDetails& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline SourceTableDetails& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the table for which the backup was created. </p>
     */
    inline const Aws::String& GetTableId() const{ return m_tableId; }
    inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }
    inline void SetTableId(const Aws::String& value) { m_tableIdHasBeenSet = true; m_tableId = value; }
    inline void SetTableId(Aws::String&& value) { m_tableIdHasBeenSet = true; m_tableId = std::move(value); }
    inline void SetTableId(const char* value) { m_tableIdHasBeenSet = true; m_tableId.assign(value); }
    inline SourceTableDetails& WithTableId(const Aws::String& value) { SetTableId(value); return *this;}
    inline SourceTableDetails& WithTableId(Aws::String&& value) { SetTableId(std::move(value)); return *this;}
    inline SourceTableDetails& WithTableId(const char* value) { SetTableId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the table for which backup was created. </p>
     */
    inline const Aws::String& GetTableArn() const{ return m_tableArn; }
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
    inline void SetTableArn(const Aws::String& value) { m_tableArnHasBeenSet = true; m_tableArn = value; }
    inline void SetTableArn(Aws::String&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::move(value); }
    inline void SetTableArn(const char* value) { m_tableArnHasBeenSet = true; m_tableArn.assign(value); }
    inline SourceTableDetails& WithTableArn(const Aws::String& value) { SetTableArn(value); return *this;}
    inline SourceTableDetails& WithTableArn(Aws::String&& value) { SetTableArn(std::move(value)); return *this;}
    inline SourceTableDetails& WithTableArn(const char* value) { SetTableArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Size of the table in bytes. Note that this is an approximate value.</p>
     */
    inline long long GetTableSizeBytes() const{ return m_tableSizeBytes; }
    inline bool TableSizeBytesHasBeenSet() const { return m_tableSizeBytesHasBeenSet; }
    inline void SetTableSizeBytes(long long value) { m_tableSizeBytesHasBeenSet = true; m_tableSizeBytes = value; }
    inline SourceTableDetails& WithTableSizeBytes(long long value) { SetTableSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Schema of the table. </p>
     */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const{ return m_keySchema; }
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }
    inline void SetKeySchema(const Aws::Vector<KeySchemaElement>& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }
    inline void SetKeySchema(Aws::Vector<KeySchemaElement>&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::move(value); }
    inline SourceTableDetails& WithKeySchema(const Aws::Vector<KeySchemaElement>& value) { SetKeySchema(value); return *this;}
    inline SourceTableDetails& WithKeySchema(Aws::Vector<KeySchemaElement>&& value) { SetKeySchema(std::move(value)); return *this;}
    inline SourceTableDetails& AddKeySchema(const KeySchemaElement& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }
    inline SourceTableDetails& AddKeySchema(KeySchemaElement&& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Time when the source table was created. </p>
     */
    inline const Aws::Utils::DateTime& GetTableCreationDateTime() const{ return m_tableCreationDateTime; }
    inline bool TableCreationDateTimeHasBeenSet() const { return m_tableCreationDateTimeHasBeenSet; }
    inline void SetTableCreationDateTime(const Aws::Utils::DateTime& value) { m_tableCreationDateTimeHasBeenSet = true; m_tableCreationDateTime = value; }
    inline void SetTableCreationDateTime(Aws::Utils::DateTime&& value) { m_tableCreationDateTimeHasBeenSet = true; m_tableCreationDateTime = std::move(value); }
    inline SourceTableDetails& WithTableCreationDateTime(const Aws::Utils::DateTime& value) { SetTableCreationDateTime(value); return *this;}
    inline SourceTableDetails& WithTableCreationDateTime(Aws::Utils::DateTime&& value) { SetTableCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Read IOPs and Write IOPS on the table when the backup was created.</p>
     */
    inline const ProvisionedThroughput& GetProvisionedThroughput() const{ return m_provisionedThroughput; }
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }
    inline void SetProvisionedThroughput(const ProvisionedThroughput& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }
    inline void SetProvisionedThroughput(ProvisionedThroughput&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::move(value); }
    inline SourceTableDetails& WithProvisionedThroughput(const ProvisionedThroughput& value) { SetProvisionedThroughput(value); return *this;}
    inline SourceTableDetails& WithProvisionedThroughput(ProvisionedThroughput&& value) { SetProvisionedThroughput(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const OnDemandThroughput& GetOnDemandThroughput() const{ return m_onDemandThroughput; }
    inline bool OnDemandThroughputHasBeenSet() const { return m_onDemandThroughputHasBeenSet; }
    inline void SetOnDemandThroughput(const OnDemandThroughput& value) { m_onDemandThroughputHasBeenSet = true; m_onDemandThroughput = value; }
    inline void SetOnDemandThroughput(OnDemandThroughput&& value) { m_onDemandThroughputHasBeenSet = true; m_onDemandThroughput = std::move(value); }
    inline SourceTableDetails& WithOnDemandThroughput(const OnDemandThroughput& value) { SetOnDemandThroughput(value); return *this;}
    inline SourceTableDetails& WithOnDemandThroughput(OnDemandThroughput&& value) { SetOnDemandThroughput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of items in the table. Note that this is an approximate value. </p>
     */
    inline long long GetItemCount() const{ return m_itemCount; }
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }
    inline void SetItemCount(long long value) { m_itemCountHasBeenSet = true; m_itemCount = value; }
    inline SourceTableDetails& WithItemCount(long long value) { SetItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. This setting can be changed later.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - Sets the read/write capacity mode to
     * <code>PROVISIONED</code>. We recommend using <code>PROVISIONED</code> for
     * predictable workloads.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - Sets
     * the read/write capacity mode to <code>PAY_PER_REQUEST</code>. We recommend using
     * <code>PAY_PER_REQUEST</code> for unpredictable workloads. </p> </li> </ul>
     */
    inline const BillingMode& GetBillingMode() const{ return m_billingMode; }
    inline bool BillingModeHasBeenSet() const { return m_billingModeHasBeenSet; }
    inline void SetBillingMode(const BillingMode& value) { m_billingModeHasBeenSet = true; m_billingMode = value; }
    inline void SetBillingMode(BillingMode&& value) { m_billingModeHasBeenSet = true; m_billingMode = std::move(value); }
    inline SourceTableDetails& WithBillingMode(const BillingMode& value) { SetBillingMode(value); return *this;}
    inline SourceTableDetails& WithBillingMode(BillingMode&& value) { SetBillingMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_tableId;
    bool m_tableIdHasBeenSet = false;

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;

    long long m_tableSizeBytes;
    bool m_tableSizeBytesHasBeenSet = false;

    Aws::Vector<KeySchemaElement> m_keySchema;
    bool m_keySchemaHasBeenSet = false;

    Aws::Utils::DateTime m_tableCreationDateTime;
    bool m_tableCreationDateTimeHasBeenSet = false;

    ProvisionedThroughput m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet = false;

    OnDemandThroughput m_onDemandThroughput;
    bool m_onDemandThroughputHasBeenSet = false;

    long long m_itemCount;
    bool m_itemCountHasBeenSet = false;

    BillingMode m_billingMode;
    bool m_billingModeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
