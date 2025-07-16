/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class PutResourcePolicyRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutResourcePolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name of the new policy. This parameter is required.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    PutResourcePolicyRequest& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the new policy, including the identity of the principal that is
     * enabled to put logs to this account. This is formatted as a JSON string. This
     * parameter is required.</p> <p>The following example creates a resource policy
     * enabling the Route 53 service to put DNS query logs in to the specified log
     * group. Replace <code>"logArn"</code> with the ARN of your CloudWatch Logs
     * resource, such as a log group or log stream.</p> <p>CloudWatch Logs also
     * supports <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_condition-keys.html#condition-keys-sourcearn">aws:SourceArn</a>
     * and <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_condition-keys.html#condition-keys-sourceaccount">aws:SourceAccount</a>
     * condition context keys.</p> <p>In the example resource policy, you would replace
     * the value of <code>SourceArn</code> with the resource making the call from
     * Route 53 to CloudWatch Logs. You would also replace the value of
     * <code>SourceAccount</code> with the Amazon Web Services account ID making that
     * call.</p> <p/> <p> <code>{ "Version": "2012-10-17", "Statement": [ { "Sid":
     * "Route53LogsToCloudWatchLogs", "Effect": "Allow", "Principal": { "Service": [
     * "route53.amazonaws.com" ] }, "Action": "logs:PutLogEvents", "Resource":
     * "logArn", "Condition": { "ArnLike": { "aws:SourceArn": "myRoute53ResourceArn" },
     * "StringEquals": { "aws:SourceAccount": "myAwsAccountId" } } } ] }</code> </p>
     */
    inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
    template<typename PolicyDocumentT = Aws::String>
    void SetPolicyDocument(PolicyDocumentT&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::forward<PolicyDocumentT>(value); }
    template<typename PolicyDocumentT = Aws::String>
    PutResourcePolicyRequest& WithPolicyDocument(PolicyDocumentT&& value) { SetPolicyDocument(std::forward<PolicyDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the CloudWatch Logs resource to which the resource policy needs to
     * be added or attached. Currently only supports LogGroup ARN.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    PutResourcePolicyRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected revision ID of the resource policy. Required when
     * <code>resourceArn</code> is provided to prevent concurrent modifications. Use
     * <code>null</code> when creating a resource policy for the first time.</p>
     */
    inline const Aws::String& GetExpectedRevisionId() const { return m_expectedRevisionId; }
    inline bool ExpectedRevisionIdHasBeenSet() const { return m_expectedRevisionIdHasBeenSet; }
    template<typename ExpectedRevisionIdT = Aws::String>
    void SetExpectedRevisionId(ExpectedRevisionIdT&& value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId = std::forward<ExpectedRevisionIdT>(value); }
    template<typename ExpectedRevisionIdT = Aws::String>
    PutResourcePolicyRequest& WithExpectedRevisionId(ExpectedRevisionIdT&& value) { SetExpectedRevisionId(std::forward<ExpectedRevisionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_expectedRevisionId;
    bool m_expectedRevisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
