/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/EnvironmentType.h>
#include <aws/codebuild/model/ComputeType.h>
#include <aws/codebuild/model/ComputeConfiguration.h>
#include <aws/codebuild/model/ScalingConfigurationInput.h>
#include <aws/codebuild/model/FleetOverflowBehavior.h>
#include <aws/codebuild/model/VpcConfig.h>
#include <aws/codebuild/model/ProxyConfiguration.h>
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
    AWS_CODEBUILD_API UpdateFleetRequest() = default;

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
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateFleetRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The initial number of machines allocated to the compute ﬂeet, which deﬁnes
     * the number of builds that can run in parallel.</p>
     */
    inline int GetBaseCapacity() const { return m_baseCapacity; }
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
     * type <code>ARM_EC2</code> is available only in regions US East (N. Virginia), US
     * East (Ohio), US West (Oregon), EU (Ireland), EU (Frankfurt), Asia Pacific
     * (Tokyo), Asia Pacific (Singapore), Asia Pacific (Sydney), South America (São
     * Paulo), and Asia Pacific (Mumbai).</p> </li> <li> <p>The environment type
     * <code>LINUX_CONTAINER</code> is available only in regions US East (N. Virginia),
     * US East (Ohio), US West (Oregon), EU (Ireland), EU (Frankfurt), Asia Pacific
     * (Tokyo), Asia Pacific (Singapore), Asia Pacific (Sydney), South America (São
     * Paulo), and Asia Pacific (Mumbai).</p> </li> <li> <p>The environment type
     * <code>LINUX_EC2</code> is available only in regions US East (N. Virginia), US
     * East (Ohio), US West (Oregon), EU (Ireland), EU (Frankfurt), Asia Pacific
     * (Tokyo), Asia Pacific (Singapore), Asia Pacific (Sydney), South America (São
     * Paulo), and Asia Pacific (Mumbai).</p> </li> <li> <p>The environment type
     * <code>LINUX_GPU_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), EU (Frankfurt), Asia
     * Pacific (Tokyo), and Asia Pacific (Sydney).</p> </li> <li> <p>The environment
     * type <code>MAC_ARM</code> is available for Medium fleets only in regions US East
     * (N. Virginia), US East (Ohio), US West (Oregon), Asia Pacific (Sydney), and EU
     * (Frankfurt)</p> </li> <li> <p>The environment type <code>MAC_ARM</code> is
     * available for Large fleets only in regions US East (N. Virginia), US East
     * (Ohio), US West (Oregon), and Asia Pacific (Sydney).</p> </li> <li> <p>The
     * environment type <code>WINDOWS_EC2</code> is available only in regions US East
     * (N. Virginia), US East (Ohio), US West (Oregon), EU (Ireland), EU (Frankfurt),
     * Asia Pacific (Tokyo), Asia Pacific (Singapore), Asia Pacific (Sydney), South
     * America (São Paulo), and Asia Pacific (Mumbai).</p> </li> <li> <p>The
     * environment type <code>WINDOWS_SERVER_2019_CONTAINER</code> is available only in
     * regions US East (N. Virginia), US East (Ohio), US West (Oregon), Asia Pacific
     * (Sydney), Asia Pacific (Tokyo), Asia Pacific (Mumbai) and EU (Ireland).</p>
     * </li> <li> <p>The environment type <code>WINDOWS_SERVER_2022_CONTAINER</code> is
     * available only in regions US East (N. Virginia), US East (Ohio), US West
     * (Oregon), EU (Ireland), EU (Frankfurt), Asia Pacific (Sydney), Asia Pacific
     * (Singapore), Asia Pacific (Tokyo), South America (São Paulo) and Asia Pacific
     * (Mumbai).</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild user guide</i>.</p>
     */
    inline EnvironmentType GetEnvironmentType() const { return m_environmentType; }
    inline bool EnvironmentTypeHasBeenSet() const { return m_environmentTypeHasBeenSet; }
    inline void SetEnvironmentType(EnvironmentType value) { m_environmentTypeHasBeenSet = true; m_environmentType = value; }
    inline UpdateFleetRequest& WithEnvironmentType(EnvironmentType value) { SetEnvironmentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the compute resources the compute fleet uses. Available
     * values include:</p> <ul> <li> <p> <code>ATTRIBUTE_BASED_COMPUTE</code>: Specify
     * the amount of vCPUs, memory, disk space, and the type of machine.</p>  <p>
     * If you use <code>ATTRIBUTE_BASED_COMPUTE</code>, you must define your attributes
     * by using <code>computeConfiguration</code>. CodeBuild will select the cheapest
     * instance that satisfies your specified attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html#environment-reserved-capacity.types">Reserved
     * capacity environment types</a> in the <i>CodeBuild User Guide</i>.</p> 
     * </li> <li> <p> <code>CUSTOM_INSTANCE_TYPE</code>: Specify the instance type for
     * your compute fleet. For a list of supported instance types, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html#environment-reserved-capacity.instance-types">Supported
     * instance families </a> in the <i>CodeBuild User Guide</i>.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_SMALL</code>: Use up to 4 GiB memory and 2 vCPUs for
     * builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_MEDIUM</code>: Use up to 8 GiB
     * memory and 4 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_LARGE</code>: Use up to 16 GiB memory and 8 vCPUs for
     * builds, depending on your environment type.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_XLARGE</code>: Use up to 72 GiB memory and 36 vCPUs for
     * builds, depending on your environment type.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_2XLARGE</code>: Use up to 144 GiB memory, 72 vCPUs, and 824
     * GB of SSD storage for builds. This compute type supports Docker images up to 100
     * GB uncompressed.</p> </li> <li> <p> <code>BUILD_LAMBDA_1GB</code>: Use up to 1
     * GiB memory for builds. Only available for environment type
     * <code>LINUX_LAMBDA_CONTAINER</code> and <code>ARM_LAMBDA_CONTAINER</code>.</p>
     * </li> <li> <p> <code>BUILD_LAMBDA_2GB</code>: Use up to 2 GiB memory for builds.
     * Only available for environment type <code>LINUX_LAMBDA_CONTAINER</code> and
     * <code>ARM_LAMBDA_CONTAINER</code>.</p> </li> <li> <p>
     * <code>BUILD_LAMBDA_4GB</code>: Use up to 4 GiB memory for builds. Only available
     * for environment type <code>LINUX_LAMBDA_CONTAINER</code> and
     * <code>ARM_LAMBDA_CONTAINER</code>.</p> </li> <li> <p>
     * <code>BUILD_LAMBDA_8GB</code>: Use up to 8 GiB memory for builds. Only available
     * for environment type <code>LINUX_LAMBDA_CONTAINER</code> and
     * <code>ARM_LAMBDA_CONTAINER</code>.</p> </li> <li> <p>
     * <code>BUILD_LAMBDA_10GB</code>: Use up to 10 GiB memory for builds. Only
     * available for environment type <code>LINUX_LAMBDA_CONTAINER</code> and
     * <code>ARM_LAMBDA_CONTAINER</code>.</p> </li> </ul> <p> If you use
     * <code>BUILD_GENERAL1_SMALL</code>: </p> <ul> <li> <p> For environment type
     * <code>LINUX_CONTAINER</code>, you can use up to 4 GiB memory and 2 vCPUs for
     * builds. </p> </li> <li> <p> For environment type
     * <code>LINUX_GPU_CONTAINER</code>, you can use up to 16 GiB memory, 4 vCPUs, and
     * 1 NVIDIA A10G Tensor Core GPU for builds.</p> </li> <li> <p> For environment
     * type <code>ARM_CONTAINER</code>, you can use up to 4 GiB memory and 2 vCPUs on
     * ARM-based processors for builds.</p> </li> </ul> <p> If you use
     * <code>BUILD_GENERAL1_LARGE</code>: </p> <ul> <li> <p> For environment type
     * <code>LINUX_CONTAINER</code>, you can use up to 16 GiB memory and 8 vCPUs for
     * builds. </p> </li> <li> <p> For environment type
     * <code>LINUX_GPU_CONTAINER</code>, you can use up to 255 GiB memory, 32 vCPUs,
     * and 4 NVIDIA Tesla V100 GPUs for builds.</p> </li> <li> <p> For environment type
     * <code>ARM_CONTAINER</code>, you can use up to 16 GiB memory and 8 vCPUs on
     * ARM-based processors for builds.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html#environment.types">On-demand
     * environment types</a> in the <i>CodeBuild User Guide.</i> </p>
     */
    inline ComputeType GetComputeType() const { return m_computeType; }
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }
    inline void SetComputeType(ComputeType value) { m_computeTypeHasBeenSet = true; m_computeType = value; }
    inline UpdateFleetRequest& WithComputeType(ComputeType value) { SetComputeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute configuration of the compute fleet. This is only required if
     * <code>computeType</code> is set to <code>ATTRIBUTE_BASED_COMPUTE</code> or
     * <code>CUSTOM_INSTANCE_TYPE</code>.</p>
     */
    inline const ComputeConfiguration& GetComputeConfiguration() const { return m_computeConfiguration; }
    inline bool ComputeConfigurationHasBeenSet() const { return m_computeConfigurationHasBeenSet; }
    template<typename ComputeConfigurationT = ComputeConfiguration>
    void SetComputeConfiguration(ComputeConfigurationT&& value) { m_computeConfigurationHasBeenSet = true; m_computeConfiguration = std::forward<ComputeConfigurationT>(value); }
    template<typename ComputeConfigurationT = ComputeConfiguration>
    UpdateFleetRequest& WithComputeConfiguration(ComputeConfigurationT&& value) { SetComputeConfiguration(std::forward<ComputeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scaling configuration of the compute fleet.</p>
     */
    inline const ScalingConfigurationInput& GetScalingConfiguration() const { return m_scalingConfiguration; }
    inline bool ScalingConfigurationHasBeenSet() const { return m_scalingConfigurationHasBeenSet; }
    template<typename ScalingConfigurationT = ScalingConfigurationInput>
    void SetScalingConfiguration(ScalingConfigurationT&& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = std::forward<ScalingConfigurationT>(value); }
    template<typename ScalingConfigurationT = ScalingConfigurationInput>
    UpdateFleetRequest& WithScalingConfiguration(ScalingConfigurationT&& value) { SetScalingConfiguration(std::forward<ScalingConfigurationT>(value)); return *this;}
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
    inline FleetOverflowBehavior GetOverflowBehavior() const { return m_overflowBehavior; }
    inline bool OverflowBehaviorHasBeenSet() const { return m_overflowBehaviorHasBeenSet; }
    inline void SetOverflowBehavior(FleetOverflowBehavior value) { m_overflowBehaviorHasBeenSet = true; m_overflowBehavior = value; }
    inline UpdateFleetRequest& WithOverflowBehavior(FleetOverflowBehavior value) { SetOverflowBehavior(value); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    UpdateFleetRequest& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proxy configuration of the compute fleet.</p>
     */
    inline const ProxyConfiguration& GetProxyConfiguration() const { return m_proxyConfiguration; }
    inline bool ProxyConfigurationHasBeenSet() const { return m_proxyConfigurationHasBeenSet; }
    template<typename ProxyConfigurationT = ProxyConfiguration>
    void SetProxyConfiguration(ProxyConfigurationT&& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = std::forward<ProxyConfigurationT>(value); }
    template<typename ProxyConfigurationT = ProxyConfiguration>
    UpdateFleetRequest& WithProxyConfiguration(ProxyConfigurationT&& value) { SetProxyConfiguration(std::forward<ProxyConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Machine Image (AMI) of the compute fleet.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    UpdateFleetRequest& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service role associated with the compute fleet. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/auth-and-access-control-iam-identity-based-access-control.html#customer-managed-policies-example-permission-policy-fleet-service-role.html">
     * Allow a user to add a permission policy for a fleet service role</a> in the
     * <i>CodeBuild User Guide</i>.</p>
     */
    inline const Aws::String& GetFleetServiceRole() const { return m_fleetServiceRole; }
    inline bool FleetServiceRoleHasBeenSet() const { return m_fleetServiceRoleHasBeenSet; }
    template<typename FleetServiceRoleT = Aws::String>
    void SetFleetServiceRole(FleetServiceRoleT&& value) { m_fleetServiceRoleHasBeenSet = true; m_fleetServiceRole = std::forward<FleetServiceRoleT>(value); }
    template<typename FleetServiceRoleT = Aws::String>
    UpdateFleetRequest& WithFleetServiceRole(FleetServiceRoleT&& value) { SetFleetServiceRole(std::forward<FleetServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tag key and value pairs associated with this compute fleet.</p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild build project tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    UpdateFleetRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    UpdateFleetRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    int m_baseCapacity{0};
    bool m_baseCapacityHasBeenSet = false;

    EnvironmentType m_environmentType{EnvironmentType::NOT_SET};
    bool m_environmentTypeHasBeenSet = false;

    ComputeType m_computeType{ComputeType::NOT_SET};
    bool m_computeTypeHasBeenSet = false;

    ComputeConfiguration m_computeConfiguration;
    bool m_computeConfigurationHasBeenSet = false;

    ScalingConfigurationInput m_scalingConfiguration;
    bool m_scalingConfigurationHasBeenSet = false;

    FleetOverflowBehavior m_overflowBehavior{FleetOverflowBehavior::NOT_SET};
    bool m_overflowBehaviorHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    ProxyConfiguration m_proxyConfiguration;
    bool m_proxyConfigurationHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_fleetServiceRole;
    bool m_fleetServiceRoleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
