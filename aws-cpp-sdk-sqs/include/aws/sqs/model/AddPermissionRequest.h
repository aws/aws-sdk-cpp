/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/SQSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_SQS_API AddPermissionRequest : public SQSRequest
  {
  public:
    AddPermissionRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline void SetQueueUrl(const char* value) { m_queueUrlHasBeenSet = true; m_queueUrl.assign(value); }

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline AddPermissionRequest& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline AddPermissionRequest& WithQueueUrl(Aws::String&& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p> <p>Queue URLs are
     * case-sensitive.</p>
     */
    inline AddPermissionRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The unique identification of the permission you're setting (e.g.,
     * <code>AliceSendMessage</code>). Constraints: Maximum 80 characters; alphanumeric
     * characters, hyphens (-), and underscores (_) are allowed.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>The unique identification of the permission you're setting (e.g.,
     * <code>AliceSendMessage</code>). Constraints: Maximum 80 characters; alphanumeric
     * characters, hyphens (-), and underscores (_) are allowed.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The unique identification of the permission you're setting (e.g.,
     * <code>AliceSendMessage</code>). Constraints: Maximum 80 characters; alphanumeric
     * characters, hyphens (-), and underscores (_) are allowed.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The unique identification of the permission you're setting (e.g.,
     * <code>AliceSendMessage</code>). Constraints: Maximum 80 characters; alphanumeric
     * characters, hyphens (-), and underscores (_) are allowed.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>The unique identification of the permission you're setting (e.g.,
     * <code>AliceSendMessage</code>). Constraints: Maximum 80 characters; alphanumeric
     * characters, hyphens (-), and underscores (_) are allowed.</p>
     */
    inline AddPermissionRequest& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>The unique identification of the permission you're setting (e.g.,
     * <code>AliceSendMessage</code>). Constraints: Maximum 80 characters; alphanumeric
     * characters, hyphens (-), and underscores (_) are allowed.</p>
     */
    inline AddPermissionRequest& WithLabel(Aws::String&& value) { SetLabel(value); return *this;}

    /**
     * <p>The unique identification of the permission you're setting (e.g.,
     * <code>AliceSendMessage</code>). Constraints: Maximum 80 characters; alphanumeric
     * characters, hyphens (-), and underscores (_) are allowed.</p>
     */
    inline AddPermissionRequest& WithLabel(const char* value) { SetLabel(value); return *this;}

    /**
     * <p>The AWS account number of the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/glos-chap.html#P">principal</a>
     * who will be given permission. The principal must have an AWS account, but does
     * not need to be signed up for Amazon SQS. For information about locating the AWS
     * account identification, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AWSCredentials.html">Your
     * AWS Identifiers</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAWSAccountIds() const{ return m_aWSAccountIds; }

    /**
     * <p>The AWS account number of the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/glos-chap.html#P">principal</a>
     * who will be given permission. The principal must have an AWS account, but does
     * not need to be signed up for Amazon SQS. For information about locating the AWS
     * account identification, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AWSCredentials.html">Your
     * AWS Identifiers</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline void SetAWSAccountIds(const Aws::Vector<Aws::String>& value) { m_aWSAccountIdsHasBeenSet = true; m_aWSAccountIds = value; }

    /**
     * <p>The AWS account number of the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/glos-chap.html#P">principal</a>
     * who will be given permission. The principal must have an AWS account, but does
     * not need to be signed up for Amazon SQS. For information about locating the AWS
     * account identification, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AWSCredentials.html">Your
     * AWS Identifiers</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline void SetAWSAccountIds(Aws::Vector<Aws::String>&& value) { m_aWSAccountIdsHasBeenSet = true; m_aWSAccountIds = value; }

    /**
     * <p>The AWS account number of the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/glos-chap.html#P">principal</a>
     * who will be given permission. The principal must have an AWS account, but does
     * not need to be signed up for Amazon SQS. For information about locating the AWS
     * account identification, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AWSCredentials.html">Your
     * AWS Identifiers</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline AddPermissionRequest& WithAWSAccountIds(const Aws::Vector<Aws::String>& value) { SetAWSAccountIds(value); return *this;}

    /**
     * <p>The AWS account number of the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/glos-chap.html#P">principal</a>
     * who will be given permission. The principal must have an AWS account, but does
     * not need to be signed up for Amazon SQS. For information about locating the AWS
     * account identification, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AWSCredentials.html">Your
     * AWS Identifiers</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline AddPermissionRequest& WithAWSAccountIds(Aws::Vector<Aws::String>&& value) { SetAWSAccountIds(value); return *this;}

    /**
     * <p>The AWS account number of the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/glos-chap.html#P">principal</a>
     * who will be given permission. The principal must have an AWS account, but does
     * not need to be signed up for Amazon SQS. For information about locating the AWS
     * account identification, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AWSCredentials.html">Your
     * AWS Identifiers</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline AddPermissionRequest& AddAWSAccountIds(const Aws::String& value) { m_aWSAccountIdsHasBeenSet = true; m_aWSAccountIds.push_back(value); return *this; }

    /**
     * <p>The AWS account number of the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/glos-chap.html#P">principal</a>
     * who will be given permission. The principal must have an AWS account, but does
     * not need to be signed up for Amazon SQS. For information about locating the AWS
     * account identification, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AWSCredentials.html">Your
     * AWS Identifiers</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline AddPermissionRequest& AddAWSAccountIds(Aws::String&& value) { m_aWSAccountIdsHasBeenSet = true; m_aWSAccountIds.push_back(value); return *this; }

    /**
     * <p>The AWS account number of the <a
     * href="http://docs.aws.amazon.com/general/latest/gr/glos-chap.html#P">principal</a>
     * who will be given permission. The principal must have an AWS account, but does
     * not need to be signed up for Amazon SQS. For information about locating the AWS
     * account identification, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AWSCredentials.html">Your
     * AWS Identifiers</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline AddPermissionRequest& AddAWSAccountIds(const char* value) { m_aWSAccountIdsHasBeenSet = true; m_aWSAccountIds.push_back(value); return *this; }

    /**
     * <p>The action the client wants to allow for the specified principal. The
     * following are valid values: <code>* | SendMessage | ReceiveMessage |
     * DeleteMessage | ChangeMessageVisibility | GetQueueAttributes |
     * GetQueueUrl</code>. For more information about these actions, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/acp-overview.html#PermissionTypes">Understanding
     * Permissions</a> in the <i>Amazon SQS Developer Guide</i>.</p> <p>Specifying
     * <code>SendMessage</code>, <code>DeleteMessage</code>, or
     * <code>ChangeMessageVisibility</code> for the <code>ActionName.n</code> also
     * grants permissions for the corresponding batch versions of those actions:
     * <code>SendMessageBatch</code>, <code>DeleteMessageBatch</code>, and
     * <code>ChangeMessageVisibilityBatch</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActions() const{ return m_actions; }

    /**
     * <p>The action the client wants to allow for the specified principal. The
     * following are valid values: <code>* | SendMessage | ReceiveMessage |
     * DeleteMessage | ChangeMessageVisibility | GetQueueAttributes |
     * GetQueueUrl</code>. For more information about these actions, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/acp-overview.html#PermissionTypes">Understanding
     * Permissions</a> in the <i>Amazon SQS Developer Guide</i>.</p> <p>Specifying
     * <code>SendMessage</code>, <code>DeleteMessage</code>, or
     * <code>ChangeMessageVisibility</code> for the <code>ActionName.n</code> also
     * grants permissions for the corresponding batch versions of those actions:
     * <code>SendMessageBatch</code>, <code>DeleteMessageBatch</code>, and
     * <code>ChangeMessageVisibilityBatch</code>.</p>
     */
    inline void SetActions(const Aws::Vector<Aws::String>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The action the client wants to allow for the specified principal. The
     * following are valid values: <code>* | SendMessage | ReceiveMessage |
     * DeleteMessage | ChangeMessageVisibility | GetQueueAttributes |
     * GetQueueUrl</code>. For more information about these actions, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/acp-overview.html#PermissionTypes">Understanding
     * Permissions</a> in the <i>Amazon SQS Developer Guide</i>.</p> <p>Specifying
     * <code>SendMessage</code>, <code>DeleteMessage</code>, or
     * <code>ChangeMessageVisibility</code> for the <code>ActionName.n</code> also
     * grants permissions for the corresponding batch versions of those actions:
     * <code>SendMessageBatch</code>, <code>DeleteMessageBatch</code>, and
     * <code>ChangeMessageVisibilityBatch</code>.</p>
     */
    inline void SetActions(Aws::Vector<Aws::String>&& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The action the client wants to allow for the specified principal. The
     * following are valid values: <code>* | SendMessage | ReceiveMessage |
     * DeleteMessage | ChangeMessageVisibility | GetQueueAttributes |
     * GetQueueUrl</code>. For more information about these actions, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/acp-overview.html#PermissionTypes">Understanding
     * Permissions</a> in the <i>Amazon SQS Developer Guide</i>.</p> <p>Specifying
     * <code>SendMessage</code>, <code>DeleteMessage</code>, or
     * <code>ChangeMessageVisibility</code> for the <code>ActionName.n</code> also
     * grants permissions for the corresponding batch versions of those actions:
     * <code>SendMessageBatch</code>, <code>DeleteMessageBatch</code>, and
     * <code>ChangeMessageVisibilityBatch</code>.</p>
     */
    inline AddPermissionRequest& WithActions(const Aws::Vector<Aws::String>& value) { SetActions(value); return *this;}

    /**
     * <p>The action the client wants to allow for the specified principal. The
     * following are valid values: <code>* | SendMessage | ReceiveMessage |
     * DeleteMessage | ChangeMessageVisibility | GetQueueAttributes |
     * GetQueueUrl</code>. For more information about these actions, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/acp-overview.html#PermissionTypes">Understanding
     * Permissions</a> in the <i>Amazon SQS Developer Guide</i>.</p> <p>Specifying
     * <code>SendMessage</code>, <code>DeleteMessage</code>, or
     * <code>ChangeMessageVisibility</code> for the <code>ActionName.n</code> also
     * grants permissions for the corresponding batch versions of those actions:
     * <code>SendMessageBatch</code>, <code>DeleteMessageBatch</code>, and
     * <code>ChangeMessageVisibilityBatch</code>.</p>
     */
    inline AddPermissionRequest& WithActions(Aws::Vector<Aws::String>&& value) { SetActions(value); return *this;}

    /**
     * <p>The action the client wants to allow for the specified principal. The
     * following are valid values: <code>* | SendMessage | ReceiveMessage |
     * DeleteMessage | ChangeMessageVisibility | GetQueueAttributes |
     * GetQueueUrl</code>. For more information about these actions, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/acp-overview.html#PermissionTypes">Understanding
     * Permissions</a> in the <i>Amazon SQS Developer Guide</i>.</p> <p>Specifying
     * <code>SendMessage</code>, <code>DeleteMessage</code>, or
     * <code>ChangeMessageVisibility</code> for the <code>ActionName.n</code> also
     * grants permissions for the corresponding batch versions of those actions:
     * <code>SendMessageBatch</code>, <code>DeleteMessageBatch</code>, and
     * <code>ChangeMessageVisibilityBatch</code>.</p>
     */
    inline AddPermissionRequest& AddActions(const Aws::String& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The action the client wants to allow for the specified principal. The
     * following are valid values: <code>* | SendMessage | ReceiveMessage |
     * DeleteMessage | ChangeMessageVisibility | GetQueueAttributes |
     * GetQueueUrl</code>. For more information about these actions, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/acp-overview.html#PermissionTypes">Understanding
     * Permissions</a> in the <i>Amazon SQS Developer Guide</i>.</p> <p>Specifying
     * <code>SendMessage</code>, <code>DeleteMessage</code>, or
     * <code>ChangeMessageVisibility</code> for the <code>ActionName.n</code> also
     * grants permissions for the corresponding batch versions of those actions:
     * <code>SendMessageBatch</code>, <code>DeleteMessageBatch</code>, and
     * <code>ChangeMessageVisibilityBatch</code>.</p>
     */
    inline AddPermissionRequest& AddActions(Aws::String&& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The action the client wants to allow for the specified principal. The
     * following are valid values: <code>* | SendMessage | ReceiveMessage |
     * DeleteMessage | ChangeMessageVisibility | GetQueueAttributes |
     * GetQueueUrl</code>. For more information about these actions, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/acp-overview.html#PermissionTypes">Understanding
     * Permissions</a> in the <i>Amazon SQS Developer Guide</i>.</p> <p>Specifying
     * <code>SendMessage</code>, <code>DeleteMessage</code>, or
     * <code>ChangeMessageVisibility</code> for the <code>ActionName.n</code> also
     * grants permissions for the corresponding batch versions of those actions:
     * <code>SendMessageBatch</code>, <code>DeleteMessageBatch</code>, and
     * <code>ChangeMessageVisibilityBatch</code>.</p>
     */
    inline AddPermissionRequest& AddActions(const char* value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

  private:
    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet;
    Aws::String m_label;
    bool m_labelHasBeenSet;
    Aws::Vector<Aws::String> m_aWSAccountIds;
    bool m_aWSAccountIdsHasBeenSet;
    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
