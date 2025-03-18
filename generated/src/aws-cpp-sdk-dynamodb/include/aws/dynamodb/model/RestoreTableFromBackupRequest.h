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
#include <aws/dynamodb/model/OnDemandThroughput.h>
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
    AWS_DYNAMODB_API RestoreTableFromBackupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreTableFromBackup"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The name of the new table to which the backup must be restored.</p>
     */
    inline const Aws::String& GetTargetTableName() const { return m_targetTableName; }
    inline bool TargetTableNameHasBeenSet() const { return m_targetTableNameHasBeenSet; }
    template<typename TargetTableNameT = Aws::String>
    void SetTargetTableName(TargetTableNameT&& value) { m_targetTableNameHasBeenSet = true; m_targetTableName = std::forward<TargetTableNameT>(value); }
    template<typename TargetTableNameT = Aws::String>
    RestoreTableFromBackupRequest& WithTargetTableName(TargetTableNameT&& value) { SetTargetTableName(std::forward<TargetTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the backup.</p>
     */
    inline const Aws::String& GetBackupArn() const { return m_backupArn; }
    inline bool BackupArnHasBeenSet() const { return m_backupArnHasBeenSet; }
    template<typename BackupArnT = Aws::String>
    void SetBackupArn(BackupArnT&& value) { m_backupArnHasBeenSet = true; m_backupArn = std::forward<BackupArnT>(value); }
    template<typename BackupArnT = Aws::String>
    RestoreTableFromBackupRequest& WithBackupArn(BackupArnT&& value) { SetBackupArn(std::forward<BackupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billing mode of the restored table.</p>
     */
    inline BillingMode GetBillingModeOverride() const { return m_billingModeOverride; }
    inline bool BillingModeOverrideHasBeenSet() const { return m_billingModeOverrideHasBeenSet; }
    inline void SetBillingModeOverride(BillingMode value) { m_billingModeOverrideHasBeenSet = true; m_billingModeOverride = value; }
    inline RestoreTableFromBackupRequest& WithBillingModeOverride(BillingMode value) { SetBillingModeOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of global secondary indexes for the restored table. The indexes provided
     * should match existing secondary indexes. You can choose to exclude some or all
     * of the indexes at the time of restore.</p>
     */
    inline const Aws::Vector<GlobalSecondaryIndex>& GetGlobalSecondaryIndexOverride() const { return m_globalSecondaryIndexOverride; }
    inline bool GlobalSecondaryIndexOverrideHasBeenSet() const { return m_globalSecondaryIndexOverrideHasBeenSet; }
    template<typename GlobalSecondaryIndexOverrideT = Aws::Vector<GlobalSecondaryIndex>>
    void SetGlobalSecondaryIndexOverride(GlobalSecondaryIndexOverrideT&& value) { m_globalSecondaryIndexOverrideHasBeenSet = true; m_globalSecondaryIndexOverride = std::forward<GlobalSecondaryIndexOverrideT>(value); }
    template<typename GlobalSecondaryIndexOverrideT = Aws::Vector<GlobalSecondaryIndex>>
    RestoreTableFromBackupRequest& WithGlobalSecondaryIndexOverride(GlobalSecondaryIndexOverrideT&& value) { SetGlobalSecondaryIndexOverride(std::forward<GlobalSecondaryIndexOverrideT>(value)); return *this;}
    template<typename GlobalSecondaryIndexOverrideT = GlobalSecondaryIndex>
    RestoreTableFromBackupRequest& AddGlobalSecondaryIndexOverride(GlobalSecondaryIndexOverrideT&& value) { m_globalSecondaryIndexOverrideHasBeenSet = true; m_globalSecondaryIndexOverride.emplace_back(std::forward<GlobalSecondaryIndexOverrideT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of local secondary indexes for the restored table. The indexes provided
     * should match existing secondary indexes. You can choose to exclude some or all
     * of the indexes at the time of restore.</p>
     */
    inline const Aws::Vector<LocalSecondaryIndex>& GetLocalSecondaryIndexOverride() const { return m_localSecondaryIndexOverride; }
    inline bool LocalSecondaryIndexOverrideHasBeenSet() const { return m_localSecondaryIndexOverrideHasBeenSet; }
    template<typename LocalSecondaryIndexOverrideT = Aws::Vector<LocalSecondaryIndex>>
    void SetLocalSecondaryIndexOverride(LocalSecondaryIndexOverrideT&& value) { m_localSecondaryIndexOverrideHasBeenSet = true; m_localSecondaryIndexOverride = std::forward<LocalSecondaryIndexOverrideT>(value); }
    template<typename LocalSecondaryIndexOverrideT = Aws::Vector<LocalSecondaryIndex>>
    RestoreTableFromBackupRequest& WithLocalSecondaryIndexOverride(LocalSecondaryIndexOverrideT&& value) { SetLocalSecondaryIndexOverride(std::forward<LocalSecondaryIndexOverrideT>(value)); return *this;}
    template<typename LocalSecondaryIndexOverrideT = LocalSecondaryIndex>
    RestoreTableFromBackupRequest& AddLocalSecondaryIndexOverride(LocalSecondaryIndexOverrideT&& value) { m_localSecondaryIndexOverrideHasBeenSet = true; m_localSecondaryIndexOverride.emplace_back(std::forward<LocalSecondaryIndexOverrideT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provisioned throughput settings for the restored table.</p>
     */
    inline const ProvisionedThroughput& GetProvisionedThroughputOverride() const { return m_provisionedThroughputOverride; }
    inline bool ProvisionedThroughputOverrideHasBeenSet() const { return m_provisionedThroughputOverrideHasBeenSet; }
    template<typename ProvisionedThroughputOverrideT = ProvisionedThroughput>
    void SetProvisionedThroughputOverride(ProvisionedThroughputOverrideT&& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = std::forward<ProvisionedThroughputOverrideT>(value); }
    template<typename ProvisionedThroughputOverrideT = ProvisionedThroughput>
    RestoreTableFromBackupRequest& WithProvisionedThroughputOverride(ProvisionedThroughputOverrideT&& value) { SetProvisionedThroughputOverride(std::forward<ProvisionedThroughputOverrideT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OnDemandThroughput& GetOnDemandThroughputOverride() const { return m_onDemandThroughputOverride; }
    inline bool OnDemandThroughputOverrideHasBeenSet() const { return m_onDemandThroughputOverrideHasBeenSet; }
    template<typename OnDemandThroughputOverrideT = OnDemandThroughput>
    void SetOnDemandThroughputOverride(OnDemandThroughputOverrideT&& value) { m_onDemandThroughputOverrideHasBeenSet = true; m_onDemandThroughputOverride = std::forward<OnDemandThroughputOverrideT>(value); }
    template<typename OnDemandThroughputOverrideT = OnDemandThroughput>
    RestoreTableFromBackupRequest& WithOnDemandThroughputOverride(OnDemandThroughputOverrideT&& value) { SetOnDemandThroughputOverride(std::forward<OnDemandThroughputOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new server-side encryption settings for the restored table.</p>
     */
    inline const SSESpecification& GetSSESpecificationOverride() const { return m_sSESpecificationOverride; }
    inline bool SSESpecificationOverrideHasBeenSet() const { return m_sSESpecificationOverrideHasBeenSet; }
    template<typename SSESpecificationOverrideT = SSESpecification>
    void SetSSESpecificationOverride(SSESpecificationOverrideT&& value) { m_sSESpecificationOverrideHasBeenSet = true; m_sSESpecificationOverride = std::forward<SSESpecificationOverrideT>(value); }
    template<typename SSESpecificationOverrideT = SSESpecification>
    RestoreTableFromBackupRequest& WithSSESpecificationOverride(SSESpecificationOverrideT&& value) { SetSSESpecificationOverride(std::forward<SSESpecificationOverrideT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetTableName;
    bool m_targetTableNameHasBeenSet = false;

    Aws::String m_backupArn;
    bool m_backupArnHasBeenSet = false;

    BillingMode m_billingModeOverride{BillingMode::NOT_SET};
    bool m_billingModeOverrideHasBeenSet = false;

    Aws::Vector<GlobalSecondaryIndex> m_globalSecondaryIndexOverride;
    bool m_globalSecondaryIndexOverrideHasBeenSet = false;

    Aws::Vector<LocalSecondaryIndex> m_localSecondaryIndexOverride;
    bool m_localSecondaryIndexOverrideHasBeenSet = false;

    ProvisionedThroughput m_provisionedThroughputOverride;
    bool m_provisionedThroughputOverrideHasBeenSet = false;

    OnDemandThroughput m_onDemandThroughputOverride;
    bool m_onDemandThroughputOverrideHasBeenSet = false;

    SSESpecification m_sSESpecificationOverride;
    bool m_sSESpecificationOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
