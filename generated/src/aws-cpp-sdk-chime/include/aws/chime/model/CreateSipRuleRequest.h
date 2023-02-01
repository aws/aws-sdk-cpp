/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/SipRuleTriggerType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/SipRuleTargetApplication.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class CreateSipRuleRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API CreateSipRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSipRule"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the SIP rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the SIP rule.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the SIP rule.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the SIP rule.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the SIP rule.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the SIP rule.</p>
     */
    inline CreateSipRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the SIP rule.</p>
     */
    inline CreateSipRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the SIP rule.</p>
     */
    inline CreateSipRuleRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of trigger assigned to the SIP rule in <code>TriggerValue</code>,
     * currently <code>RequestUriHostname</code> or <code>ToPhoneNumber</code>.</p>
     */
    inline const SipRuleTriggerType& GetTriggerType() const{ return m_triggerType; }

    /**
     * <p>The type of trigger assigned to the SIP rule in <code>TriggerValue</code>,
     * currently <code>RequestUriHostname</code> or <code>ToPhoneNumber</code>.</p>
     */
    inline bool TriggerTypeHasBeenSet() const { return m_triggerTypeHasBeenSet; }

    /**
     * <p>The type of trigger assigned to the SIP rule in <code>TriggerValue</code>,
     * currently <code>RequestUriHostname</code> or <code>ToPhoneNumber</code>.</p>
     */
    inline void SetTriggerType(const SipRuleTriggerType& value) { m_triggerTypeHasBeenSet = true; m_triggerType = value; }

    /**
     * <p>The type of trigger assigned to the SIP rule in <code>TriggerValue</code>,
     * currently <code>RequestUriHostname</code> or <code>ToPhoneNumber</code>.</p>
     */
    inline void SetTriggerType(SipRuleTriggerType&& value) { m_triggerTypeHasBeenSet = true; m_triggerType = std::move(value); }

    /**
     * <p>The type of trigger assigned to the SIP rule in <code>TriggerValue</code>,
     * currently <code>RequestUriHostname</code> or <code>ToPhoneNumber</code>.</p>
     */
    inline CreateSipRuleRequest& WithTriggerType(const SipRuleTriggerType& value) { SetTriggerType(value); return *this;}

    /**
     * <p>The type of trigger assigned to the SIP rule in <code>TriggerValue</code>,
     * currently <code>RequestUriHostname</code> or <code>ToPhoneNumber</code>.</p>
     */
    inline CreateSipRuleRequest& WithTriggerType(SipRuleTriggerType&& value) { SetTriggerType(std::move(value)); return *this;}


    /**
     * <p>If <code>TriggerType</code> is <code>RequestUriHostname</code>, the value can
     * be the outbound host name of an Amazon Chime Voice Connector. If
     * <code>TriggerType</code> is <code>ToPhoneNumber</code>, the value can be a
     * customer-owned phone number in the E164 format. The
     * <code>SipMediaApplication</code> specified in the <code>SipRule</code> is
     * triggered if the request URI in an incoming SIP request matches the
     * <code>RequestUriHostname</code>, or if the <code>To</code> header in the
     * incoming SIP request matches the <code>ToPhoneNumber</code> value.</p>
     */
    inline const Aws::String& GetTriggerValue() const{ return m_triggerValue; }

    /**
     * <p>If <code>TriggerType</code> is <code>RequestUriHostname</code>, the value can
     * be the outbound host name of an Amazon Chime Voice Connector. If
     * <code>TriggerType</code> is <code>ToPhoneNumber</code>, the value can be a
     * customer-owned phone number in the E164 format. The
     * <code>SipMediaApplication</code> specified in the <code>SipRule</code> is
     * triggered if the request URI in an incoming SIP request matches the
     * <code>RequestUriHostname</code>, or if the <code>To</code> header in the
     * incoming SIP request matches the <code>ToPhoneNumber</code> value.</p>
     */
    inline bool TriggerValueHasBeenSet() const { return m_triggerValueHasBeenSet; }

    /**
     * <p>If <code>TriggerType</code> is <code>RequestUriHostname</code>, the value can
     * be the outbound host name of an Amazon Chime Voice Connector. If
     * <code>TriggerType</code> is <code>ToPhoneNumber</code>, the value can be a
     * customer-owned phone number in the E164 format. The
     * <code>SipMediaApplication</code> specified in the <code>SipRule</code> is
     * triggered if the request URI in an incoming SIP request matches the
     * <code>RequestUriHostname</code>, or if the <code>To</code> header in the
     * incoming SIP request matches the <code>ToPhoneNumber</code> value.</p>
     */
    inline void SetTriggerValue(const Aws::String& value) { m_triggerValueHasBeenSet = true; m_triggerValue = value; }

    /**
     * <p>If <code>TriggerType</code> is <code>RequestUriHostname</code>, the value can
     * be the outbound host name of an Amazon Chime Voice Connector. If
     * <code>TriggerType</code> is <code>ToPhoneNumber</code>, the value can be a
     * customer-owned phone number in the E164 format. The
     * <code>SipMediaApplication</code> specified in the <code>SipRule</code> is
     * triggered if the request URI in an incoming SIP request matches the
     * <code>RequestUriHostname</code>, or if the <code>To</code> header in the
     * incoming SIP request matches the <code>ToPhoneNumber</code> value.</p>
     */
    inline void SetTriggerValue(Aws::String&& value) { m_triggerValueHasBeenSet = true; m_triggerValue = std::move(value); }

    /**
     * <p>If <code>TriggerType</code> is <code>RequestUriHostname</code>, the value can
     * be the outbound host name of an Amazon Chime Voice Connector. If
     * <code>TriggerType</code> is <code>ToPhoneNumber</code>, the value can be a
     * customer-owned phone number in the E164 format. The
     * <code>SipMediaApplication</code> specified in the <code>SipRule</code> is
     * triggered if the request URI in an incoming SIP request matches the
     * <code>RequestUriHostname</code>, or if the <code>To</code> header in the
     * incoming SIP request matches the <code>ToPhoneNumber</code> value.</p>
     */
    inline void SetTriggerValue(const char* value) { m_triggerValueHasBeenSet = true; m_triggerValue.assign(value); }

    /**
     * <p>If <code>TriggerType</code> is <code>RequestUriHostname</code>, the value can
     * be the outbound host name of an Amazon Chime Voice Connector. If
     * <code>TriggerType</code> is <code>ToPhoneNumber</code>, the value can be a
     * customer-owned phone number in the E164 format. The
     * <code>SipMediaApplication</code> specified in the <code>SipRule</code> is
     * triggered if the request URI in an incoming SIP request matches the
     * <code>RequestUriHostname</code>, or if the <code>To</code> header in the
     * incoming SIP request matches the <code>ToPhoneNumber</code> value.</p>
     */
    inline CreateSipRuleRequest& WithTriggerValue(const Aws::String& value) { SetTriggerValue(value); return *this;}

    /**
     * <p>If <code>TriggerType</code> is <code>RequestUriHostname</code>, the value can
     * be the outbound host name of an Amazon Chime Voice Connector. If
     * <code>TriggerType</code> is <code>ToPhoneNumber</code>, the value can be a
     * customer-owned phone number in the E164 format. The
     * <code>SipMediaApplication</code> specified in the <code>SipRule</code> is
     * triggered if the request URI in an incoming SIP request matches the
     * <code>RequestUriHostname</code>, or if the <code>To</code> header in the
     * incoming SIP request matches the <code>ToPhoneNumber</code> value.</p>
     */
    inline CreateSipRuleRequest& WithTriggerValue(Aws::String&& value) { SetTriggerValue(std::move(value)); return *this;}

    /**
     * <p>If <code>TriggerType</code> is <code>RequestUriHostname</code>, the value can
     * be the outbound host name of an Amazon Chime Voice Connector. If
     * <code>TriggerType</code> is <code>ToPhoneNumber</code>, the value can be a
     * customer-owned phone number in the E164 format. The
     * <code>SipMediaApplication</code> specified in the <code>SipRule</code> is
     * triggered if the request URI in an incoming SIP request matches the
     * <code>RequestUriHostname</code>, or if the <code>To</code> header in the
     * incoming SIP request matches the <code>ToPhoneNumber</code> value.</p>
     */
    inline CreateSipRuleRequest& WithTriggerValue(const char* value) { SetTriggerValue(value); return *this;}


    /**
     * <p>Enables or disables a rule. You must disable rules before you can delete
     * them.</p>
     */
    inline bool GetDisabled() const{ return m_disabled; }

    /**
     * <p>Enables or disables a rule. You must disable rules before you can delete
     * them.</p>
     */
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    /**
     * <p>Enables or disables a rule. You must disable rules before you can delete
     * them.</p>
     */
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    /**
     * <p>Enables or disables a rule. You must disable rules before you can delete
     * them.</p>
     */
    inline CreateSipRuleRequest& WithDisabled(bool value) { SetDisabled(value); return *this;}


    /**
     * <p>List of SIP media applications with priority and AWS Region. Only one SIP
     * application per AWS Region can be used.</p>
     */
    inline const Aws::Vector<SipRuleTargetApplication>& GetTargetApplications() const{ return m_targetApplications; }

    /**
     * <p>List of SIP media applications with priority and AWS Region. Only one SIP
     * application per AWS Region can be used.</p>
     */
    inline bool TargetApplicationsHasBeenSet() const { return m_targetApplicationsHasBeenSet; }

    /**
     * <p>List of SIP media applications with priority and AWS Region. Only one SIP
     * application per AWS Region can be used.</p>
     */
    inline void SetTargetApplications(const Aws::Vector<SipRuleTargetApplication>& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications = value; }

    /**
     * <p>List of SIP media applications with priority and AWS Region. Only one SIP
     * application per AWS Region can be used.</p>
     */
    inline void SetTargetApplications(Aws::Vector<SipRuleTargetApplication>&& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications = std::move(value); }

    /**
     * <p>List of SIP media applications with priority and AWS Region. Only one SIP
     * application per AWS Region can be used.</p>
     */
    inline CreateSipRuleRequest& WithTargetApplications(const Aws::Vector<SipRuleTargetApplication>& value) { SetTargetApplications(value); return *this;}

    /**
     * <p>List of SIP media applications with priority and AWS Region. Only one SIP
     * application per AWS Region can be used.</p>
     */
    inline CreateSipRuleRequest& WithTargetApplications(Aws::Vector<SipRuleTargetApplication>&& value) { SetTargetApplications(std::move(value)); return *this;}

    /**
     * <p>List of SIP media applications with priority and AWS Region. Only one SIP
     * application per AWS Region can be used.</p>
     */
    inline CreateSipRuleRequest& AddTargetApplications(const SipRuleTargetApplication& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications.push_back(value); return *this; }

    /**
     * <p>List of SIP media applications with priority and AWS Region. Only one SIP
     * application per AWS Region can be used.</p>
     */
    inline CreateSipRuleRequest& AddTargetApplications(SipRuleTargetApplication&& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SipRuleTriggerType m_triggerType;
    bool m_triggerTypeHasBeenSet = false;

    Aws::String m_triggerValue;
    bool m_triggerValueHasBeenSet = false;

    bool m_disabled;
    bool m_disabledHasBeenSet = false;

    Aws::Vector<SipRuleTargetApplication> m_targetApplications;
    bool m_targetApplicationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
