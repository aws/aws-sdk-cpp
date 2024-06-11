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
    AWS_DYNAMODB_API RestoreTableToPointInTimeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreTableToPointInTime"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The DynamoDB table that will be restored. This value is an Amazon Resource
     * Name (ARN).</p>
     */
    inline const Aws::String& GetSourceTableArn() const{ return m_sourceTableArn; }
    inline bool SourceTableArnHasBeenSet() const { return m_sourceTableArnHasBeenSet; }
    inline void SetSourceTableArn(const Aws::String& value) { m_sourceTableArnHasBeenSet = true; m_sourceTableArn = value; }
    inline void SetSourceTableArn(Aws::String&& value) { m_sourceTableArnHasBeenSet = true; m_sourceTableArn = std::move(value); }
    inline void SetSourceTableArn(const char* value) { m_sourceTableArnHasBeenSet = true; m_sourceTableArn.assign(value); }
    inline RestoreTableToPointInTimeRequest& WithSourceTableArn(const Aws::String& value) { SetSourceTableArn(value); return *this;}
    inline RestoreTableToPointInTimeRequest& WithSourceTableArn(Aws::String&& value) { SetSourceTableArn(std::move(value)); return *this;}
    inline RestoreTableToPointInTimeRequest& WithSourceTableArn(const char* value) { SetSourceTableArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the source table that is being restored.</p>
     */
    inline const Aws::String& GetSourceTableName() const{ return m_sourceTableName; }
    inline bool SourceTableNameHasBeenSet() const { return m_sourceTableNameHasBeenSet; }
    inline void SetSourceTableName(const Aws::String& value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName = value; }
    inline void SetSourceTableName(Aws::String&& value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName = std::move(value); }
    inline void SetSourceTableName(const char* value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName.assign(value); }
    inline RestoreTableToPointInTimeRequest& WithSourceTableName(const Aws::String& value) { SetSourceTableName(value); return *this;}
    inline RestoreTableToPointInTimeRequest& WithSourceTableName(Aws::String&& value) { SetSourceTableName(std::move(value)); return *this;}
    inline RestoreTableToPointInTimeRequest& WithSourceTableName(const char* value) { SetSourceTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new table to which it must be restored to.</p>
     */
    inline const Aws::String& GetTargetTableName() const{ return m_targetTableName; }
    inline bool TargetTableNameHasBeenSet() const { return m_targetTableNameHasBeenSet; }
    inline void SetTargetTableName(const Aws::String& value) { m_targetTableNameHasBeenSet = true; m_targetTableName = value; }
    inline void SetTargetTableName(Aws::String&& value) { m_targetTableNameHasBeenSet = true; m_targetTableName = std::move(value); }
    inline void SetTargetTableName(const char* value) { m_targetTableNameHasBeenSet = true; m_targetTableName.assign(value); }
    inline RestoreTableToPointInTimeRequest& WithTargetTableName(const Aws::String& value) { SetTargetTableName(value); return *this;}
    inline RestoreTableToPointInTimeRequest& WithTargetTableName(Aws::String&& value) { SetTargetTableName(std::move(value)); return *this;}
    inline RestoreTableToPointInTimeRequest& WithTargetTableName(const char* value) { SetTargetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Restore the table to the latest possible time.
     * <code>LatestRestorableDateTime</code> is typically 5 minutes before the current
     * time. </p>
     */
    inline bool GetUseLatestRestorableTime() const{ return m_useLatestRestorableTime; }
    inline bool UseLatestRestorableTimeHasBeenSet() const { return m_useLatestRestorableTimeHasBeenSet; }
    inline void SetUseLatestRestorableTime(bool value) { m_useLatestRestorableTimeHasBeenSet = true; m_useLatestRestorableTime = value; }
    inline RestoreTableToPointInTimeRequest& WithUseLatestRestorableTime(bool value) { SetUseLatestRestorableTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time in the past to restore the table to.</p>
     */
    inline const Aws::Utils::DateTime& GetRestoreDateTime() const{ return m_restoreDateTime; }
    inline bool RestoreDateTimeHasBeenSet() const { return m_restoreDateTimeHasBeenSet; }
    inline void SetRestoreDateTime(const Aws::Utils::DateTime& value) { m_restoreDateTimeHasBeenSet = true; m_restoreDateTime = value; }
    inline void SetRestoreDateTime(Aws::Utils::DateTime&& value) { m_restoreDateTimeHasBeenSet = true; m_restoreDateTime = std::move(value); }
    inline RestoreTableToPointInTimeRequest& WithRestoreDateTime(const Aws::Utils::DateTime& value) { SetRestoreDateTime(value); return *this;}
    inline RestoreTableToPointInTimeRequest& WithRestoreDateTime(Aws::Utils::DateTime&& value) { SetRestoreDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billing mode of the restored table.</p>
     */
    inline const BillingMode& GetBillingModeOverride() const{ return m_billingModeOverride; }
    inline bool BillingModeOverrideHasBeenSet() const { return m_billingModeOverrideHasBeenSet; }
    inline void SetBillingModeOverride(const BillingMode& value) { m_billingModeOverrideHasBeenSet = true; m_billingModeOverride = value; }
    inline void SetBillingModeOverride(BillingMode&& value) { m_billingModeOverrideHasBeenSet = true; m_billingModeOverride = std::move(value); }
    inline RestoreTableToPointInTimeRequest& WithBillingModeOverride(const BillingMode& value) { SetBillingModeOverride(value); return *this;}
    inline RestoreTableToPointInTimeRequest& WithBillingModeOverride(BillingMode&& value) { SetBillingModeOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of global secondary indexes for the restored table. The indexes provided
     * should match existing secondary indexes. You can choose to exclude some or all
     * of the indexes at the time of restore.</p>
     */
    inline const Aws::Vector<GlobalSecondaryIndex>& GetGlobalSecondaryIndexOverride() const{ return m_globalSecondaryIndexOverride; }
    inline bool GlobalSecondaryIndexOverrideHasBeenSet() const { return m_globalSecondaryIndexOverrideHasBeenSet; }
    inline void SetGlobalSecondaryIndexOverride(const Aws::Vector<GlobalSecondaryIndex>& value) { m_globalSecondaryIndexOverrideHasBeenSet = true; m_globalSecondaryIndexOverride = value; }
    inline void SetGlobalSecondaryIndexOverride(Aws::Vector<GlobalSecondaryIndex>&& value) { m_globalSecondaryIndexOverrideHasBeenSet = true; m_globalSecondaryIndexOverride = std::move(value); }
    inline RestoreTableToPointInTimeRequest& WithGlobalSecondaryIndexOverride(const Aws::Vector<GlobalSecondaryIndex>& value) { SetGlobalSecondaryIndexOverride(value); return *this;}
    inline RestoreTableToPointInTimeRequest& WithGlobalSecondaryIndexOverride(Aws::Vector<GlobalSecondaryIndex>&& value) { SetGlobalSecondaryIndexOverride(std::move(value)); return *this;}
    inline RestoreTableToPointInTimeRequest& AddGlobalSecondaryIndexOverride(const GlobalSecondaryIndex& value) { m_globalSecondaryIndexOverrideHasBeenSet = true; m_globalSecondaryIndexOverride.push_back(value); return *this; }
    inline RestoreTableToPointInTimeRequest& AddGlobalSecondaryIndexOverride(GlobalSecondaryIndex&& value) { m_globalSecondaryIndexOverrideHasBeenSet = true; m_globalSecondaryIndexOverride.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of local secondary indexes for the restored table. The indexes provided
     * should match existing secondary indexes. You can choose to exclude some or all
     * of the indexes at the time of restore.</p>
     */
    inline const Aws::Vector<LocalSecondaryIndex>& GetLocalSecondaryIndexOverride() const{ return m_localSecondaryIndexOverride; }
    inline bool LocalSecondaryIndexOverrideHasBeenSet() const { return m_localSecondaryIndexOverrideHasBeenSet; }
    inline void SetLocalSecondaryIndexOverride(const Aws::Vector<LocalSecondaryIndex>& value) { m_localSecondaryIndexOverrideHasBeenSet = true; m_localSecondaryIndexOverride = value; }
    inline void SetLocalSecondaryIndexOverride(Aws::Vector<LocalSecondaryIndex>&& value) { m_localSecondaryIndexOverrideHasBeenSet = true; m_localSecondaryIndexOverride = std::move(value); }
    inline RestoreTableToPointInTimeRequest& WithLocalSecondaryIndexOverride(const Aws::Vector<LocalSecondaryIndex>& value) { SetLocalSecondaryIndexOverride(value); return *this;}
    inline RestoreTableToPointInTimeRequest& WithLocalSecondaryIndexOverride(Aws::Vector<LocalSecondaryIndex>&& value) { SetLocalSecondaryIndexOverride(std::move(value)); return *this;}
    inline RestoreTableToPointInTimeRequest& AddLocalSecondaryIndexOverride(const LocalSecondaryIndex& value) { m_localSecondaryIndexOverrideHasBeenSet = true; m_localSecondaryIndexOverride.push_back(value); return *this; }
    inline RestoreTableToPointInTimeRequest& AddLocalSecondaryIndexOverride(LocalSecondaryIndex&& value) { m_localSecondaryIndexOverrideHasBeenSet = true; m_localSecondaryIndexOverride.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provisioned throughput settings for the restored table.</p>
     */
    inline const ProvisionedThroughput& GetProvisionedThroughputOverride() const{ return m_provisionedThroughputOverride; }
    inline bool ProvisionedThroughputOverrideHasBeenSet() const { return m_provisionedThroughputOverrideHasBeenSet; }
    inline void SetProvisionedThroughputOverride(const ProvisionedThroughput& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = value; }
    inline void SetProvisionedThroughputOverride(ProvisionedThroughput&& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = std::move(value); }
    inline RestoreTableToPointInTimeRequest& WithProvisionedThroughputOverride(const ProvisionedThroughput& value) { SetProvisionedThroughputOverride(value); return *this;}
    inline RestoreTableToPointInTimeRequest& WithProvisionedThroughputOverride(ProvisionedThroughput&& value) { SetProvisionedThroughputOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const OnDemandThroughput& GetOnDemandThroughputOverride() const{ return m_onDemandThroughputOverride; }
    inline bool OnDemandThroughputOverrideHasBeenSet() const { return m_onDemandThroughputOverrideHasBeenSet; }
    inline void SetOnDemandThroughputOverride(const OnDemandThroughput& value) { m_onDemandThroughputOverrideHasBeenSet = true; m_onDemandThroughputOverride = value; }
    inline void SetOnDemandThroughputOverride(OnDemandThroughput&& value) { m_onDemandThroughputOverrideHasBeenSet = true; m_onDemandThroughputOverride = std::move(value); }
    inline RestoreTableToPointInTimeRequest& WithOnDemandThroughputOverride(const OnDemandThroughput& value) { SetOnDemandThroughputOverride(value); return *this;}
    inline RestoreTableToPointInTimeRequest& WithOnDemandThroughputOverride(OnDemandThroughput&& value) { SetOnDemandThroughputOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new server-side encryption settings for the restored table.</p>
     */
    inline const SSESpecification& GetSSESpecificationOverride() const{ return m_sSESpecificationOverride; }
    inline bool SSESpecificationOverrideHasBeenSet() const { return m_sSESpecificationOverrideHasBeenSet; }
    inline void SetSSESpecificationOverride(const SSESpecification& value) { m_sSESpecificationOverrideHasBeenSet = true; m_sSESpecificationOverride = value; }
    inline void SetSSESpecificationOverride(SSESpecification&& value) { m_sSESpecificationOverrideHasBeenSet = true; m_sSESpecificationOverride = std::move(value); }
    inline RestoreTableToPointInTimeRequest& WithSSESpecificationOverride(const SSESpecification& value) { SetSSESpecificationOverride(value); return *this;}
    inline RestoreTableToPointInTimeRequest& WithSSESpecificationOverride(SSESpecification&& value) { SetSSESpecificationOverride(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceTableArn;
    bool m_sourceTableArnHasBeenSet = false;

    Aws::String m_sourceTableName;
    bool m_sourceTableNameHasBeenSet = false;

    Aws::String m_targetTableName;
    bool m_targetTableNameHasBeenSet = false;

    bool m_useLatestRestorableTime;
    bool m_useLatestRestorableTimeHasBeenSet = false;

    Aws::Utils::DateTime m_restoreDateTime;
    bool m_restoreDateTimeHasBeenSet = false;

    BillingMode m_billingModeOverride;
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
