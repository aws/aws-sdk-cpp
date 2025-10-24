﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/AttributeDetails.h>
#include <aws/customer-profiles/model/Conditions.h>
#include <aws/customer-profiles/model/Filter.h>
#include <aws/customer-profiles/model/Readiness.h>
#include <aws/customer-profiles/model/ReadinessStatus.h>
#include <aws/customer-profiles/model/Statistic.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {
class CreateCalculatedAttributeDefinitionResult {
 public:
  AWS_CUSTOMERPROFILES_API CreateCalculatedAttributeDefinitionResult() = default;
  AWS_CUSTOMERPROFILES_API CreateCalculatedAttributeDefinitionResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CUSTOMERPROFILES_API CreateCalculatedAttributeDefinitionResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique name of the calculated attribute.</p>
   */
  inline const Aws::String& GetCalculatedAttributeName() const { return m_calculatedAttributeName; }
  template <typename CalculatedAttributeNameT = Aws::String>
  void SetCalculatedAttributeName(CalculatedAttributeNameT&& value) {
    m_calculatedAttributeNameHasBeenSet = true;
    m_calculatedAttributeName = std::forward<CalculatedAttributeNameT>(value);
  }
  template <typename CalculatedAttributeNameT = Aws::String>
  CreateCalculatedAttributeDefinitionResult& WithCalculatedAttributeName(CalculatedAttributeNameT&& value) {
    SetCalculatedAttributeName(std::forward<CalculatedAttributeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the calculated attribute.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  CreateCalculatedAttributeDefinitionResult& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the calculated attribute.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateCalculatedAttributeDefinitionResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Mathematical expression and a list of attribute items specified in that
   * expression.</p>
   */
  inline const AttributeDetails& GetAttributeDetails() const { return m_attributeDetails; }
  template <typename AttributeDetailsT = AttributeDetails>
  void SetAttributeDetails(AttributeDetailsT&& value) {
    m_attributeDetailsHasBeenSet = true;
    m_attributeDetails = std::forward<AttributeDetailsT>(value);
  }
  template <typename AttributeDetailsT = AttributeDetails>
  CreateCalculatedAttributeDefinitionResult& WithAttributeDetails(AttributeDetailsT&& value) {
    SetAttributeDetails(std::forward<AttributeDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The conditions including range, object count, and threshold for the
   * calculated attribute.</p>
   */
  inline const Conditions& GetConditions() const { return m_conditions; }
  template <typename ConditionsT = Conditions>
  void SetConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions = std::forward<ConditionsT>(value);
  }
  template <typename ConditionsT = Conditions>
  CreateCalculatedAttributeDefinitionResult& WithConditions(ConditionsT&& value) {
    SetConditions(std::forward<ConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filter that was used as part of the request.</p>
   */
  inline const Filter& GetFilter() const { return m_filter; }
  template <typename FilterT = Filter>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = Filter>
  CreateCalculatedAttributeDefinitionResult& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The aggregation operation to perform for the calculated attribute.</p>
   */
  inline Statistic GetStatistic() const { return m_statistic; }
  inline void SetStatistic(Statistic value) {
    m_statisticHasBeenSet = true;
    m_statistic = value;
  }
  inline CreateCalculatedAttributeDefinitionResult& WithStatistic(Statistic value) {
    SetStatistic(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the calculated attribute definition was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreateCalculatedAttributeDefinitionResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the calculated attribute definition was most recently
   * edited.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  CreateCalculatedAttributeDefinitionResult& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether historical data ingested before the Calculated Attribute was created
   * should be included in calculations.</p>
   */
  inline bool GetUseHistoricalData() const { return m_useHistoricalData; }
  inline void SetUseHistoricalData(bool value) {
    m_useHistoricalDataHasBeenSet = true;
    m_useHistoricalData = value;
  }
  inline CreateCalculatedAttributeDefinitionResult& WithUseHistoricalData(bool value) {
    SetUseHistoricalData(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Status of the Calculated Attribute creation (whether all historical data has
   * been indexed.)</p>
   */
  inline ReadinessStatus GetStatus() const { return m_status; }
  inline void SetStatus(ReadinessStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateCalculatedAttributeDefinitionResult& WithStatus(ReadinessStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information indicating if the Calculated Attribute is ready for use by
   * confirming all historical data has been processed and reflected.</p>
   */
  inline const Readiness& GetReadiness() const { return m_readiness; }
  template <typename ReadinessT = Readiness>
  void SetReadiness(ReadinessT&& value) {
    m_readinessHasBeenSet = true;
    m_readiness = std::forward<ReadinessT>(value);
  }
  template <typename ReadinessT = Readiness>
  CreateCalculatedAttributeDefinitionResult& WithReadiness(ReadinessT&& value) {
    SetReadiness(std::forward<ReadinessT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags used to organize, track, or control access for this resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateCalculatedAttributeDefinitionResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateCalculatedAttributeDefinitionResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateCalculatedAttributeDefinitionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_calculatedAttributeName;
  bool m_calculatedAttributeNameHasBeenSet = false;

  Aws::String m_displayName;
  bool m_displayNameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  AttributeDetails m_attributeDetails;
  bool m_attributeDetailsHasBeenSet = false;

  Conditions m_conditions;
  bool m_conditionsHasBeenSet = false;

  Filter m_filter;
  bool m_filterHasBeenSet = false;

  Statistic m_statistic{Statistic::NOT_SET};
  bool m_statisticHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_lastUpdatedAt{};
  bool m_lastUpdatedAtHasBeenSet = false;

  bool m_useHistoricalData{false};
  bool m_useHistoricalDataHasBeenSet = false;

  ReadinessStatus m_status{ReadinessStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Readiness m_readiness;
  bool m_readinessHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
