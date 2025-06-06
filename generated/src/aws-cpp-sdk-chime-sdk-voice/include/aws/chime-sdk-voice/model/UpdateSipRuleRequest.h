﻿/**
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
    AWS_CHIMESDKVOICE_API UpdateSipRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSipRule"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The SIP rule ID.</p>
     */
    inline const Aws::String& GetSipRuleId() const { return m_sipRuleId; }
    inline bool SipRuleIdHasBeenSet() const { return m_sipRuleIdHasBeenSet; }
    template<typename SipRuleIdT = Aws::String>
    void SetSipRuleId(SipRuleIdT&& value) { m_sipRuleIdHasBeenSet = true; m_sipRuleId = std::forward<SipRuleIdT>(value); }
    template<typename SipRuleIdT = Aws::String>
    UpdateSipRuleRequest& WithSipRuleId(SipRuleIdT&& value) { SetSipRuleId(std::forward<SipRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the specified SIP rule.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateSipRuleRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new value that indicates whether the rule is disabled.</p>
     */
    inline bool GetDisabled() const { return m_disabled; }
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }
    inline UpdateSipRuleRequest& WithDisabled(bool value) { SetDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new list of target applications.</p>
     */
    inline const Aws::Vector<SipRuleTargetApplication>& GetTargetApplications() const { return m_targetApplications; }
    inline bool TargetApplicationsHasBeenSet() const { return m_targetApplicationsHasBeenSet; }
    template<typename TargetApplicationsT = Aws::Vector<SipRuleTargetApplication>>
    void SetTargetApplications(TargetApplicationsT&& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications = std::forward<TargetApplicationsT>(value); }
    template<typename TargetApplicationsT = Aws::Vector<SipRuleTargetApplication>>
    UpdateSipRuleRequest& WithTargetApplications(TargetApplicationsT&& value) { SetTargetApplications(std::forward<TargetApplicationsT>(value)); return *this;}
    template<typename TargetApplicationsT = SipRuleTargetApplication>
    UpdateSipRuleRequest& AddTargetApplications(TargetApplicationsT&& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications.emplace_back(std::forward<TargetApplicationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sipRuleId;
    bool m_sipRuleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_disabled{false};
    bool m_disabledHasBeenSet = false;

    Aws::Vector<SipRuleTargetApplication> m_targetApplications;
    bool m_targetApplicationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
