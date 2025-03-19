/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/ActionFailurePolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>This action to delivers an email to a mailbox.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/DeliverToMailboxAction">AWS
   * API Reference</a></p>
   */
  class DeliverToMailboxAction
  {
  public:
    AWS_MAILMANAGER_API DeliverToMailboxAction() = default;
    AWS_MAILMANAGER_API DeliverToMailboxAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API DeliverToMailboxAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A policy that states what to do in the case of failure. The action will fail
     * if there are configuration errors. For example, the mailbox ARN is no longer
     * valid.</p>
     */
    inline ActionFailurePolicy GetActionFailurePolicy() const { return m_actionFailurePolicy; }
    inline bool ActionFailurePolicyHasBeenSet() const { return m_actionFailurePolicyHasBeenSet; }
    inline void SetActionFailurePolicy(ActionFailurePolicy value) { m_actionFailurePolicyHasBeenSet = true; m_actionFailurePolicy = value; }
    inline DeliverToMailboxAction& WithActionFailurePolicy(ActionFailurePolicy value) { SetActionFailurePolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a WorkMail organization to deliver the
     * email to.</p>
     */
    inline const Aws::String& GetMailboxArn() const { return m_mailboxArn; }
    inline bool MailboxArnHasBeenSet() const { return m_mailboxArnHasBeenSet; }
    template<typename MailboxArnT = Aws::String>
    void SetMailboxArn(MailboxArnT&& value) { m_mailboxArnHasBeenSet = true; m_mailboxArn = std::forward<MailboxArnT>(value); }
    template<typename MailboxArnT = Aws::String>
    DeliverToMailboxAction& WithMailboxArn(MailboxArnT&& value) { SetMailboxArn(std::forward<MailboxArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role to use to execute this action.
     * The role must have access to the workmail:DeliverToMailbox API.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DeliverToMailboxAction& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    ActionFailurePolicy m_actionFailurePolicy{ActionFailurePolicy::NOT_SET};
    bool m_actionFailurePolicyHasBeenSet = false;

    Aws::String m_mailboxArn;
    bool m_mailboxArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
