/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MetricDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

MetricDefinition::MetricDefinition(JsonView jsonValue) { *this = jsonValue; }

MetricDefinition& MetricDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MetricCalculation")) {
    m_metricCalculation = jsonValue.GetObject("MetricCalculation");
    m_metricCalculationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationMethod")) {
    m_creationMethod = MetricCreationMethodMapper::GetMetricCreationMethodForName(jsonValue.GetString("CreationMethod"));
    m_creationMethodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = MetricStatusMapper::GetMetricStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = MetricTypeMapper::GetMetricTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Unit")) {
    m_unit = MetricUnitMapper::GetMetricUnitForName(jsonValue.GetString("Unit"));
    m_unitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PositiveTrendIndicator")) {
    m_positiveTrendIndicator = TrendIndicatorMapper::GetTrendIndicatorForName(jsonValue.GetString("PositiveTrendIndicator"));
    m_positiveTrendIndicatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Groupings")) {
    Aws::Utils::Array<JsonView> groupingsJsonList = jsonValue.GetArray("Groupings");
    for (unsigned groupingsIndex = 0; groupingsIndex < groupingsJsonList.GetLength(); ++groupingsIndex) {
      m_groupings.push_back(groupingsJsonList[groupingsIndex].AsString());
    }
    m_groupingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Filters")) {
    Aws::Utils::Array<JsonView> filtersJsonList = jsonValue.GetArray("Filters");
    for (unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex) {
      m_filters.push_back(filtersJsonList[filtersIndex].AsObject());
    }
    m_filtersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EffectiveTime")) {
    m_effectiveTime = jsonValue.GetDouble("EffectiveTime");
    m_effectiveTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RefreshRate")) {
    m_refreshRate = jsonValue.GetInt64("RefreshRate");
    m_refreshRateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Category")) {
    m_category = jsonValue.GetString("Category");
    m_categoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SupportedStats")) {
    Aws::Utils::Array<JsonView> supportedStatsJsonList = jsonValue.GetArray("SupportedStats");
    for (unsigned supportedStatsIndex = 0; supportedStatsIndex < supportedStatsJsonList.GetLength(); ++supportedStatsIndex) {
      m_supportedStats.push_back(supportedStatsJsonList[supportedStatsIndex].AsString());
    }
    m_supportedStatsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DefaultStat")) {
    m_defaultStat = jsonValue.GetString("DefaultStat");
    m_defaultStatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SupportsPreaggregateCalculation")) {
    m_supportsPreaggregateCalculation = jsonValue.GetBool("SupportsPreaggregateCalculation");
    m_supportsPreaggregateCalculationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SupportsCustomCalculation")) {
    m_supportsCustomCalculation = jsonValue.GetBool("SupportsCustomCalculation");
    m_supportsCustomCalculationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrimaryEventSource")) {
    m_primaryEventSource = jsonValue.GetString("PrimaryEventSource");
    m_primaryEventSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrimaryEventSourceEffectiveTimestampType")) {
    m_primaryEventSourceEffectiveTimestampType = jsonValue.GetString("PrimaryEventSourceEffectiveTimestampType");
    m_primaryEventSourceEffectiveTimestampTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTime")) {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedUser")) {
    m_createdUser = jsonValue.GetObject("CreatedUser");
    m_createdUserHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedRegion")) {
    m_lastModifiedRegion = jsonValue.GetString("LastModifiedRegion");
    m_lastModifiedRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedUser")) {
    m_lastModifiedUser = jsonValue.GetObject("LastModifiedUser");
    m_lastModifiedUserHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricDefinition::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_metricCalculationHasBeenSet) {
    payload.WithObject("MetricCalculation", m_metricCalculation.Jsonize());
  }

  if (m_creationMethodHasBeenSet) {
    payload.WithString("CreationMethod", MetricCreationMethodMapper::GetNameForMetricCreationMethod(m_creationMethod));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", MetricStatusMapper::GetNameForMetricStatus(m_status));
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", MetricTypeMapper::GetNameForMetricType(m_type));
  }

  if (m_unitHasBeenSet) {
    payload.WithString("Unit", MetricUnitMapper::GetNameForMetricUnit(m_unit));
  }

  if (m_positiveTrendIndicatorHasBeenSet) {
    payload.WithString("PositiveTrendIndicator", TrendIndicatorMapper::GetNameForTrendIndicator(m_positiveTrendIndicator));
  }

  if (m_groupingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> groupingsJsonList(m_groupings.size());
    for (unsigned groupingsIndex = 0; groupingsIndex < groupingsJsonList.GetLength(); ++groupingsIndex) {
      groupingsJsonList[groupingsIndex].AsString(m_groupings[groupingsIndex]);
    }
    payload.WithArray("Groupings", std::move(groupingsJsonList));
  }

  if (m_filtersHasBeenSet) {
    Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
    for (unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex) {
      filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
    }
    payload.WithArray("Filters", std::move(filtersJsonList));
  }

  if (m_effectiveTimeHasBeenSet) {
    payload.WithDouble("EffectiveTime", m_effectiveTime.SecondsWithMSPrecision());
  }

  if (m_refreshRateHasBeenSet) {
    payload.WithInt64("RefreshRate", m_refreshRate);
  }

  if (m_categoryHasBeenSet) {
    payload.WithString("Category", m_category);
  }

  if (m_supportedStatsHasBeenSet) {
    Aws::Utils::Array<JsonValue> supportedStatsJsonList(m_supportedStats.size());
    for (unsigned supportedStatsIndex = 0; supportedStatsIndex < supportedStatsJsonList.GetLength(); ++supportedStatsIndex) {
      supportedStatsJsonList[supportedStatsIndex].AsString(m_supportedStats[supportedStatsIndex]);
    }
    payload.WithArray("SupportedStats", std::move(supportedStatsJsonList));
  }

  if (m_defaultStatHasBeenSet) {
    payload.WithString("DefaultStat", m_defaultStat);
  }

  if (m_supportsPreaggregateCalculationHasBeenSet) {
    payload.WithBool("SupportsPreaggregateCalculation", m_supportsPreaggregateCalculation);
  }

  if (m_supportsCustomCalculationHasBeenSet) {
    payload.WithBool("SupportsCustomCalculation", m_supportsCustomCalculation);
  }

  if (m_primaryEventSourceHasBeenSet) {
    payload.WithString("PrimaryEventSource", m_primaryEventSource);
  }

  if (m_primaryEventSourceEffectiveTimestampTypeHasBeenSet) {
    payload.WithString("PrimaryEventSourceEffectiveTimestampType", m_primaryEventSourceEffectiveTimestampType);
  }

  if (m_createdTimeHasBeenSet) {
    payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if (m_createdUserHasBeenSet) {
    payload.WithObject("CreatedUser", m_createdUser.Jsonize());
  }

  if (m_lastModifiedRegionHasBeenSet) {
    payload.WithString("LastModifiedRegion", m_lastModifiedRegion);
  }

  if (m_lastModifiedTimeHasBeenSet) {
    payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if (m_lastModifiedUserHasBeenSet) {
    payload.WithObject("LastModifiedUser", m_lastModifiedUser.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
