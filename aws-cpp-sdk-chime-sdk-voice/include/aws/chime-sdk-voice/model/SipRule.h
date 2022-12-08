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

  class SipRule
  {
  public:
    AWS_CHIMESDKVOICE_API SipRule();
    AWS_CHIMESDKVOICE_API SipRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API SipRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetSipRuleId() const{ return m_sipRuleId; }

    
    inline bool SipRuleIdHasBeenSet() const { return m_sipRuleIdHasBeenSet; }

    
    inline void SetSipRuleId(const Aws::String& value) { m_sipRuleIdHasBeenSet = true; m_sipRuleId = value; }

    
    inline void SetSipRuleId(Aws::String&& value) { m_sipRuleIdHasBeenSet = true; m_sipRuleId = std::move(value); }

    
    inline void SetSipRuleId(const char* value) { m_sipRuleIdHasBeenSet = true; m_sipRuleId.assign(value); }

    
    inline SipRule& WithSipRuleId(const Aws::String& value) { SetSipRuleId(value); return *this;}

    
    inline SipRule& WithSipRuleId(Aws::String&& value) { SetSipRuleId(std::move(value)); return *this;}

    
    inline SipRule& WithSipRuleId(const char* value) { SetSipRuleId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline SipRule& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline SipRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline SipRule& WithName(const char* value) { SetName(value); return *this;}


    
    inline bool GetDisabled() const{ return m_disabled; }

    
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    
    inline SipRule& WithDisabled(bool value) { SetDisabled(value); return *this;}


    
    inline const SipRuleTriggerType& GetTriggerType() const{ return m_triggerType; }

    
    inline bool TriggerTypeHasBeenSet() const { return m_triggerTypeHasBeenSet; }

    
    inline void SetTriggerType(const SipRuleTriggerType& value) { m_triggerTypeHasBeenSet = true; m_triggerType = value; }

    
    inline void SetTriggerType(SipRuleTriggerType&& value) { m_triggerTypeHasBeenSet = true; m_triggerType = std::move(value); }

    
    inline SipRule& WithTriggerType(const SipRuleTriggerType& value) { SetTriggerType(value); return *this;}

    
    inline SipRule& WithTriggerType(SipRuleTriggerType&& value) { SetTriggerType(std::move(value)); return *this;}


    
    inline const Aws::String& GetTriggerValue() const{ return m_triggerValue; }

    
    inline bool TriggerValueHasBeenSet() const { return m_triggerValueHasBeenSet; }

    
    inline void SetTriggerValue(const Aws::String& value) { m_triggerValueHasBeenSet = true; m_triggerValue = value; }

    
    inline void SetTriggerValue(Aws::String&& value) { m_triggerValueHasBeenSet = true; m_triggerValue = std::move(value); }

    
    inline void SetTriggerValue(const char* value) { m_triggerValueHasBeenSet = true; m_triggerValue.assign(value); }

    
    inline SipRule& WithTriggerValue(const Aws::String& value) { SetTriggerValue(value); return *this;}

    
    inline SipRule& WithTriggerValue(Aws::String&& value) { SetTriggerValue(std::move(value)); return *this;}

    
    inline SipRule& WithTriggerValue(const char* value) { SetTriggerValue(value); return *this;}


    
    inline const Aws::Vector<SipRuleTargetApplication>& GetTargetApplications() const{ return m_targetApplications; }

    
    inline bool TargetApplicationsHasBeenSet() const { return m_targetApplicationsHasBeenSet; }

    
    inline void SetTargetApplications(const Aws::Vector<SipRuleTargetApplication>& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications = value; }

    
    inline void SetTargetApplications(Aws::Vector<SipRuleTargetApplication>&& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications = std::move(value); }

    
    inline SipRule& WithTargetApplications(const Aws::Vector<SipRuleTargetApplication>& value) { SetTargetApplications(value); return *this;}

    
    inline SipRule& WithTargetApplications(Aws::Vector<SipRuleTargetApplication>&& value) { SetTargetApplications(std::move(value)); return *this;}

    
    inline SipRule& AddTargetApplications(const SipRuleTargetApplication& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications.push_back(value); return *this; }

    
    inline SipRule& AddTargetApplications(SipRuleTargetApplication&& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications.push_back(std::move(value)); return *this; }


    
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    
    inline SipRule& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    
    inline SipRule& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    
    inline SipRule& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    
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
} // namespace ChimeSDKVoice
} // namespace Aws
