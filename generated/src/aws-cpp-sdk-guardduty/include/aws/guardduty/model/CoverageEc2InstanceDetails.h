/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/AgentDetails.h>
#include <aws/guardduty/model/ManagementType.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   *  <p>This API is also used when you use GuardDuty Runtime Monitoring for
   * your Amazon EC2 instances (currently in preview release) and is subject to
   * change. The use of this API is subject to Section 2 of the <a
   * href="http://aws.amazon.com/service-terms/">Amazon Web Services Service
   * Terms</a> ("Betas and Previews").</p>  <p>Contains information about the
   * Amazon EC2 instance runtime coverage details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CoverageEc2InstanceDetails">AWS
   * API Reference</a></p>
   */
  class CoverageEc2InstanceDetails
  {
  public:
    AWS_GUARDDUTY_API CoverageEc2InstanceDetails();
    AWS_GUARDDUTY_API CoverageEc2InstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CoverageEc2InstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon EC2 instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The Amazon EC2 instance ID.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The Amazon EC2 instance ID.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The Amazon EC2 instance ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The Amazon EC2 instance ID.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The Amazon EC2 instance ID.</p>
     */
    inline CoverageEc2InstanceDetails& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The Amazon EC2 instance ID.</p>
     */
    inline CoverageEc2InstanceDetails& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 instance ID.</p>
     */
    inline CoverageEc2InstanceDetails& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The instance type of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type of the Amazon EC2 instance.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type of the Amazon EC2 instance.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type of the Amazon EC2 instance.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type of the Amazon EC2 instance.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type of the Amazon EC2 instance.</p>
     */
    inline CoverageEc2InstanceDetails& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type of the Amazon EC2 instance.</p>
     */
    inline CoverageEc2InstanceDetails& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type of the Amazon EC2 instance.</p>
     */
    inline CoverageEc2InstanceDetails& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The cluster ARN of the Amazon ECS cluster running on the Amazon EC2
     * instance.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The cluster ARN of the Amazon ECS cluster running on the Amazon EC2
     * instance.</p>
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * <p>The cluster ARN of the Amazon ECS cluster running on the Amazon EC2
     * instance.</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The cluster ARN of the Amazon ECS cluster running on the Amazon EC2
     * instance.</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * <p>The cluster ARN of the Amazon ECS cluster running on the Amazon EC2
     * instance.</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * <p>The cluster ARN of the Amazon ECS cluster running on the Amazon EC2
     * instance.</p>
     */
    inline CoverageEc2InstanceDetails& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The cluster ARN of the Amazon ECS cluster running on the Amazon EC2
     * instance.</p>
     */
    inline CoverageEc2InstanceDetails& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The cluster ARN of the Amazon ECS cluster running on the Amazon EC2
     * instance.</p>
     */
    inline CoverageEc2InstanceDetails& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * <p>Information about the installed security agent.</p>
     */
    inline const AgentDetails& GetAgentDetails() const{ return m_agentDetails; }

    /**
     * <p>Information about the installed security agent.</p>
     */
    inline bool AgentDetailsHasBeenSet() const { return m_agentDetailsHasBeenSet; }

    /**
     * <p>Information about the installed security agent.</p>
     */
    inline void SetAgentDetails(const AgentDetails& value) { m_agentDetailsHasBeenSet = true; m_agentDetails = value; }

    /**
     * <p>Information about the installed security agent.</p>
     */
    inline void SetAgentDetails(AgentDetails&& value) { m_agentDetailsHasBeenSet = true; m_agentDetails = std::move(value); }

    /**
     * <p>Information about the installed security agent.</p>
     */
    inline CoverageEc2InstanceDetails& WithAgentDetails(const AgentDetails& value) { SetAgentDetails(value); return *this;}

    /**
     * <p>Information about the installed security agent.</p>
     */
    inline CoverageEc2InstanceDetails& WithAgentDetails(AgentDetails&& value) { SetAgentDetails(std::move(value)); return *this;}


    /**
     * <p>Indicates how the GuardDuty security agent is managed for this resource.</p>
     * <ul> <li> <p> <code>AUTO_MANAGED</code> indicates that GuardDuty deploys and
     * manages updates for this resource.</p> </li> <li> <p> <code>MANUAL</code>
     * indicates that you are responsible to deploy, update, and manage the GuardDuty
     * security agent updates for this resource.</p> </li> </ul>  <p>The
     * <code>DISABLED</code> status doesn't apply to Amazon EC2 instances and Amazon
     * EKS clusters.</p> 
     */
    inline const ManagementType& GetManagementType() const{ return m_managementType; }

    /**
     * <p>Indicates how the GuardDuty security agent is managed for this resource.</p>
     * <ul> <li> <p> <code>AUTO_MANAGED</code> indicates that GuardDuty deploys and
     * manages updates for this resource.</p> </li> <li> <p> <code>MANUAL</code>
     * indicates that you are responsible to deploy, update, and manage the GuardDuty
     * security agent updates for this resource.</p> </li> </ul>  <p>The
     * <code>DISABLED</code> status doesn't apply to Amazon EC2 instances and Amazon
     * EKS clusters.</p> 
     */
    inline bool ManagementTypeHasBeenSet() const { return m_managementTypeHasBeenSet; }

    /**
     * <p>Indicates how the GuardDuty security agent is managed for this resource.</p>
     * <ul> <li> <p> <code>AUTO_MANAGED</code> indicates that GuardDuty deploys and
     * manages updates for this resource.</p> </li> <li> <p> <code>MANUAL</code>
     * indicates that you are responsible to deploy, update, and manage the GuardDuty
     * security agent updates for this resource.</p> </li> </ul>  <p>The
     * <code>DISABLED</code> status doesn't apply to Amazon EC2 instances and Amazon
     * EKS clusters.</p> 
     */
    inline void SetManagementType(const ManagementType& value) { m_managementTypeHasBeenSet = true; m_managementType = value; }

    /**
     * <p>Indicates how the GuardDuty security agent is managed for this resource.</p>
     * <ul> <li> <p> <code>AUTO_MANAGED</code> indicates that GuardDuty deploys and
     * manages updates for this resource.</p> </li> <li> <p> <code>MANUAL</code>
     * indicates that you are responsible to deploy, update, and manage the GuardDuty
     * security agent updates for this resource.</p> </li> </ul>  <p>The
     * <code>DISABLED</code> status doesn't apply to Amazon EC2 instances and Amazon
     * EKS clusters.</p> 
     */
    inline void SetManagementType(ManagementType&& value) { m_managementTypeHasBeenSet = true; m_managementType = std::move(value); }

    /**
     * <p>Indicates how the GuardDuty security agent is managed for this resource.</p>
     * <ul> <li> <p> <code>AUTO_MANAGED</code> indicates that GuardDuty deploys and
     * manages updates for this resource.</p> </li> <li> <p> <code>MANUAL</code>
     * indicates that you are responsible to deploy, update, and manage the GuardDuty
     * security agent updates for this resource.</p> </li> </ul>  <p>The
     * <code>DISABLED</code> status doesn't apply to Amazon EC2 instances and Amazon
     * EKS clusters.</p> 
     */
    inline CoverageEc2InstanceDetails& WithManagementType(const ManagementType& value) { SetManagementType(value); return *this;}

    /**
     * <p>Indicates how the GuardDuty security agent is managed for this resource.</p>
     * <ul> <li> <p> <code>AUTO_MANAGED</code> indicates that GuardDuty deploys and
     * manages updates for this resource.</p> </li> <li> <p> <code>MANUAL</code>
     * indicates that you are responsible to deploy, update, and manage the GuardDuty
     * security agent updates for this resource.</p> </li> </ul>  <p>The
     * <code>DISABLED</code> status doesn't apply to Amazon EC2 instances and Amazon
     * EKS clusters.</p> 
     */
    inline CoverageEc2InstanceDetails& WithManagementType(ManagementType&& value) { SetManagementType(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    AgentDetails m_agentDetails;
    bool m_agentDetailsHasBeenSet = false;

    ManagementType m_managementType;
    bool m_managementTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
