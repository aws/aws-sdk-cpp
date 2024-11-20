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
   * <p> Describes an Amazon RDS recommendation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/RDSDBRecommendation">AWS
   * API Reference</a></p>
   */
  class RDSDBRecommendation
  {
  public:
    AWS_COMPUTEOPTIMIZER_API RDSDBRecommendation();
    AWS_COMPUTEOPTIMIZER_API RDSDBRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RDSDBRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ARN of the current Amazon RDS. </p> <p> The following is the format of
     * the ARN: </p> <p>
     * <code>arn:aws:rds:{region}:{accountId}:db:{resourceName}</code> </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline RDSDBRecommendation& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline RDSDBRecommendation& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline RDSDBRecommendation& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID of the Amazon RDS. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline RDSDBRecommendation& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline RDSDBRecommendation& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline RDSDBRecommendation& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The engine of the RDS instance. </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline RDSDBRecommendation& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline RDSDBRecommendation& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline RDSDBRecommendation& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The database engine version. </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline RDSDBRecommendation& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline RDSDBRecommendation& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline RDSDBRecommendation& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The promotion tier for the Aurora instance.</p>
     */
    inline int GetPromotionTier() const{ return m_promotionTier; }
    inline bool PromotionTierHasBeenSet() const { return m_promotionTierHasBeenSet; }
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }
    inline RDSDBRecommendation& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The DB instance class of the current RDS instance. </p>
     */
    inline const Aws::String& GetCurrentDBInstanceClass() const{ return m_currentDBInstanceClass; }
    inline bool CurrentDBInstanceClassHasBeenSet() const { return m_currentDBInstanceClassHasBeenSet; }
    inline void SetCurrentDBInstanceClass(const Aws::String& value) { m_currentDBInstanceClassHasBeenSet = true; m_currentDBInstanceClass = value; }
    inline void SetCurrentDBInstanceClass(Aws::String&& value) { m_currentDBInstanceClassHasBeenSet = true; m_currentDBInstanceClass = std::move(value); }
    inline void SetCurrentDBInstanceClass(const char* value) { m_currentDBInstanceClassHasBeenSet = true; m_currentDBInstanceClass.assign(value); }
    inline RDSDBRecommendation& WithCurrentDBInstanceClass(const Aws::String& value) { SetCurrentDBInstanceClass(value); return *this;}
    inline RDSDBRecommendation& WithCurrentDBInstanceClass(Aws::String&& value) { SetCurrentDBInstanceClass(std::move(value)); return *this;}
    inline RDSDBRecommendation& WithCurrentDBInstanceClass(const char* value) { SetCurrentDBInstanceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration of the current RDS storage. </p>
     */
    inline const DBStorageConfiguration& GetCurrentStorageConfiguration() const{ return m_currentStorageConfiguration; }
    inline bool CurrentStorageConfigurationHasBeenSet() const { return m_currentStorageConfigurationHasBeenSet; }
    inline void SetCurrentStorageConfiguration(const DBStorageConfiguration& value) { m_currentStorageConfigurationHasBeenSet = true; m_currentStorageConfiguration = value; }
    inline void SetCurrentStorageConfiguration(DBStorageConfiguration&& value) { m_currentStorageConfigurationHasBeenSet = true; m_currentStorageConfiguration = std::move(value); }
    inline RDSDBRecommendation& WithCurrentStorageConfiguration(const DBStorageConfiguration& value) { SetCurrentStorageConfiguration(value); return *this;}
    inline RDSDBRecommendation& WithCurrentStorageConfiguration(DBStorageConfiguration&& value) { SetCurrentStorageConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for DB cluster.</p>
     */
    inline const Aws::String& GetDbClusterIdentifier() const{ return m_dbClusterIdentifier; }
    inline bool DbClusterIdentifierHasBeenSet() const { return m_dbClusterIdentifierHasBeenSet; }
    inline void SetDbClusterIdentifier(const Aws::String& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = value; }
    inline void SetDbClusterIdentifier(Aws::String&& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = std::move(value); }
    inline void SetDbClusterIdentifier(const char* value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier.assign(value); }
    inline RDSDBRecommendation& WithDbClusterIdentifier(const Aws::String& value) { SetDbClusterIdentifier(value); return *this;}
    inline RDSDBRecommendation& WithDbClusterIdentifier(Aws::String&& value) { SetDbClusterIdentifier(std::move(value)); return *this;}
    inline RDSDBRecommendation& WithDbClusterIdentifier(const char* value) { SetDbClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> This indicates if the RDS instance is idle or not. </p>
     */
    inline const Idle& GetIdle() const{ return m_idle; }
    inline bool IdleHasBeenSet() const { return m_idleHasBeenSet; }
    inline void SetIdle(const Idle& value) { m_idleHasBeenSet = true; m_idle = value; }
    inline void SetIdle(Idle&& value) { m_idleHasBeenSet = true; m_idle = std::move(value); }
    inline RDSDBRecommendation& WithIdle(const Idle& value) { SetIdle(value); return *this;}
    inline RDSDBRecommendation& WithIdle(Idle&& value) { SetIdle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The finding classification of an Amazon RDS instance. </p> <p>Findings for
     * Amazon RDS instance include:</p> <ul> <li> <p> <b> <code>Underprovisioned</code>
     * </b> — When Compute Optimizer detects that there’s not enough resource
     * specifications, an Amazon RDS is considered under-provisioned.</p> </li> <li>
     * <p> <b> <code>Overprovisioned</code> </b> — When Compute Optimizer detects that
     * there’s excessive resource specifications, an Amazon RDS is considered
     * over-provisioned.</p> </li> <li> <p> <b> <code>Optimized</code> </b> — When the
     * specifications of your Amazon RDS instance meet the performance requirements of
     * your workload, the service is considered optimized.</p> </li> </ul>
     */
    inline const RDSInstanceFinding& GetInstanceFinding() const{ return m_instanceFinding; }
    inline bool InstanceFindingHasBeenSet() const { return m_instanceFindingHasBeenSet; }
    inline void SetInstanceFinding(const RDSInstanceFinding& value) { m_instanceFindingHasBeenSet = true; m_instanceFinding = value; }
    inline void SetInstanceFinding(RDSInstanceFinding&& value) { m_instanceFindingHasBeenSet = true; m_instanceFinding = std::move(value); }
    inline RDSDBRecommendation& WithInstanceFinding(const RDSInstanceFinding& value) { SetInstanceFinding(value); return *this;}
    inline RDSDBRecommendation& WithInstanceFinding(RDSInstanceFinding&& value) { SetInstanceFinding(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The finding classification of Amazon RDS storage. </p> <p>Findings for
     * Amazon RDS instance include:</p> <ul> <li> <p> <b> <code>Underprovisioned</code>
     * </b> — When Compute Optimizer detects that there’s not enough storage, an Amazon
     * RDS is considered under-provisioned.</p> </li> <li> <p> <b>
     * <code>Overprovisioned</code> </b> — When Compute Optimizer detects that there’s
     * excessive storage, an Amazon RDS is considered over-provisioned.</p> </li> <li>
     * <p> <b> <code>Optimized</code> </b> — When the storage of your Amazon RDS meet
     * the performance requirements of your workload, the service is considered
     * optimized.</p> </li> </ul>
     */
    inline const RDSStorageFinding& GetStorageFinding() const{ return m_storageFinding; }
    inline bool StorageFindingHasBeenSet() const { return m_storageFindingHasBeenSet; }
    inline void SetStorageFinding(const RDSStorageFinding& value) { m_storageFindingHasBeenSet = true; m_storageFinding = value; }
    inline void SetStorageFinding(RDSStorageFinding&& value) { m_storageFindingHasBeenSet = true; m_storageFinding = std::move(value); }
    inline RDSDBRecommendation& WithStorageFinding(const RDSStorageFinding& value) { SetStorageFinding(value); return *this;}
    inline RDSDBRecommendation& WithStorageFinding(RDSStorageFinding&& value) { SetStorageFinding(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason for the finding classification of an Amazon RDS instance. </p>
     */
    inline const Aws::Vector<RDSInstanceFindingReasonCode>& GetInstanceFindingReasonCodes() const{ return m_instanceFindingReasonCodes; }
    inline bool InstanceFindingReasonCodesHasBeenSet() const { return m_instanceFindingReasonCodesHasBeenSet; }
    inline void SetInstanceFindingReasonCodes(const Aws::Vector<RDSInstanceFindingReasonCode>& value) { m_instanceFindingReasonCodesHasBeenSet = true; m_instanceFindingReasonCodes = value; }
    inline void SetInstanceFindingReasonCodes(Aws::Vector<RDSInstanceFindingReasonCode>&& value) { m_instanceFindingReasonCodesHasBeenSet = true; m_instanceFindingReasonCodes = std::move(value); }
    inline RDSDBRecommendation& WithInstanceFindingReasonCodes(const Aws::Vector<RDSInstanceFindingReasonCode>& value) { SetInstanceFindingReasonCodes(value); return *this;}
    inline RDSDBRecommendation& WithInstanceFindingReasonCodes(Aws::Vector<RDSInstanceFindingReasonCode>&& value) { SetInstanceFindingReasonCodes(std::move(value)); return *this;}
    inline RDSDBRecommendation& AddInstanceFindingReasonCodes(const RDSInstanceFindingReasonCode& value) { m_instanceFindingReasonCodesHasBeenSet = true; m_instanceFindingReasonCodes.push_back(value); return *this; }
    inline RDSDBRecommendation& AddInstanceFindingReasonCodes(RDSInstanceFindingReasonCode&& value) { m_instanceFindingReasonCodesHasBeenSet = true; m_instanceFindingReasonCodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The performance risk for the current DB instance.</p>
     */
    inline const RDSCurrentInstancePerformanceRisk& GetCurrentInstancePerformanceRisk() const{ return m_currentInstancePerformanceRisk; }
    inline bool CurrentInstancePerformanceRiskHasBeenSet() const { return m_currentInstancePerformanceRiskHasBeenSet; }
    inline void SetCurrentInstancePerformanceRisk(const RDSCurrentInstancePerformanceRisk& value) { m_currentInstancePerformanceRiskHasBeenSet = true; m_currentInstancePerformanceRisk = value; }
    inline void SetCurrentInstancePerformanceRisk(RDSCurrentInstancePerformanceRisk&& value) { m_currentInstancePerformanceRiskHasBeenSet = true; m_currentInstancePerformanceRisk = std::move(value); }
    inline RDSDBRecommendation& WithCurrentInstancePerformanceRisk(const RDSCurrentInstancePerformanceRisk& value) { SetCurrentInstancePerformanceRisk(value); return *this;}
    inline RDSDBRecommendation& WithCurrentInstancePerformanceRisk(RDSCurrentInstancePerformanceRisk&& value) { SetCurrentInstancePerformanceRisk(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason for the finding classification of Amazon RDS storage. </p>
     */
    inline const Aws::Vector<RDSStorageFindingReasonCode>& GetStorageFindingReasonCodes() const{ return m_storageFindingReasonCodes; }
    inline bool StorageFindingReasonCodesHasBeenSet() const { return m_storageFindingReasonCodesHasBeenSet; }
    inline void SetStorageFindingReasonCodes(const Aws::Vector<RDSStorageFindingReasonCode>& value) { m_storageFindingReasonCodesHasBeenSet = true; m_storageFindingReasonCodes = value; }
    inline void SetStorageFindingReasonCodes(Aws::Vector<RDSStorageFindingReasonCode>&& value) { m_storageFindingReasonCodesHasBeenSet = true; m_storageFindingReasonCodes = std::move(value); }
    inline RDSDBRecommendation& WithStorageFindingReasonCodes(const Aws::Vector<RDSStorageFindingReasonCode>& value) { SetStorageFindingReasonCodes(value); return *this;}
    inline RDSDBRecommendation& WithStorageFindingReasonCodes(Aws::Vector<RDSStorageFindingReasonCode>&& value) { SetStorageFindingReasonCodes(std::move(value)); return *this;}
    inline RDSDBRecommendation& AddStorageFindingReasonCodes(const RDSStorageFindingReasonCode& value) { m_storageFindingReasonCodesHasBeenSet = true; m_storageFindingReasonCodes.push_back(value); return *this; }
    inline RDSDBRecommendation& AddStorageFindingReasonCodes(RDSStorageFindingReasonCode&& value) { m_storageFindingReasonCodesHasBeenSet = true; m_storageFindingReasonCodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe the recommendation options for the Amazon
     * RDS instance. </p>
     */
    inline const Aws::Vector<RDSDBInstanceRecommendationOption>& GetInstanceRecommendationOptions() const{ return m_instanceRecommendationOptions; }
    inline bool InstanceRecommendationOptionsHasBeenSet() const { return m_instanceRecommendationOptionsHasBeenSet; }
    inline void SetInstanceRecommendationOptions(const Aws::Vector<RDSDBInstanceRecommendationOption>& value) { m_instanceRecommendationOptionsHasBeenSet = true; m_instanceRecommendationOptions = value; }
    inline void SetInstanceRecommendationOptions(Aws::Vector<RDSDBInstanceRecommendationOption>&& value) { m_instanceRecommendationOptionsHasBeenSet = true; m_instanceRecommendationOptions = std::move(value); }
    inline RDSDBRecommendation& WithInstanceRecommendationOptions(const Aws::Vector<RDSDBInstanceRecommendationOption>& value) { SetInstanceRecommendationOptions(value); return *this;}
    inline RDSDBRecommendation& WithInstanceRecommendationOptions(Aws::Vector<RDSDBInstanceRecommendationOption>&& value) { SetInstanceRecommendationOptions(std::move(value)); return *this;}
    inline RDSDBRecommendation& AddInstanceRecommendationOptions(const RDSDBInstanceRecommendationOption& value) { m_instanceRecommendationOptionsHasBeenSet = true; m_instanceRecommendationOptions.push_back(value); return *this; }
    inline RDSDBRecommendation& AddInstanceRecommendationOptions(RDSDBInstanceRecommendationOption&& value) { m_instanceRecommendationOptionsHasBeenSet = true; m_instanceRecommendationOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe the recommendation options for Amazon RDS
     * storage. </p>
     */
    inline const Aws::Vector<RDSDBStorageRecommendationOption>& GetStorageRecommendationOptions() const{ return m_storageRecommendationOptions; }
    inline bool StorageRecommendationOptionsHasBeenSet() const { return m_storageRecommendationOptionsHasBeenSet; }
    inline void SetStorageRecommendationOptions(const Aws::Vector<RDSDBStorageRecommendationOption>& value) { m_storageRecommendationOptionsHasBeenSet = true; m_storageRecommendationOptions = value; }
    inline void SetStorageRecommendationOptions(Aws::Vector<RDSDBStorageRecommendationOption>&& value) { m_storageRecommendationOptionsHasBeenSet = true; m_storageRecommendationOptions = std::move(value); }
    inline RDSDBRecommendation& WithStorageRecommendationOptions(const Aws::Vector<RDSDBStorageRecommendationOption>& value) { SetStorageRecommendationOptions(value); return *this;}
    inline RDSDBRecommendation& WithStorageRecommendationOptions(Aws::Vector<RDSDBStorageRecommendationOption>&& value) { SetStorageRecommendationOptions(std::move(value)); return *this;}
    inline RDSDBRecommendation& AddStorageRecommendationOptions(const RDSDBStorageRecommendationOption& value) { m_storageRecommendationOptionsHasBeenSet = true; m_storageRecommendationOptions.push_back(value); return *this; }
    inline RDSDBRecommendation& AddStorageRecommendationOptions(RDSDBStorageRecommendationOption&& value) { m_storageRecommendationOptionsHasBeenSet = true; m_storageRecommendationOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe the utilization metrics of the Amazon RDS.
     * </p>
     */
    inline const Aws::Vector<RDSDBUtilizationMetric>& GetUtilizationMetrics() const{ return m_utilizationMetrics; }
    inline bool UtilizationMetricsHasBeenSet() const { return m_utilizationMetricsHasBeenSet; }
    inline void SetUtilizationMetrics(const Aws::Vector<RDSDBUtilizationMetric>& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = value; }
    inline void SetUtilizationMetrics(Aws::Vector<RDSDBUtilizationMetric>&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics = std::move(value); }
    inline RDSDBRecommendation& WithUtilizationMetrics(const Aws::Vector<RDSDBUtilizationMetric>& value) { SetUtilizationMetrics(value); return *this;}
    inline RDSDBRecommendation& WithUtilizationMetrics(Aws::Vector<RDSDBUtilizationMetric>&& value) { SetUtilizationMetrics(std::move(value)); return *this;}
    inline RDSDBRecommendation& AddUtilizationMetrics(const RDSDBUtilizationMetric& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.push_back(value); return *this; }
    inline RDSDBRecommendation& AddUtilizationMetrics(RDSDBUtilizationMetric&& value) { m_utilizationMetricsHasBeenSet = true; m_utilizationMetrics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Describes the effective recommendation preferences for Amazon RDS. </p>
     */
    inline const RDSEffectiveRecommendationPreferences& GetEffectiveRecommendationPreferences() const{ return m_effectiveRecommendationPreferences; }
    inline bool EffectiveRecommendationPreferencesHasBeenSet() const { return m_effectiveRecommendationPreferencesHasBeenSet; }
    inline void SetEffectiveRecommendationPreferences(const RDSEffectiveRecommendationPreferences& value) { m_effectiveRecommendationPreferencesHasBeenSet = true; m_effectiveRecommendationPreferences = value; }
    inline void SetEffectiveRecommendationPreferences(RDSEffectiveRecommendationPreferences&& value) { m_effectiveRecommendationPreferencesHasBeenSet = true; m_effectiveRecommendationPreferences = std::move(value); }
    inline RDSDBRecommendation& WithEffectiveRecommendationPreferences(const RDSEffectiveRecommendationPreferences& value) { SetEffectiveRecommendationPreferences(value); return *this;}
    inline RDSDBRecommendation& WithEffectiveRecommendationPreferences(RDSEffectiveRecommendationPreferences&& value) { SetEffectiveRecommendationPreferences(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of days the Amazon RDS utilization metrics were analyzed. </p>
     */
    inline double GetLookbackPeriodInDays() const{ return m_lookbackPeriodInDays; }
    inline bool LookbackPeriodInDaysHasBeenSet() const { return m_lookbackPeriodInDaysHasBeenSet; }
    inline void SetLookbackPeriodInDays(double value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = value; }
    inline RDSDBRecommendation& WithLookbackPeriodInDays(double value) { SetLookbackPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of when the Amazon RDS recommendation was last generated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTimestamp() const{ return m_lastRefreshTimestamp; }
    inline bool LastRefreshTimestampHasBeenSet() const { return m_lastRefreshTimestampHasBeenSet; }
    inline void SetLastRefreshTimestamp(const Aws::Utils::DateTime& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = value; }
    inline void SetLastRefreshTimestamp(Aws::Utils::DateTime&& value) { m_lastRefreshTimestampHasBeenSet = true; m_lastRefreshTimestamp = std::move(value); }
    inline RDSDBRecommendation& WithLastRefreshTimestamp(const Aws::Utils::DateTime& value) { SetLastRefreshTimestamp(value); return *this;}
    inline RDSDBRecommendation& WithLastRefreshTimestamp(Aws::Utils::DateTime&& value) { SetLastRefreshTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of tags assigned to your Amazon RDS recommendations. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RDSDBRecommendation& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline RDSDBRecommendation& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline RDSDBRecommendation& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline RDSDBRecommendation& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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

    int m_promotionTier;
    bool m_promotionTierHasBeenSet = false;

    Aws::String m_currentDBInstanceClass;
    bool m_currentDBInstanceClassHasBeenSet = false;

    DBStorageConfiguration m_currentStorageConfiguration;
    bool m_currentStorageConfigurationHasBeenSet = false;

    Aws::String m_dbClusterIdentifier;
    bool m_dbClusterIdentifierHasBeenSet = false;

    Idle m_idle;
    bool m_idleHasBeenSet = false;

    RDSInstanceFinding m_instanceFinding;
    bool m_instanceFindingHasBeenSet = false;

    RDSStorageFinding m_storageFinding;
    bool m_storageFindingHasBeenSet = false;

    Aws::Vector<RDSInstanceFindingReasonCode> m_instanceFindingReasonCodes;
    bool m_instanceFindingReasonCodesHasBeenSet = false;

    RDSCurrentInstancePerformanceRisk m_currentInstancePerformanceRisk;
    bool m_currentInstancePerformanceRiskHasBeenSet = false;

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

    double m_lookbackPeriodInDays;
    bool m_lookbackPeriodInDaysHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTimestamp;
    bool m_lastRefreshTimestampHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
