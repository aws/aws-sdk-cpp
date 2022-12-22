/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/FlowLogsResourceType.h>
#include <aws/ec2/model/TrafficType.h>
#include <aws/ec2/model/LogDestinationType.h>
#include <aws/ec2/model/DestinationOptionsRequest.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateFlowLogsRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateFlowLogsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFlowLogs"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateFlowLogsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline CreateFlowLogsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline CreateFlowLogsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline CreateFlowLogsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ARN of the IAM role that allows Amazon EC2 to publish flow logs to a
     * CloudWatch Logs log group in your account.</p> <p>This parameter is required if
     * the destination type is <code>cloud-watch-logs</code> and unsupported
     * otherwise.</p>
     */
    inline const Aws::String& GetDeliverLogsPermissionArn() const{ return m_deliverLogsPermissionArn; }

    /**
     * <p>The ARN of the IAM role that allows Amazon EC2 to publish flow logs to a
     * CloudWatch Logs log group in your account.</p> <p>This parameter is required if
     * the destination type is <code>cloud-watch-logs</code> and unsupported
     * otherwise.</p>
     */
    inline bool DeliverLogsPermissionArnHasBeenSet() const { return m_deliverLogsPermissionArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that allows Amazon EC2 to publish flow logs to a
     * CloudWatch Logs log group in your account.</p> <p>This parameter is required if
     * the destination type is <code>cloud-watch-logs</code> and unsupported
     * otherwise.</p>
     */
    inline void SetDeliverLogsPermissionArn(const Aws::String& value) { m_deliverLogsPermissionArnHasBeenSet = true; m_deliverLogsPermissionArn = value; }

    /**
     * <p>The ARN of the IAM role that allows Amazon EC2 to publish flow logs to a
     * CloudWatch Logs log group in your account.</p> <p>This parameter is required if
     * the destination type is <code>cloud-watch-logs</code> and unsupported
     * otherwise.</p>
     */
    inline void SetDeliverLogsPermissionArn(Aws::String&& value) { m_deliverLogsPermissionArnHasBeenSet = true; m_deliverLogsPermissionArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that allows Amazon EC2 to publish flow logs to a
     * CloudWatch Logs log group in your account.</p> <p>This parameter is required if
     * the destination type is <code>cloud-watch-logs</code> and unsupported
     * otherwise.</p>
     */
    inline void SetDeliverLogsPermissionArn(const char* value) { m_deliverLogsPermissionArnHasBeenSet = true; m_deliverLogsPermissionArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that allows Amazon EC2 to publish flow logs to a
     * CloudWatch Logs log group in your account.</p> <p>This parameter is required if
     * the destination type is <code>cloud-watch-logs</code> and unsupported
     * otherwise.</p>
     */
    inline CreateFlowLogsRequest& WithDeliverLogsPermissionArn(const Aws::String& value) { SetDeliverLogsPermissionArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that allows Amazon EC2 to publish flow logs to a
     * CloudWatch Logs log group in your account.</p> <p>This parameter is required if
     * the destination type is <code>cloud-watch-logs</code> and unsupported
     * otherwise.</p>
     */
    inline CreateFlowLogsRequest& WithDeliverLogsPermissionArn(Aws::String&& value) { SetDeliverLogsPermissionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that allows Amazon EC2 to publish flow logs to a
     * CloudWatch Logs log group in your account.</p> <p>This parameter is required if
     * the destination type is <code>cloud-watch-logs</code> and unsupported
     * otherwise.</p>
     */
    inline CreateFlowLogsRequest& WithDeliverLogsPermissionArn(const char* value) { SetDeliverLogsPermissionArn(value); return *this;}


    /**
     * <p>The ARN of the IAM role that allows Amazon EC2 to publish flow logs across
     * accounts.</p>
     */
    inline const Aws::String& GetDeliverCrossAccountRole() const{ return m_deliverCrossAccountRole; }

    /**
     * <p>The ARN of the IAM role that allows Amazon EC2 to publish flow logs across
     * accounts.</p>
     */
    inline bool DeliverCrossAccountRoleHasBeenSet() const { return m_deliverCrossAccountRoleHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that allows Amazon EC2 to publish flow logs across
     * accounts.</p>
     */
    inline void SetDeliverCrossAccountRole(const Aws::String& value) { m_deliverCrossAccountRoleHasBeenSet = true; m_deliverCrossAccountRole = value; }

    /**
     * <p>The ARN of the IAM role that allows Amazon EC2 to publish flow logs across
     * accounts.</p>
     */
    inline void SetDeliverCrossAccountRole(Aws::String&& value) { m_deliverCrossAccountRoleHasBeenSet = true; m_deliverCrossAccountRole = std::move(value); }

    /**
     * <p>The ARN of the IAM role that allows Amazon EC2 to publish flow logs across
     * accounts.</p>
     */
    inline void SetDeliverCrossAccountRole(const char* value) { m_deliverCrossAccountRoleHasBeenSet = true; m_deliverCrossAccountRole.assign(value); }

    /**
     * <p>The ARN of the IAM role that allows Amazon EC2 to publish flow logs across
     * accounts.</p>
     */
    inline CreateFlowLogsRequest& WithDeliverCrossAccountRole(const Aws::String& value) { SetDeliverCrossAccountRole(value); return *this;}

    /**
     * <p>The ARN of the IAM role that allows Amazon EC2 to publish flow logs across
     * accounts.</p>
     */
    inline CreateFlowLogsRequest& WithDeliverCrossAccountRole(Aws::String&& value) { SetDeliverCrossAccountRole(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that allows Amazon EC2 to publish flow logs across
     * accounts.</p>
     */
    inline CreateFlowLogsRequest& WithDeliverCrossAccountRole(const char* value) { SetDeliverCrossAccountRole(value); return *this;}


    /**
     * <p>The name of a new or existing CloudWatch Logs log group where Amazon EC2
     * publishes your flow logs.</p> <p>This parameter is valid only if the destination
     * type is <code>cloud-watch-logs</code>.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of a new or existing CloudWatch Logs log group where Amazon EC2
     * publishes your flow logs.</p> <p>This parameter is valid only if the destination
     * type is <code>cloud-watch-logs</code>.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of a new or existing CloudWatch Logs log group where Amazon EC2
     * publishes your flow logs.</p> <p>This parameter is valid only if the destination
     * type is <code>cloud-watch-logs</code>.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of a new or existing CloudWatch Logs log group where Amazon EC2
     * publishes your flow logs.</p> <p>This parameter is valid only if the destination
     * type is <code>cloud-watch-logs</code>.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of a new or existing CloudWatch Logs log group where Amazon EC2
     * publishes your flow logs.</p> <p>This parameter is valid only if the destination
     * type is <code>cloud-watch-logs</code>.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of a new or existing CloudWatch Logs log group where Amazon EC2
     * publishes your flow logs.</p> <p>This parameter is valid only if the destination
     * type is <code>cloud-watch-logs</code>.</p>
     */
    inline CreateFlowLogsRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of a new or existing CloudWatch Logs log group where Amazon EC2
     * publishes your flow logs.</p> <p>This parameter is valid only if the destination
     * type is <code>cloud-watch-logs</code>.</p>
     */
    inline CreateFlowLogsRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of a new or existing CloudWatch Logs log group where Amazon EC2
     * publishes your flow logs.</p> <p>This parameter is valid only if the destination
     * type is <code>cloud-watch-logs</code>.</p>
     */
    inline CreateFlowLogsRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>The IDs of the resources to monitor. For example, if the resource type is
     * <code>VPC</code>, specify the IDs of the VPCs.</p> <p>Constraints: Maximum of 25
     * for transit gateway resource types. Maximum of 1000 for the other resource
     * types.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const{ return m_resourceIds; }

    /**
     * <p>The IDs of the resources to monitor. For example, if the resource type is
     * <code>VPC</code>, specify the IDs of the VPCs.</p> <p>Constraints: Maximum of 25
     * for transit gateway resource types. Maximum of 1000 for the other resource
     * types.</p>
     */
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }

    /**
     * <p>The IDs of the resources to monitor. For example, if the resource type is
     * <code>VPC</code>, specify the IDs of the VPCs.</p> <p>Constraints: Maximum of 25
     * for transit gateway resource types. Maximum of 1000 for the other resource
     * types.</p>
     */
    inline void SetResourceIds(const Aws::Vector<Aws::String>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>The IDs of the resources to monitor. For example, if the resource type is
     * <code>VPC</code>, specify the IDs of the VPCs.</p> <p>Constraints: Maximum of 25
     * for transit gateway resource types. Maximum of 1000 for the other resource
     * types.</p>
     */
    inline void SetResourceIds(Aws::Vector<Aws::String>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }

    /**
     * <p>The IDs of the resources to monitor. For example, if the resource type is
     * <code>VPC</code>, specify the IDs of the VPCs.</p> <p>Constraints: Maximum of 25
     * for transit gateway resource types. Maximum of 1000 for the other resource
     * types.</p>
     */
    inline CreateFlowLogsRequest& WithResourceIds(const Aws::Vector<Aws::String>& value) { SetResourceIds(value); return *this;}

    /**
     * <p>The IDs of the resources to monitor. For example, if the resource type is
     * <code>VPC</code>, specify the IDs of the VPCs.</p> <p>Constraints: Maximum of 25
     * for transit gateway resource types. Maximum of 1000 for the other resource
     * types.</p>
     */
    inline CreateFlowLogsRequest& WithResourceIds(Aws::Vector<Aws::String>&& value) { SetResourceIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the resources to monitor. For example, if the resource type is
     * <code>VPC</code>, specify the IDs of the VPCs.</p> <p>Constraints: Maximum of 25
     * for transit gateway resource types. Maximum of 1000 for the other resource
     * types.</p>
     */
    inline CreateFlowLogsRequest& AddResourceIds(const Aws::String& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the resources to monitor. For example, if the resource type is
     * <code>VPC</code>, specify the IDs of the VPCs.</p> <p>Constraints: Maximum of 25
     * for transit gateway resource types. Maximum of 1000 for the other resource
     * types.</p>
     */
    inline CreateFlowLogsRequest& AddResourceIds(Aws::String&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the resources to monitor. For example, if the resource type is
     * <code>VPC</code>, specify the IDs of the VPCs.</p> <p>Constraints: Maximum of 25
     * for transit gateway resource types. Maximum of 1000 for the other resource
     * types.</p>
     */
    inline CreateFlowLogsRequest& AddResourceIds(const char* value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }


    /**
     * <p>The type of resource to monitor.</p>
     */
    inline const FlowLogsResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource to monitor.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource to monitor.</p>
     */
    inline void SetResourceType(const FlowLogsResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource to monitor.</p>
     */
    inline void SetResourceType(FlowLogsResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource to monitor.</p>
     */
    inline CreateFlowLogsRequest& WithResourceType(const FlowLogsResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource to monitor.</p>
     */
    inline CreateFlowLogsRequest& WithResourceType(FlowLogsResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The type of traffic to monitor (accepted traffic, rejected traffic, or all
     * traffic). This parameter is not supported for transit gateway resource types. It
     * is required for the other resource types.</p>
     */
    inline const TrafficType& GetTrafficType() const{ return m_trafficType; }

    /**
     * <p>The type of traffic to monitor (accepted traffic, rejected traffic, or all
     * traffic). This parameter is not supported for transit gateway resource types. It
     * is required for the other resource types.</p>
     */
    inline bool TrafficTypeHasBeenSet() const { return m_trafficTypeHasBeenSet; }

    /**
     * <p>The type of traffic to monitor (accepted traffic, rejected traffic, or all
     * traffic). This parameter is not supported for transit gateway resource types. It
     * is required for the other resource types.</p>
     */
    inline void SetTrafficType(const TrafficType& value) { m_trafficTypeHasBeenSet = true; m_trafficType = value; }

    /**
     * <p>The type of traffic to monitor (accepted traffic, rejected traffic, or all
     * traffic). This parameter is not supported for transit gateway resource types. It
     * is required for the other resource types.</p>
     */
    inline void SetTrafficType(TrafficType&& value) { m_trafficTypeHasBeenSet = true; m_trafficType = std::move(value); }

    /**
     * <p>The type of traffic to monitor (accepted traffic, rejected traffic, or all
     * traffic). This parameter is not supported for transit gateway resource types. It
     * is required for the other resource types.</p>
     */
    inline CreateFlowLogsRequest& WithTrafficType(const TrafficType& value) { SetTrafficType(value); return *this;}

    /**
     * <p>The type of traffic to monitor (accepted traffic, rejected traffic, or all
     * traffic). This parameter is not supported for transit gateway resource types. It
     * is required for the other resource types.</p>
     */
    inline CreateFlowLogsRequest& WithTrafficType(TrafficType&& value) { SetTrafficType(std::move(value)); return *this;}


    /**
     * <p>The type of destination for the flow log data.</p> <p>Default:
     * <code>cloud-watch-logs</code> </p>
     */
    inline const LogDestinationType& GetLogDestinationType() const{ return m_logDestinationType; }

    /**
     * <p>The type of destination for the flow log data.</p> <p>Default:
     * <code>cloud-watch-logs</code> </p>
     */
    inline bool LogDestinationTypeHasBeenSet() const { return m_logDestinationTypeHasBeenSet; }

    /**
     * <p>The type of destination for the flow log data.</p> <p>Default:
     * <code>cloud-watch-logs</code> </p>
     */
    inline void SetLogDestinationType(const LogDestinationType& value) { m_logDestinationTypeHasBeenSet = true; m_logDestinationType = value; }

    /**
     * <p>The type of destination for the flow log data.</p> <p>Default:
     * <code>cloud-watch-logs</code> </p>
     */
    inline void SetLogDestinationType(LogDestinationType&& value) { m_logDestinationTypeHasBeenSet = true; m_logDestinationType = std::move(value); }

    /**
     * <p>The type of destination for the flow log data.</p> <p>Default:
     * <code>cloud-watch-logs</code> </p>
     */
    inline CreateFlowLogsRequest& WithLogDestinationType(const LogDestinationType& value) { SetLogDestinationType(value); return *this;}

    /**
     * <p>The type of destination for the flow log data.</p> <p>Default:
     * <code>cloud-watch-logs</code> </p>
     */
    inline CreateFlowLogsRequest& WithLogDestinationType(LogDestinationType&& value) { SetLogDestinationType(std::move(value)); return *this;}


    /**
     * <p>The destination for the flow log data. The meaning of this parameter depends
     * on the destination type.</p> <ul> <li> <p>If the destination type is
     * <code>cloud-watch-logs</code>, specify the ARN of a CloudWatch Logs log group.
     * For example:</p>
     * <p>arn:aws:logs:<i>region</i>:<i>account_id</i>:log-group:<i>my_group</i> </p>
     * <p>Alternatively, use the <code>LogGroupName</code> parameter.</p> </li> <li>
     * <p>If the destination type is <code>s3</code>, specify the ARN of an S3 bucket.
     * For example:</p> <p>arn:aws:s3:::<i>my_bucket</i>/<i>my_subfolder</i>/</p>
     * <p>The subfolder is optional. Note that you can't use <code>AWSLogs</code> as a
     * subfolder name.</p> </li> <li> <p>If the destination type is
     * <code>kinesis-data-firehose</code>, specify the ARN of a Kinesis Data Firehose
     * delivery stream. For example:</p>
     * <p>arn:aws:firehose:<i>region</i>:<i>account_id</i>:deliverystream:<i>my_stream</i>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetLogDestination() const{ return m_logDestination; }

    /**
     * <p>The destination for the flow log data. The meaning of this parameter depends
     * on the destination type.</p> <ul> <li> <p>If the destination type is
     * <code>cloud-watch-logs</code>, specify the ARN of a CloudWatch Logs log group.
     * For example:</p>
     * <p>arn:aws:logs:<i>region</i>:<i>account_id</i>:log-group:<i>my_group</i> </p>
     * <p>Alternatively, use the <code>LogGroupName</code> parameter.</p> </li> <li>
     * <p>If the destination type is <code>s3</code>, specify the ARN of an S3 bucket.
     * For example:</p> <p>arn:aws:s3:::<i>my_bucket</i>/<i>my_subfolder</i>/</p>
     * <p>The subfolder is optional. Note that you can't use <code>AWSLogs</code> as a
     * subfolder name.</p> </li> <li> <p>If the destination type is
     * <code>kinesis-data-firehose</code>, specify the ARN of a Kinesis Data Firehose
     * delivery stream. For example:</p>
     * <p>arn:aws:firehose:<i>region</i>:<i>account_id</i>:deliverystream:<i>my_stream</i>
     * </p> </li> </ul>
     */
    inline bool LogDestinationHasBeenSet() const { return m_logDestinationHasBeenSet; }

    /**
     * <p>The destination for the flow log data. The meaning of this parameter depends
     * on the destination type.</p> <ul> <li> <p>If the destination type is
     * <code>cloud-watch-logs</code>, specify the ARN of a CloudWatch Logs log group.
     * For example:</p>
     * <p>arn:aws:logs:<i>region</i>:<i>account_id</i>:log-group:<i>my_group</i> </p>
     * <p>Alternatively, use the <code>LogGroupName</code> parameter.</p> </li> <li>
     * <p>If the destination type is <code>s3</code>, specify the ARN of an S3 bucket.
     * For example:</p> <p>arn:aws:s3:::<i>my_bucket</i>/<i>my_subfolder</i>/</p>
     * <p>The subfolder is optional. Note that you can't use <code>AWSLogs</code> as a
     * subfolder name.</p> </li> <li> <p>If the destination type is
     * <code>kinesis-data-firehose</code>, specify the ARN of a Kinesis Data Firehose
     * delivery stream. For example:</p>
     * <p>arn:aws:firehose:<i>region</i>:<i>account_id</i>:deliverystream:<i>my_stream</i>
     * </p> </li> </ul>
     */
    inline void SetLogDestination(const Aws::String& value) { m_logDestinationHasBeenSet = true; m_logDestination = value; }

    /**
     * <p>The destination for the flow log data. The meaning of this parameter depends
     * on the destination type.</p> <ul> <li> <p>If the destination type is
     * <code>cloud-watch-logs</code>, specify the ARN of a CloudWatch Logs log group.
     * For example:</p>
     * <p>arn:aws:logs:<i>region</i>:<i>account_id</i>:log-group:<i>my_group</i> </p>
     * <p>Alternatively, use the <code>LogGroupName</code> parameter.</p> </li> <li>
     * <p>If the destination type is <code>s3</code>, specify the ARN of an S3 bucket.
     * For example:</p> <p>arn:aws:s3:::<i>my_bucket</i>/<i>my_subfolder</i>/</p>
     * <p>The subfolder is optional. Note that you can't use <code>AWSLogs</code> as a
     * subfolder name.</p> </li> <li> <p>If the destination type is
     * <code>kinesis-data-firehose</code>, specify the ARN of a Kinesis Data Firehose
     * delivery stream. For example:</p>
     * <p>arn:aws:firehose:<i>region</i>:<i>account_id</i>:deliverystream:<i>my_stream</i>
     * </p> </li> </ul>
     */
    inline void SetLogDestination(Aws::String&& value) { m_logDestinationHasBeenSet = true; m_logDestination = std::move(value); }

    /**
     * <p>The destination for the flow log data. The meaning of this parameter depends
     * on the destination type.</p> <ul> <li> <p>If the destination type is
     * <code>cloud-watch-logs</code>, specify the ARN of a CloudWatch Logs log group.
     * For example:</p>
     * <p>arn:aws:logs:<i>region</i>:<i>account_id</i>:log-group:<i>my_group</i> </p>
     * <p>Alternatively, use the <code>LogGroupName</code> parameter.</p> </li> <li>
     * <p>If the destination type is <code>s3</code>, specify the ARN of an S3 bucket.
     * For example:</p> <p>arn:aws:s3:::<i>my_bucket</i>/<i>my_subfolder</i>/</p>
     * <p>The subfolder is optional. Note that you can't use <code>AWSLogs</code> as a
     * subfolder name.</p> </li> <li> <p>If the destination type is
     * <code>kinesis-data-firehose</code>, specify the ARN of a Kinesis Data Firehose
     * delivery stream. For example:</p>
     * <p>arn:aws:firehose:<i>region</i>:<i>account_id</i>:deliverystream:<i>my_stream</i>
     * </p> </li> </ul>
     */
    inline void SetLogDestination(const char* value) { m_logDestinationHasBeenSet = true; m_logDestination.assign(value); }

    /**
     * <p>The destination for the flow log data. The meaning of this parameter depends
     * on the destination type.</p> <ul> <li> <p>If the destination type is
     * <code>cloud-watch-logs</code>, specify the ARN of a CloudWatch Logs log group.
     * For example:</p>
     * <p>arn:aws:logs:<i>region</i>:<i>account_id</i>:log-group:<i>my_group</i> </p>
     * <p>Alternatively, use the <code>LogGroupName</code> parameter.</p> </li> <li>
     * <p>If the destination type is <code>s3</code>, specify the ARN of an S3 bucket.
     * For example:</p> <p>arn:aws:s3:::<i>my_bucket</i>/<i>my_subfolder</i>/</p>
     * <p>The subfolder is optional. Note that you can't use <code>AWSLogs</code> as a
     * subfolder name.</p> </li> <li> <p>If the destination type is
     * <code>kinesis-data-firehose</code>, specify the ARN of a Kinesis Data Firehose
     * delivery stream. For example:</p>
     * <p>arn:aws:firehose:<i>region</i>:<i>account_id</i>:deliverystream:<i>my_stream</i>
     * </p> </li> </ul>
     */
    inline CreateFlowLogsRequest& WithLogDestination(const Aws::String& value) { SetLogDestination(value); return *this;}

    /**
     * <p>The destination for the flow log data. The meaning of this parameter depends
     * on the destination type.</p> <ul> <li> <p>If the destination type is
     * <code>cloud-watch-logs</code>, specify the ARN of a CloudWatch Logs log group.
     * For example:</p>
     * <p>arn:aws:logs:<i>region</i>:<i>account_id</i>:log-group:<i>my_group</i> </p>
     * <p>Alternatively, use the <code>LogGroupName</code> parameter.</p> </li> <li>
     * <p>If the destination type is <code>s3</code>, specify the ARN of an S3 bucket.
     * For example:</p> <p>arn:aws:s3:::<i>my_bucket</i>/<i>my_subfolder</i>/</p>
     * <p>The subfolder is optional. Note that you can't use <code>AWSLogs</code> as a
     * subfolder name.</p> </li> <li> <p>If the destination type is
     * <code>kinesis-data-firehose</code>, specify the ARN of a Kinesis Data Firehose
     * delivery stream. For example:</p>
     * <p>arn:aws:firehose:<i>region</i>:<i>account_id</i>:deliverystream:<i>my_stream</i>
     * </p> </li> </ul>
     */
    inline CreateFlowLogsRequest& WithLogDestination(Aws::String&& value) { SetLogDestination(std::move(value)); return *this;}

    /**
     * <p>The destination for the flow log data. The meaning of this parameter depends
     * on the destination type.</p> <ul> <li> <p>If the destination type is
     * <code>cloud-watch-logs</code>, specify the ARN of a CloudWatch Logs log group.
     * For example:</p>
     * <p>arn:aws:logs:<i>region</i>:<i>account_id</i>:log-group:<i>my_group</i> </p>
     * <p>Alternatively, use the <code>LogGroupName</code> parameter.</p> </li> <li>
     * <p>If the destination type is <code>s3</code>, specify the ARN of an S3 bucket.
     * For example:</p> <p>arn:aws:s3:::<i>my_bucket</i>/<i>my_subfolder</i>/</p>
     * <p>The subfolder is optional. Note that you can't use <code>AWSLogs</code> as a
     * subfolder name.</p> </li> <li> <p>If the destination type is
     * <code>kinesis-data-firehose</code>, specify the ARN of a Kinesis Data Firehose
     * delivery stream. For example:</p>
     * <p>arn:aws:firehose:<i>region</i>:<i>account_id</i>:deliverystream:<i>my_stream</i>
     * </p> </li> </ul>
     */
    inline CreateFlowLogsRequest& WithLogDestination(const char* value) { SetLogDestination(value); return *this;}


    /**
     * <p>The fields to include in the flow log record. List the fields in the order in
     * which they should appear. If you omit this parameter, the flow log is created
     * using the default format. If you specify this parameter, you must include at
     * least one field. For more information about the available fields, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/flow-logs.html#flow-log-records">Flow
     * log records</a> in the <i>Amazon VPC User Guide</i> or <a
     * href="https://docs.aws.amazon.com/vpc/latest/tgw/tgw-flow-logs.html#flow-log-records">Transit
     * Gateway Flow Log records</a> in the <i>Amazon Web Services Transit Gateway
     * Guide</i>.</p> <p>Specify the fields using the <code>${field-id}</code> format,
     * separated by spaces. For the CLI, surround this parameter value with single
     * quotes on Linux or double quotes on Windows.</p>
     */
    inline const Aws::String& GetLogFormat() const{ return m_logFormat; }

    /**
     * <p>The fields to include in the flow log record. List the fields in the order in
     * which they should appear. If you omit this parameter, the flow log is created
     * using the default format. If you specify this parameter, you must include at
     * least one field. For more information about the available fields, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/flow-logs.html#flow-log-records">Flow
     * log records</a> in the <i>Amazon VPC User Guide</i> or <a
     * href="https://docs.aws.amazon.com/vpc/latest/tgw/tgw-flow-logs.html#flow-log-records">Transit
     * Gateway Flow Log records</a> in the <i>Amazon Web Services Transit Gateway
     * Guide</i>.</p> <p>Specify the fields using the <code>${field-id}</code> format,
     * separated by spaces. For the CLI, surround this parameter value with single
     * quotes on Linux or double quotes on Windows.</p>
     */
    inline bool LogFormatHasBeenSet() const { return m_logFormatHasBeenSet; }

    /**
     * <p>The fields to include in the flow log record. List the fields in the order in
     * which they should appear. If you omit this parameter, the flow log is created
     * using the default format. If you specify this parameter, you must include at
     * least one field. For more information about the available fields, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/flow-logs.html#flow-log-records">Flow
     * log records</a> in the <i>Amazon VPC User Guide</i> or <a
     * href="https://docs.aws.amazon.com/vpc/latest/tgw/tgw-flow-logs.html#flow-log-records">Transit
     * Gateway Flow Log records</a> in the <i>Amazon Web Services Transit Gateway
     * Guide</i>.</p> <p>Specify the fields using the <code>${field-id}</code> format,
     * separated by spaces. For the CLI, surround this parameter value with single
     * quotes on Linux or double quotes on Windows.</p>
     */
    inline void SetLogFormat(const Aws::String& value) { m_logFormatHasBeenSet = true; m_logFormat = value; }

    /**
     * <p>The fields to include in the flow log record. List the fields in the order in
     * which they should appear. If you omit this parameter, the flow log is created
     * using the default format. If you specify this parameter, you must include at
     * least one field. For more information about the available fields, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/flow-logs.html#flow-log-records">Flow
     * log records</a> in the <i>Amazon VPC User Guide</i> or <a
     * href="https://docs.aws.amazon.com/vpc/latest/tgw/tgw-flow-logs.html#flow-log-records">Transit
     * Gateway Flow Log records</a> in the <i>Amazon Web Services Transit Gateway
     * Guide</i>.</p> <p>Specify the fields using the <code>${field-id}</code> format,
     * separated by spaces. For the CLI, surround this parameter value with single
     * quotes on Linux or double quotes on Windows.</p>
     */
    inline void SetLogFormat(Aws::String&& value) { m_logFormatHasBeenSet = true; m_logFormat = std::move(value); }

    /**
     * <p>The fields to include in the flow log record. List the fields in the order in
     * which they should appear. If you omit this parameter, the flow log is created
     * using the default format. If you specify this parameter, you must include at
     * least one field. For more information about the available fields, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/flow-logs.html#flow-log-records">Flow
     * log records</a> in the <i>Amazon VPC User Guide</i> or <a
     * href="https://docs.aws.amazon.com/vpc/latest/tgw/tgw-flow-logs.html#flow-log-records">Transit
     * Gateway Flow Log records</a> in the <i>Amazon Web Services Transit Gateway
     * Guide</i>.</p> <p>Specify the fields using the <code>${field-id}</code> format,
     * separated by spaces. For the CLI, surround this parameter value with single
     * quotes on Linux or double quotes on Windows.</p>
     */
    inline void SetLogFormat(const char* value) { m_logFormatHasBeenSet = true; m_logFormat.assign(value); }

    /**
     * <p>The fields to include in the flow log record. List the fields in the order in
     * which they should appear. If you omit this parameter, the flow log is created
     * using the default format. If you specify this parameter, you must include at
     * least one field. For more information about the available fields, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/flow-logs.html#flow-log-records">Flow
     * log records</a> in the <i>Amazon VPC User Guide</i> or <a
     * href="https://docs.aws.amazon.com/vpc/latest/tgw/tgw-flow-logs.html#flow-log-records">Transit
     * Gateway Flow Log records</a> in the <i>Amazon Web Services Transit Gateway
     * Guide</i>.</p> <p>Specify the fields using the <code>${field-id}</code> format,
     * separated by spaces. For the CLI, surround this parameter value with single
     * quotes on Linux or double quotes on Windows.</p>
     */
    inline CreateFlowLogsRequest& WithLogFormat(const Aws::String& value) { SetLogFormat(value); return *this;}

    /**
     * <p>The fields to include in the flow log record. List the fields in the order in
     * which they should appear. If you omit this parameter, the flow log is created
     * using the default format. If you specify this parameter, you must include at
     * least one field. For more information about the available fields, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/flow-logs.html#flow-log-records">Flow
     * log records</a> in the <i>Amazon VPC User Guide</i> or <a
     * href="https://docs.aws.amazon.com/vpc/latest/tgw/tgw-flow-logs.html#flow-log-records">Transit
     * Gateway Flow Log records</a> in the <i>Amazon Web Services Transit Gateway
     * Guide</i>.</p> <p>Specify the fields using the <code>${field-id}</code> format,
     * separated by spaces. For the CLI, surround this parameter value with single
     * quotes on Linux or double quotes on Windows.</p>
     */
    inline CreateFlowLogsRequest& WithLogFormat(Aws::String&& value) { SetLogFormat(std::move(value)); return *this;}

    /**
     * <p>The fields to include in the flow log record. List the fields in the order in
     * which they should appear. If you omit this parameter, the flow log is created
     * using the default format. If you specify this parameter, you must include at
     * least one field. For more information about the available fields, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/flow-logs.html#flow-log-records">Flow
     * log records</a> in the <i>Amazon VPC User Guide</i> or <a
     * href="https://docs.aws.amazon.com/vpc/latest/tgw/tgw-flow-logs.html#flow-log-records">Transit
     * Gateway Flow Log records</a> in the <i>Amazon Web Services Transit Gateway
     * Guide</i>.</p> <p>Specify the fields using the <code>${field-id}</code> format,
     * separated by spaces. For the CLI, surround this parameter value with single
     * quotes on Linux or double quotes on Windows.</p>
     */
    inline CreateFlowLogsRequest& WithLogFormat(const char* value) { SetLogFormat(value); return *this;}


    /**
     * <p>The tags to apply to the flow logs.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the flow logs.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the flow logs.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the flow logs.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the flow logs.</p>
     */
    inline CreateFlowLogsRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the flow logs.</p>
     */
    inline CreateFlowLogsRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the flow logs.</p>
     */
    inline CreateFlowLogsRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the flow logs.</p>
     */
    inline CreateFlowLogsRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum interval of time during which a flow of packets is captured and
     * aggregated into a flow log record. The possible values are 60 seconds (1 minute)
     * or 600 seconds (10 minutes). This parameter must be 60 seconds for transit
     * gateway resource types.</p> <p>When a network interface is attached to a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Nitro-based
     * instance</a>, the aggregation interval is always 60 seconds or less, regardless
     * of the value that you specify.</p> <p>Default: 600</p>
     */
    inline int GetMaxAggregationInterval() const{ return m_maxAggregationInterval; }

    /**
     * <p>The maximum interval of time during which a flow of packets is captured and
     * aggregated into a flow log record. The possible values are 60 seconds (1 minute)
     * or 600 seconds (10 minutes). This parameter must be 60 seconds for transit
     * gateway resource types.</p> <p>When a network interface is attached to a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Nitro-based
     * instance</a>, the aggregation interval is always 60 seconds or less, regardless
     * of the value that you specify.</p> <p>Default: 600</p>
     */
    inline bool MaxAggregationIntervalHasBeenSet() const { return m_maxAggregationIntervalHasBeenSet; }

    /**
     * <p>The maximum interval of time during which a flow of packets is captured and
     * aggregated into a flow log record. The possible values are 60 seconds (1 minute)
     * or 600 seconds (10 minutes). This parameter must be 60 seconds for transit
     * gateway resource types.</p> <p>When a network interface is attached to a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Nitro-based
     * instance</a>, the aggregation interval is always 60 seconds or less, regardless
     * of the value that you specify.</p> <p>Default: 600</p>
     */
    inline void SetMaxAggregationInterval(int value) { m_maxAggregationIntervalHasBeenSet = true; m_maxAggregationInterval = value; }

    /**
     * <p>The maximum interval of time during which a flow of packets is captured and
     * aggregated into a flow log record. The possible values are 60 seconds (1 minute)
     * or 600 seconds (10 minutes). This parameter must be 60 seconds for transit
     * gateway resource types.</p> <p>When a network interface is attached to a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#ec2-nitro-instances">Nitro-based
     * instance</a>, the aggregation interval is always 60 seconds or less, regardless
     * of the value that you specify.</p> <p>Default: 600</p>
     */
    inline CreateFlowLogsRequest& WithMaxAggregationInterval(int value) { SetMaxAggregationInterval(value); return *this;}


    /**
     * <p>The destination options.</p>
     */
    inline const DestinationOptionsRequest& GetDestinationOptions() const{ return m_destinationOptions; }

    /**
     * <p>The destination options.</p>
     */
    inline bool DestinationOptionsHasBeenSet() const { return m_destinationOptionsHasBeenSet; }

    /**
     * <p>The destination options.</p>
     */
    inline void SetDestinationOptions(const DestinationOptionsRequest& value) { m_destinationOptionsHasBeenSet = true; m_destinationOptions = value; }

    /**
     * <p>The destination options.</p>
     */
    inline void SetDestinationOptions(DestinationOptionsRequest&& value) { m_destinationOptionsHasBeenSet = true; m_destinationOptions = std::move(value); }

    /**
     * <p>The destination options.</p>
     */
    inline CreateFlowLogsRequest& WithDestinationOptions(const DestinationOptionsRequest& value) { SetDestinationOptions(value); return *this;}

    /**
     * <p>The destination options.</p>
     */
    inline CreateFlowLogsRequest& WithDestinationOptions(DestinationOptionsRequest&& value) { SetDestinationOptions(std::move(value)); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_deliverLogsPermissionArn;
    bool m_deliverLogsPermissionArnHasBeenSet = false;

    Aws::String m_deliverCrossAccountRole;
    bool m_deliverCrossAccountRoleHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;

    FlowLogsResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    TrafficType m_trafficType;
    bool m_trafficTypeHasBeenSet = false;

    LogDestinationType m_logDestinationType;
    bool m_logDestinationTypeHasBeenSet = false;

    Aws::String m_logDestination;
    bool m_logDestinationHasBeenSet = false;

    Aws::String m_logFormat;
    bool m_logFormatHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    int m_maxAggregationInterval;
    bool m_maxAggregationIntervalHasBeenSet = false;

    DestinationOptionsRequest m_destinationOptions;
    bool m_destinationOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
