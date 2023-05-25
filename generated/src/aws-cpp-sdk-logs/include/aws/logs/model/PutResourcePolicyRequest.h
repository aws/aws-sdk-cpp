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
    AWS_CLOUDWATCHLOGS_API PutResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of the new policy. This parameter is required.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>Name of the new policy. This parameter is required.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>Name of the new policy. This parameter is required.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>Name of the new policy. This parameter is required.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>Name of the new policy. This parameter is required.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>Name of the new policy. This parameter is required.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>Name of the new policy. This parameter is required.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>Name of the new policy. This parameter is required.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


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
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

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
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }

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
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

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
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }

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
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

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
    inline PutResourcePolicyRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

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
    inline PutResourcePolicyRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

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
    inline PutResourcePolicyRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}

  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
