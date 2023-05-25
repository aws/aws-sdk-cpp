/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/BillingMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/ProvisionedThroughput.h>
#include <aws/dynamodb/model/SSESpecification.h>
#include <aws/dynamodb/model/GlobalSecondaryIndex.h>
#include <aws/dynamodb/model/LocalSecondaryIndex.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class RestoreTableFromBackupRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API RestoreTableFromBackupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreTableFromBackup"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the new table to which the backup must be restored.</p>
     */
    inline const Aws::String& GetTargetTableName() const{ return m_targetTableName; }

    /**
     * <p>The name of the new table to which the backup must be restored.</p>
     */
    inline bool TargetTableNameHasBeenSet() const { return m_targetTableNameHasBeenSet; }

    /**
     * <p>The name of the new table to which the backup must be restored.</p>
     */
    inline void SetTargetTableName(const Aws::String& value) { m_targetTableNameHasBeenSet = true; m_targetTableName = value; }

    /**
     * <p>The name of the new table to which the backup must be restored.</p>
     */
    inline void SetTargetTableName(Aws::String&& value) { m_targetTableNameHasBeenSet = true; m_targetTableName = std::move(value); }

    /**
     * <p>The name of the new table to which the backup must be restored.</p>
     */
    inline void SetTargetTableName(const char* value) { m_targetTableNameHasBeenSet = true; m_targetTableName.assign(value); }

    /**
     * <p>The name of the new table to which the backup must be restored.</p>
     */
    inline RestoreTableFromBackupRequest& WithTargetTableName(const Aws::String& value) { SetTargetTableName(value); return *this;}

    /**
     * <p>The name of the new table to which the backup must be restored.</p>
     */
    inline RestoreTableFromBackupRequest& WithTargetTableName(Aws::String&& value) { SetTargetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the new table to which the backup must be restored.</p>
     */
    inline RestoreTableFromBackupRequest& WithTargetTableName(const char* value) { SetTargetTableName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) associated with the backup.</p>
     */
    inline const Aws::String& GetBackupArn() const{ return m_backupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the backup.</p>
     */
    inline bool BackupArnHasBeenSet() const { return m_backupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the backup.</p>
     */
    inline void SetBackupArn(const Aws::String& value) { m_backupArnHasBeenSet = true; m_backupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the backup.</p>
     */
    inline void SetBackupArn(Aws::String&& value) { m_backupArnHasBeenSet = true; m_backupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the backup.</p>
     */
    inline void SetBackupArn(const char* value) { m_backupArnHasBeenSet = true; m_backupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the backup.</p>
     */
    inline RestoreTableFromBackupRequest& WithBackupArn(const Aws::String& value) { SetBackupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the backup.</p>
     */
    inline RestoreTableFromBackupRequest& WithBackupArn(Aws::String&& value) { SetBackupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the backup.</p>
     */
    inline RestoreTableFromBackupRequest& WithBackupArn(const char* value) { SetBackupArn(value); return *this;}


    /**
     * <p>The billing mode of the restored table.</p>
     */
    inline const BillingMode& GetBillingModeOverride() const{ return m_billingModeOverride; }

    /**
     * <p>The billing mode of the restored table.</p>
     */
    inline bool BillingModeOverrideHasBeenSet() const { return m_billingModeOverrideHasBeenSet; }

    /**
     * <p>The billing mode of the restored table.</p>
     */
    inline void SetBillingModeOverride(const BillingMode& value) { m_billingModeOverrideHasBeenSet = true; m_billingModeOverride = value; }

    /**
     * <p>The billing mode of the restored table.</p>
     */
    inline void SetBillingModeOverride(BillingMode&& value) { m_billingModeOverrideHasBeenSet = true; m_billingModeOverride = std::move(value); }

    /**
     * <p>The billing mode of the restored table.</p>
     */
    inline RestoreTableFromBackupRequest& WithBillingModeOverride(const BillingMode& value) { SetBillingModeOverride(value); return *this;}

    /**
     * <p>The billing mode of the restored table.</p>
     */
    inline RestoreTableFromBackupRequest& WithBillingModeOverride(BillingMode&& value) { SetBillingModeOverride(std::move(value)); return *this;}


    /**
     * <p>List of global secondary indexes for the restored table. The indexes provided
     * should match existing secondary indexes. You can choose to exclude some or all
     * of the indexes at the time of restore.</p>
     */
    inline const Aws::Vector<GlobalSecondaryIndex>& GetGlobalSecondaryIndexOverride() const{ return m_globalSecondaryIndexOverride; }

    /**
     * <p>List of global secondary indexes for the restored table. The indexes provided
     * should match existing secondary indexes. You can choose to exclude some or all
     * of the indexes at the time of restore.</p>
     */
    inline bool GlobalSecondaryIndexOverrideHasBeenSet() const { return m_globalSecondaryIndexOverrideHasBeenSet; }

    /**
     * <p>List of global secondary indexes for the restored table. The indexes provided
     * should match existing secondary indexes. You can choose to exclude some or all
     * of the indexes at the time of restore.</p>
     */
    inline void SetGlobalSecondaryIndexOverride(const Aws::Vector<GlobalSecondaryIndex>& value) { m_globalSecondaryIndexOverrideHasBeenSet = true; m_globalSecondaryIndexOverride = value; }

    /**
     * <p>List of global secondary indexes for the restored table. The indexes provided
     * should match existing secondary indexes. You can choose to exclude some or all
     * of the indexes at the time of restore.</p>
     */
    inline void SetGlobalSecondaryIndexOverride(Aws::Vector<GlobalSecondaryIndex>&& value) { m_globalSecondaryIndexOverrideHasBeenSet = true; m_globalSecondaryIndexOverride = std::move(value); }

    /**
     * <p>List of global secondary indexes for the restored table. The indexes provided
     * should match existing secondary indexes. You can choose to exclude some or all
     * of the indexes at the time of restore.</p>
     */
    inline RestoreTableFromBackupRequest& WithGlobalSecondaryIndexOverride(const Aws::Vector<GlobalSecondaryIndex>& value) { SetGlobalSecondaryIndexOverride(value); return *this;}

    /**
     * <p>List of global secondary indexes for the restored table. The indexes provided
     * should match existing secondary indexes. You can choose to exclude some or all
     * of the indexes at the time of restore.</p>
     */
    inline RestoreTableFromBackupRequest& WithGlobalSecondaryIndexOverride(Aws::Vector<GlobalSecondaryIndex>&& value) { SetGlobalSecondaryIndexOverride(std::move(value)); return *this;}

    /**
     * <p>List of global secondary indexes for the restored table. The indexes provided
     * should match existing secondary indexes. You can choose to exclude some or all
     * of the indexes at the time of restore.</p>
     */
    inline RestoreTableFromBackupRequest& AddGlobalSecondaryIndexOverride(const GlobalSecondaryIndex& value) { m_globalSecondaryIndexOverrideHasBeenSet = true; m_globalSecondaryIndexOverride.push_back(value); return *this; }

    /**
     * <p>List of global secondary indexes for the restored table. The indexes provided
     * should match existing secondary indexes. You can choose to exclude some or all
     * of the indexes at the time of restore.</p>
     */
    inline RestoreTableFromBackupRequest& AddGlobalSecondaryIndexOverride(GlobalSecondaryIndex&& value) { m_globalSecondaryIndexOverrideHasBeenSet = true; m_globalSecondaryIndexOverride.push_back(std::move(value)); return *this; }


    /**
     * <p>List of local secondary indexes for the restored table. The indexes provided
     * should match existing secondary indexes. You can choose to exclude some or all
     * of the indexes at the time of restore.</p>
     */
    inline const Aws::Vector<LocalSecondaryIndex>& GetLocalSecondaryIndexOverride() const{ return m_localSecondaryIndexOverride; }

    /**
     * <p>List of local secondary indexes for the restored table. The indexes provided
     * should match existing secondary indexes. You can choose to exclude some or all
     * of the indexes at the time of restore.</p>
     */
    inline bool LocalSecondaryIndexOverrideHasBeenSet() const { return m_localSecondaryIndexOverrideHasBeenSet; }

    /**
     * <p>List of local secondary indexes for the restored table. The indexes provided
     * should match existing secondary indexes. You can choose to exclude some or all
     * of the indexes at the time of restore.</p>
     */
    inline void SetLocalSecondaryIndexOverride(const Aws::Vector<LocalSecondaryIndex>& value) { m_localSecondaryIndexOverrideHasBeenSet = true; m_localSecondaryIndexOverride = value; }

    /**
     * <p>List of local secondary indexes for the restored table. The indexes provided
     * should match existing secondary indexes. You can choose to exclude some or all
     * of the indexes at the time of restore.</p>
     */
    inline void SetLocalSecondaryIndexOverride(Aws::Vector<LocalSecondaryIndex>&& value) { m_localSecondaryIndexOverrideHasBeenSet = true; m_localSecondaryIndexOverride = std::move(value); }

    /**
     * <p>List of local secondary indexes for the restored table. The indexes provided
     * should match existing secondary indexes. You can choose to exclude some or all
     * of the indexes at the time of restore.</p>
     */
    inline RestoreTableFromBackupRequest& WithLocalSecondaryIndexOverride(const Aws::Vector<LocalSecondaryIndex>& value) { SetLocalSecondaryIndexOverride(value); return *this;}

    /**
     * <p>List of local secondary indexes for the restored table. The indexes provided
     * should match existing secondary indexes. You can choose to exclude some or all
     * of the indexes at the time of restore.</p>
     */
    inline RestoreTableFromBackupRequest& WithLocalSecondaryIndexOverride(Aws::Vector<LocalSecondaryIndex>&& value) { SetLocalSecondaryIndexOverride(std::move(value)); return *this;}

    /**
     * <p>List of local secondary indexes for the restored table. The indexes provided
     * should match existing secondary indexes. You can choose to exclude some or all
     * of the indexes at the time of restore.</p>
     */
    inline RestoreTableFromBackupRequest& AddLocalSecondaryIndexOverride(const LocalSecondaryIndex& value) { m_localSecondaryIndexOverrideHasBeenSet = true; m_localSecondaryIndexOverride.push_back(value); return *this; }

    /**
     * <p>List of local secondary indexes for the restored table. The indexes provided
     * should match existing secondary indexes. You can choose to exclude some or all
     * of the indexes at the time of restore.</p>
     */
    inline RestoreTableFromBackupRequest& AddLocalSecondaryIndexOverride(LocalSecondaryIndex&& value) { m_localSecondaryIndexOverrideHasBeenSet = true; m_localSecondaryIndexOverride.push_back(std::move(value)); return *this; }


    /**
     * <p>Provisioned throughput settings for the restored table.</p>
     */
    inline const ProvisionedThroughput& GetProvisionedThroughputOverride() const{ return m_provisionedThroughputOverride; }

    /**
     * <p>Provisioned throughput settings for the restored table.</p>
     */
    inline bool ProvisionedThroughputOverrideHasBeenSet() const { return m_provisionedThroughputOverrideHasBeenSet; }

    /**
     * <p>Provisioned throughput settings for the restored table.</p>
     */
    inline void SetProvisionedThroughputOverride(const ProvisionedThroughput& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = value; }

    /**
     * <p>Provisioned throughput settings for the restored table.</p>
     */
    inline void SetProvisionedThroughputOverride(ProvisionedThroughput&& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = std::move(value); }

    /**
     * <p>Provisioned throughput settings for the restored table.</p>
     */
    inline RestoreTableFromBackupRequest& WithProvisionedThroughputOverride(const ProvisionedThroughput& value) { SetProvisionedThroughputOverride(value); return *this;}

    /**
     * <p>Provisioned throughput settings for the restored table.</p>
     */
    inline RestoreTableFromBackupRequest& WithProvisionedThroughputOverride(ProvisionedThroughput&& value) { SetProvisionedThroughputOverride(std::move(value)); return *this;}


    /**
     * <p>The new server-side encryption settings for the restored table.</p>
     */
    inline const SSESpecification& GetSSESpecificationOverride() const{ return m_sSESpecificationOverride; }

    /**
     * <p>The new server-side encryption settings for the restored table.</p>
     */
    inline bool SSESpecificationOverrideHasBeenSet() const { return m_sSESpecificationOverrideHasBeenSet; }

    /**
     * <p>The new server-side encryption settings for the restored table.</p>
     */
    inline void SetSSESpecificationOverride(const SSESpecification& value) { m_sSESpecificationOverrideHasBeenSet = true; m_sSESpecificationOverride = value; }

    /**
     * <p>The new server-side encryption settings for the restored table.</p>
     */
    inline void SetSSESpecificationOverride(SSESpecification&& value) { m_sSESpecificationOverrideHasBeenSet = true; m_sSESpecificationOverride = std::move(value); }

    /**
     * <p>The new server-side encryption settings for the restored table.</p>
     */
    inline RestoreTableFromBackupRequest& WithSSESpecificationOverride(const SSESpecification& value) { SetSSESpecificationOverride(value); return *this;}

    /**
     * <p>The new server-side encryption settings for the restored table.</p>
     */
    inline RestoreTableFromBackupRequest& WithSSESpecificationOverride(SSESpecification&& value) { SetSSESpecificationOverride(std::move(value)); return *this;}

  private:

    Aws::String m_targetTableName;
    bool m_targetTableNameHasBeenSet = false;

    Aws::String m_backupArn;
    bool m_backupArnHasBeenSet = false;

    BillingMode m_billingModeOverride;
    bool m_billingModeOverrideHasBeenSet = false;

    Aws::Vector<GlobalSecondaryIndex> m_globalSecondaryIndexOverride;
    bool m_globalSecondaryIndexOverrideHasBeenSet = false;

    Aws::Vector<LocalSecondaryIndex> m_localSecondaryIndexOverride;
    bool m_localSecondaryIndexOverrideHasBeenSet = false;

    ProvisionedThroughput m_provisionedThroughputOverride;
    bool m_provisionedThroughputOverrideHasBeenSet = false;

    SSESpecification m_sSESpecificationOverride;
    bool m_sSESpecificationOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
