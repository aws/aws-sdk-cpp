/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/Filter.h>
#include <aws/eventbridgev2/model/FilterLanguage.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {

/**
 * <p>Configuration for filtering events delivered to a subscriber. On
 * CreateSubscriber, Filters is required and must contain at least one Filter with
 * a non-empty Pattern. On UpdateSubscriber, an empty
 * <code>FilterConfiguration:{}</code> clears the existing filter. Any non-empty
 * shape (including <code>{Language:X}</code> without Filters) must contain a valid
 * Filters list — same contract as CreateSubscriber. A non-empty Filters list
 * overwrites; an omitted FilterConfiguration preserves existing state. All Filters
 * are implicitly ANDed — an event must match every Filter to be
 * delivered.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/FilterConfiguration">AWS
 * API Reference</a></p>
 */
class FilterConfiguration {
 public:
  AWS_EVENTBRIDGEV2_API FilterConfiguration() = default;
  AWS_EVENTBRIDGEV2_API FilterConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API FilterConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Defaults to EVENT_BRIDGE_PATTERN when not specified.</p>
   */
  inline FilterLanguage GetLanguage() const { return m_language; }
  inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
  inline void SetLanguage(FilterLanguage value) {
    m_languageHasBeenSet = true;
    m_language = value;
  }
  inline FilterConfiguration& WithLanguage(FilterLanguage value) {
    SetLanguage(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<Filter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<Filter>>
  FilterConfiguration& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = Filter>
  FilterConfiguration& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}
 private:
  FilterLanguage m_language{FilterLanguage::NOT_SET};

  Aws::Vector<Filter> m_filters;
  bool m_languageHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
