/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/DBStorageConfiguration.h>
#include <aws/compute-optimizer/model/Idle.h>
#include <aws/compute-optimizer/model/RDSInstanceFinding.h>
#include <aws/compute-optimizer/model/RDSStorageFinding.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/RDSCurrentInstancePerformanceRisk.h>
#include <aws/compute-optimizer/model/RDSEstimatedMonthlyVolumeIOPsCostVariation.h>
#include <aws/compute-optimizer/model/RDSEffectiveRecommendationPreferences.h>
#include <aws/core/utils/DateTime.h>
#include <aws/compute-optimizer/model/RDSInstanceFindingReasonCode.h>
#include <aws/compute-optimizer/model/RDSStorageFindingReasonCode.h>
#include <aws/compute-optimizer/model/RDSDBInstanceRecommendationOption.h>
#include <aws/compute-optimizer/model/RDSDBStorageRecommendationOption.h>
#include <aws/compute-optimizer/model/RDSDBUtilizationMetric.h>
#include <aws/compute-optimizer/model/Tag.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p> Describes an Amazon Aurora and RDS database recommendation. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/RDSDBRecommendation">AWS
   * API Reference</a></p>
   */
  class RDSDBRecommendation
  {
  public:
    AWS_COMPUTEOPTIMIZER_API RDSDBRecommendation() = default;
    AWS_COMPUTEOPTIMIZER_API RDSDBRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RDSDBRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ARN of the current Amazon Aurora or RDS database. </p> <p> The following
     * is the format of the ARN: </p> <p>
     * <code>arn:aws:rds:{region}:{accountId}:db:{resourceName}</code> </p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    RDSDBRecommendation& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID of the Amazon Aurora or RDS database.
     * </p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    RDSDBRecommendation& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The engine of the DB instance. </p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    RDSDBRecommendation& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The database engine version. </p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    RDSDBRecommendation& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The promotion tier for the Aurora instance.</p>
     */
    inline int GetPromotionTier() const { return m_promotionTier; }
    inline bool PromotionTierHasBeenSet() const { return m_promotionTierHasBeenSet; }
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }
    inline RDSDBRecommendation& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The DB instance class of the current Aurora or RDS DB instance. </p>
     */
    inline const Aws::String& GetCurrentDBInstanceClass() const { return m_currentDBInstanceClass; }
    inline bool CurrentDBInstanceClassHasBeenSet() const { return m_currentDBInstanceClassHasBeenSet; }
    template<typename CurrentDBInstanceClassT = Aws::String>
    void SetCurrentDBInstanceClass(CurrentDBInstanceClassT&& value) { m_currentDBInstanceClassHasBeenSet = true; m_currentDBInstanceClass = std::forward<CurrentDBInstanceClassT>(value); }
    template<typename CurrentDBInstanceClassT = Aws::String>
    RDSDBRecommendation& WithCurrentDBInstanceClass(CurrentDBInstanceClassT&& value) { SetCurrentDBInstanceClass(std::forward<CurrentDBInstanceClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration of the current DB storage. </p>
     */
    inline const DBStorageConfiguration& GetCurrentStorageConfiguration() const { return m_currentStorageConfiguration; }
    inline bool CurrentStorageConfigurationHasBeenSet() const { return m_currentStorageConfigurationHasBeenSet; }
    template<typename CurrentStorageConfigurationT = DBStorageConfiguration>
    void SetCurrentStorageConfiguration(CurrentStorageConfigurationT&& value) { m_currentStorageConfigurationHasBeenSet = true; m_currentStorageConfiguration = std::forward<CurrentStorageConfigurationT>(value); }
    template<typename CurrentStorageConfigurationT = DBStorageConfiguration>
    RDSDBRecommendation& WithCurrentStorageConfiguration(CurrentStorageConfigurationT&& value) { SetCurrentStorageConfiguration(std::forward<CurrentStorageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for DB cluster.</p>
     */
    inline const Aws::String& GetDbClusterIdentifier() const { return m_dbClusterIdentifier; }
    inline bool DbClusterIdentifierHasBeenSet() const { return m_dbClusterIdentifierHasBeenSet; }
    template<typename DbClusterIdentifierT = Aws::String>
    void SetDbClusterIdentifier(DbClusterIdentifierT&& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = std::forward<DbClusterIdentifierT>(value); }
    template<typename DbClusterIdentifierT = Aws::String>
    RDSDBRecommendation& WithDbClusterIdentifier(DbClusterIdentifierT&& value) { SetDbClusterIdentifier(std::forward<DbClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> This indicates if the DB instance is idle or not. </p>
     */
    inline Idle GetIdle() const { return m_idle; }
    inline bool IdleHasBeenSet() const { return m_idleHasBeenSet; }
    inline void SetIdle(Idle value) { m_idleHasBeenSet = true; m_idle = value; }
    inline RDSDBRecommendation& WithIdle(Idle value) { SetIdle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The finding classification of an Amazon Aurora and RDS DB instance. </p>
     * <p>For more information about finding classifications, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/view-rds-recommendations.html#rds-recommendations-findings">
     * Finding classifications for Aurora and RDS databases</a> in the <i>Compute
     * Optimizer User Guide</i>.</p>
     */
    inline RDSInstanceFinding GetInstanceFinding() const { return m_instanceFinding; }
    inline bool InstanceFindingHasBeenSet() const { return m_instanceFindingHasBeenSet; }
    inline void SetInstanceFinding(RDSInstanceFinding value) { m_instanceFindingHasBeenSet = true; m_instanceFinding = value; }
    inline RDSDBRecommendation& WithInstanceFinding(RDSInstanceFinding value) { SetInstanceFinding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The finding classification of Amazon RDS DB instance storage. </p> <p>For
     * more information about finding classifications, see <a
     * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/view-rds-recommendations.html#rds-recommendations-findings">
     * Finding classifications for Aurora and RDS databases</a> in the <i>Compute
     * Optimizer User Guide</i>.</p>
     */
    inline RDSStorageFinding GetStorageFinding() const { return m_storageFinding; }
    inline bool StorageFindingHasBeenSet() const { return m_storageFindingHasBeenSet; }
    inline void SetStorageFinding(RDSStorageFinding value) { m_storageFindingHasBeenSet = true; m_storageFinding = value; }
    inline RDSDBRecommendation& WithStorageFinding(RDSStorageFinding value) { SetStorageFinding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason for the finding classification of a DB instance. </p>
     */
    inline const Aws::Vector<RDSInstanceFindingReasonCode>& GetInstanceFindingReasonCodes() const { return m_instanceFindingReasonCodes; }
    inline bool InstanceFindingReasonCodesHasBeenSet() const { return m_instanceFindingReasonCodesHasBeenSet; }
    template<typename InstanceFindingReasonCodesT = Aws::Vector<RDSInstanceFindingReasonCode>>
    void SetInstanceFindingReasonCodes(InstanceFindingReasonCodesT&& value) { m_instanceFindingReasonCodesHasBeenSet = true; m_instanceFindingReasonCodes = std::forward<InstanceFindingReasonCodesT>(value); }
    template<typename InstanceFindingReasonCodesT = Aws::Vector<RDSInstanceFindingReasonCode>>
    RDSDBRecommendation& WithInstanceFindingReasonCodes(InstanceFindingReasonCodesT&& value) { SetInstanceFindingReasonCodes(std::forward<InstanceFindingReasonCodesT>(value)); return *this;}
    inline RDSDBRecommendation& AddInstanceFindingReasonCodes(RDSInstanceFindingReasonCode value) { m_instanceFindingReasonCodesHasBeenSet = true; m_instanceFindingReasonCodes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The performance risk for the current DB instance.</p>
     */
    inline RDSCurrentInstancePerformanceRisk GetCurrentInstancePerformanceRisk() const { return m_currentInstancePerformanceRisk; }
    inline bool CurrentInstancePerformanceRiskHasBeenSet() const { return m_currentInstancePerformanceRiskHasBeenSet; }
    inline void SetCurrentInstancePerformanceRisk(RDSCurrentInstancePerformanceRisk value) { m_currentInstancePerformanceRiskHasBeenSet = true; m_currentInstancePerformanceRisk = value; }
    inline RDSDBRecommendation& WithCurrentInstancePerformanceRisk(RDSCurrentInstancePerformanceRisk value) { SetCurrentInstancePerformanceRisk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The level of variation in monthly I/O costs for the current DB storage
     * configuration. </p>
     */
    inline RDSEstimatedMonthlyVolumeIOPsCostVariation GetCurrentStorageEstimatedMonthlyVolumeIOPsCostVariation() const { return m_currentStorageEstimatedMonthlyVolumeIOPsCostVariation; }
    inline bool CurrentStorageEstimatedMonthlyVolumeIOPsCostVariationHasBeenSet() const { return m_currentStorageEstimatedMonthlyVolumeIOPsCostVariationHasBeenSet; }
    inline void SetCurrentStorageEstimatedMonthlyVolumeIOPsCostVariation(RDSEstimatedMonthlyVolumeIOPsCostVariation value) { m_currentStorageEstimatedMonthlyVolumeIOPsCostVariationHasBeenSet = true; m_currentStorageEstimatedMonthlyVolumeIOPsCostVariation = value; }
    inline RDSDBRecommendation& WithCurrentStorageEstimatedMonthlyVolumeIOPsCostVariation(RDSEstimatedMonthlyVolumeIOPsCostVariation value) { SetCurrentStorageEstimatedMonthlyVolumeIOPsCostVariation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason for the finding classification of RDS DB instance storage. </p>
     */
    inline const Aws::Vector<RDSStorageFindingReasonCode>& GetStorageFindingReasonCodes() const { return m_storageFindingReasonCodes; }
    inline bool StorageFindingReasonCodesHasBeenSet() const { return m_storageFindingReasonCodesHasBeenSet; }
    template<typename StorageFindingReasonCodesT = Aws::Vector<RDSStorageFindingReasonCode>>
    void SetStorageFindingReasonCodes(StorageFindingReasonCodesT&& value) { m_storageFindingReasonCodesHasBeenSet = true; m_storageFindingReasonCodes = std::forward<StorageFindingReasonCodesT>(value); }
    template<typename StorageFindingReasonCodesT = Aws::Vector<RDSStorageFindingReasonCode>>
    RDSDBRecommendation& WithStorageFindingReasonCodes(StorageFindingReasonCodesT&& value) { SetStorageFindingReasonCodes(std::forward<StorageFindingReasonCodesT>(value)); return *this;}
    inline RDSDBRecommendation& AddStorageFindingReasonCodes(RDSStorageFindingReasonCode value) { m_storageFindingReasonCodesHasBeenSet = true; m_storageFindingReasonCodes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe the recommendation options for the RDS DB
     * instance. </p>
     */
    inline const Aws::Vector<RDSDBInstanceRecommendationOption>& GetInstanceRecommendationOptions() const { return m_instanceRecommendationOptions; }
    inline bool InstanceRecommendationOptionsHasBeenSet() const { return m_instanceRecommendationOptionsHasBeenSet; }
    template<typename InstanceRecommendationOptionsT = Aws::Vector<RDSDBInstanceRecommendationOption>>
    void SetInstanceRecommendationOptions(InstanceRecommendationOptionsT&& value) { m_instanceRecommendationOptionsHasBeenSet = true; m_instanceRecommendationOptions = std::forward<InstanceRecommendationOptionsT>(value); }
    template<typename InstanceRecommendationOptionsT = Aws::Vector<RDSDBInstanceRecommendationOption>>
    RDSDBRecommendation& WithInstanceRecommendationOptions(InstanceRecommendationOptionsT&& value) { SetInstanceRecommendationOptions(std::forward<InstanceRecommendationOptionsT>(value)); return *this;}
    template<typename InstanceRecommendationOptionsT = RDSDBInstanceRecommendationOption>
    RDSDBRecommendation& AddInstanceRecommendationOptions(InstanceRecommendationOptionsT&& value) { m_instanceRecommendationOptionsHasBeenSet = true; m_instanceRecommendationOptions.emplace_back(std::forward<InstanceRecommendationOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe the recommendation options for DB instance
     * storage. </p>
     */
    inline const Aws::Vector<RDSDBStorageRecommendationOption>& GetStorageRecommendationOptions() const { return m_storageRecommendationOptions; }
    inline bool StorageRecommendationOptionsHasBeenSet() const { return m_storageRecommendationOptionsHasBeenSet; }
    template<typename StorageRecommendationOptionsT = Aws::Vector<RDSDBStorageRecommendationOption>>
    void SetStorageRecommendationOptions(StorageRecommendationOptionsT&& value) { m_storageRecommendationOptionsHasBeenSet = true; m_storageRecommendationOptions = std::forward<StorageRecommendationOptionsT>(value); }
    template<typename StorageRecommendationOptionsT = Aws::Vector<RDSDBStorageRecommendationOption>>
    RDSDBRecommendation& WithStorageRecommendationOptions(StorageRecommendationOptionsT&& value) { SetStorageRecommendationOptions(std::forward<StorageRecommendationOptionsT>(value)); return *this;}
    template<typename StorageRecommendationOptionsT = RDSDBStorageRecommendationOption>
    RDSDBRecommendation& AddStorageRecommendationOptions(StorageRecommendationOptionsT&& value) { m_storageRecommendationOptionsHasBeenSet = true; m_storageRecommendationOptions.emplace_back(std::forward<StorageRecommendationOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe the utilization metrics of the DB
     * instance. </p>
     */
    inline const Aws::Vector<RDSDBUtilizationMetric>& GetUtilizationMetrics() const { return m_utilizationMetrics; }
    inline bool UtilizationMetricsHasBeenSet() const { return m_utilizationMetricsHasBeenSet; }
    template<typename UtilizationMetricsT = Aws::Vector<RDSDBUtilizationMetric>>
    void SetUtilizationMetrics(UtilizationMetricsT&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = std::forward<UtilizationMetricsT>(value); }
    template<typename UtilizationMetricsT = Aws::Vector<RDSDBUtilizationMetric>>
    RDSDBRecommendation& WithUtilizationMetrics(UtilizationMetricsT&& value) { SetUtilizationMetrics(std::forward<UtilizationMetricsT>(value)); return *this;}
    template<typename UtilizationMetricsT = RDSDBUtilizationMetric>
    RDSDBRecommendation& AddUtilizationMetrics(UtilizationMetricsT&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.emplace_back(std::forward<UtilizationMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Describes the effective recommendation preferences for DB instances. </p>
     */
    inline const RDSEffectiveRecommendationPreferences& GetEffectiveRecommendationPreferences() const { return m_effectiveRecommendationPreferences; }
    inline bool EffectiveRecommendationPreferencesHasBeenSet() const { return m_effectiveRecommendationPreferencesHasBeenSet; }
    template<typename EffectiveRecommendationPreferencesT = RDSEffectiveRecommendationPreferences>
    void SetEffectiveRecommendationPreferences(EffectiveRecommendationPreferencesT&& value) { m_effectiveRecommendationPreferencesHasBeenSet = true; m_effectiveRecommendationPreferences = std::forward<EffectiveRecommendationPreferencesT>(value); }
    template<typename EffectiveRecommendationPreferencesT = RDSEffectiveRecommendationPreferences>
    RDSDBRecommendation& WithEffectiveRecommendationPreferences(EffectiveRecommendationPreferencesT&& value) { SetEffectiveRecommendationPreferences(std::forward<EffectiveRecommendationPreferencesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of days the DB instance utilization metrics were analyzed. </p>
     */
    inline double GetLookbackPeriodInDays() const { return m_lookbackPeriodInDays; }
    inline bool LookbackPeriodInDaysHasBeenSet() const { return m_lookbackPeriodInDaysHasBeenSet; }
    inline void SetLookbackPeriodInDays(double value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = value; }
    inline RDSDBRecommendation& WithLookbackPeriodInDays(double value) { SetLookbackPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of when the DB instance recommendation was last generated.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const { return m_lastRefreshTimestamp; }
    inline bool LastRefreshTimestampHasBeenSet() const { return m_lastRefreshTimestampHasBeenSet; }
    template<typename LastRefreshTimestampT = Aws::Utils::DateTime>
    void SetLastRefreshTimestamp(LastRefreshTimestampT&& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = std::forward<LastRefreshTimestampT>(value); }
    template<typename LastRefreshTimestampT = Aws::Utils::DateTime>
    RDSDBRecommendation& WithLastRefreshTimestamp(LastRefreshTimestampT&& value) { SetLastRefreshTimestamp(std::forward<LastRefreshTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of tags assigned to your DB instance recommendations. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    RDSDBRecommendation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RDSDBRecommendation& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    int m_promotionTier{0};
    bool m_promotionTierHasBeenSet = false;

    Aws::String m_currentDBInstanceClass;
    bool m_currentDBInstanceClassHasBeenSet = false;

    DBStorageConfiguration m_currentStorageConfiguration;
    bool m_currentStorageConfigurationHasBeenSet = false;

    Aws::String m_dbClusterIdentifier;
    bool m_dbClusterIdentifierHasBeenSet = false;

    Idle m_idle{Idle::NOT_SET};
    bool m_idleHasBeenSet = false;

    RDSInstanceFinding m_instanceFinding{RDSInstanceFinding::NOT_SET};
    bool m_instanceFindingHasBeenSet = false;

    RDSStorageFinding m_storageFinding{RDSStorageFinding::NOT_SET};
    bool m_storageFindingHasBeenSet = false;

    Aws::Vector<RDSInstanceFindingReasonCode> m_instanceFindingReasonCodes;
    bool m_instanceFindingReasonCodesHasBeenSet = false;

    RDSCurrentInstancePerformanceRisk m_currentInstancePerformanceRisk{RDSCurrentInstancePerformanceRisk::NOT_SET};
    bool m_currentInstancePerformanceRiskHasBeenSet = false;

    RDSEstimatedMonthlyVolumeIOPsCostVariation m_currentStorageEstimatedMonthlyVolumeIOPsCostVariation{RDSEstimatedMonthlyVolumeIOPsCostVariation::NOT_SET};
    bool m_currentStorageEstimatedMonthlyVolumeIOPsCostVariationHasBeenSet = false;

    Aws::Vector<RDSStorageFindingReasonCode> m_storageFindingReasonCodes;
    bool m_storageFindingReasonCodesHasBeenSet = false;

    Aws::Vector<RDSDBInstanceRecommendationOption> m_instanceRecommendationOptions;
    bool m_instanceRecommendationOptionsHasBeenSet = false;

    Aws::Vector<RDSDBStorageRecommendationOption> m_storageRecommendationOptions;
    bool m_storageRecommendationOptionsHasBeenSet = false;

    Aws::Vector<RDSDBUtilizationMetric> m_utilizationMetrics;
    bool m_utilizationMetricsHasBeenSet = false;

    RDSEffectiveRecommendationPreferences m_effectiveRecommendationPreferences;
    bool m_effectiveRecommendationPreferencesHasBeenSet = false;

    double m_lookbackPeriodInDays{0.0};
    bool m_lookbackPeriodInDaysHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTimestamp{};
    bool m_lastRefreshTimestampHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
