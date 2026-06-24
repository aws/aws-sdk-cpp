/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

#include <utility>

namespace Aws {
namespace GuardDuty {
namespace Model {

/**
 */
class CreateInvestigationRequest : public GuardDutyRequest {
 public:
  AWS_GUARDDUTY_API CreateInvestigationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateInvestigation"; }

  AWS_GUARDDUTY_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique ID of the GuardDuty detector for the account in which the
   * investigation is created.</p> <p>To find the <code>detectorId</code> in the
   * current Region, see the Settings page in the GuardDuty console, or run the <a
   * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_ListDetectors.html">ListDetectors</a>
   * API.</p>
   */
  inline const Aws::String& GetDetectorId() const { return m_detectorId; }
  inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
  template <typename DetectorIdT = Aws::String>
  void SetDetectorId(DetectorIdT&& value) {
    m_detectorIdHasBeenSet = true;
    m_detectorId = std::forward<DetectorIdT>(value);
  }
  template <typename DetectorIdT = Aws::String>
  CreateInvestigationRequest& WithDetectorId(DetectorIdT&& value) {
    SetDetectorId(std::forward<DetectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A natural-language description of what to investigate. For example:</p> <ul>
   * <li> <p> <code>"Investigate finding 1ab2c3d4e5f6a7b8c9d0e1f2a3b4c5d6 in account
   * 123456789012"</code> </p> </li> <li> <p> <code>"Analyze findings in account with
   * id 123456789012"</code> </p> </li> <li> <p> <code>"Analyze findings in my
   * organization"</code> </p> </li> </ul>
   */
  inline const Aws::String& GetTriggerPrompt() const { return m_triggerPrompt; }
  inline bool TriggerPromptHasBeenSet() const { return m_triggerPromptHasBeenSet; }
  template <typename TriggerPromptT = Aws::String>
  void SetTriggerPrompt(TriggerPromptT&& value) {
    m_triggerPromptHasBeenSet = true;
    m_triggerPrompt = std::forward<TriggerPromptT>(value);
  }
  template <typename TriggerPromptT = Aws::String>
  CreateInvestigationRequest& WithTriggerPrompt(TriggerPromptT&& value) {
    SetTriggerPrompt(std::forward<TriggerPromptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The idempotency token for the create request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateInvestigationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_detectorId;

  Aws::String m_triggerPrompt;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_detectorIdHasBeenSet = false;
  bool m_triggerPromptHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
