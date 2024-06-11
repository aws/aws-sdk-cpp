﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/EnvironmentType.h>
#include <aws/codebuild/model/ComputeType.h>
#include <aws/codebuild/model/ScalingConfigurationInput.h>
#include <aws/codebuild/model/FleetOverflowBehavior.h>
#include <aws/codebuild/model/VpcConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class UpdateFleetRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API UpdateFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFleet"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the compute fleet.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline UpdateFleetRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateFleetRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateFleetRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The initial number of machines allocated to the compute ﬂeet, which deﬁnes
     * the number of builds that can run in parallel.</p>
     */
    inline int GetBaseCapacity() const{ return m_baseCapacity; }
    inline bool BaseCapacityHasBeenSet() const { return m_baseCapacityHasBeenSet; }
    inline void SetBaseCapacity(int value) { m_baseCapacityHasBeenSet = true; m_baseCapacity = value; }
    inline UpdateFleetRequest& WithBaseCapacity(int value) { SetBaseCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment type of the compute fleet.</p> <ul> <li> <p>The environment
     * type <code>ARM_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), Asia Pacific
     * (Mumbai), Asia Pacific (Tokyo), Asia Pacific (Singapore), Asia Pacific (Sydney),
     * EU (Frankfurt), and South America (São Paulo).</p> </li> <li> <p>The environment
     * type <code>LINUX_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), EU (Frankfurt), Asia
     * Pacific (Tokyo), Asia Pacific (Singapore), Asia Pacific (Sydney), South America
     * (São Paulo), and Asia Pacific (Mumbai).</p> </li> <li> <p>The environment type
     * <code>LINUX_GPU_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), EU (Frankfurt), Asia
     * Pacific (Tokyo), and Asia Pacific (Sydney).</p> </li> <li> <p>The environment
     * type <code>WINDOWS_SERVER_2019_CONTAINER</code> is available only in regions US
     * East (N. Virginia), US East (Ohio), US West (Oregon), Asia Pacific (Sydney),
     * Asia Pacific (Tokyo), Asia Pacific (Mumbai) and EU (Ireland).</p> </li> <li>
     * <p>The environment type <code>WINDOWS_SERVER_2022_CONTAINER</code> is available
     * only in regions US East (N. Virginia), US East (Ohio), US West (Oregon), EU
     * (Ireland), EU (Frankfurt), Asia Pacific (Sydney), Asia Pacific (Singapore), Asia
     * Pacific (Tokyo), South America (São Paulo) and Asia Pacific (Mumbai).</p> </li>
     * </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild user guide</i>.</p>
     */
    inline const EnvironmentType& GetEnvironmentType() const{ return m_environmentType; }
    inline bool EnvironmentTypeHasBeenSet() const { return m_environmentTypeHasBeenSet; }
    inline void SetEnvironmentType(const EnvironmentType& value) { m_environmentTypeHasBeenSet = true; m_environmentType = value; }
    inline void SetEnvironmentType(EnvironmentType&& value) { m_environmentTypeHasBeenSet = true; m_environmentType = std::move(value); }
    inline UpdateFleetRequest& WithEnvironmentType(const EnvironmentType& value) { SetEnvironmentType(value); return *this;}
    inline UpdateFleetRequest& WithEnvironmentType(EnvironmentType&& value) { SetEnvironmentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the compute resources the compute fleet uses. Available
     * values include:</p> <ul> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 3
     * GB memory and 2 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_MEDIUM</code>: Use up to 7 GB memory and 4 vCPUs for
     * builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_LARGE</code>: Use up to 16 GB
     * memory and 8 vCPUs for builds, depending on your environment type.</p> </li>
     * <li> <p> <code>BUILD_GENERAL1_XLARGE</code>: Use up to 70 GB memory and 36 vCPUs
     * for builds, depending on your environment type.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_2XLARGE</code>: Use up to 145 GB memory, 72 vCPUs, and 824
     * GB of SSD storage for builds. This compute type supports Docker images up to 100
     * GB uncompressed.</p> </li> </ul> <p> If you use
     * <code>BUILD_GENERAL1_SMALL</code>: </p> <ul> <li> <p> For environment type
     * <code>LINUX_CONTAINER</code>, you can use up to 3 GB memory and 2 vCPUs for
     * builds. </p> </li> <li> <p> For environment type
     * <code>LINUX_GPU_CONTAINER</code>, you can use up to 16 GB memory, 4 vCPUs, and 1
     * NVIDIA A10G Tensor Core GPU for builds.</p> </li> <li> <p> For environment type
     * <code>ARM_CONTAINER</code>, you can use up to 4 GB memory and 2 vCPUs on
     * ARM-based processors for builds.</p> </li> </ul> <p> If you use
     * <code>BUILD_GENERAL1_LARGE</code>: </p> <ul> <li> <p> For environment type
     * <code>LINUX_CONTAINER</code>, you can use up to 15 GB memory and 8 vCPUs for
     * builds. </p> </li> <li> <p> For environment type
     * <code>LINUX_GPU_CONTAINER</code>, you can use up to 255 GB memory, 32 vCPUs, and
     * 4 NVIDIA Tesla V100 GPUs for builds.</p> </li> <li> <p> For environment type
     * <code>ARM_CONTAINER</code>, you can use up to 16 GB memory and 8 vCPUs on
     * ARM-based processors for builds.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild User Guide.</i> </p>
     */
    inline const ComputeType& GetComputeType() const{ return m_computeType; }
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }
    inline void SetComputeType(const ComputeType& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }
    inline void SetComputeType(ComputeType&& value) { m_computeTypeHasBeenSet = true; m_computeType = std::move(value); }
    inline UpdateFleetRequest& WithComputeType(const ComputeType& value) { SetComputeType(value); return *this;}
    inline UpdateFleetRequest& WithComputeType(ComputeType&& value) { SetComputeType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scaling configuration of the compute fleet.</p>
     */
    inline const ScalingConfigurationInput& GetScalingConfiguration() const{ return m_scalingConfiguration; }
    inline bool ScalingConfigurationHasBeenSet() const { return m_scalingConfigurationHasBeenSet; }
    inline void SetScalingConfiguration(const ScalingConfigurationInput& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = value; }
    inline void SetScalingConfiguration(ScalingConfigurationInput&& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = std::move(value); }
    inline UpdateFleetRequest& WithScalingConfiguration(const ScalingConfigurationInput& value) { SetScalingConfiguration(value); return *this;}
    inline UpdateFleetRequest& WithScalingConfiguration(ScalingConfigurationInput&& value) { SetScalingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute fleet overflow behavior.</p> <ul> <li> <p>For overflow behavior
     * <code>QUEUE</code>, your overflow builds need to wait on the existing fleet
     * instance to become available.</p> </li> <li> <p>For overflow behavior
     * <code>ON_DEMAND</code>, your overflow builds run on CodeBuild on-demand.</p>
     *  <p>If you choose to set your overflow behavior to on-demand while
     * creating a VPC-connected fleet, make sure that you add the required VPC
     * permissions to your project service role. For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/auth-and-access-control-iam-identity-based-access-control.html#customer-managed-policies-example-create-vpc-network-interface">Example
     * policy statement to allow CodeBuild access to Amazon Web Services services
     * required to create a VPC network interface</a>.</p>  </li> </ul>
     */
    inline const FleetOverflowBehavior& GetOverflowBehavior() const{ return m_overflowBehavior; }
    inline bool OverflowBehaviorHasBeenSet() const { return m_overflowBehaviorHasBeenSet; }
    inline void SetOverflowBehavior(const FleetOverflowBehavior& value) { m_overflowBehaviorHasBeenSet = true; m_overflowBehavior = value; }
    inline void SetOverflowBehavior(FleetOverflowBehavior&& value) { m_overflowBehaviorHasBeenSet = true; m_overflowBehavior = std::move(value); }
    inline UpdateFleetRequest& WithOverflowBehavior(const FleetOverflowBehavior& value) { SetOverflowBehavior(value); return *this;}
    inline UpdateFleetRequest& WithOverflowBehavior(FleetOverflowBehavior&& value) { SetOverflowBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline UpdateFleetRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline UpdateFleetRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service role associated with the compute fleet. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/auth-and-access-control-iam-identity-based-access-control.html#customer-managed-policies-example-permission-policy-fleet-service-role.html">
     * Allow a user to add a permission policy for a fleet service role</a> in the
     * <i>CodeBuild User Guide</i>.</p>
     */
    inline const Aws::String& GetFleetServiceRole() const{ return m_fleetServiceRole; }
    inline bool FleetServiceRoleHasBeenSet() const { return m_fleetServiceRoleHasBeenSet; }
    inline void SetFleetServiceRole(const Aws::String& value) { m_fleetServiceRoleHasBeenSet = true; m_fleetServiceRole = value; }
    inline void SetFleetServiceRole(Aws::String&& value) { m_fleetServiceRoleHasBeenSet = true; m_fleetServiceRole = std::move(value); }
    inline void SetFleetServiceRole(const char* value) { m_fleetServiceRoleHasBeenSet = true; m_fleetServiceRole.assign(value); }
    inline UpdateFleetRequest& WithFleetServiceRole(const Aws::String& value) { SetFleetServiceRole(value); return *this;}
    inline UpdateFleetRequest& WithFleetServiceRole(Aws::String&& value) { SetFleetServiceRole(std::move(value)); return *this;}
    inline UpdateFleetRequest& WithFleetServiceRole(const char* value) { SetFleetServiceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tag key and value pairs associated with this compute fleet.</p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild build project tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline UpdateFleetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline UpdateFleetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline UpdateFleetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline UpdateFleetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    int m_baseCapacity;
    bool m_baseCapacityHasBeenSet = false;

    EnvironmentType m_environmentType;
    bool m_environmentTypeHasBeenSet = false;

    ComputeType m_computeType;
    bool m_computeTypeHasBeenSet = false;

    ScalingConfigurationInput m_scalingConfiguration;
    bool m_scalingConfigurationHasBeenSet = false;

    FleetOverflowBehavior m_overflowBehavior;
    bool m_overflowBehaviorHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::String m_fleetServiceRole;
    bool m_fleetServiceRoleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
