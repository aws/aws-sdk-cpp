/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/mailmanager/model/AcceptAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/PolicyStatement.h>
#include <utility>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   */
  class UpdateTrafficPolicyRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API UpdateTrafficPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrafficPolicy"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Default action instructs the traﬃc policy to either Allow or Deny (block)
     * messages that fall outside of (or not addressed by) the conditions of your
     * policy statements</p>
     */
    inline const AcceptAction& GetDefaultAction() const{ return m_defaultAction; }

    /**
     * <p>Default action instructs the traﬃc policy to either Allow or Deny (block)
     * messages that fall outside of (or not addressed by) the conditions of your
     * policy statements</p>
     */
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }

    /**
     * <p>Default action instructs the traﬃc policy to either Allow or Deny (block)
     * messages that fall outside of (or not addressed by) the conditions of your
     * policy statements</p>
     */
    inline void SetDefaultAction(const AcceptAction& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }

    /**
     * <p>Default action instructs the traﬃc policy to either Allow or Deny (block)
     * messages that fall outside of (or not addressed by) the conditions of your
     * policy statements</p>
     */
    inline void SetDefaultAction(AcceptAction&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::move(value); }

    /**
     * <p>Default action instructs the traﬃc policy to either Allow or Deny (block)
     * messages that fall outside of (or not addressed by) the conditions of your
     * policy statements</p>
     */
    inline UpdateTrafficPolicyRequest& WithDefaultAction(const AcceptAction& value) { SetDefaultAction(value); return *this;}

    /**
     * <p>Default action instructs the traﬃc policy to either Allow or Deny (block)
     * messages that fall outside of (or not addressed by) the conditions of your
     * policy statements</p>
     */
    inline UpdateTrafficPolicyRequest& WithDefaultAction(AcceptAction&& value) { SetDefaultAction(std::move(value)); return *this;}


    /**
     * <p>The maximum message size in bytes of email which is allowed in by this
     * traffic policy—anything larger will be blocked.</p>
     */
    inline int GetMaxMessageSizeBytes() const{ return m_maxMessageSizeBytes; }

    /**
     * <p>The maximum message size in bytes of email which is allowed in by this
     * traffic policy—anything larger will be blocked.</p>
     */
    inline bool MaxMessageSizeBytesHasBeenSet() const { return m_maxMessageSizeBytesHasBeenSet; }

    /**
     * <p>The maximum message size in bytes of email which is allowed in by this
     * traffic policy—anything larger will be blocked.</p>
     */
    inline void SetMaxMessageSizeBytes(int value) { m_maxMessageSizeBytesHasBeenSet = true; m_maxMessageSizeBytes = value; }

    /**
     * <p>The maximum message size in bytes of email which is allowed in by this
     * traffic policy—anything larger will be blocked.</p>
     */
    inline UpdateTrafficPolicyRequest& WithMaxMessageSizeBytes(int value) { SetMaxMessageSizeBytes(value); return *this;}


    /**
     * <p>The list of conditions to be updated for filtering email traffic.</p>
     */
    inline const Aws::Vector<PolicyStatement>& GetPolicyStatements() const{ return m_policyStatements; }

    /**
     * <p>The list of conditions to be updated for filtering email traffic.</p>
     */
    inline bool PolicyStatementsHasBeenSet() const { return m_policyStatementsHasBeenSet; }

    /**
     * <p>The list of conditions to be updated for filtering email traffic.</p>
     */
    inline void SetPolicyStatements(const Aws::Vector<PolicyStatement>& value) { m_policyStatementsHasBeenSet = true; m_policyStatements = value; }

    /**
     * <p>The list of conditions to be updated for filtering email traffic.</p>
     */
    inline void SetPolicyStatements(Aws::Vector<PolicyStatement>&& value) { m_policyStatementsHasBeenSet = true; m_policyStatements = std::move(value); }

    /**
     * <p>The list of conditions to be updated for filtering email traffic.</p>
     */
    inline UpdateTrafficPolicyRequest& WithPolicyStatements(const Aws::Vector<PolicyStatement>& value) { SetPolicyStatements(value); return *this;}

    /**
     * <p>The list of conditions to be updated for filtering email traffic.</p>
     */
    inline UpdateTrafficPolicyRequest& WithPolicyStatements(Aws::Vector<PolicyStatement>&& value) { SetPolicyStatements(std::move(value)); return *this;}

    /**
     * <p>The list of conditions to be updated for filtering email traffic.</p>
     */
    inline UpdateTrafficPolicyRequest& AddPolicyStatements(const PolicyStatement& value) { m_policyStatementsHasBeenSet = true; m_policyStatements.push_back(value); return *this; }

    /**
     * <p>The list of conditions to be updated for filtering email traffic.</p>
     */
    inline UpdateTrafficPolicyRequest& AddPolicyStatements(PolicyStatement&& value) { m_policyStatementsHasBeenSet = true; m_policyStatements.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier of the traffic policy that you want to update.</p>
     */
    inline const Aws::String& GetTrafficPolicyId() const{ return m_trafficPolicyId; }

    /**
     * <p>The identifier of the traffic policy that you want to update.</p>
     */
    inline bool TrafficPolicyIdHasBeenSet() const { return m_trafficPolicyIdHasBeenSet; }

    /**
     * <p>The identifier of the traffic policy that you want to update.</p>
     */
    inline void SetTrafficPolicyId(const Aws::String& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = value; }

    /**
     * <p>The identifier of the traffic policy that you want to update.</p>
     */
    inline void SetTrafficPolicyId(Aws::String&& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = std::move(value); }

    /**
     * <p>The identifier of the traffic policy that you want to update.</p>
     */
    inline void SetTrafficPolicyId(const char* value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId.assign(value); }

    /**
     * <p>The identifier of the traffic policy that you want to update.</p>
     */
    inline UpdateTrafficPolicyRequest& WithTrafficPolicyId(const Aws::String& value) { SetTrafficPolicyId(value); return *this;}

    /**
     * <p>The identifier of the traffic policy that you want to update.</p>
     */
    inline UpdateTrafficPolicyRequest& WithTrafficPolicyId(Aws::String&& value) { SetTrafficPolicyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the traffic policy that you want to update.</p>
     */
    inline UpdateTrafficPolicyRequest& WithTrafficPolicyId(const char* value) { SetTrafficPolicyId(value); return *this;}


    /**
     * <p>A user-friendly name for the traffic policy resource.</p>
     */
    inline const Aws::String& GetTrafficPolicyName() const{ return m_trafficPolicyName; }

    /**
     * <p>A user-friendly name for the traffic policy resource.</p>
     */
    inline bool TrafficPolicyNameHasBeenSet() const { return m_trafficPolicyNameHasBeenSet; }

    /**
     * <p>A user-friendly name for the traffic policy resource.</p>
     */
    inline void SetTrafficPolicyName(const Aws::String& value) { m_trafficPolicyNameHasBeenSet = true; m_trafficPolicyName = value; }

    /**
     * <p>A user-friendly name for the traffic policy resource.</p>
     */
    inline void SetTrafficPolicyName(Aws::String&& value) { m_trafficPolicyNameHasBeenSet = true; m_trafficPolicyName = std::move(value); }

    /**
     * <p>A user-friendly name for the traffic policy resource.</p>
     */
    inline void SetTrafficPolicyName(const char* value) { m_trafficPolicyNameHasBeenSet = true; m_trafficPolicyName.assign(value); }

    /**
     * <p>A user-friendly name for the traffic policy resource.</p>
     */
    inline UpdateTrafficPolicyRequest& WithTrafficPolicyName(const Aws::String& value) { SetTrafficPolicyName(value); return *this;}

    /**
     * <p>A user-friendly name for the traffic policy resource.</p>
     */
    inline UpdateTrafficPolicyRequest& WithTrafficPolicyName(Aws::String&& value) { SetTrafficPolicyName(std::move(value)); return *this;}

    /**
     * <p>A user-friendly name for the traffic policy resource.</p>
     */
    inline UpdateTrafficPolicyRequest& WithTrafficPolicyName(const char* value) { SetTrafficPolicyName(value); return *this;}

  private:

    AcceptAction m_defaultAction;
    bool m_defaultActionHasBeenSet = false;

    int m_maxMessageSizeBytes;
    bool m_maxMessageSizeBytesHasBeenSet = false;

    Aws::Vector<PolicyStatement> m_policyStatements;
    bool m_policyStatementsHasBeenSet = false;

    Aws::String m_trafficPolicyId;
    bool m_trafficPolicyIdHasBeenSet = false;

    Aws::String m_trafficPolicyName;
    bool m_trafficPolicyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
