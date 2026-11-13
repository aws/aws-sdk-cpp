/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/ActivityWindow.h>

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
 * <p>Contains details about a GuardDuty finding.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/FindingDetail">AWS
 * API Reference</a></p>
 */
class FindingDetail {
 public:
  AWS_GUARDDUTY_API FindingDetail() = default;
  AWS_GUARDDUTY_API FindingDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API FindingDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the finding.</p>
   */
  inline const Aws::String& GetFindingId() const { return m_findingId; }
  inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
  template <typename FindingIdT = Aws::String>
  void SetFindingId(FindingIdT&& value) {
    m_findingIdHasBeenSet = true;
    m_findingId = std::forward<FindingIdT>(value);
  }
  template <typename FindingIdT = Aws::String>
  FindingDetail& WithFindingId(FindingIdT&& value) {
    SetFindingId(std::forward<FindingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the finding.</p>
   */
  inline const Aws::String& GetFindingType() const { return m_findingType; }
  inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }
  template <typename FindingTypeT = Aws::String>
  void SetFindingType(FindingTypeT&& value) {
    m_findingTypeHasBeenSet = true;
    m_findingType = std::forward<FindingTypeT>(value);
  }
  template <typename FindingTypeT = Aws::String>
  FindingDetail& WithFindingType(FindingTypeT&& value) {
    SetFindingType(std::forward<FindingTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The severity of the finding.</p>
   */
  inline const Aws::String& GetSeverity() const { return m_severity; }
  inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
  template <typename SeverityT = Aws::String>
  void SetSeverity(SeverityT&& value) {
    m_severityHasBeenSet = true;
    m_severity = std::forward<SeverityT>(value);
  }
  template <typename SeverityT = Aws::String>
  FindingDetail& WithSeverity(SeverityT&& value) {
    SetSeverity(std::forward<SeverityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account in which the finding was
   * generated.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  FindingDetail& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region in which the finding was generated.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  FindingDetail& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time range of the activity that the finding describes.</p>
   */
  inline const ActivityWindow& GetActivityWindow() const { return m_activityWindow; }
  inline bool ActivityWindowHasBeenSet() const { return m_activityWindowHasBeenSet; }
  template <typename ActivityWindowT = ActivityWindow>
  void SetActivityWindow(ActivityWindowT&& value) {
    m_activityWindowHasBeenSet = true;
    m_activityWindow = std::forward<ActivityWindowT>(value);
  }
  template <typename ActivityWindowT = ActivityWindow>
  FindingDetail& WithActivityWindow(ActivityWindowT&& value) {
    SetActivityWindow(std::forward<ActivityWindowT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_findingId;

  Aws::String m_findingType;

  Aws::String m_severity;

  Aws::String m_accountId;

  Aws::String m_region;

  ActivityWindow m_activityWindow;
  bool m_findingIdHasBeenSet = false;
  bool m_findingTypeHasBeenSet = false;
  bool m_severityHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_activityWindowHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
