/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/SipRuleTriggerType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime/model/SipRuleTargetApplication.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Chime
{
namespace Model
{

  /**
   * <p>The SIP rule details, including name, triggers, and target applications. An
   * AWS account can have multiple SIP rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/SipRule">AWS API
   * Reference</a></p>
   */
  class SipRule
  {
  public:
    AWS_CHIME_API SipRule();
    AWS_CHIME_API SipRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API SipRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The SIP rule ID.</p>
     */
    inline const Aws::String& GetSipRuleId() const{ return m_sipRuleId; }

    /**
     * <p>The SIP rule ID.</p>
     */
    inline bool SipRuleIdHasBeenSet() const { return m_sipRuleIdHasBeenSet; }

    /**
     * <p>The SIP rule ID.</p>
     */
    inline void SetSipRuleId(const Aws::String& value) { m_sipRuleIdHasBeenSet = true; m_sipRuleId = value; }

    /**
     * <p>The SIP rule ID.</p>
     */
    inline void SetSipRuleId(Aws::String&& value) { m_sipRuleIdHasBeenSet = true; m_sipRuleId = std::move(value); }

    /**
     * <p>The SIP rule ID.</p>
     */
    inline void SetSipRuleId(const char* value) { m_sipRuleIdHasBeenSet = true; m_sipRuleId.assign(value); }

    /**
     * <p>The SIP rule ID.</p>
     */
    inline SipRule& WithSipRuleId(const Aws::String& value) { SetSipRuleId(value); return *this;}

    /**
     * <p>The SIP rule ID.</p>
     */
    inline SipRule& WithSipRuleId(Aws::String&& value) { SetSipRuleId(std::move(value)); return *this;}

    /**
     * <p>The SIP rule ID.</p>
     */
    inline SipRule& WithSipRuleId(const char* value) { SetSipRuleId(value); return *this;}


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
    inline SipRule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the SIP rule.</p>
     */
    inline SipRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the SIP rule.</p>
     */
    inline SipRule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Indicates whether the SIP rule is enabled or disabled. You must disable a
     * rule before you can delete it.</p>
     */
    inline bool GetDisabled() const{ return m_disabled; }

    /**
     * <p>Indicates whether the SIP rule is enabled or disabled. You must disable a
     * rule before you can delete it.</p>
     */
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    /**
     * <p>Indicates whether the SIP rule is enabled or disabled. You must disable a
     * rule before you can delete it.</p>
     */
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    /**
     * <p>Indicates whether the SIP rule is enabled or disabled. You must disable a
     * rule before you can delete it.</p>
     */
    inline SipRule& WithDisabled(bool value) { SetDisabled(value); return *this;}


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
    inline SipRule& WithTriggerType(const SipRuleTriggerType& value) { SetTriggerType(value); return *this;}

    /**
     * <p>The type of trigger assigned to the SIP rule in <code>TriggerValue</code>,
     * currently <code>RequestUriHostname</code> or <code>ToPhoneNumber</code>.</p>
     */
    inline SipRule& WithTriggerType(SipRuleTriggerType&& value) { SetTriggerType(std::move(value)); return *this;}


    /**
     * <p>If <code>TriggerType</code> is <code>RequestUriHostname</code>, then the
     * value can be the outbound host name of the Amazon Chime Voice Connector. If
     * <code>TriggerType</code> is <code>ToPhoneNumber</code>, then the value can be a
     * customer-owned phone number in E164 format. <code>SipRule</code> is triggered
     * when a SIP rule requests host name or <code>ToPhoneNumber</code> matches in the
     * incoming SIP request.</p>
     */
    inline const Aws::String& GetTriggerValue() const{ return m_triggerValue; }

    /**
     * <p>If <code>TriggerType</code> is <code>RequestUriHostname</code>, then the
     * value can be the outbound host name of the Amazon Chime Voice Connector. If
     * <code>TriggerType</code> is <code>ToPhoneNumber</code>, then the value can be a
     * customer-owned phone number in E164 format. <code>SipRule</code> is triggered
     * when a SIP rule requests host name or <code>ToPhoneNumber</code> matches in the
     * incoming SIP request.</p>
     */
    inline bool TriggerValueHasBeenSet() const { return m_triggerValueHasBeenSet; }

    /**
     * <p>If <code>TriggerType</code> is <code>RequestUriHostname</code>, then the
     * value can be the outbound host name of the Amazon Chime Voice Connector. If
     * <code>TriggerType</code> is <code>ToPhoneNumber</code>, then the value can be a
     * customer-owned phone number in E164 format. <code>SipRule</code> is triggered
     * when a SIP rule requests host name or <code>ToPhoneNumber</code> matches in the
     * incoming SIP request.</p>
     */
    inline void SetTriggerValue(const Aws::String& value) { m_triggerValueHasBeenSet = true; m_triggerValue = value; }

    /**
     * <p>If <code>TriggerType</code> is <code>RequestUriHostname</code>, then the
     * value can be the outbound host name of the Amazon Chime Voice Connector. If
     * <code>TriggerType</code> is <code>ToPhoneNumber</code>, then the value can be a
     * customer-owned phone number in E164 format. <code>SipRule</code> is triggered
     * when a SIP rule requests host name or <code>ToPhoneNumber</code> matches in the
     * incoming SIP request.</p>
     */
    inline void SetTriggerValue(Aws::String&& value) { m_triggerValueHasBeenSet = true; m_triggerValue = std::move(value); }

    /**
     * <p>If <code>TriggerType</code> is <code>RequestUriHostname</code>, then the
     * value can be the outbound host name of the Amazon Chime Voice Connector. If
     * <code>TriggerType</code> is <code>ToPhoneNumber</code>, then the value can be a
     * customer-owned phone number in E164 format. <code>SipRule</code> is triggered
     * when a SIP rule requests host name or <code>ToPhoneNumber</code> matches in the
     * incoming SIP request.</p>
     */
    inline void SetTriggerValue(const char* value) { m_triggerValueHasBeenSet = true; m_triggerValue.assign(value); }

    /**
     * <p>If <code>TriggerType</code> is <code>RequestUriHostname</code>, then the
     * value can be the outbound host name of the Amazon Chime Voice Connector. If
     * <code>TriggerType</code> is <code>ToPhoneNumber</code>, then the value can be a
     * customer-owned phone number in E164 format. <code>SipRule</code> is triggered
     * when a SIP rule requests host name or <code>ToPhoneNumber</code> matches in the
     * incoming SIP request.</p>
     */
    inline SipRule& WithTriggerValue(const Aws::String& value) { SetTriggerValue(value); return *this;}

    /**
     * <p>If <code>TriggerType</code> is <code>RequestUriHostname</code>, then the
     * value can be the outbound host name of the Amazon Chime Voice Connector. If
     * <code>TriggerType</code> is <code>ToPhoneNumber</code>, then the value can be a
     * customer-owned phone number in E164 format. <code>SipRule</code> is triggered
     * when a SIP rule requests host name or <code>ToPhoneNumber</code> matches in the
     * incoming SIP request.</p>
     */
    inline SipRule& WithTriggerValue(Aws::String&& value) { SetTriggerValue(std::move(value)); return *this;}

    /**
     * <p>If <code>TriggerType</code> is <code>RequestUriHostname</code>, then the
     * value can be the outbound host name of the Amazon Chime Voice Connector. If
     * <code>TriggerType</code> is <code>ToPhoneNumber</code>, then the value can be a
     * customer-owned phone number in E164 format. <code>SipRule</code> is triggered
     * when a SIP rule requests host name or <code>ToPhoneNumber</code> matches in the
     * incoming SIP request.</p>
     */
    inline SipRule& WithTriggerValue(const char* value) { SetTriggerValue(value); return *this;}


    /**
     * <p>Target SIP media application and other details, such as priority and AWS
     * Region, to be specified in the SIP rule. Only one SIP rule per AWS Region can be
     * provided.</p>
     */
    inline const Aws::Vector<SipRuleTargetApplication>& GetTargetApplications() const{ return m_targetApplications; }

    /**
     * <p>Target SIP media application and other details, such as priority and AWS
     * Region, to be specified in the SIP rule. Only one SIP rule per AWS Region can be
     * provided.</p>
     */
    inline bool TargetApplicationsHasBeenSet() const { return m_targetApplicationsHasBeenSet; }

    /**
     * <p>Target SIP media application and other details, such as priority and AWS
     * Region, to be specified in the SIP rule. Only one SIP rule per AWS Region can be
     * provided.</p>
     */
    inline void SetTargetApplications(const Aws::Vector<SipRuleTargetApplication>& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications = value; }

    /**
     * <p>Target SIP media application and other details, such as priority and AWS
     * Region, to be specified in the SIP rule. Only one SIP rule per AWS Region can be
     * provided.</p>
     */
    inline void SetTargetApplications(Aws::Vector<SipRuleTargetApplication>&& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications = std::move(value); }

    /**
     * <p>Target SIP media application and other details, such as priority and AWS
     * Region, to be specified in the SIP rule. Only one SIP rule per AWS Region can be
     * provided.</p>
     */
    inline SipRule& WithTargetApplications(const Aws::Vector<SipRuleTargetApplication>& value) { SetTargetApplications(value); return *this;}

    /**
     * <p>Target SIP media application and other details, such as priority and AWS
     * Region, to be specified in the SIP rule. Only one SIP rule per AWS Region can be
     * provided.</p>
     */
    inline SipRule& WithTargetApplications(Aws::Vector<SipRuleTargetApplication>&& value) { SetTargetApplications(std::move(value)); return *this;}

    /**
     * <p>Target SIP media application and other details, such as priority and AWS
     * Region, to be specified in the SIP rule. Only one SIP rule per AWS Region can be
     * provided.</p>
     */
    inline SipRule& AddTargetApplications(const SipRuleTargetApplication& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications.push_back(value); return *this; }

    /**
     * <p>Target SIP media application and other details, such as priority and AWS
     * Region, to be specified in the SIP rule. Only one SIP rule per AWS Region can be
     * provided.</p>
     */
    inline SipRule& AddTargetApplications(SipRuleTargetApplication&& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications.push_back(std::move(value)); return *this; }


    /**
     * <p>The time at which the SIP rule was created, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time at which the SIP rule was created, in ISO 8601 format.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time at which the SIP rule was created, in ISO 8601 format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time at which the SIP rule was created, in ISO 8601 format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time at which the SIP rule was created, in ISO 8601 format.</p>
     */
    inline SipRule& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time at which the SIP rule was created, in ISO 8601 format.</p>
     */
    inline SipRule& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which the SIP rule was last updated, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p>The time at which the SIP rule was last updated, in ISO 8601 format.</p>
     */
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    /**
     * <p>The time at which the SIP rule was last updated, in ISO 8601 format.</p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    /**
     * <p>The time at which the SIP rule was last updated, in ISO 8601 format.</p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    /**
     * <p>The time at which the SIP rule was last updated, in ISO 8601 format.</p>
     */
    inline SipRule& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p>The time at which the SIP rule was last updated, in ISO 8601 format.</p>
     */
    inline SipRule& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_sipRuleId;
    bool m_sipRuleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_disabled;
    bool m_disabledHasBeenSet = false;

    SipRuleTriggerType m_triggerType;
    bool m_triggerTypeHasBeenSet = false;

    Aws::String m_triggerValue;
    bool m_triggerValueHasBeenSet = false;

    Aws::Vector<SipRuleTargetApplication> m_targetApplications;
    bool m_targetApplicationsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
