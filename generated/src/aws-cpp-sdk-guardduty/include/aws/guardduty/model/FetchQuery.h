/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/FetchCriterion.h>
#include <aws/guardduty/model/FetchTimeWindow.h>
#include <aws/guardduty/model/InvestigationIndicatorType.h>

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
 * <p>Contains the parameters of a request that GuardDuty made to retrieve data
 * during an investigation. The members that are set depend on the
 * <code>FetchType</code> of the record.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/FetchQuery">AWS
 * API Reference</a></p>
 */
class FetchQuery {
 public:
  AWS_GUARDDUTY_API FetchQuery() = default;
  AWS_GUARDDUTY_API FetchQuery(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API FetchQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The filter criteria that GuardDuty applied to the request.</p>
   */
  inline const Aws::Vector<FetchCriterion>& GetCriteria() const { return m_criteria; }
  inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }
  template <typename CriteriaT = Aws::Vector<FetchCriterion>>
  void SetCriteria(CriteriaT&& value) {
    m_criteriaHasBeenSet = true;
    m_criteria = std::forward<CriteriaT>(value);
  }
  template <typename CriteriaT = Aws::Vector<FetchCriterion>>
  FetchQuery& WithCriteria(CriteriaT&& value) {
    SetCriteria(std::forward<CriteriaT>(value));
    return *this;
  }
  template <typename CriteriaT = FetchCriterion>
  FetchQuery& AddCriteria(CriteriaT&& value) {
    m_criteriaHasBeenSet = true;
    m_criteria.emplace_back(std::forward<CriteriaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time range of the data that GuardDuty requested.</p>
   */
  inline const FetchTimeWindow& GetTimeWindow() const { return m_timeWindow; }
  inline bool TimeWindowHasBeenSet() const { return m_timeWindowHasBeenSet; }
  template <typename TimeWindowT = FetchTimeWindow>
  void SetTimeWindow(TimeWindowT&& value) {
    m_timeWindowHasBeenSet = true;
    m_timeWindow = std::forward<TimeWindowT>(value);
  }
  template <typename TimeWindowT = FetchTimeWindow>
  FetchQuery& WithTimeWindow(TimeWindowT&& value) {
    SetTimeWindow(std::forward<TimeWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of rows that GuardDuty requested. Valid values are 1 to
   * 1,000.</p>
   */
  inline int GetRowLimit() const { return m_rowLimit; }
  inline bool RowLimitHasBeenSet() const { return m_rowLimitHasBeenSet; }
  inline void SetRowLimit(int value) {
    m_rowLimitHasBeenSet = true;
    m_rowLimit = value;
  }
  inline FetchQuery& WithRowLimit(int value) {
    SetRowLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID that the request was made for.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  FetchQuery& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The threat indicator that GuardDuty looked up, such as an IP address, a
   * domain, or a file hash.</p>
   */
  inline const Aws::String& GetIndicator() const { return m_indicator; }
  inline bool IndicatorHasBeenSet() const { return m_indicatorHasBeenSet; }
  template <typename IndicatorT = Aws::String>
  void SetIndicator(IndicatorT&& value) {
    m_indicatorHasBeenSet = true;
    m_indicator = std::forward<IndicatorT>(value);
  }
  template <typename IndicatorT = Aws::String>
  FetchQuery& WithIndicator(IndicatorT&& value) {
    SetIndicator(std::forward<IndicatorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the threat indicator. Possible values are <code>IP</code>,
   * <code>DOMAIN</code>, and <code>FILE</code>.</p>
   */
  inline InvestigationIndicatorType GetIndicatorType() const { return m_indicatorType; }
  inline bool IndicatorTypeHasBeenSet() const { return m_indicatorTypeHasBeenSet; }
  inline void SetIndicatorType(InvestigationIndicatorType value) {
    m_indicatorTypeHasBeenSet = true;
    m_indicatorType = value;
  }
  inline FetchQuery& WithIndicatorType(InvestigationIndicatorType value) {
    SetIndicatorType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The finding type whose documentation GuardDuty retrieved.</p>
   */
  inline const Aws::String& GetFindingType() const { return m_findingType; }
  inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }
  template <typename FindingTypeT = Aws::String>
  void SetFindingType(FindingTypeT&& value) {
    m_findingTypeHasBeenSet = true;
    m_findingType = std::forward<FindingTypeT>(value);
  }
  template <typename FindingTypeT = Aws::String>
  FetchQuery& WithFindingType(FindingTypeT&& value) {
    SetFindingType(std::forward<FindingTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the finding that GuardDuty retrieved.</p>
   */
  inline const Aws::String& GetFindingId() const { return m_findingId; }
  inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
  template <typename FindingIdT = Aws::String>
  void SetFindingId(FindingIdT&& value) {
    m_findingIdHasBeenSet = true;
    m_findingId = std::forward<FindingIdT>(value);
  }
  template <typename FindingIdT = Aws::String>
  FetchQuery& WithFindingId(FindingIdT&& value) {
    SetFindingId(std::forward<FindingIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<FetchCriterion> m_criteria;

  FetchTimeWindow m_timeWindow;

  int m_rowLimit{0};

  Aws::String m_accountId;

  Aws::String m_indicator;

  InvestigationIndicatorType m_indicatorType{InvestigationIndicatorType::NOT_SET};

  Aws::String m_findingType;

  Aws::String m_findingId;
  bool m_criteriaHasBeenSet = false;
  bool m_timeWindowHasBeenSet = false;
  bool m_rowLimitHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_indicatorHasBeenSet = false;
  bool m_indicatorTypeHasBeenSet = false;
  bool m_findingTypeHasBeenSet = false;
  bool m_findingIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
