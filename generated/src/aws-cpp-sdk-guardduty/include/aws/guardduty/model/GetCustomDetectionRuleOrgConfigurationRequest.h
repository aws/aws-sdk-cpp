/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/AssociationMode.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace GuardDuty {
namespace Model {

/**
 */
class GetCustomDetectionRuleOrgConfigurationRequest : public GuardDutyRequest {
 public:
  AWS_GUARDDUTY_API GetCustomDetectionRuleOrgConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetCustomDetectionRuleOrgConfiguration"; }

  AWS_GUARDDUTY_API Aws::String SerializePayload() const override;

  AWS_GUARDDUTY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique identifier for the custom detection rule.</p>
   */
  inline const Aws::String& GetRuleId() const { return m_ruleId; }
  inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
  template <typename RuleIdT = Aws::String>
  void SetRuleId(RuleIdT&& value) {
    m_ruleIdHasBeenSet = true;
    m_ruleId = std::forward<RuleIdT>(value);
  }
  template <typename RuleIdT = Aws::String>
  GetCustomDetectionRuleOrgConfigurationRequest& WithRuleId(RuleIdT&& value) {
    SetRuleId(std::forward<RuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The execution mode of the organization configuration to retrieve. Valid
   * values: <code>LIVE</code> | <code>DRY_RUN</code>.</p>
   */
  inline AssociationMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(AssociationMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline GetCustomDetectionRuleOrgConfigurationRequest& WithMode(AssociationMode value) {
    SetMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_ruleId;

  AssociationMode m_mode{AssociationMode::NOT_SET};
  bool m_ruleIdHasBeenSet = false;
  bool m_modeHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
