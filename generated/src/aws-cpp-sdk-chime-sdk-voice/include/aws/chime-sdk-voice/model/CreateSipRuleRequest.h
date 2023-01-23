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
    AWS_CHIMESDKVOICE_API CreateSipRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSipRule"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CreateSipRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CreateSipRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CreateSipRuleRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const SipRuleTriggerType& GetTriggerType() const{ return m_triggerType; }

    
    inline bool TriggerTypeHasBeenSet() const { return m_triggerTypeHasBeenSet; }

    
    inline void SetTriggerType(const SipRuleTriggerType& value) { m_triggerTypeHasBeenSet = true; m_triggerType = value; }

    
    inline void SetTriggerType(SipRuleTriggerType&& value) { m_triggerTypeHasBeenSet = true; m_triggerType = std::move(value); }

    
    inline CreateSipRuleRequest& WithTriggerType(const SipRuleTriggerType& value) { SetTriggerType(value); return *this;}

    
    inline CreateSipRuleRequest& WithTriggerType(SipRuleTriggerType&& value) { SetTriggerType(std::move(value)); return *this;}


    
    inline const Aws::String& GetTriggerValue() const{ return m_triggerValue; }

    
    inline bool TriggerValueHasBeenSet() const { return m_triggerValueHasBeenSet; }

    
    inline void SetTriggerValue(const Aws::String& value) { m_triggerValueHasBeenSet = true; m_triggerValue = value; }

    
    inline void SetTriggerValue(Aws::String&& value) { m_triggerValueHasBeenSet = true; m_triggerValue = std::move(value); }

    
    inline void SetTriggerValue(const char* value) { m_triggerValueHasBeenSet = true; m_triggerValue.assign(value); }

    
    inline CreateSipRuleRequest& WithTriggerValue(const Aws::String& value) { SetTriggerValue(value); return *this;}

    
    inline CreateSipRuleRequest& WithTriggerValue(Aws::String&& value) { SetTriggerValue(std::move(value)); return *this;}

    
    inline CreateSipRuleRequest& WithTriggerValue(const char* value) { SetTriggerValue(value); return *this;}


    
    inline bool GetDisabled() const{ return m_disabled; }

    
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    
    inline CreateSipRuleRequest& WithDisabled(bool value) { SetDisabled(value); return *this;}


    
    inline const Aws::Vector<SipRuleTargetApplication>& GetTargetApplications() const{ return m_targetApplications; }

    
    inline bool TargetApplicationsHasBeenSet() const { return m_targetApplicationsHasBeenSet; }

    
    inline void SetTargetApplications(const Aws::Vector<SipRuleTargetApplication>& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications = value; }

    
    inline void SetTargetApplications(Aws::Vector<SipRuleTargetApplication>&& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications = std::move(value); }

    
    inline CreateSipRuleRequest& WithTargetApplications(const Aws::Vector<SipRuleTargetApplication>& value) { SetTargetApplications(value); return *this;}

    
    inline CreateSipRuleRequest& WithTargetApplications(Aws::Vector<SipRuleTargetApplication>&& value) { SetTargetApplications(std::move(value)); return *this;}

    
    inline CreateSipRuleRequest& AddTargetApplications(const SipRuleTargetApplication& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications.push_back(value); return *this; }

    
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
} // namespace ChimeSDKVoice
} // namespace Aws
