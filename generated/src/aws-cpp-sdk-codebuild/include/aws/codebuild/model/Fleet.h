/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codebuild/model/FleetStatus.h>
#include <aws/codebuild/model/EnvironmentType.h>
#include <aws/codebuild/model/ComputeType.h>
#include <aws/codebuild/model/ComputeConfiguration.h>
#include <aws/codebuild/model/ScalingConfigurationOutput.h>
#include <aws/codebuild/model/FleetOverflowBehavior.h>
#include <aws/codebuild/model/VpcConfig.h>
#include <aws/codebuild/model/ProxyConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/Tag.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>A set of dedicated instances for your build environment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/Fleet">AWS API
   * Reference</a></p>
   */
  class Fleet
  {
  public:
    AWS_CODEBUILD_API Fleet();
    AWS_CODEBUILD_API Fleet(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Fleet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the compute fleet.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Fleet& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Fleet& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Fleet& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the compute fleet.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Fleet& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Fleet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Fleet& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the compute fleet.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Fleet& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Fleet& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Fleet& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the compute fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }
    inline Fleet& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline Fleet& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the compute fleet was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }
    inline Fleet& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}
    inline Fleet& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the compute fleet.</p>
     */
    inline const FleetStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const FleetStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(FleetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Fleet& WithStatus(const FleetStatus& value) { SetStatus(value); return *this;}
    inline Fleet& WithStatus(FleetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The initial number of machines allocated to the compute ﬂeet, which deﬁnes
     * the number of builds that can run in parallel.</p>
     */
    inline int GetBaseCapacity() const{ return m_baseCapacity; }
    inline bool BaseCapacityHasBeenSet() const { return m_baseCapacityHasBeenSet; }
    inline void SetBaseCapacity(int value) { m_baseCapacityHasBeenSet = true; m_baseCapacity = value; }
    inline Fleet& WithBaseCapacity(int value) { SetBaseCapacity(value); return *this;}
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
    inline const EnvironmentType& GetEnvironmentType() const{ return m_environmentType; }
    inline bool EnvironmentTypeHasBeenSet() const { return m_environmentTypeHasBeenSet; }
    inline void SetEnvironmentType(const EnvironmentType& value) { m_environmentTypeHasBeenSet = true; m_environmentType = value; }
    inline void SetEnvironmentType(EnvironmentType&& value) { m_environmentTypeHasBeenSet = true; m_environmentType = std::move(value); }
    inline Fleet& WithEnvironmentType(const EnvironmentType& value) { SetEnvironmentType(value); return *this;}
    inline Fleet& WithEnvironmentType(EnvironmentType&& value) { SetEnvironmentType(std::move(value)); return *this;}
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
     * </li> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 4 GiB memory and 2
     * vCPUs for builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_MEDIUM</code>: Use up
     * to 8 GiB memory and 4 vCPUs for builds.</p> </li> <li> <p>
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
    inline const ComputeType& GetComputeType() const{ return m_computeType; }
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }
    inline void SetComputeType(const ComputeType& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }
    inline void SetComputeType(ComputeType&& value) { m_computeTypeHasBeenSet = true; m_computeType = std::move(value); }
    inline Fleet& WithComputeType(const ComputeType& value) { SetComputeType(value); return *this;}
    inline Fleet& WithComputeType(ComputeType&& value) { SetComputeType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute configuration of the compute fleet. This is only required if
     * <code>computeType</code> is set to <code>ATTRIBUTE_BASED_COMPUTE</code>.</p>
     */
    inline const ComputeConfiguration& GetComputeConfiguration() const{ return m_computeConfiguration; }
    inline bool ComputeConfigurationHasBeenSet() const { return m_computeConfigurationHasBeenSet; }
    inline void SetComputeConfiguration(const ComputeConfiguration& value) { m_computeConfigurationHasBeenSet = true; m_computeConfiguration = value; }
    inline void SetComputeConfiguration(ComputeConfiguration&& value) { m_computeConfigurationHasBeenSet = true; m_computeConfiguration = std::move(value); }
    inline Fleet& WithComputeConfiguration(const ComputeConfiguration& value) { SetComputeConfiguration(value); return *this;}
    inline Fleet& WithComputeConfiguration(ComputeConfiguration&& value) { SetComputeConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scaling configuration of the compute fleet.</p>
     */
    inline const ScalingConfigurationOutput& GetScalingConfiguration() const{ return m_scalingConfiguration; }
    inline bool ScalingConfigurationHasBeenSet() const { return m_scalingConfigurationHasBeenSet; }
    inline void SetScalingConfiguration(const ScalingConfigurationOutput& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = value; }
    inline void SetScalingConfiguration(ScalingConfigurationOutput&& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = std::move(value); }
    inline Fleet& WithScalingConfiguration(const ScalingConfigurationOutput& value) { SetScalingConfiguration(value); return *this;}
    inline Fleet& WithScalingConfiguration(ScalingConfigurationOutput&& value) { SetScalingConfiguration(std::move(value)); return *this;}
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
    inline Fleet& WithOverflowBehavior(const FleetOverflowBehavior& value) { SetOverflowBehavior(value); return *this;}
    inline Fleet& WithOverflowBehavior(FleetOverflowBehavior&& value) { SetOverflowBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline Fleet& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline Fleet& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proxy configuration of the compute fleet.</p>
     */
    inline const ProxyConfiguration& GetProxyConfiguration() const{ return m_proxyConfiguration; }
    inline bool ProxyConfigurationHasBeenSet() const { return m_proxyConfigurationHasBeenSet; }
    inline void SetProxyConfiguration(const ProxyConfiguration& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = value; }
    inline void SetProxyConfiguration(ProxyConfiguration&& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = std::move(value); }
    inline Fleet& WithProxyConfiguration(const ProxyConfiguration& value) { SetProxyConfiguration(value); return *this;}
    inline Fleet& WithProxyConfiguration(ProxyConfiguration&& value) { SetProxyConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Machine Image (AMI) of the compute fleet.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }
    inline Fleet& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline Fleet& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline Fleet& WithImageId(const char* value) { SetImageId(value); return *this;}
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
    inline Fleet& WithFleetServiceRole(const Aws::String& value) { SetFleetServiceRole(value); return *this;}
    inline Fleet& WithFleetServiceRole(Aws::String&& value) { SetFleetServiceRole(std::move(value)); return *this;}
    inline Fleet& WithFleetServiceRole(const char* value) { SetFleetServiceRole(value); return *this;}
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
    inline Fleet& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Fleet& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Fleet& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Fleet& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    FleetStatus m_status;
    bool m_statusHasBeenSet = false;

    int m_baseCapacity;
    bool m_baseCapacityHasBeenSet = false;

    EnvironmentType m_environmentType;
    bool m_environmentTypeHasBeenSet = false;

    ComputeType m_computeType;
    bool m_computeTypeHasBeenSet = false;

    ComputeConfiguration m_computeConfiguration;
    bool m_computeConfigurationHasBeenSet = false;

    ScalingConfigurationOutput m_scalingConfiguration;
    bool m_scalingConfigurationHasBeenSet = false;

    FleetOverflowBehavior m_overflowBehavior;
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
