/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RDSDBRecommendation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

RDSDBRecommendation::RDSDBRecommendation(JsonView jsonValue)
{
  *this = jsonValue;
}

RDSDBRecommendation& RDSDBRecommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("engine"))
  {
    m_engine = jsonValue.GetString("engine");
    m_engineHasBeenSet = true;
  }
  if(jsonValue.ValueExists("engineVersion"))
  {
    m_engineVersion = jsonValue.GetString("engineVersion");
    m_engineVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("promotionTier"))
  {
    m_promotionTier = jsonValue.GetInteger("promotionTier");
    m_promotionTierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("currentDBInstanceClass"))
  {
    m_currentDBInstanceClass = jsonValue.GetString("currentDBInstanceClass");
    m_currentDBInstanceClassHasBeenSet = true;
  }
  if(jsonValue.ValueExists("currentStorageConfiguration"))
  {
    m_currentStorageConfiguration = jsonValue.GetObject("currentStorageConfiguration");
    m_currentStorageConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dbClusterIdentifier"))
  {
    m_dbClusterIdentifier = jsonValue.GetString("dbClusterIdentifier");
    m_dbClusterIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("idle"))
  {
    m_idle = IdleMapper::GetIdleForName(jsonValue.GetString("idle"));
    m_idleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceFinding"))
  {
    m_instanceFinding = RDSInstanceFindingMapper::GetRDSInstanceFindingForName(jsonValue.GetString("instanceFinding"));
    m_instanceFindingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageFinding"))
  {
    m_storageFinding = RDSStorageFindingMapper::GetRDSStorageFindingForName(jsonValue.GetString("storageFinding"));
    m_storageFindingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceFindingReasonCodes"))
  {
    Aws::Utils::Array<JsonView> instanceFindingReasonCodesJsonList = jsonValue.GetArray("instanceFindingReasonCodes");
    for(unsigned instanceFindingReasonCodesIndex = 0; instanceFindingReasonCodesIndex < instanceFindingReasonCodesJsonList.GetLength(); ++instanceFindingReasonCodesIndex)
    {
      m_instanceFindingReasonCodes.push_back(RDSInstanceFindingReasonCodeMapper::GetRDSInstanceFindingReasonCodeForName(instanceFindingReasonCodesJsonList[instanceFindingReasonCodesIndex].AsString()));
    }
    m_instanceFindingReasonCodesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("currentInstancePerformanceRisk"))
  {
    m_currentInstancePerformanceRisk = RDSCurrentInstancePerformanceRiskMapper::GetRDSCurrentInstancePerformanceRiskForName(jsonValue.GetString("currentInstancePerformanceRisk"));
    m_currentInstancePerformanceRiskHasBeenSet = true;
  }
  if(jsonValue.ValueExists("currentStorageEstimatedMonthlyVolumeIOPsCostVariation"))
  {
    m_currentStorageEstimatedMonthlyVolumeIOPsCostVariation = RDSEstimatedMonthlyVolumeIOPsCostVariationMapper::GetRDSEstimatedMonthlyVolumeIOPsCostVariationForName(jsonValue.GetString("currentStorageEstimatedMonthlyVolumeIOPsCostVariation"));
    m_currentStorageEstimatedMonthlyVolumeIOPsCostVariationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageFindingReasonCodes"))
  {
    Aws::Utils::Array<JsonView> storageFindingReasonCodesJsonList = jsonValue.GetArray("storageFindingReasonCodes");
    for(unsigned storageFindingReasonCodesIndex = 0; storageFindingReasonCodesIndex < storageFindingReasonCodesJsonList.GetLength(); ++storageFindingReasonCodesIndex)
    {
      m_storageFindingReasonCodes.push_back(RDSStorageFindingReasonCodeMapper::GetRDSStorageFindingReasonCodeForName(storageFindingReasonCodesJsonList[storageFindingReasonCodesIndex].AsString()));
    }
    m_storageFindingReasonCodesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceRecommendationOptions"))
  {
    Aws::Utils::Array<JsonView> instanceRecommendationOptionsJsonList = jsonValue.GetArray("instanceRecommendationOptions");
    for(unsigned instanceRecommendationOptionsIndex = 0; instanceRecommendationOptionsIndex < instanceRecommendationOptionsJsonList.GetLength(); ++instanceRecommendationOptionsIndex)
    {
      m_instanceRecommendationOptions.push_back(instanceRecommendationOptionsJsonList[instanceRecommendationOptionsIndex].AsObject());
    }
    m_instanceRecommendationOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageRecommendationOptions"))
  {
    Aws::Utils::Array<JsonView> storageRecommendationOptionsJsonList = jsonValue.GetArray("storageRecommendationOptions");
    for(unsigned storageRecommendationOptionsIndex = 0; storageRecommendationOptionsIndex < storageRecommendationOptionsJsonList.GetLength(); ++storageRecommendationOptionsIndex)
    {
      m_storageRecommendationOptions.push_back(storageRecommendationOptionsJsonList[storageRecommendationOptionsIndex].AsObject());
    }
    m_storageRecommendationOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("utilizationMetrics"))
  {
    Aws::Utils::Array<JsonView> utilizationMetricsJsonList = jsonValue.GetArray("utilizationMetrics");
    for(unsigned utilizationMetricsIndex = 0; utilizationMetricsIndex < utilizationMetricsJsonList.GetLength(); ++utilizationMetricsIndex)
    {
      m_utilizationMetrics.push_back(utilizationMetricsJsonList[utilizationMetricsIndex].AsObject());
    }
    m_utilizationMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("effectiveRecommendationPreferences"))
  {
    m_effectiveRecommendationPreferences = jsonValue.GetObject("effectiveRecommendationPreferences");
    m_effectiveRecommendationPreferencesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lookbackPeriodInDays"))
  {
    m_lookbackPeriodInDays = jsonValue.GetDouble("lookbackPeriodInDays");
    m_lookbackPeriodInDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastRefreshTimestamp"))
  {
    m_lastRefreshTimestamp = jsonValue.GetDouble("lastRefreshTimestamp");
    m_lastRefreshTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue RDSDBRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("engine", m_engine);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("engineVersion", m_engineVersion);

  }

  if(m_promotionTierHasBeenSet)
  {
   payload.WithInteger("promotionTier", m_promotionTier);

  }

  if(m_currentDBInstanceClassHasBeenSet)
  {
   payload.WithString("currentDBInstanceClass", m_currentDBInstanceClass);

  }

  if(m_currentStorageConfigurationHasBeenSet)
  {
   payload.WithObject("currentStorageConfiguration", m_currentStorageConfiguration.Jsonize());

  }

  if(m_dbClusterIdentifierHasBeenSet)
  {
   payload.WithString("dbClusterIdentifier", m_dbClusterIdentifier);

  }

  if(m_idleHasBeenSet)
  {
   payload.WithString("idle", IdleMapper::GetNameForIdle(m_idle));
  }

  if(m_instanceFindingHasBeenSet)
  {
   payload.WithString("instanceFinding", RDSInstanceFindingMapper::GetNameForRDSInstanceFinding(m_instanceFinding));
  }

  if(m_storageFindingHasBeenSet)
  {
   payload.WithString("storageFinding", RDSStorageFindingMapper::GetNameForRDSStorageFinding(m_storageFinding));
  }

  if(m_instanceFindingReasonCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceFindingReasonCodesJsonList(m_instanceFindingReasonCodes.size());
   for(unsigned instanceFindingReasonCodesIndex = 0; instanceFindingReasonCodesIndex < instanceFindingReasonCodesJsonList.GetLength(); ++instanceFindingReasonCodesIndex)
   {
     instanceFindingReasonCodesJsonList[instanceFindingReasonCodesIndex].AsString(RDSInstanceFindingReasonCodeMapper::GetNameForRDSInstanceFindingReasonCode(m_instanceFindingReasonCodes[instanceFindingReasonCodesIndex]));
   }
   payload.WithArray("instanceFindingReasonCodes", std::move(instanceFindingReasonCodesJsonList));

  }

  if(m_currentInstancePerformanceRiskHasBeenSet)
  {
   payload.WithString("currentInstancePerformanceRisk", RDSCurrentInstancePerformanceRiskMapper::GetNameForRDSCurrentInstancePerformanceRisk(m_currentInstancePerformanceRisk));
  }

  if(m_currentStorageEstimatedMonthlyVolumeIOPsCostVariationHasBeenSet)
  {
   payload.WithString("currentStorageEstimatedMonthlyVolumeIOPsCostVariation", RDSEstimatedMonthlyVolumeIOPsCostVariationMapper::GetNameForRDSEstimatedMonthlyVolumeIOPsCostVariation(m_currentStorageEstimatedMonthlyVolumeIOPsCostVariation));
  }

  if(m_storageFindingReasonCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> storageFindingReasonCodesJsonList(m_storageFindingReasonCodes.size());
   for(unsigned storageFindingReasonCodesIndex = 0; storageFindingReasonCodesIndex < storageFindingReasonCodesJsonList.GetLength(); ++storageFindingReasonCodesIndex)
   {
     storageFindingReasonCodesJsonList[storageFindingReasonCodesIndex].AsString(RDSStorageFindingReasonCodeMapper::GetNameForRDSStorageFindingReasonCode(m_storageFindingReasonCodes[storageFindingReasonCodesIndex]));
   }
   payload.WithArray("storageFindingReasonCodes", std::move(storageFindingReasonCodesJsonList));

  }

  if(m_instanceRecommendationOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceRecommendationOptionsJsonList(m_instanceRecommendationOptions.size());
   for(unsigned instanceRecommendationOptionsIndex = 0; instanceRecommendationOptionsIndex < instanceRecommendationOptionsJsonList.GetLength(); ++instanceRecommendationOptionsIndex)
   {
     instanceRecommendationOptionsJsonList[instanceRecommendationOptionsIndex].AsObject(m_instanceRecommendationOptions[instanceRecommendationOptionsIndex].Jsonize());
   }
   payload.WithArray("instanceRecommendationOptions", std::move(instanceRecommendationOptionsJsonList));

  }

  if(m_storageRecommendationOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> storageRecommendationOptionsJsonList(m_storageRecommendationOptions.size());
   for(unsigned storageRecommendationOptionsIndex = 0; storageRecommendationOptionsIndex < storageRecommendationOptionsJsonList.GetLength(); ++storageRecommendationOptionsIndex)
   {
     storageRecommendationOptionsJsonList[storageRecommendationOptionsIndex].AsObject(m_storageRecommendationOptions[storageRecommendationOptionsIndex].Jsonize());
   }
   payload.WithArray("storageRecommendationOptions", std::move(storageRecommendationOptionsJsonList));

  }

  if(m_utilizationMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> utilizationMetricsJsonList(m_utilizationMetrics.size());
   for(unsigned utilizationMetricsIndex = 0; utilizationMetricsIndex < utilizationMetricsJsonList.GetLength(); ++utilizationMetricsIndex)
   {
     utilizationMetricsJsonList[utilizationMetricsIndex].AsObject(m_utilizationMetrics[utilizationMetricsIndex].Jsonize());
   }
   payload.WithArray("utilizationMetrics", std::move(utilizationMetricsJsonList));

  }

  if(m_effectiveRecommendationPreferencesHasBeenSet)
  {
   payload.WithObject("effectiveRecommendationPreferences", m_effectiveRecommendationPreferences.Jsonize());

  }

  if(m_lookbackPeriodInDaysHasBeenSet)
  {
   payload.WithDouble("lookbackPeriodInDays", m_lookbackPeriodInDays);

  }

  if(m_lastRefreshTimestampHasBeenSet)
  {
   payload.WithDouble("lastRefreshTimestamp", m_lastRefreshTimestamp.SecondsWithMSPrecision());
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
