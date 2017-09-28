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
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateFlowLogs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateFlowLogsRequest">AWS
   * API Reference</a></p>
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
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateFlowLogsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateFlowLogsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateFlowLogsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ARN for the IAM role that's used to post flow logs to a CloudWatch Logs
     * log group.</p>
     */
    inline const Aws::String& GetDeliverLogsPermissionArn() const{ return m_deliverLogsPermissionArn; }

    /**
     * <p>The ARN for the IAM role that's used to post flow logs to a CloudWatch Logs
     * log group.</p>
     */
    inline void SetDeliverLogsPermissionArn(const Aws::String& value) { m_deliverLogsPermissionArnHasBeenSet = true; m_deliverLogsPermissionArn = value; }

    /**
     * <p>The ARN for the IAM role that's used to post flow logs to a CloudWatch Logs
     * log group.</p>
     */
    inline void SetDeliverLogsPermissionArn(Aws::String&& value) { m_deliverLogsPermissionArnHasBeenSet = true; m_deliverLogsPermissionArn = std::move(value); }

    /**
     * <p>The ARN for the IAM role that's used to post flow logs to a CloudWatch Logs
     * log group.</p>
     */
    inline void SetDeliverLogsPermissionArn(const char* value) { m_deliverLogsPermissionArnHasBeenSet = true; m_deliverLogsPermissionArn.assign(value); }

    /**
     * <p>The ARN for the IAM role that's used to post flow logs to a CloudWatch Logs
     * log group.</p>
     */
    inline CreateFlowLogsRequest& WithDeliverLogsPermissionArn(const Aws::String& value) { SetDeliverLogsPermissionArn(value); return *this;}

    /**
     * <p>The ARN for the IAM role that's used to post flow logs to a CloudWatch Logs
     * log group.</p>
     */
    inline CreateFlowLogsRequest& WithDeliverLogsPermissionArn(Aws::String&& value) { SetDeliverLogsPermissionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the IAM role that's used to post flow logs to a CloudWatch Logs
     * log group.</p>
     */
    inline CreateFlowLogsRequest& WithDeliverLogsPermissionArn(const char* value) { SetDeliverLogsPermissionArn(value); return *this;}


    /**
     * <p>The name of the CloudWatch log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the CloudWatch log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the CloudWatch log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the CloudWatch log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the CloudWatch log group.</p>
     */
    inline CreateFlowLogsRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the CloudWatch log group.</p>
     */
    inline CreateFlowLogsRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch log group.</p>
     */
    inline CreateFlowLogsRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>One or more subnet, network interface, or VPC IDs.</p> <p>Constraints:
     * Maximum of 1000 resources</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const{ return m_resourceIds; }

    /**
     * <p>One or more subnet, network interface, or VPC IDs.</p> <p>Constraints:
     * Maximum of 1000 resources</p>
     */
    inline void SetResourceIds(const Aws::Vector<Aws::String>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>One or more subnet, network interface, or VPC IDs.</p> <p>Constraints:
     * Maximum of 1000 resources</p>
     */
    inline void SetResourceIds(Aws::Vector<Aws::String>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }

    /**
     * <p>One or more subnet, network interface, or VPC IDs.</p> <p>Constraints:
     * Maximum of 1000 resources</p>
     */
    inline CreateFlowLogsRequest& WithResourceIds(const Aws::Vector<Aws::String>& value) { SetResourceIds(value); return *this;}

    /**
     * <p>One or more subnet, network interface, or VPC IDs.</p> <p>Constraints:
     * Maximum of 1000 resources</p>
     */
    inline CreateFlowLogsRequest& WithResourceIds(Aws::Vector<Aws::String>&& value) { SetResourceIds(std::move(value)); return *this;}

    /**
     * <p>One or more subnet, network interface, or VPC IDs.</p> <p>Constraints:
     * Maximum of 1000 resources</p>
     */
    inline CreateFlowLogsRequest& AddResourceIds(const Aws::String& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>One or more subnet, network interface, or VPC IDs.</p> <p>Constraints:
     * Maximum of 1000 resources</p>
     */
    inline CreateFlowLogsRequest& AddResourceIds(Aws::String&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more subnet, network interface, or VPC IDs.</p> <p>Constraints:
     * Maximum of 1000 resources</p>
     */
    inline CreateFlowLogsRequest& AddResourceIds(const char* value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }


    /**
     * <p>The type of resource on which to create the flow log.</p>
     */
    inline const FlowLogsResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource on which to create the flow log.</p>
     */
    inline void SetResourceType(const FlowLogsResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource on which to create the flow log.</p>
     */
    inline void SetResourceType(FlowLogsResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource on which to create the flow log.</p>
     */
    inline CreateFlowLogsRequest& WithResourceType(const FlowLogsResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource on which to create the flow log.</p>
     */
    inline CreateFlowLogsRequest& WithResourceType(FlowLogsResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The type of traffic to log.</p>
     */
    inline const TrafficType& GetTrafficType() const{ return m_trafficType; }

    /**
     * <p>The type of traffic to log.</p>
     */
    inline void SetTrafficType(const TrafficType& value) { m_trafficTypeHasBeenSet = true; m_trafficType = value; }

    /**
     * <p>The type of traffic to log.</p>
     */
    inline void SetTrafficType(TrafficType&& value) { m_trafficTypeHasBeenSet = true; m_trafficType = std::move(value); }

    /**
     * <p>The type of traffic to log.</p>
     */
    inline CreateFlowLogsRequest& WithTrafficType(const TrafficType& value) { SetTrafficType(value); return *this;}

    /**
     * <p>The type of traffic to log.</p>
     */
    inline CreateFlowLogsRequest& WithTrafficType(TrafficType&& value) { SetTrafficType(std::move(value)); return *this;}

  private:

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
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
