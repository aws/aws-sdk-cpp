/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/model/AcceptAction.h>
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
    AWS_MAILMANAGER_API CreateTrafficPolicyRequest() = default;

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
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateTrafficPolicyRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the traffic policy resource.</p>
     */
    inline const Aws::String& GetTrafficPolicyName() const { return m_trafficPolicyName; }
    inline bool TrafficPolicyNameHasBeenSet() const { return m_trafficPolicyNameHasBeenSet; }
    template<typename TrafficPolicyNameT = Aws::String>
    void SetTrafficPolicyName(TrafficPolicyNameT&& value) { m_trafficPolicyNameHasBeenSet = true; m_trafficPolicyName = std::forward<TrafficPolicyNameT>(value); }
    template<typename TrafficPolicyNameT = Aws::String>
    CreateTrafficPolicyRequest& WithTrafficPolicyName(TrafficPolicyNameT&& value) { SetTrafficPolicyName(std::forward<TrafficPolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Conditional statements for filtering email traffic.</p>
     */
    inline const Aws::Vector<PolicyStatement>& GetPolicyStatements() const { return m_policyStatements; }
    inline bool PolicyStatementsHasBeenSet() const { return m_policyStatementsHasBeenSet; }
    template<typename PolicyStatementsT = Aws::Vector<PolicyStatement>>
    void SetPolicyStatements(PolicyStatementsT&& value) { m_policyStatementsHasBeenSet = true; m_policyStatements = std::forward<PolicyStatementsT>(value); }
    template<typename PolicyStatementsT = Aws::Vector<PolicyStatement>>
    CreateTrafficPolicyRequest& WithPolicyStatements(PolicyStatementsT&& value) { SetPolicyStatements(std::forward<PolicyStatementsT>(value)); return *this;}
    template<typename PolicyStatementsT = PolicyStatement>
    CreateTrafficPolicyRequest& AddPolicyStatements(PolicyStatementsT&& value) { m_policyStatementsHasBeenSet = true; m_policyStatements.emplace_back(std::forward<PolicyStatementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Default action instructs the traﬃc policy to either Allow or Deny (block)
     * messages that fall outside of (or not addressed by) the conditions of your
     * policy statements</p>
     */
    inline AcceptAction GetDefaultAction() const { return m_defaultAction; }
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }
    inline void SetDefaultAction(AcceptAction value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }
    inline CreateTrafficPolicyRequest& WithDefaultAction(AcceptAction value) { SetDefaultAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum message size in bytes of email which is allowed in by this
     * traffic policy—anything larger will be blocked.</p>
     */
    inline int GetMaxMessageSizeBytes() const { return m_maxMessageSizeBytes; }
    inline bool MaxMessageSizeBytesHasBeenSet() const { return m_maxMessageSizeBytesHasBeenSet; }
    inline void SetMaxMessageSizeBytes(int value) { m_maxMessageSizeBytesHasBeenSet = true; m_maxMessageSizeBytes = value; }
    inline CreateTrafficPolicyRequest& WithMaxMessageSizeBytes(int value) { SetMaxMessageSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for the resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateTrafficPolicyRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateTrafficPolicyRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_trafficPolicyName;
    bool m_trafficPolicyNameHasBeenSet = false;

    Aws::Vector<PolicyStatement> m_policyStatements;
    bool m_policyStatementsHasBeenSet = false;

    AcceptAction m_defaultAction{AcceptAction::NOT_SET};
    bool m_defaultActionHasBeenSet = false;

    int m_maxMessageSizeBytes{0};
    bool m_maxMessageSizeBytesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
