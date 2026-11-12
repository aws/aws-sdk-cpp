/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/FetchVerdict.h>
#include <aws/guardduty/model/FindingTypeDocumentation.h>
#include <aws/guardduty/model/InvestigationDetectorFeatureConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains the data that GuardDuty received in response to a request during an
 * investigation. The members that are set depend on the <code>FetchType</code> of
 * the record.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/FetchResult">AWS
 * API Reference</a></p>
 */
class FetchResult {
 public:
  AWS_GUARDDUTY_API FetchResult() = default;
  AWS_GUARDDUTY_API FetchResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API FetchResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifiers of the items that were returned, such as finding IDs, event
   * IDs, signal IDs, or account IDs, depending on <code>FetchType</code>. The list
   * contains at most 50 identifiers; <code>TotalCount</code> can be larger.</p>
   */
  inline const Aws::Vector<Aws::String>& GetItemIds() const { return m_itemIds; }
  inline bool ItemIdsHasBeenSet() const { return m_itemIdsHasBeenSet; }
  template <typename ItemIdsT = Aws::Vector<Aws::String>>
  void SetItemIds(ItemIdsT&& value) {
    m_itemIdsHasBeenSet = true;
    m_itemIds = std::forward<ItemIdsT>(value);
  }
  template <typename ItemIdsT = Aws::Vector<Aws::String>>
  FetchResult& WithItemIds(ItemIdsT&& value) {
    SetItemIds(std::forward<ItemIdsT>(value));
    return *this;
  }
  template <typename ItemIdsT = Aws::String>
  FetchResult& AddItemIds(ItemIdsT&& value) {
    m_itemIdsHasBeenSet = true;
    m_itemIds.emplace_back(std::forward<ItemIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of items that were returned. This value can be greater than
   * the number of identifiers in <code>ItemIds</code>.</p>
   */
  inline long long GetTotalCount() const { return m_totalCount; }
  inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }
  inline void SetTotalCount(long long value) {
    m_totalCountHasBeenSet = true;
    m_totalCount = value;
  }
  inline FetchResult& WithTotalCount(long long value) {
    SetTotalCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the detector features that GuardDuty retrieved.</p>
   */
  inline const Aws::Vector<InvestigationDetectorFeatureConfiguration>& GetFeatures() const { return m_features; }
  inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }
  template <typename FeaturesT = Aws::Vector<InvestigationDetectorFeatureConfiguration>>
  void SetFeatures(FeaturesT&& value) {
    m_featuresHasBeenSet = true;
    m_features = std::forward<FeaturesT>(value);
  }
  template <typename FeaturesT = Aws::Vector<InvestigationDetectorFeatureConfiguration>>
  FetchResult& WithFeatures(FeaturesT&& value) {
    SetFeatures(std::forward<FeaturesT>(value));
    return *this;
  }
  template <typename FeaturesT = InvestigationDetectorFeatureConfiguration>
  FetchResult& AddFeatures(FeaturesT&& value) {
    m_featuresHasBeenSet = true;
    m_features.emplace_back(std::forward<FeaturesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reputation verdict for the threat indicator. Possible values are
   * <code>THREAT</code>, <code>BENIGN</code>, and <code>NEUTRAL</code>. If the
   * lookup returned more than one result, the verdict describes the first
   * result.</p>
   */
  inline FetchVerdict GetVerdict() const { return m_verdict; }
  inline bool VerdictHasBeenSet() const { return m_verdictHasBeenSet; }
  inline void SetVerdict(FetchVerdict value) {
    m_verdictHasBeenSet = true;
    m_verdict = value;
  }
  inline FetchResult& WithVerdict(FetchVerdict value) {
    SetVerdict(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The documentation for the finding type that GuardDuty retrieved.</p>
   */
  inline const FindingTypeDocumentation& GetDocumentation() const { return m_documentation; }
  inline bool DocumentationHasBeenSet() const { return m_documentationHasBeenSet; }
  template <typename DocumentationT = FindingTypeDocumentation>
  void SetDocumentation(DocumentationT&& value) {
    m_documentationHasBeenSet = true;
    m_documentation = std::forward<DocumentationT>(value);
  }
  template <typename DocumentationT = FindingTypeDocumentation>
  FetchResult& WithDocumentation(DocumentationT&& value) {
    SetDocumentation(std::forward<DocumentationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_itemIds;

  long long m_totalCount{0};

  Aws::Vector<InvestigationDetectorFeatureConfiguration> m_features;

  FetchVerdict m_verdict{FetchVerdict::NOT_SET};

  FindingTypeDocumentation m_documentation;
  bool m_itemIdsHasBeenSet = false;
  bool m_totalCountHasBeenSet = false;
  bool m_featuresHasBeenSet = false;
  bool m_verdictHasBeenSet = false;
  bool m_documentationHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
