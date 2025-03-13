/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/SipRuleTriggerType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-voice/model/SipRuleTargetApplication.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class CreateSipRuleRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API CreateSipRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSipRule"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the SIP rule.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateSipRuleRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of trigger assigned to the SIP rule in <code>TriggerValue</code>,
     * currently <code>RequestUriHostname</code> or <code>ToPhoneNumber</code>.</p>
     */
    inline SipRuleTriggerType GetTriggerType() const { return m_triggerType; }
    inline bool TriggerTypeHasBeenSet() const { return m_triggerTypeHasBeenSet; }
    inline void SetTriggerType(SipRuleTriggerType value) { m_triggerTypeHasBeenSet = true; m_triggerType = value; }
    inline CreateSipRuleRequest& WithTriggerType(SipRuleTriggerType value) { SetTriggerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>TriggerType</code> is <code>RequestUriHostname</code>, the value can
     * be the outbound host name of a Voice Connector. If <code>TriggerType</code> is
     * <code>ToPhoneNumber</code>, the value can be a customer-owned phone number in
     * the E164 format. The <code>SipMediaApplication</code> specified in the
     * <code>SipRule</code> is triggered if the request URI in an incoming SIP request
     * matches the <code>RequestUriHostname</code>, or if the <code>To</code> header in
     * the incoming SIP request matches the <code>ToPhoneNumber</code> value.</p>
     */
    inline const Aws::String& GetTriggerValue() const { return m_triggerValue; }
    inline bool TriggerValueHasBeenSet() const { return m_triggerValueHasBeenSet; }
    template<typename TriggerValueT = Aws::String>
    void SetTriggerValue(TriggerValueT&& value) { m_triggerValueHasBeenSet = true; m_triggerValue = std::forward<TriggerValueT>(value); }
    template<typename TriggerValueT = Aws::String>
    CreateSipRuleRequest& WithTriggerValue(TriggerValueT&& value) { SetTriggerValue(std::forward<TriggerValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disables or enables a SIP rule. You must disable SIP rules before you can
     * delete them.</p>
     */
    inline bool GetDisabled() const { return m_disabled; }
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }
    inline CreateSipRuleRequest& WithDisabled(bool value) { SetDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of SIP media applications, with priority and AWS Region. Only one SIP
     * application per AWS Region can be used.</p>
     */
    inline const Aws::Vector<SipRuleTargetApplication>& GetTargetApplications() const { return m_targetApplications; }
    inline bool TargetApplicationsHasBeenSet() const { return m_targetApplicationsHasBeenSet; }
    template<typename TargetApplicationsT = Aws::Vector<SipRuleTargetApplication>>
    void SetTargetApplications(TargetApplicationsT&& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications = std::forward<TargetApplicationsT>(value); }
    template<typename TargetApplicationsT = Aws::Vector<SipRuleTargetApplication>>
    CreateSipRuleRequest& WithTargetApplications(TargetApplicationsT&& value) { SetTargetApplications(std::forward<TargetApplicationsT>(value)); return *this;}
    template<typename TargetApplicationsT = SipRuleTargetApplication>
    CreateSipRuleRequest& AddTargetApplications(TargetApplicationsT&& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications.emplace_back(std::forward<TargetApplicationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SipRuleTriggerType m_triggerType{SipRuleTriggerType::NOT_SET};
    bool m_triggerTypeHasBeenSet = false;

    Aws::String m_triggerValue;
    bool m_triggerValueHasBeenSet = false;

    bool m_disabled{false};
    bool m_disabledHasBeenSet = false;

    Aws::Vector<SipRuleTargetApplication> m_targetApplications;
    bool m_targetApplicationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
