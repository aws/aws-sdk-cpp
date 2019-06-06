/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_CLOUDWATCHLOGS_API PutResourcePolicyRequest : public CloudWatchLogsRequest
  {
  public:
    PutResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * group. Replace "logArn" with the ARN of your CloudWatch Logs resource, such as a
     * log group or log stream.</p> <p> <code>{ "Version": "2012-10-17", "Statement": [
     * { "Sid": "Route53LogsToCloudWatchLogs", "Effect": "Allow", "Principal": {
     * "Service": [ "route53.amazonaws.com" ] }, "Action":"logs:PutLogEvents",
     * "Resource": "logArn" } ] } </code> </p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>Details of the new policy, including the identity of the principal that is
     * enabled to put logs to this account. This is formatted as a JSON string. This
     * parameter is required.</p> <p>The following example creates a resource policy
     * enabling the Route 53 service to put DNS query logs in to the specified log
     * group. Replace "logArn" with the ARN of your CloudWatch Logs resource, such as a
     * log group or log stream.</p> <p> <code>{ "Version": "2012-10-17", "Statement": [
     * { "Sid": "Route53LogsToCloudWatchLogs", "Effect": "Allow", "Principal": {
     * "Service": [ "route53.amazonaws.com" ] }, "Action":"logs:PutLogEvents",
     * "Resource": "logArn" } ] } </code> </p>
     */
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }

    /**
     * <p>Details of the new policy, including the identity of the principal that is
     * enabled to put logs to this account. This is formatted as a JSON string. This
     * parameter is required.</p> <p>The following example creates a resource policy
     * enabling the Route 53 service to put DNS query logs in to the specified log
     * group. Replace "logArn" with the ARN of your CloudWatch Logs resource, such as a
     * log group or log stream.</p> <p> <code>{ "Version": "2012-10-17", "Statement": [
     * { "Sid": "Route53LogsToCloudWatchLogs", "Effect": "Allow", "Principal": {
     * "Service": [ "route53.amazonaws.com" ] }, "Action":"logs:PutLogEvents",
     * "Resource": "logArn" } ] } </code> </p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>Details of the new policy, including the identity of the principal that is
     * enabled to put logs to this account. This is formatted as a JSON string. This
     * parameter is required.</p> <p>The following example creates a resource policy
     * enabling the Route 53 service to put DNS query logs in to the specified log
     * group. Replace "logArn" with the ARN of your CloudWatch Logs resource, such as a
     * log group or log stream.</p> <p> <code>{ "Version": "2012-10-17", "Statement": [
     * { "Sid": "Route53LogsToCloudWatchLogs", "Effect": "Allow", "Principal": {
     * "Service": [ "route53.amazonaws.com" ] }, "Action":"logs:PutLogEvents",
     * "Resource": "logArn" } ] } </code> </p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }

    /**
     * <p>Details of the new policy, including the identity of the principal that is
     * enabled to put logs to this account. This is formatted as a JSON string. This
     * parameter is required.</p> <p>The following example creates a resource policy
     * enabling the Route 53 service to put DNS query logs in to the specified log
     * group. Replace "logArn" with the ARN of your CloudWatch Logs resource, such as a
     * log group or log stream.</p> <p> <code>{ "Version": "2012-10-17", "Statement": [
     * { "Sid": "Route53LogsToCloudWatchLogs", "Effect": "Allow", "Principal": {
     * "Service": [ "route53.amazonaws.com" ] }, "Action":"logs:PutLogEvents",
     * "Resource": "logArn" } ] } </code> </p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>Details of the new policy, including the identity of the principal that is
     * enabled to put logs to this account. This is formatted as a JSON string. This
     * parameter is required.</p> <p>The following example creates a resource policy
     * enabling the Route 53 service to put DNS query logs in to the specified log
     * group. Replace "logArn" with the ARN of your CloudWatch Logs resource, such as a
     * log group or log stream.</p> <p> <code>{ "Version": "2012-10-17", "Statement": [
     * { "Sid": "Route53LogsToCloudWatchLogs", "Effect": "Allow", "Principal": {
     * "Service": [ "route53.amazonaws.com" ] }, "Action":"logs:PutLogEvents",
     * "Resource": "logArn" } ] } </code> </p>
     */
    inline PutResourcePolicyRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>Details of the new policy, including the identity of the principal that is
     * enabled to put logs to this account. This is formatted as a JSON string. This
     * parameter is required.</p> <p>The following example creates a resource policy
     * enabling the Route 53 service to put DNS query logs in to the specified log
     * group. Replace "logArn" with the ARN of your CloudWatch Logs resource, such as a
     * log group or log stream.</p> <p> <code>{ "Version": "2012-10-17", "Statement": [
     * { "Sid": "Route53LogsToCloudWatchLogs", "Effect": "Allow", "Principal": {
     * "Service": [ "route53.amazonaws.com" ] }, "Action":"logs:PutLogEvents",
     * "Resource": "logArn" } ] } </code> </p>
     */
    inline PutResourcePolicyRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>Details of the new policy, including the identity of the principal that is
     * enabled to put logs to this account. This is formatted as a JSON string. This
     * parameter is required.</p> <p>The following example creates a resource policy
     * enabling the Route 53 service to put DNS query logs in to the specified log
     * group. Replace "logArn" with the ARN of your CloudWatch Logs resource, such as a
     * log group or log stream.</p> <p> <code>{ "Version": "2012-10-17", "Statement": [
     * { "Sid": "Route53LogsToCloudWatchLogs", "Effect": "Allow", "Principal": {
     * "Service": [ "route53.amazonaws.com" ] }, "Action":"logs:PutLogEvents",
     * "Resource": "logArn" } ] } </code> </p>
     */
    inline PutResourcePolicyRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}

  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
