/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateSipRuleRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API UpdateSipRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSipRule"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


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
    inline UpdateSipRuleRequest& WithSipRuleId(const Aws::String& value) { SetSipRuleId(value); return *this;}

    /**
     * <p>The SIP rule ID.</p>
     */
    inline UpdateSipRuleRequest& WithSipRuleId(Aws::String&& value) { SetSipRuleId(std::move(value)); return *this;}

    /**
     * <p>The SIP rule ID.</p>
     */
    inline UpdateSipRuleRequest& WithSipRuleId(const char* value) { SetSipRuleId(value); return *this;}


    /**
     * <p>The new name for the specified SIP rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The new name for the specified SIP rule.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The new name for the specified SIP rule.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The new name for the specified SIP rule.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The new name for the specified SIP rule.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The new name for the specified SIP rule.</p>
     */
    inline UpdateSipRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The new name for the specified SIP rule.</p>
     */
    inline UpdateSipRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The new name for the specified SIP rule.</p>
     */
    inline UpdateSipRuleRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The new value specified to indicate whether the rule is disabled.</p>
     */
    inline bool GetDisabled() const{ return m_disabled; }

    /**
     * <p>The new value specified to indicate whether the rule is disabled.</p>
     */
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    /**
     * <p>The new value specified to indicate whether the rule is disabled.</p>
     */
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    /**
     * <p>The new value specified to indicate whether the rule is disabled.</p>
     */
    inline UpdateSipRuleRequest& WithDisabled(bool value) { SetDisabled(value); return *this;}


    /**
     * <p>The new value of the list of target applications.</p>
     */
    inline const Aws::Vector<SipRuleTargetApplication>& GetTargetApplications() const{ return m_targetApplications; }

    /**
     * <p>The new value of the list of target applications.</p>
     */
    inline bool TargetApplicationsHasBeenSet() const { return m_targetApplicationsHasBeenSet; }

    /**
     * <p>The new value of the list of target applications.</p>
     */
    inline void SetTargetApplications(const Aws::Vector<SipRuleTargetApplication>& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications = value; }

    /**
     * <p>The new value of the list of target applications.</p>
     */
    inline void SetTargetApplications(Aws::Vector<SipRuleTargetApplication>&& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications = std::move(value); }

    /**
     * <p>The new value of the list of target applications.</p>
     */
    inline UpdateSipRuleRequest& WithTargetApplications(const Aws::Vector<SipRuleTargetApplication>& value) { SetTargetApplications(value); return *this;}

    /**
     * <p>The new value of the list of target applications.</p>
     */
    inline UpdateSipRuleRequest& WithTargetApplications(Aws::Vector<SipRuleTargetApplication>&& value) { SetTargetApplications(std::move(value)); return *this;}

    /**
     * <p>The new value of the list of target applications.</p>
     */
    inline UpdateSipRuleRequest& AddTargetApplications(const SipRuleTargetApplication& value) { m_targetApplicationsHasBeenSet = true; m_targetApplications.push_back(value); return *this; }

    /**
     * <p>The new value of the list of target applications.</p>
     */
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
} // namespace Chime
} // namespace Aws
