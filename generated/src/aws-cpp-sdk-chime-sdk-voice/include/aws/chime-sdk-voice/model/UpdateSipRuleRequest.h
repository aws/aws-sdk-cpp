/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateSipRuleRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API UpdateSipRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSipRule"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetSipRuleId() const{ return m_sipRuleId; }

    
    inline bool SipRuleIdHasBeenSet() const { return m_sipRuleIdHasBeenSet; }

    
    inline void SetSipRuleId(const Aws::String& value) { m_sipRuleIdHasBeenSet = true; m_sipRuleId = value; }

    
    inline void SetSipRuleId(Aws::String&& value) { m_sipRuleIdHasBeenSet = true; m_sipRuleId = std::move(value); }

    
    inline void SetSipRuleId(const char* value) { m_sipRuleIdHasBeenSet = true; m_sipRuleId.assign(value); }

    
    inline UpdateSipRuleRequest& WithSipRuleId(const Aws::String& value) { SetSipRuleId(value); return *this;}

    
    inline UpdateSipRuleRequest& WithSipRuleId(Aws::String&& value) { SetSipRuleId(std::move(value)); return *this;}

    
    inline UpdateSipRuleRequest& WithSipRuleId(const char* value) { SetSipRuleId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline UpdateSipRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline UpdateSipRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline UpdateSipRuleRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline bool GetDisabled() const{ return m_disabled; }

    
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    
    inline UpdateSipRuleRequest& WithDisabled(bool value) { SetDisabled(value); return *this;}


    
    inline const Aws::Vector<SipRuleTargetApplication>& GetTargetApplications() const{ return m_targetApplications; }

    
    inline bool TargetApplicationsHasBeenSet() const { return m_targetApplicationsHasBeenSet; }

    
    inline void SetTargetApplications(const Aws::Vector<SipRuleTargetApplication>& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications = value; }

    
    inline void SetTargetApplications(Aws::Vector<SipRuleTargetApplication>&& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications = std::move(value); }

    
    inline UpdateSipRuleRequest& WithTargetApplications(const Aws::Vector<SipRuleTargetApplication>& value) { SetTargetApplications(value); return *this;}

    
    inline UpdateSipRuleRequest& WithTargetApplications(Aws::Vector<SipRuleTargetApplication>&& value) { SetTargetApplications(std::move(value)); return *this;}

    
    inline UpdateSipRuleRequest& AddTargetApplications(const SipRuleTargetApplication& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications.push_back(value); return *this; }

    
    inline UpdateSipRuleRequest& AddTargetApplications(SipRuleTargetApplication&& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sipRuleId;
    bool m_sipRuleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_disabled;
    bool m_disabledHasBeenSet = false;

    Aws::Vector<SipRuleTargetApplication> m_targetApplications;
    bool m_targetApplicationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
