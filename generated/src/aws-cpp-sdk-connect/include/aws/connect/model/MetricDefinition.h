/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AvailableFilter.h>
#include <aws/connect/model/CreatedByInfo.h>
#include <aws/connect/model/MetricCalculation.h>
#include <aws/connect/model/MetricCreationMethod.h>
#include <aws/connect/model/MetricStatus.h>
#include <aws/connect/model/MetricType.h>
#include <aws/connect/model/MetricUnit.h>
#include <aws/connect/model/TrendIndicator.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Contains the full definition of a metric, including its calculation, unit,
 * status, and trend indicator.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MetricDefinition">AWS
 * API Reference</a></p>
 */
class MetricDefinition {
 public:
  AWS_CONNECT_API MetricDefinition() = default;
  AWS_CONNECT_API MetricDefinition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API MetricDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the metric. May be qualified with
   * <code>$SAVED</code> or <code>$LATEST</code>.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  MetricDefinition& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the metric.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  MetricDefinition& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the metric.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  MetricDefinition& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the metric.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  MetricDefinition& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The calculation definition for the metric.</p>
   */
  inline const MetricCalculation& GetMetricCalculation() const { return m_metricCalculation; }
  inline bool MetricCalculationHasBeenSet() const { return m_metricCalculationHasBeenSet; }
  template <typename MetricCalculationT = MetricCalculation>
  void SetMetricCalculation(MetricCalculationT&& value) {
    m_metricCalculationHasBeenSet = true;
    m_metricCalculation = std::forward<MetricCalculationT>(value);
  }
  template <typename MetricCalculationT = MetricCalculation>
  MetricDefinition& WithMetricCalculation(MetricCalculationT&& value) {
    SetMetricCalculation(std::forward<MetricCalculationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The method used to create the metric. Valid values:
   * <code>SERVICE_LEVEL_BUILDER</code> (created with the guided service-level
   * experience) | <code>METRIC_BUILDER</code> (created with the free-form metric
   * builder).</p>
   */
  inline MetricCreationMethod GetCreationMethod() const { return m_creationMethod; }
  inline bool CreationMethodHasBeenSet() const { return m_creationMethodHasBeenSet; }
  inline void SetCreationMethod(MetricCreationMethod value) {
    m_creationMethodHasBeenSet = true;
    m_creationMethod = value;
  }
  inline MetricDefinition& WithCreationMethod(MetricCreationMethod value) {
    SetCreationMethod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The publish status of the metric. Valid values: <code>PUBLISHED</code> |
   * <code>SAVED</code>.</p>
   */
  inline MetricStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(MetricStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline MetricDefinition& WithStatus(MetricStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the metric. Valid values: <code>AWS_MANAGED</code> |
   * <code>CUSTOMER_MANAGED</code>.</p>
   */
  inline MetricType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(MetricType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline MetricDefinition& WithType(MetricType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display unit for the metric's data.</p>
   */
  inline MetricUnit GetUnit() const { return m_unit; }
  inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
  inline void SetUnit(MetricUnit value) {
    m_unitHasBeenSet = true;
    m_unit = value;
  }
  inline MetricDefinition& WithUnit(MetricUnit value) {
    SetUnit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How an increase in the metric value should be interpreted. Valid values:
   * <code>POSITIVE</code>, <code>NEUTRAL</code>, <code>NEGATIVE</code>.</p>
   */
  inline TrendIndicator GetPositiveTrendIndicator() const { return m_positiveTrendIndicator; }
  inline bool PositiveTrendIndicatorHasBeenSet() const { return m_positiveTrendIndicatorHasBeenSet; }
  inline void SetPositiveTrendIndicator(TrendIndicator value) {
    m_positiveTrendIndicatorHasBeenSet = true;
    m_positiveTrendIndicator = value;
  }
  inline MetricDefinition& WithPositiveTrendIndicator(TrendIndicator value) {
    SetPositiveTrendIndicator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The groupings available for this metric.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGroupings() const { return m_groupings; }
  inline bool GroupingsHasBeenSet() const { return m_groupingsHasBeenSet; }
  template <typename GroupingsT = Aws::Vector<Aws::String>>
  void SetGroupings(GroupingsT&& value) {
    m_groupingsHasBeenSet = true;
    m_groupings = std::forward<GroupingsT>(value);
  }
  template <typename GroupingsT = Aws::Vector<Aws::String>>
  MetricDefinition& WithGroupings(GroupingsT&& value) {
    SetGroupings(std::forward<GroupingsT>(value));
    return *this;
  }
  template <typename GroupingsT = Aws::String>
  MetricDefinition& AddGroupings(GroupingsT&& value) {
    m_groupingsHasBeenSet = true;
    m_groupings.emplace_back(std::forward<GroupingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filters applied to the metric.</p>
   */
  inline const Aws::Vector<AvailableFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<AvailableFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<AvailableFilter>>
  MetricDefinition& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = AvailableFilter>
  MetricDefinition& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The earliest time that can be queried for this metric.</p>
   */
  inline const Aws::Utils::DateTime& GetEffectiveTime() const { return m_effectiveTime; }
  inline bool EffectiveTimeHasBeenSet() const { return m_effectiveTimeHasBeenSet; }
  template <typename EffectiveTimeT = Aws::Utils::DateTime>
  void SetEffectiveTime(EffectiveTimeT&& value) {
    m_effectiveTimeHasBeenSet = true;
    m_effectiveTime = std::forward<EffectiveTimeT>(value);
  }
  template <typename EffectiveTimeT = Aws::Utils::DateTime>
  MetricDefinition& WithEffectiveTime(EffectiveTimeT&& value) {
    SetEffectiveTime(std::forward<EffectiveTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum interval, in seconds, between data refreshes for this metric.</p>
   */
  inline long long GetRefreshRate() const { return m_refreshRate; }
  inline bool RefreshRateHasBeenSet() const { return m_refreshRateHasBeenSet; }
  inline void SetRefreshRate(long long value) {
    m_refreshRateHasBeenSet = true;
    m_refreshRate = value;
  }
  inline MetricDefinition& WithRefreshRate(long long value) {
    SetRefreshRate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category of the metric.</p>
   */
  inline const Aws::String& GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  template <typename CategoryT = Aws::String>
  void SetCategory(CategoryT&& value) {
    m_categoryHasBeenSet = true;
    m_category = std::forward<CategoryT>(value);
  }
  template <typename CategoryT = Aws::String>
  MetricDefinition& WithCategory(CategoryT&& value) {
    SetCategory(std::forward<CategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The stat aggregations available for this metric.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSupportedStats() const { return m_supportedStats; }
  inline bool SupportedStatsHasBeenSet() const { return m_supportedStatsHasBeenSet; }
  template <typename SupportedStatsT = Aws::Vector<Aws::String>>
  void SetSupportedStats(SupportedStatsT&& value) {
    m_supportedStatsHasBeenSet = true;
    m_supportedStats = std::forward<SupportedStatsT>(value);
  }
  template <typename SupportedStatsT = Aws::Vector<Aws::String>>
  MetricDefinition& WithSupportedStats(SupportedStatsT&& value) {
    SetSupportedStats(std::forward<SupportedStatsT>(value));
    return *this;
  }
  template <typename SupportedStatsT = Aws::String>
  MetricDefinition& AddSupportedStats(SupportedStatsT&& value) {
    m_supportedStatsHasBeenSet = true;
    m_supportedStats.emplace_back(std::forward<SupportedStatsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default stat aggregation for the metric.</p>
   */
  inline const Aws::String& GetDefaultStat() const { return m_defaultStat; }
  inline bool DefaultStatHasBeenSet() const { return m_defaultStatHasBeenSet; }
  template <typename DefaultStatT = Aws::String>
  void SetDefaultStat(DefaultStatT&& value) {
    m_defaultStatHasBeenSet = true;
    m_defaultStat = std::forward<DefaultStatT>(value);
  }
  template <typename DefaultStatT = Aws::String>
  MetricDefinition& WithDefaultStat(DefaultStatT&& value) {
    SetDefaultStat(std::forward<DefaultStatT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the metric can be used inside aggregating statistical
   * functions (SUM, AVG, etc.) in custom metric calculations.</p>
   */
  inline bool GetSupportsPreaggregateCalculation() const { return m_supportsPreaggregateCalculation; }
  inline bool SupportsPreaggregateCalculationHasBeenSet() const { return m_supportsPreaggregateCalculationHasBeenSet; }
  inline void SetSupportsPreaggregateCalculation(bool value) {
    m_supportsPreaggregateCalculationHasBeenSet = true;
    m_supportsPreaggregateCalculation = value;
  }
  inline MetricDefinition& WithSupportsPreaggregateCalculation(bool value) {
    SetSupportsPreaggregateCalculation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the metric can be used as a component of custom
   * metrics.</p>
   */
  inline bool GetSupportsCustomCalculation() const { return m_supportsCustomCalculation; }
  inline bool SupportsCustomCalculationHasBeenSet() const { return m_supportsCustomCalculationHasBeenSet; }
  inline void SetSupportsCustomCalculation(bool value) {
    m_supportsCustomCalculationHasBeenSet = true;
    m_supportsCustomCalculation = value;
  }
  inline MetricDefinition& WithSupportsCustomCalculation(bool value) {
    SetSupportsCustomCalculation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The primary event source for the metric data.</p>
   */
  inline const Aws::String& GetPrimaryEventSource() const { return m_primaryEventSource; }
  inline bool PrimaryEventSourceHasBeenSet() const { return m_primaryEventSourceHasBeenSet; }
  template <typename PrimaryEventSourceT = Aws::String>
  void SetPrimaryEventSource(PrimaryEventSourceT&& value) {
    m_primaryEventSourceHasBeenSet = true;
    m_primaryEventSource = std::forward<PrimaryEventSourceT>(value);
  }
  template <typename PrimaryEventSourceT = Aws::String>
  MetricDefinition& WithPrimaryEventSource(PrimaryEventSourceT&& value) {
    SetPrimaryEventSource(std::forward<PrimaryEventSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp type that determines where the metric appears on a time
   * series.</p>
   */
  inline const Aws::String& GetPrimaryEventSourceEffectiveTimestampType() const { return m_primaryEventSourceEffectiveTimestampType; }
  inline bool PrimaryEventSourceEffectiveTimestampTypeHasBeenSet() const { return m_primaryEventSourceEffectiveTimestampTypeHasBeenSet; }
  template <typename PrimaryEventSourceEffectiveTimestampTypeT = Aws::String>
  void SetPrimaryEventSourceEffectiveTimestampType(PrimaryEventSourceEffectiveTimestampTypeT&& value) {
    m_primaryEventSourceEffectiveTimestampTypeHasBeenSet = true;
    m_primaryEventSourceEffectiveTimestampType = std::forward<PrimaryEventSourceEffectiveTimestampTypeT>(value);
  }
  template <typename PrimaryEventSourceEffectiveTimestampTypeT = Aws::String>
  MetricDefinition& WithPrimaryEventSourceEffectiveTimestampType(PrimaryEventSourceEffectiveTimestampTypeT&& value) {
    SetPrimaryEventSourceEffectiveTimestampType(std::forward<PrimaryEventSourceEffectiveTimestampTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the metric was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  MetricDefinition& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user that created the metric. The creator for metrics created through the
   * CreateMetric API will be <code>Amazon Connect API</code>.</p>
   */
  inline const CreatedByInfo& GetCreatedUser() const { return m_createdUser; }
  inline bool CreatedUserHasBeenSet() const { return m_createdUserHasBeenSet; }
  template <typename CreatedUserT = CreatedByInfo>
  void SetCreatedUser(CreatedUserT&& value) {
    m_createdUserHasBeenSet = true;
    m_createdUser = std::forward<CreatedUserT>(value);
  }
  template <typename CreatedUserT = CreatedByInfo>
  MetricDefinition& WithCreatedUser(CreatedUserT&& value) {
    SetCreatedUser(std::forward<CreatedUserT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The region where the metric was last modified.</p>
   */
  inline const Aws::String& GetLastModifiedRegion() const { return m_lastModifiedRegion; }
  inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
  template <typename LastModifiedRegionT = Aws::String>
  void SetLastModifiedRegion(LastModifiedRegionT&& value) {
    m_lastModifiedRegionHasBeenSet = true;
    m_lastModifiedRegion = std::forward<LastModifiedRegionT>(value);
  }
  template <typename LastModifiedRegionT = Aws::String>
  MetricDefinition& WithLastModifiedRegion(LastModifiedRegionT&& value) {
    SetLastModifiedRegion(std::forward<LastModifiedRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the metric was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  MetricDefinition& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user that last modified the metric. For modifications made through the
   * API, this will be <code>Amazon Connect API</code>.</p>
   */
  inline const CreatedByInfo& GetLastModifiedUser() const { return m_lastModifiedUser; }
  inline bool LastModifiedUserHasBeenSet() const { return m_lastModifiedUserHasBeenSet; }
  template <typename LastModifiedUserT = CreatedByInfo>
  void SetLastModifiedUser(LastModifiedUserT&& value) {
    m_lastModifiedUserHasBeenSet = true;
    m_lastModifiedUser = std::forward<LastModifiedUserT>(value);
  }
  template <typename LastModifiedUserT = CreatedByInfo>
  MetricDefinition& WithLastModifiedUser(LastModifiedUserT&& value) {
    SetLastModifiedUser(std::forward<LastModifiedUserT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags used to organize, track, or control access for this resource. For
   * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  MetricDefinition& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  MetricDefinition& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_id;

  Aws::String m_name;

  Aws::String m_description;

  MetricCalculation m_metricCalculation;

  MetricCreationMethod m_creationMethod{MetricCreationMethod::NOT_SET};

  MetricStatus m_status{MetricStatus::NOT_SET};

  MetricType m_type{MetricType::NOT_SET};

  MetricUnit m_unit{MetricUnit::NOT_SET};

  TrendIndicator m_positiveTrendIndicator{TrendIndicator::NOT_SET};

  Aws::Vector<Aws::String> m_groupings;

  Aws::Vector<AvailableFilter> m_filters;

  Aws::Utils::DateTime m_effectiveTime{};

  long long m_refreshRate{0};

  Aws::String m_category;

  Aws::Vector<Aws::String> m_supportedStats;

  Aws::String m_defaultStat;

  bool m_supportsPreaggregateCalculation{false};

  bool m_supportsCustomCalculation{false};

  Aws::String m_primaryEventSource;

  Aws::String m_primaryEventSourceEffectiveTimestampType;

  Aws::Utils::DateTime m_createdTime{};

  CreatedByInfo m_createdUser;

  Aws::String m_lastModifiedRegion;

  Aws::Utils::DateTime m_lastModifiedTime{};

  CreatedByInfo m_lastModifiedUser;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_metricCalculationHasBeenSet = false;
  bool m_creationMethodHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_unitHasBeenSet = false;
  bool m_positiveTrendIndicatorHasBeenSet = false;
  bool m_groupingsHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_effectiveTimeHasBeenSet = false;
  bool m_refreshRateHasBeenSet = false;
  bool m_categoryHasBeenSet = false;
  bool m_supportedStatsHasBeenSet = false;
  bool m_defaultStatHasBeenSet = false;
  bool m_supportsPreaggregateCalculationHasBeenSet = false;
  bool m_supportsCustomCalculationHasBeenSet = false;
  bool m_primaryEventSourceHasBeenSet = false;
  bool m_primaryEventSourceEffectiveTimestampTypeHasBeenSet = false;
  bool m_createdTimeHasBeenSet = false;
  bool m_createdUserHasBeenSet = false;
  bool m_lastModifiedRegionHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_lastModifiedUserHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
