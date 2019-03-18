/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/DateTime.h>
#include <aws/dynamodb/model/ProvisionedThroughput.h>
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
  class AWS_DYNAMODB_API SourceTableDetails
  {
  public:
    SourceTableDetails();
    SourceTableDetails(Aws::Utils::Json::JsonView jsonValue);
    SourceTableDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the table for which the backup was created. </p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table for which the backup was created. </p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table for which the backup was created. </p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table for which the backup was created. </p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table for which the backup was created. </p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table for which the backup was created. </p>
     */
    inline SourceTableDetails& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table for which the backup was created. </p>
     */
    inline SourceTableDetails& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table for which the backup was created. </p>
     */
    inline SourceTableDetails& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>Unique identifier for the table for which the backup was created. </p>
     */
    inline const Aws::String& GetTableId() const{ return m_tableId; }

    /**
     * <p>Unique identifier for the table for which the backup was created. </p>
     */
    inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }

    /**
     * <p>Unique identifier for the table for which the backup was created. </p>
     */
    inline void SetTableId(const Aws::String& value) { m_tableIdHasBeenSet = true; m_tableId = value; }

    /**
     * <p>Unique identifier for the table for which the backup was created. </p>
     */
    inline void SetTableId(Aws::String&& value) { m_tableIdHasBeenSet = true; m_tableId = std::move(value); }

    /**
     * <p>Unique identifier for the table for which the backup was created. </p>
     */
    inline void SetTableId(const char* value) { m_tableIdHasBeenSet = true; m_tableId.assign(value); }

    /**
     * <p>Unique identifier for the table for which the backup was created. </p>
     */
    inline SourceTableDetails& WithTableId(const Aws::String& value) { SetTableId(value); return *this;}

    /**
     * <p>Unique identifier for the table for which the backup was created. </p>
     */
    inline SourceTableDetails& WithTableId(Aws::String&& value) { SetTableId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the table for which the backup was created. </p>
     */
    inline SourceTableDetails& WithTableId(const char* value) { SetTableId(value); return *this;}


    /**
     * <p>ARN of the table for which backup was created. </p>
     */
    inline const Aws::String& GetTableArn() const{ return m_tableArn; }

    /**
     * <p>ARN of the table for which backup was created. </p>
     */
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }

    /**
     * <p>ARN of the table for which backup was created. </p>
     */
    inline void SetTableArn(const Aws::String& value) { m_tableArnHasBeenSet = true; m_tableArn = value; }

    /**
     * <p>ARN of the table for which backup was created. </p>
     */
    inline void SetTableArn(Aws::String&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::move(value); }

    /**
     * <p>ARN of the table for which backup was created. </p>
     */
    inline void SetTableArn(const char* value) { m_tableArnHasBeenSet = true; m_tableArn.assign(value); }

    /**
     * <p>ARN of the table for which backup was created. </p>
     */
    inline SourceTableDetails& WithTableArn(const Aws::String& value) { SetTableArn(value); return *this;}

    /**
     * <p>ARN of the table for which backup was created. </p>
     */
    inline SourceTableDetails& WithTableArn(Aws::String&& value) { SetTableArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the table for which backup was created. </p>
     */
    inline SourceTableDetails& WithTableArn(const char* value) { SetTableArn(value); return *this;}


    /**
     * <p>Size of the table in bytes. Please note this is an approximate value.</p>
     */
    inline long long GetTableSizeBytes() const{ return m_tableSizeBytes; }

    /**
     * <p>Size of the table in bytes. Please note this is an approximate value.</p>
     */
    inline bool TableSizeBytesHasBeenSet() const { return m_tableSizeBytesHasBeenSet; }

    /**
     * <p>Size of the table in bytes. Please note this is an approximate value.</p>
     */
    inline void SetTableSizeBytes(long long value) { m_tableSizeBytesHasBeenSet = true; m_tableSizeBytes = value; }

    /**
     * <p>Size of the table in bytes. Please note this is an approximate value.</p>
     */
    inline SourceTableDetails& WithTableSizeBytes(long long value) { SetTableSizeBytes(value); return *this;}


    /**
     * <p>Schema of the table. </p>
     */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const{ return m_keySchema; }

    /**
     * <p>Schema of the table. </p>
     */
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }

    /**
     * <p>Schema of the table. </p>
     */
    inline void SetKeySchema(const Aws::Vector<KeySchemaElement>& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }

    /**
     * <p>Schema of the table. </p>
     */
    inline void SetKeySchema(Aws::Vector<KeySchemaElement>&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::move(value); }

    /**
     * <p>Schema of the table. </p>
     */
    inline SourceTableDetails& WithKeySchema(const Aws::Vector<KeySchemaElement>& value) { SetKeySchema(value); return *this;}

    /**
     * <p>Schema of the table. </p>
     */
    inline SourceTableDetails& WithKeySchema(Aws::Vector<KeySchemaElement>&& value) { SetKeySchema(std::move(value)); return *this;}

    /**
     * <p>Schema of the table. </p>
     */
    inline SourceTableDetails& AddKeySchema(const KeySchemaElement& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }

    /**
     * <p>Schema of the table. </p>
     */
    inline SourceTableDetails& AddKeySchema(KeySchemaElement&& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(std::move(value)); return *this; }


    /**
     * <p>Time when the source table was created. </p>
     */
    inline const Aws::Utils::DateTime& GetTableCreationDateTime() const{ return m_tableCreationDateTime; }

    /**
     * <p>Time when the source table was created. </p>
     */
    inline bool TableCreationDateTimeHasBeenSet() const { return m_tableCreationDateTimeHasBeenSet; }

    /**
     * <p>Time when the source table was created. </p>
     */
    inline void SetTableCreationDateTime(const Aws::Utils::DateTime& value) { m_tableCreationDateTimeHasBeenSet = true; m_tableCreationDateTime = value; }

    /**
     * <p>Time when the source table was created. </p>
     */
    inline void SetTableCreationDateTime(Aws::Utils::DateTime&& value) { m_tableCreationDateTimeHasBeenSet = true; m_tableCreationDateTime = std::move(value); }

    /**
     * <p>Time when the source table was created. </p>
     */
    inline SourceTableDetails& WithTableCreationDateTime(const Aws::Utils::DateTime& value) { SetTableCreationDateTime(value); return *this;}

    /**
     * <p>Time when the source table was created. </p>
     */
    inline SourceTableDetails& WithTableCreationDateTime(Aws::Utils::DateTime&& value) { SetTableCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>Read IOPs and Write IOPS on the table when the backup was created.</p>
     */
    inline const ProvisionedThroughput& GetProvisionedThroughput() const{ return m_provisionedThroughput; }

    /**
     * <p>Read IOPs and Write IOPS on the table when the backup was created.</p>
     */
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }

    /**
     * <p>Read IOPs and Write IOPS on the table when the backup was created.</p>
     */
    inline void SetProvisionedThroughput(const ProvisionedThroughput& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }

    /**
     * <p>Read IOPs and Write IOPS on the table when the backup was created.</p>
     */
    inline void SetProvisionedThroughput(ProvisionedThroughput&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::move(value); }

    /**
     * <p>Read IOPs and Write IOPS on the table when the backup was created.</p>
     */
    inline SourceTableDetails& WithProvisionedThroughput(const ProvisionedThroughput& value) { SetProvisionedThroughput(value); return *this;}

    /**
     * <p>Read IOPs and Write IOPS on the table when the backup was created.</p>
     */
    inline SourceTableDetails& WithProvisionedThroughput(ProvisionedThroughput&& value) { SetProvisionedThroughput(std::move(value)); return *this;}


    /**
     * <p>Number of items in the table. Please note this is an approximate value. </p>
     */
    inline long long GetItemCount() const{ return m_itemCount; }

    /**
     * <p>Number of items in the table. Please note this is an approximate value. </p>
     */
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }

    /**
     * <p>Number of items in the table. Please note this is an approximate value. </p>
     */
    inline void SetItemCount(long long value) { m_itemCountHasBeenSet = true; m_itemCount = value; }

    /**
     * <p>Number of items in the table. Please note this is an approximate value. </p>
     */
    inline SourceTableDetails& WithItemCount(long long value) { SetItemCount(value); return *this;}


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

    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. This setting can be changed later.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - Sets the read/write capacity mode to
     * <code>PROVISIONED</code>. We recommend using <code>PROVISIONED</code> for
     * predictable workloads.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - Sets
     * the read/write capacity mode to <code>PAY_PER_REQUEST</code>. We recommend using
     * <code>PAY_PER_REQUEST</code> for unpredictable workloads. </p> </li> </ul>
     */
    inline bool BillingModeHasBeenSet() const { return m_billingModeHasBeenSet; }

    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. This setting can be changed later.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - Sets the read/write capacity mode to
     * <code>PROVISIONED</code>. We recommend using <code>PROVISIONED</code> for
     * predictable workloads.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - Sets
     * the read/write capacity mode to <code>PAY_PER_REQUEST</code>. We recommend using
     * <code>PAY_PER_REQUEST</code> for unpredictable workloads. </p> </li> </ul>
     */
    inline void SetBillingMode(const BillingMode& value) { m_billingModeHasBeenSet = true; m_billingMode = value; }

    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. This setting can be changed later.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - Sets the read/write capacity mode to
     * <code>PROVISIONED</code>. We recommend using <code>PROVISIONED</code> for
     * predictable workloads.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - Sets
     * the read/write capacity mode to <code>PAY_PER_REQUEST</code>. We recommend using
     * <code>PAY_PER_REQUEST</code> for unpredictable workloads. </p> </li> </ul>
     */
    inline void SetBillingMode(BillingMode&& value) { m_billingModeHasBeenSet = true; m_billingMode = std::move(value); }

    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. This setting can be changed later.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - Sets the read/write capacity mode to
     * <code>PROVISIONED</code>. We recommend using <code>PROVISIONED</code> for
     * predictable workloads.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - Sets
     * the read/write capacity mode to <code>PAY_PER_REQUEST</code>. We recommend using
     * <code>PAY_PER_REQUEST</code> for unpredictable workloads. </p> </li> </ul>
     */
    inline SourceTableDetails& WithBillingMode(const BillingMode& value) { SetBillingMode(value); return *this;}

    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. This setting can be changed later.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - Sets the read/write capacity mode to
     * <code>PROVISIONED</code>. We recommend using <code>PROVISIONED</code> for
     * predictable workloads.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - Sets
     * the read/write capacity mode to <code>PAY_PER_REQUEST</code>. We recommend using
     * <code>PAY_PER_REQUEST</code> for unpredictable workloads. </p> </li> </ul>
     */
    inline SourceTableDetails& WithBillingMode(BillingMode&& value) { SetBillingMode(std::move(value)); return *this;}

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    Aws::String m_tableId;
    bool m_tableIdHasBeenSet;

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet;

    long long m_tableSizeBytes;
    bool m_tableSizeBytesHasBeenSet;

    Aws::Vector<KeySchemaElement> m_keySchema;
    bool m_keySchemaHasBeenSet;

    Aws::Utils::DateTime m_tableCreationDateTime;
    bool m_tableCreationDateTimeHasBeenSet;

    ProvisionedThroughput m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet;

    long long m_itemCount;
    bool m_itemCountHasBeenSet;

    BillingMode m_billingMode;
    bool m_billingModeHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
