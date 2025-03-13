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
   * <p>Contains information about the Amazon EC2 instance runtime coverage
   * details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CoverageEc2InstanceDetails">AWS
   * API Reference</a></p>
   */
  class CoverageEc2InstanceDetails
  {
  public:
    AWS_GUARDDUTY_API CoverageEc2InstanceDetails() = default;
    AWS_GUARDDUTY_API CoverageEc2InstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CoverageEc2InstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon EC2 instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    CoverageEc2InstanceDetails& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    CoverageEc2InstanceDetails& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster ARN of the Amazon ECS cluster running on the Amazon EC2
     * instance.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    CoverageEc2InstanceDetails& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the installed security agent.</p>
     */
    inline const AgentDetails& GetAgentDetails() const { return m_agentDetails; }
    inline bool AgentDetailsHasBeenSet() const { return m_agentDetailsHasBeenSet; }
    template<typename AgentDetailsT = AgentDetails>
    void SetAgentDetails(AgentDetailsT&& value) { m_agentDetailsHasBeenSet = true; m_agentDetails = std::forward<AgentDetailsT>(value); }
    template<typename AgentDetailsT = AgentDetails>
    CoverageEc2InstanceDetails& WithAgentDetails(AgentDetailsT&& value) { SetAgentDetails(std::forward<AgentDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how the GuardDuty security agent is managed for this resource.</p>
     * <ul> <li> <p> <code>AUTO_MANAGED</code> indicates that GuardDuty deploys and
     * manages updates for this resource.</p> </li> <li> <p> <code>MANUAL</code>
     * indicates that you are responsible to deploy, update, and manage the GuardDuty
     * security agent updates for this resource.</p> </li> </ul>  <p>The
     * <code>DISABLED</code> status doesn't apply to Amazon EC2 instances and Amazon
     * EKS clusters.</p> 
     */
    inline ManagementType GetManagementType() const { return m_managementType; }
    inline bool ManagementTypeHasBeenSet() const { return m_managementTypeHasBeenSet; }
    inline void SetManagementType(ManagementType value) { m_managementTypeHasBeenSet = true; m_managementType = value; }
    inline CoverageEc2InstanceDetails& WithManagementType(ManagementType value) { SetManagementType(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    AgentDetails m_agentDetails;
    bool m_agentDetailsHasBeenSet = false;

    ManagementType m_managementType{ManagementType::NOT_SET};
    bool m_managementTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
