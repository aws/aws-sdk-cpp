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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/FlowLogsResourceType.h>
#include <aws/ec2/model/TrafficType.h>
#include <aws/ec2/model/LogDestinationType.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API CreateFlowLogsRequest : public EC2Request
  {
  public:
    CreateFlowLogsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFlowLogs"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
     * to Ensure Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateFlowLogsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateFlowLogsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateFlowLogsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ARN for the IAM role that permits Amazon EC2 to publish flow logs to a
     * CloudWatch Logs log group in your account.</p> <p>If you specify
     * <code>LogDestinationType</code> as <code>s3</code>, do not specify
     * <code>DeliverLogsPermissionArn</code> or <code>LogGroupName</code>.</p>
     */
    inline const Aws::String& GetDeliverLogsPermissionArn() const{ return m_deliverLogsPermissionArn; }

    /**
     * <p>The ARN for the IAM role that permits Amazon EC2 to publish flow logs to a
     * CloudWatch Logs log group in your account.</p> <p>If you specify
     * <code>LogDestinationType</code> as <code>s3</code>, do not specify
     * <code>DeliverLogsPermissionArn</code> or <code>LogGroupName</code>.</p>
     */
    inline bool DeliverLogsPermissionArnHasBeenSet() const { return m_deliverLogsPermissionArnHasBeenSet; }

    /**
     * <p>The ARN for the IAM role that permits Amazon EC2 to publish flow logs to a
     * CloudWatch Logs log group in your account.</p> <p>If you specify
     * <code>LogDestinationType</code> as <code>s3</code>, do not specify
     * <code>DeliverLogsPermissionArn</code> or <code>LogGroupName</code>.</p>
     */
    inline void SetDeliverLogsPermissionArn(const Aws::String& value) { m_deliverLogsPermissionArnHasBeenSet = true; m_deliverLogsPermissionArn = value; }

    /**
     * <p>The ARN for the IAM role that permits Amazon EC2 to publish flow logs to a
     * CloudWatch Logs log group in your account.</p> <p>If you specify
     * <code>LogDestinationType</code> as <code>s3</code>, do not specify
     * <code>DeliverLogsPermissionArn</code> or <code>LogGroupName</code>.</p>
     */
    inline void SetDeliverLogsPermissionArn(Aws::String&& value) { m_deliverLogsPermissionArnHasBeenSet = true; m_deliverLogsPermissionArn = std::move(value); }

    /**
     * <p>The ARN for the IAM role that permits Amazon EC2 to publish flow logs to a
     * CloudWatch Logs log group in your account.</p> <p>If you specify
     * <code>LogDestinationType</code> as <code>s3</code>, do not specify
     * <code>DeliverLogsPermissionArn</code> or <code>LogGroupName</code>.</p>
     */
    inline void SetDeliverLogsPermissionArn(const char* value) { m_deliverLogsPermissionArnHasBeenSet = true; m_deliverLogsPermissionArn.assign(value); }

    /**
     * <p>The ARN for the IAM role that permits Amazon EC2 to publish flow logs to a
     * CloudWatch Logs log group in your account.</p> <p>If you specify
     * <code>LogDestinationType</code> as <code>s3</code>, do not specify
     * <code>DeliverLogsPermissionArn</code> or <code>LogGroupName</code>.</p>
     */
    inline CreateFlowLogsRequest& WithDeliverLogsPermissionArn(const Aws::String& value) { SetDeliverLogsPermissionArn(value); return *this;}

    /**
     * <p>The ARN for the IAM role that permits Amazon EC2 to publish flow logs to a
     * CloudWatch Logs log group in your account.</p> <p>If you specify
     * <code>LogDestinationType</code> as <code>s3</code>, do not specify
     * <code>DeliverLogsPermissionArn</code> or <code>LogGroupName</code>.</p>
     */
    inline CreateFlowLogsRequest& WithDeliverLogsPermissionArn(Aws::String&& value) { SetDeliverLogsPermissionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the IAM role that permits Amazon EC2 to publish flow logs to a
     * CloudWatch Logs log group in your account.</p> <p>If you specify
     * <code>LogDestinationType</code> as <code>s3</code>, do not specify
     * <code>DeliverLogsPermissionArn</code> or <code>LogGroupName</code>.</p>
     */
    inline CreateFlowLogsRequest& WithDeliverLogsPermissionArn(const char* value) { SetDeliverLogsPermissionArn(value); return *this;}


    /**
     * <p>The name of a new or existing CloudWatch Logs log group where Amazon EC2
     * publishes your flow logs.</p> <p>If you specify <code>LogDestinationType</code>
     * as <code>s3</code>, do not specify <code>DeliverLogsPermissionArn</code> or
     * <code>LogGroupName</code>.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of a new or existing CloudWatch Logs log group where Amazon EC2
     * publishes your flow logs.</p> <p>If you specify <code>LogDestinationType</code>
     * as <code>s3</code>, do not specify <code>DeliverLogsPermissionArn</code> or
     * <code>LogGroupName</code>.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of a new or existing CloudWatch Logs log group where Amazon EC2
     * publishes your flow logs.</p> <p>If you specify <code>LogDestinationType</code>
     * as <code>s3</code>, do not specify <code>DeliverLogsPermissionArn</code> or
     * <code>LogGroupName</code>.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of a new or existing CloudWatch Logs log group where Amazon EC2
     * publishes your flow logs.</p> <p>If you specify <code>LogDestinationType</code>
     * as <code>s3</code>, do not specify <code>DeliverLogsPermissionArn</code> or
     * <code>LogGroupName</code>.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of a new or existing CloudWatch Logs log group where Amazon EC2
     * publishes your flow logs.</p> <p>If you specify <code>LogDestinationType</code>
     * as <code>s3</code>, do not specify <code>DeliverLogsPermissionArn</code> or
     * <code>LogGroupName</code>.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of a new or existing CloudWatch Logs log group where Amazon EC2
     * publishes your flow logs.</p> <p>If you specify <code>LogDestinationType</code>
     * as <code>s3</code>, do not specify <code>DeliverLogsPermissionArn</code> or
     * <code>LogGroupName</code>.</p>
     */
    inline CreateFlowLogsRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of a new or existing CloudWatch Logs log group where Amazon EC2
     * publishes your flow logs.</p> <p>If you specify <code>LogDestinationType</code>
     * as <code>s3</code>, do not specify <code>DeliverLogsPermissionArn</code> or
     * <code>LogGroupName</code>.</p>
     */
    inline CreateFlowLogsRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of a new or existing CloudWatch Logs log group where Amazon EC2
     * publishes your flow logs.</p> <p>If you specify <code>LogDestinationType</code>
     * as <code>s3</code>, do not specify <code>DeliverLogsPermissionArn</code> or
     * <code>LogGroupName</code>.</p>
     */
    inline CreateFlowLogsRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>The ID of the subnet, network interface, or VPC for which you want to create
     * a flow log.</p> <p>Constraints: Maximum of 1000 resources</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const{ return m_resourceIds; }

    /**
     * <p>The ID of the subnet, network interface, or VPC for which you want to create
     * a flow log.</p> <p>Constraints: Maximum of 1000 resources</p>
     */
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }

    /**
     * <p>The ID of the subnet, network interface, or VPC for which you want to create
     * a flow log.</p> <p>Constraints: Maximum of 1000 resources</p>
     */
    inline void SetResourceIds(const Aws::Vector<Aws::String>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>The ID of the subnet, network interface, or VPC for which you want to create
     * a flow log.</p> <p>Constraints: Maximum of 1000 resources</p>
     */
    inline void SetResourceIds(Aws::Vector<Aws::String>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }

    /**
     * <p>The ID of the subnet, network interface, or VPC for which you want to create
     * a flow log.</p> <p>Constraints: Maximum of 1000 resources</p>
     */
    inline CreateFlowLogsRequest& WithResourceIds(const Aws::Vector<Aws::String>& value) { SetResourceIds(value); return *this;}

    /**
     * <p>The ID of the subnet, network interface, or VPC for which you want to create
     * a flow log.</p> <p>Constraints: Maximum of 1000 resources</p>
     */
    inline CreateFlowLogsRequest& WithResourceIds(Aws::Vector<Aws::String>&& value) { SetResourceIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet, network interface, or VPC for which you want to create
     * a flow log.</p> <p>Constraints: Maximum of 1000 resources</p>
     */
    inline CreateFlowLogsRequest& AddResourceIds(const Aws::String& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>The ID of the subnet, network interface, or VPC for which you want to create
     * a flow log.</p> <p>Constraints: Maximum of 1000 resources</p>
     */
    inline CreateFlowLogsRequest& AddResourceIds(Aws::String&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the subnet, network interface, or VPC for which you want to create
     * a flow log.</p> <p>Constraints: Maximum of 1000 resources</p>
     */
    inline CreateFlowLogsRequest& AddResourceIds(const char* value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }


    /**
     * <p>The type of resource for which to create the flow log. For example, if you
     * specified a VPC ID for the <code>ResourceId</code> property, specify
     * <code>VPC</code> for this property.</p>
     */
    inline const FlowLogsResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource for which to create the flow log. For example, if you
     * specified a VPC ID for the <code>ResourceId</code> property, specify
     * <code>VPC</code> for this property.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource for which to create the flow log. For example, if you
     * specified a VPC ID for the <code>ResourceId</code> property, specify
     * <code>VPC</code> for this property.</p>
     */
    inline void SetResourceType(const FlowLogsResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource for which to create the flow log. For example, if you
     * specified a VPC ID for the <code>ResourceId</code> property, specify
     * <code>VPC</code> for this property.</p>
     */
    inline void SetResourceType(FlowLogsResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource for which to create the flow log. For example, if you
     * specified a VPC ID for the <code>ResourceId</code> property, specify
     * <code>VPC</code> for this property.</p>
     */
    inline CreateFlowLogsRequest& WithResourceType(const FlowLogsResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource for which to create the flow log. For example, if you
     * specified a VPC ID for the <code>ResourceId</code> property, specify
     * <code>VPC</code> for this property.</p>
     */
    inline CreateFlowLogsRequest& WithResourceType(FlowLogsResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The type of traffic to log. You can log traffic that the resource accepts or
     * rejects, or all traffic.</p>
     */
    inline const TrafficType& GetTrafficType() const{ return m_trafficType; }

    /**
     * <p>The type of traffic to log. You can log traffic that the resource accepts or
     * rejects, or all traffic.</p>
     */
    inline bool TrafficTypeHasBeenSet() const { return m_trafficTypeHasBeenSet; }

    /**
     * <p>The type of traffic to log. You can log traffic that the resource accepts or
     * rejects, or all traffic.</p>
     */
    inline void SetTrafficType(const TrafficType& value) { m_trafficTypeHasBeenSet = true; m_trafficType = value; }

    /**
     * <p>The type of traffic to log. You can log traffic that the resource accepts or
     * rejects, or all traffic.</p>
     */
    inline void SetTrafficType(TrafficType&& value) { m_trafficTypeHasBeenSet = true; m_trafficType = std::move(value); }

    /**
     * <p>The type of traffic to log. You can log traffic that the resource accepts or
     * rejects, or all traffic.</p>
     */
    inline CreateFlowLogsRequest& WithTrafficType(const TrafficType& value) { SetTrafficType(value); return *this;}

    /**
     * <p>The type of traffic to log. You can log traffic that the resource accepts or
     * rejects, or all traffic.</p>
     */
    inline CreateFlowLogsRequest& WithTrafficType(TrafficType&& value) { SetTrafficType(std::move(value)); return *this;}


    /**
     * <p>Specifies the type of destination to which the flow log data is to be
     * published. Flow log data can be published to CloudWatch Logs or Amazon S3. To
     * publish flow log data to CloudWatch Logs, specify <code>cloud-watch-logs</code>.
     * To publish flow log data to Amazon S3, specify <code>s3</code>.</p> <p>If you
     * specify <code>LogDestinationType</code> as <code>s3</code>, do not specify
     * <code>DeliverLogsPermissionArn</code> or <code>LogGroupName</code>.</p>
     * <p>Default: <code>cloud-watch-logs</code> </p>
     */
    inline const LogDestinationType& GetLogDestinationType() const{ return m_logDestinationType; }

    /**
     * <p>Specifies the type of destination to which the flow log data is to be
     * published. Flow log data can be published to CloudWatch Logs or Amazon S3. To
     * publish flow log data to CloudWatch Logs, specify <code>cloud-watch-logs</code>.
     * To publish flow log data to Amazon S3, specify <code>s3</code>.</p> <p>If you
     * specify <code>LogDestinationType</code> as <code>s3</code>, do not specify
     * <code>DeliverLogsPermissionArn</code> or <code>LogGroupName</code>.</p>
     * <p>Default: <code>cloud-watch-logs</code> </p>
     */
    inline bool LogDestinationTypeHasBeenSet() const { return m_logDestinationTypeHasBeenSet; }

    /**
     * <p>Specifies the type of destination to which the flow log data is to be
     * published. Flow log data can be published to CloudWatch Logs or Amazon S3. To
     * publish flow log data to CloudWatch Logs, specify <code>cloud-watch-logs</code>.
     * To publish flow log data to Amazon S3, specify <code>s3</code>.</p> <p>If you
     * specify <code>LogDestinationType</code> as <code>s3</code>, do not specify
     * <code>DeliverLogsPermissionArn</code> or <code>LogGroupName</code>.</p>
     * <p>Default: <code>cloud-watch-logs</code> </p>
     */
    inline void SetLogDestinationType(const LogDestinationType& value) { m_logDestinationTypeHasBeenSet = true; m_logDestinationType = value; }

    /**
     * <p>Specifies the type of destination to which the flow log data is to be
     * published. Flow log data can be published to CloudWatch Logs or Amazon S3. To
     * publish flow log data to CloudWatch Logs, specify <code>cloud-watch-logs</code>.
     * To publish flow log data to Amazon S3, specify <code>s3</code>.</p> <p>If you
     * specify <code>LogDestinationType</code> as <code>s3</code>, do not specify
     * <code>DeliverLogsPermissionArn</code> or <code>LogGroupName</code>.</p>
     * <p>Default: <code>cloud-watch-logs</code> </p>
     */
    inline void SetLogDestinationType(LogDestinationType&& value) { m_logDestinationTypeHasBeenSet = true; m_logDestinationType = std::move(value); }

    /**
     * <p>Specifies the type of destination to which the flow log data is to be
     * published. Flow log data can be published to CloudWatch Logs or Amazon S3. To
     * publish flow log data to CloudWatch Logs, specify <code>cloud-watch-logs</code>.
     * To publish flow log data to Amazon S3, specify <code>s3</code>.</p> <p>If you
     * specify <code>LogDestinationType</code> as <code>s3</code>, do not specify
     * <code>DeliverLogsPermissionArn</code> or <code>LogGroupName</code>.</p>
     * <p>Default: <code>cloud-watch-logs</code> </p>
     */
    inline CreateFlowLogsRequest& WithLogDestinationType(const LogDestinationType& value) { SetLogDestinationType(value); return *this;}

    /**
     * <p>Specifies the type of destination to which the flow log data is to be
     * published. Flow log data can be published to CloudWatch Logs or Amazon S3. To
     * publish flow log data to CloudWatch Logs, specify <code>cloud-watch-logs</code>.
     * To publish flow log data to Amazon S3, specify <code>s3</code>.</p> <p>If you
     * specify <code>LogDestinationType</code> as <code>s3</code>, do not specify
     * <code>DeliverLogsPermissionArn</code> or <code>LogGroupName</code>.</p>
     * <p>Default: <code>cloud-watch-logs</code> </p>
     */
    inline CreateFlowLogsRequest& WithLogDestinationType(LogDestinationType&& value) { SetLogDestinationType(std::move(value)); return *this;}


    /**
     * <p>Specifies the destination to which the flow log data is to be published. Flow
     * log data can be published to a CloudWatch Logs log group or an Amazon S3 bucket.
     * The value specified for this parameter depends on the value specified for
     * <code>LogDestinationType</code>.</p> <p>If LogDestinationType is not specified
     * or <code>cloud-watch-logs</code>, specify the Amazon Resource Name (ARN) of the
     * CloudWatch Logs log group.</p> <p>If LogDestinationType is <code>s3</code>,
     * specify the ARN of the Amazon S3 bucket. You can also specify a subfolder in the
     * bucket. To specify a subfolder in the bucket, use the following ARN format:
     * <code>bucket_ARN/subfolder_name/</code>. For example, to specify a subfolder
     * named <code>my-logs</code> in a bucket named <code>my-bucket</code>, use the
     * following ARN: <code>arn:aws:s3:::my-bucket/my-logs/</code>. You cannot use
     * <code>AWSLogs</code> as a subfolder name. This is a reserved term.</p>
     */
    inline const Aws::String& GetLogDestination() const{ return m_logDestination; }

    /**
     * <p>Specifies the destination to which the flow log data is to be published. Flow
     * log data can be published to a CloudWatch Logs log group or an Amazon S3 bucket.
     * The value specified for this parameter depends on the value specified for
     * <code>LogDestinationType</code>.</p> <p>If LogDestinationType is not specified
     * or <code>cloud-watch-logs</code>, specify the Amazon Resource Name (ARN) of the
     * CloudWatch Logs log group.</p> <p>If LogDestinationType is <code>s3</code>,
     * specify the ARN of the Amazon S3 bucket. You can also specify a subfolder in the
     * bucket. To specify a subfolder in the bucket, use the following ARN format:
     * <code>bucket_ARN/subfolder_name/</code>. For example, to specify a subfolder
     * named <code>my-logs</code> in a bucket named <code>my-bucket</code>, use the
     * following ARN: <code>arn:aws:s3:::my-bucket/my-logs/</code>. You cannot use
     * <code>AWSLogs</code> as a subfolder name. This is a reserved term.</p>
     */
    inline bool LogDestinationHasBeenSet() const { return m_logDestinationHasBeenSet; }

    /**
     * <p>Specifies the destination to which the flow log data is to be published. Flow
     * log data can be published to a CloudWatch Logs log group or an Amazon S3 bucket.
     * The value specified for this parameter depends on the value specified for
     * <code>LogDestinationType</code>.</p> <p>If LogDestinationType is not specified
     * or <code>cloud-watch-logs</code>, specify the Amazon Resource Name (ARN) of the
     * CloudWatch Logs log group.</p> <p>If LogDestinationType is <code>s3</code>,
     * specify the ARN of the Amazon S3 bucket. You can also specify a subfolder in the
     * bucket. To specify a subfolder in the bucket, use the following ARN format:
     * <code>bucket_ARN/subfolder_name/</code>. For example, to specify a subfolder
     * named <code>my-logs</code> in a bucket named <code>my-bucket</code>, use the
     * following ARN: <code>arn:aws:s3:::my-bucket/my-logs/</code>. You cannot use
     * <code>AWSLogs</code> as a subfolder name. This is a reserved term.</p>
     */
    inline void SetLogDestination(const Aws::String& value) { m_logDestinationHasBeenSet = true; m_logDestination = value; }

    /**
     * <p>Specifies the destination to which the flow log data is to be published. Flow
     * log data can be published to a CloudWatch Logs log group or an Amazon S3 bucket.
     * The value specified for this parameter depends on the value specified for
     * <code>LogDestinationType</code>.</p> <p>If LogDestinationType is not specified
     * or <code>cloud-watch-logs</code>, specify the Amazon Resource Name (ARN) of the
     * CloudWatch Logs log group.</p> <p>If LogDestinationType is <code>s3</code>,
     * specify the ARN of the Amazon S3 bucket. You can also specify a subfolder in the
     * bucket. To specify a subfolder in the bucket, use the following ARN format:
     * <code>bucket_ARN/subfolder_name/</code>. For example, to specify a subfolder
     * named <code>my-logs</code> in a bucket named <code>my-bucket</code>, use the
     * following ARN: <code>arn:aws:s3:::my-bucket/my-logs/</code>. You cannot use
     * <code>AWSLogs</code> as a subfolder name. This is a reserved term.</p>
     */
    inline void SetLogDestination(Aws::String&& value) { m_logDestinationHasBeenSet = true; m_logDestination = std::move(value); }

    /**
     * <p>Specifies the destination to which the flow log data is to be published. Flow
     * log data can be published to a CloudWatch Logs log group or an Amazon S3 bucket.
     * The value specified for this parameter depends on the value specified for
     * <code>LogDestinationType</code>.</p> <p>If LogDestinationType is not specified
     * or <code>cloud-watch-logs</code>, specify the Amazon Resource Name (ARN) of the
     * CloudWatch Logs log group.</p> <p>If LogDestinationType is <code>s3</code>,
     * specify the ARN of the Amazon S3 bucket. You can also specify a subfolder in the
     * bucket. To specify a subfolder in the bucket, use the following ARN format:
     * <code>bucket_ARN/subfolder_name/</code>. For example, to specify a subfolder
     * named <code>my-logs</code> in a bucket named <code>my-bucket</code>, use the
     * following ARN: <code>arn:aws:s3:::my-bucket/my-logs/</code>. You cannot use
     * <code>AWSLogs</code> as a subfolder name. This is a reserved term.</p>
     */
    inline void SetLogDestination(const char* value) { m_logDestinationHasBeenSet = true; m_logDestination.assign(value); }

    /**
     * <p>Specifies the destination to which the flow log data is to be published. Flow
     * log data can be published to a CloudWatch Logs log group or an Amazon S3 bucket.
     * The value specified for this parameter depends on the value specified for
     * <code>LogDestinationType</code>.</p> <p>If LogDestinationType is not specified
     * or <code>cloud-watch-logs</code>, specify the Amazon Resource Name (ARN) of the
     * CloudWatch Logs log group.</p> <p>If LogDestinationType is <code>s3</code>,
     * specify the ARN of the Amazon S3 bucket. You can also specify a subfolder in the
     * bucket. To specify a subfolder in the bucket, use the following ARN format:
     * <code>bucket_ARN/subfolder_name/</code>. For example, to specify a subfolder
     * named <code>my-logs</code> in a bucket named <code>my-bucket</code>, use the
     * following ARN: <code>arn:aws:s3:::my-bucket/my-logs/</code>. You cannot use
     * <code>AWSLogs</code> as a subfolder name. This is a reserved term.</p>
     */
    inline CreateFlowLogsRequest& WithLogDestination(const Aws::String& value) { SetLogDestination(value); return *this;}

    /**
     * <p>Specifies the destination to which the flow log data is to be published. Flow
     * log data can be published to a CloudWatch Logs log group or an Amazon S3 bucket.
     * The value specified for this parameter depends on the value specified for
     * <code>LogDestinationType</code>.</p> <p>If LogDestinationType is not specified
     * or <code>cloud-watch-logs</code>, specify the Amazon Resource Name (ARN) of the
     * CloudWatch Logs log group.</p> <p>If LogDestinationType is <code>s3</code>,
     * specify the ARN of the Amazon S3 bucket. You can also specify a subfolder in the
     * bucket. To specify a subfolder in the bucket, use the following ARN format:
     * <code>bucket_ARN/subfolder_name/</code>. For example, to specify a subfolder
     * named <code>my-logs</code> in a bucket named <code>my-bucket</code>, use the
     * following ARN: <code>arn:aws:s3:::my-bucket/my-logs/</code>. You cannot use
     * <code>AWSLogs</code> as a subfolder name. This is a reserved term.</p>
     */
    inline CreateFlowLogsRequest& WithLogDestination(Aws::String&& value) { SetLogDestination(std::move(value)); return *this;}

    /**
     * <p>Specifies the destination to which the flow log data is to be published. Flow
     * log data can be published to a CloudWatch Logs log group or an Amazon S3 bucket.
     * The value specified for this parameter depends on the value specified for
     * <code>LogDestinationType</code>.</p> <p>If LogDestinationType is not specified
     * or <code>cloud-watch-logs</code>, specify the Amazon Resource Name (ARN) of the
     * CloudWatch Logs log group.</p> <p>If LogDestinationType is <code>s3</code>,
     * specify the ARN of the Amazon S3 bucket. You can also specify a subfolder in the
     * bucket. To specify a subfolder in the bucket, use the following ARN format:
     * <code>bucket_ARN/subfolder_name/</code>. For example, to specify a subfolder
     * named <code>my-logs</code> in a bucket named <code>my-bucket</code>, use the
     * following ARN: <code>arn:aws:s3:::my-bucket/my-logs/</code>. You cannot use
     * <code>AWSLogs</code> as a subfolder name. This is a reserved term.</p>
     */
    inline CreateFlowLogsRequest& WithLogDestination(const char* value) { SetLogDestination(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_deliverLogsPermissionArn;
    bool m_deliverLogsPermissionArnHasBeenSet;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet;

    FlowLogsResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    TrafficType m_trafficType;
    bool m_trafficTypeHasBeenSet;

    LogDestinationType m_logDestinationType;
    bool m_logDestinationTypeHasBeenSet;

    Aws::String m_logDestination;
    bool m_logDestinationHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
