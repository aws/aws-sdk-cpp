/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/SipRuleTriggerType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime-sdk-voice/model/SipRuleTargetApplication.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   * <p>The details of a SIP rule, including name, triggers, and target applications.
   * An AWS account can have multiple SIP rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/SipRule">AWS
   * API Reference</a></p>
   */
  class SipRule
  {
  public:
    AWS_CHIMESDKVOICE_API SipRule() = default;
    AWS_CHIMESDKVOICE_API SipRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API SipRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A SIP rule's ID.</p>
     */
    inline const Aws::String& GetSipRuleId() const { return m_sipRuleId; }
    inline bool SipRuleIdHasBeenSet() const { return m_sipRuleIdHasBeenSet; }
    template<typename SipRuleIdT = Aws::String>
    void SetSipRuleId(SipRuleIdT&& value) { m_sipRuleIdHasBeenSet = true; m_sipRuleId = std::forward<SipRuleIdT>(value); }
    template<typename SipRuleIdT = Aws::String>
    SipRule& WithSipRuleId(SipRuleIdT&& value) { SetSipRuleId(std::forward<SipRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A SIP rule's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SipRule& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the SIP rule is enabled or disabled. You must disable a
     * rule before you can delete it.</p>
     */
    inline bool GetDisabled() const { return m_disabled; }
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }
    inline SipRule& WithDisabled(bool value) { SetDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of trigger set for a SIP rule, either a phone number or a URI
     * request host name.</p>
     */
    inline SipRuleTriggerType GetTriggerType() const { return m_triggerType; }
    inline bool TriggerTypeHasBeenSet() const { return m_triggerTypeHasBeenSet; }
    inline void SetTriggerType(SipRuleTriggerType value) { m_triggerTypeHasBeenSet = true; m_triggerType = value; }
    inline SipRule& WithTriggerType(SipRuleTriggerType value) { SetTriggerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value set for a SIP rule's trigger type. Either a phone number or a URI
     * hostname.</p>
     */
    inline const Aws::String& GetTriggerValue() const { return m_triggerValue; }
    inline bool TriggerValueHasBeenSet() const { return m_triggerValueHasBeenSet; }
    template<typename TriggerValueT = Aws::String>
    void SetTriggerValue(TriggerValueT&& value) { m_triggerValueHasBeenSet = true; m_triggerValue = std::forward<TriggerValueT>(value); }
    template<typename TriggerValueT = Aws::String>
    SipRule& WithTriggerValue(TriggerValueT&& value) { SetTriggerValue(std::forward<TriggerValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target SIP media application and other details, such as priority and AWS
     * Region, to be specified in the SIP rule. Only one SIP rule per AWS Region can be
     * provided.</p>
     */
    inline const Aws::Vector<SipRuleTargetApplication>& GetTargetApplications() const { return m_targetApplications; }
    inline bool TargetApplicationsHasBeenSet() const { return m_targetApplicationsHasBeenSet; }
    template<typename TargetApplicationsT = Aws::Vector<SipRuleTargetApplication>>
    void SetTargetApplications(TargetApplicationsT&& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications = std::forward<TargetApplicationsT>(value); }
    template<typename TargetApplicationsT = Aws::Vector<SipRuleTargetApplication>>
    SipRule& WithTargetApplications(TargetApplicationsT&& value) { SetTargetApplications(std::forward<TargetApplicationsT>(value)); return *this;}
    template<typename TargetApplicationsT = SipRuleTargetApplication>
    SipRule& AddTargetApplications(TargetApplicationsT&& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications.emplace_back(std::forward<TargetApplicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the SIP rule was created, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    SipRule& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the SIP rule was updated, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    SipRule& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sipRuleId;
    bool m_sipRuleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_disabled{false};
    bool m_disabledHasBeenSet = false;

    SipRuleTriggerType m_triggerType{SipRuleTriggerType::NOT_SET};
    bool m_triggerTypeHasBeenSet = false;

    Aws::String m_triggerValue;
    bool m_triggerValueHasBeenSet = false;

    Aws::Vector<SipRuleTargetApplication> m_targetApplications;
    bool m_targetApplicationsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp{};
    bool m_updatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
