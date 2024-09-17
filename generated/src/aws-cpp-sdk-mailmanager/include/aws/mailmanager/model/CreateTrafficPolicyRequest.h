/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/AcceptAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/model/PolicyStatement.h>
#include <aws/mailmanager/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   */
  class CreateTrafficPolicyRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API CreateTrafficPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrafficPolicy"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique token that Amazon SES uses to recognize subsequent retries of the
     * same request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateTrafficPolicyRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateTrafficPolicyRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateTrafficPolicyRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Default action instructs the traﬃc policy to either Allow or Deny (block)
     * messages that fall outside of (or not addressed by) the conditions of your
     * policy statements</p>
     */
    inline const AcceptAction& GetDefaultAction() const{ return m_defaultAction; }
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }
    inline void SetDefaultAction(const AcceptAction& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }
    inline void SetDefaultAction(AcceptAction&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::move(value); }
    inline CreateTrafficPolicyRequest& WithDefaultAction(const AcceptAction& value) { SetDefaultAction(value); return *this;}
    inline CreateTrafficPolicyRequest& WithDefaultAction(AcceptAction&& value) { SetDefaultAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum message size in bytes of email which is allowed in by this
     * traffic policy—anything larger will be blocked.</p>
     */
    inline int GetMaxMessageSizeBytes() const{ return m_maxMessageSizeBytes; }
    inline bool MaxMessageSizeBytesHasBeenSet() const { return m_maxMessageSizeBytesHasBeenSet; }
    inline void SetMaxMessageSizeBytes(int value) { m_maxMessageSizeBytesHasBeenSet = true; m_maxMessageSizeBytes = value; }
    inline CreateTrafficPolicyRequest& WithMaxMessageSizeBytes(int value) { SetMaxMessageSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Conditional statements for filtering email traffic.</p>
     */
    inline const Aws::Vector<PolicyStatement>& GetPolicyStatements() const{ return m_policyStatements; }
    inline bool PolicyStatementsHasBeenSet() const { return m_policyStatementsHasBeenSet; }
    inline void SetPolicyStatements(const Aws::Vector<PolicyStatement>& value) { m_policyStatementsHasBeenSet = true; m_policyStatements = value; }
    inline void SetPolicyStatements(Aws::Vector<PolicyStatement>&& value) { m_policyStatementsHasBeenSet = true; m_policyStatements = std::move(value); }
    inline CreateTrafficPolicyRequest& WithPolicyStatements(const Aws::Vector<PolicyStatement>& value) { SetPolicyStatements(value); return *this;}
    inline CreateTrafficPolicyRequest& WithPolicyStatements(Aws::Vector<PolicyStatement>&& value) { SetPolicyStatements(std::move(value)); return *this;}
    inline CreateTrafficPolicyRequest& AddPolicyStatements(const PolicyStatement& value) { m_policyStatementsHasBeenSet = true; m_policyStatements.push_back(value); return *this; }
    inline CreateTrafficPolicyRequest& AddPolicyStatements(PolicyStatement&& value) { m_policyStatementsHasBeenSet = true; m_policyStatements.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for the resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateTrafficPolicyRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateTrafficPolicyRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateTrafficPolicyRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateTrafficPolicyRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the traffic policy resource.</p>
     */
    inline const Aws::String& GetTrafficPolicyName() const{ return m_trafficPolicyName; }
    inline bool TrafficPolicyNameHasBeenSet() const { return m_trafficPolicyNameHasBeenSet; }
    inline void SetTrafficPolicyName(const Aws::String& value) { m_trafficPolicyNameHasBeenSet = true; m_trafficPolicyName = value; }
    inline void SetTrafficPolicyName(Aws::String&& value) { m_trafficPolicyNameHasBeenSet = true; m_trafficPolicyName = std::move(value); }
    inline void SetTrafficPolicyName(const char* value) { m_trafficPolicyNameHasBeenSet = true; m_trafficPolicyName.assign(value); }
    inline CreateTrafficPolicyRequest& WithTrafficPolicyName(const Aws::String& value) { SetTrafficPolicyName(value); return *this;}
    inline CreateTrafficPolicyRequest& WithTrafficPolicyName(Aws::String&& value) { SetTrafficPolicyName(std::move(value)); return *this;}
    inline CreateTrafficPolicyRequest& WithTrafficPolicyName(const char* value) { SetTrafficPolicyName(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    AcceptAction m_defaultAction;
    bool m_defaultActionHasBeenSet = false;

    int m_maxMessageSizeBytes;
    bool m_maxMessageSizeBytesHasBeenSet = false;

    Aws::Vector<PolicyStatement> m_policyStatements;
    bool m_policyStatementsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_trafficPolicyName;
    bool m_trafficPolicyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
