/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class RestoreTableToPointInTimeRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API RestoreTableToPointInTimeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreTableToPointInTime"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The DynamoDB table that will be restored. This value is an Amazon Resource
     * Name (ARN).</p>
     */
    inline const Aws::String& GetSourceTableArn() const { return m_sourceTableArn; }
    inline bool SourceTableArnHasBeenSet() const { return m_sourceTableArnHasBeenSet; }
    template<typename SourceTableArnT = Aws::String>
    void SetSourceTableArn(SourceTableArnT&& value) { m_sourceTableArnHasBeenSet = true; m_sourceTableArn = std::forward<SourceTableArnT>(value); }
    template<typename SourceTableArnT = Aws::String>
    RestoreTableToPointInTimeRequest& WithSourceTableArn(SourceTableArnT&& value) { SetSourceTableArn(std::forward<SourceTableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the source table that is being restored.</p>
     */
    inline const Aws::String& GetSourceTableName() const { return m_sourceTableName; }
    inline bool SourceTableNameHasBeenSet() const { return m_sourceTableNameHasBeenSet; }
    template<typename SourceTableNameT = Aws::String>
    void SetSourceTableName(SourceTableNameT&& value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName = std::forward<SourceTableNameT>(value); }
    template<typename SourceTableNameT = Aws::String>
    RestoreTableToPointInTimeRequest& WithSourceTableName(SourceTableNameT&& value) { SetSourceTableName(std::forward<SourceTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new table to which it must be restored to.</p>
     */
    inline const Aws::String& GetTargetTableName() const { return m_targetTableName; }
    inline bool TargetTableNameHasBeenSet() const { return m_targetTableNameHasBeenSet; }
    template<typename TargetTableNameT = Aws::String>
    void SetTargetTableName(TargetTableNameT&& value) { m_targetTableNameHasBeenSet = true; m_targetTableName = std::forward<TargetTableNameT>(value); }
    template<typename TargetTableNameT = Aws::String>
    RestoreTableToPointInTimeRequest& WithTargetTableName(TargetTableNameT&& value) { SetTargetTableName(std::forward<TargetTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Restore the table to the latest possible time.
     * <code>LatestRestorableDateTime</code> is typically 5 minutes before the current
     * time. </p>
     */
    inline bool GetUseLatestRestorableTime() const { return m_useLatestRestorableTime; }
    inline bool UseLatestRestorableTimeHasBeenSet() const { return m_useLatestRestorableTimeHasBeenSet; }
    inline void SetUseLatestRestorableTime(bool value) { m_useLatestRestorableTimeHasBeenSet = true; m_useLatestRestorableTime = value; }
    inline RestoreTableToPointInTimeRequest& WithUseLatestRestorableTime(bool value) { SetUseLatestRestorableTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time in the past to restore the table to.</p>
     */
    inline const Aws::Utils::DateTime& GetRestoreDateTime() const { return m_restoreDateTime; }
    inline bool RestoreDateTimeHasBeenSet() const { return m_restoreDateTimeHasBeenSet; }
    template<typename RestoreDateTimeT = Aws::Utils::DateTime>
    void SetRestoreDateTime(RestoreDateTimeT&& value) { m_restoreDateTimeHasBeenSet = true; m_restoreDateTime = std::forward<RestoreDateTimeT>(value); }
    template<typename RestoreDateTimeT = Aws::Utils::DateTime>
    RestoreTableToPointInTimeRequest& WithRestoreDateTime(RestoreDateTimeT&& value) { SetRestoreDateTime(std::forward<RestoreDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billing mode of the restored table.</p>
     */
    inline BillingMode GetBillingModeOverride() const { return m_billingModeOverride; }
    inline bool BillingModeOverrideHasBeenSet() const { return m_billingModeOverrideHasBeenSet; }
    inline void SetBillingModeOverride(BillingMode value) { m_billingModeOverrideHasBeenSet = true; m_billingModeOverride = value; }
    inline RestoreTableToPointInTimeRequest& WithBillingModeOverride(BillingMode value) { SetBillingModeOverride(value); return *this;}
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
    RestoreTableToPointInTimeRequest& WithGlobalSecondaryIndexOverride(GlobalSecondaryIndexOverrideT&& value) { SetGlobalSecondaryIndexOverride(std::forward<GlobalSecondaryIndexOverrideT>(value)); return *this;}
    template<typename GlobalSecondaryIndexOverrideT = GlobalSecondaryIndex>
    RestoreTableToPointInTimeRequest& AddGlobalSecondaryIndexOverride(GlobalSecondaryIndexOverrideT&& value) { m_globalSecondaryIndexOverrideHasBeenSet = true; m_globalSecondaryIndexOverride.emplace_back(std::forward<GlobalSecondaryIndexOverrideT>(value)); return *this; }
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
    RestoreTableToPointInTimeRequest& WithLocalSecondaryIndexOverride(LocalSecondaryIndexOverrideT&& value) { SetLocalSecondaryIndexOverride(std::forward<LocalSecondaryIndexOverrideT>(value)); return *this;}
    template<typename LocalSecondaryIndexOverrideT = LocalSecondaryIndex>
    RestoreTableToPointInTimeRequest& AddLocalSecondaryIndexOverride(LocalSecondaryIndexOverrideT&& value) { m_localSecondaryIndexOverrideHasBeenSet = true; m_localSecondaryIndexOverride.emplace_back(std::forward<LocalSecondaryIndexOverrideT>(value)); return *this; }
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
    RestoreTableToPointInTimeRequest& WithProvisionedThroughputOverride(ProvisionedThroughputOverrideT&& value) { SetProvisionedThroughputOverride(std::forward<ProvisionedThroughputOverrideT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OnDemandThroughput& GetOnDemandThroughputOverride() const { return m_onDemandThroughputOverride; }
    inline bool OnDemandThroughputOverrideHasBeenSet() const { return m_onDemandThroughputOverrideHasBeenSet; }
    template<typename OnDemandThroughputOverrideT = OnDemandThroughput>
    void SetOnDemandThroughputOverride(OnDemandThroughputOverrideT&& value) { m_onDemandThroughputOverrideHasBeenSet = true; m_onDemandThroughputOverride = std::forward<OnDemandThroughputOverrideT>(value); }
    template<typename OnDemandThroughputOverrideT = OnDemandThroughput>
    RestoreTableToPointInTimeRequest& WithOnDemandThroughputOverride(OnDemandThroughputOverrideT&& value) { SetOnDemandThroughputOverride(std::forward<OnDemandThroughputOverrideT>(value)); return *this;}
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
    RestoreTableToPointInTimeRequest& WithSSESpecificationOverride(SSESpecificationOverrideT&& value) { SetSSESpecificationOverride(std::forward<SSESpecificationOverrideT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceTableArn;
    bool m_sourceTableArnHasBeenSet = false;

    Aws::String m_sourceTableName;
    bool m_sourceTableNameHasBeenSet = false;

    Aws::String m_targetTableName;
    bool m_targetTableNameHasBeenSet = false;

    bool m_useLatestRestorableTime{false};
    bool m_useLatestRestorableTimeHasBeenSet = false;

    Aws::Utils::DateTime m_restoreDateTime{};
    bool m_restoreDateTimeHasBeenSet = false;

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
