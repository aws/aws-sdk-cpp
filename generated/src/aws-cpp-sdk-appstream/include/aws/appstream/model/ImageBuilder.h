/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/VpcConfig.h>
#include <aws/appstream/model/PlatformType.h>
#include <aws/appstream/model/ImageBuilderState.h>
#include <aws/appstream/model/ImageBuilderStateChangeReason.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appstream/model/DomainJoinInfo.h>
#include <aws/appstream/model/NetworkAccessConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/LatestAppstreamAgentVersion.h>
#include <aws/appstream/model/ResourceError.h>
#include <aws/appstream/model/AccessEndpoint.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes a virtual machine that is used to create an image. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ImageBuilder">AWS
   * API Reference</a></p>
   */
  class ImageBuilder
  {
  public:
    AWS_APPSTREAM_API ImageBuilder() = default;
    AWS_APPSTREAM_API ImageBuilder(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API ImageBuilder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the image builder.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ImageBuilder& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the image builder.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ImageBuilder& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the image from which this builder was created.</p>
     */
    inline const Aws::String& GetImageArn() const { return m_imageArn; }
    inline bool ImageArnHasBeenSet() const { return m_imageArnHasBeenSet; }
    template<typename ImageArnT = Aws::String>
    void SetImageArn(ImageArnT&& value) { m_imageArnHasBeenSet = true; m_imageArn = std::forward<ImageArnT>(value); }
    template<typename ImageArnT = Aws::String>
    ImageBuilder& WithImageArn(ImageArnT&& value) { SetImageArn(std::forward<ImageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description to display.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ImageBuilder& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image builder name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    ImageBuilder& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC configuration of the image builder.</p>
     */
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    ImageBuilder& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type for the image builder. The following instance types are
     * available:</p> <ul> <li> <p>stream.standard.small</p> </li> <li>
     * <p>stream.standard.medium</p> </li> <li> <p>stream.standard.large</p> </li> <li>
     * <p>stream.compute.large</p> </li> <li> <p>stream.compute.xlarge</p> </li> <li>
     * <p>stream.compute.2xlarge</p> </li> <li> <p>stream.compute.4xlarge</p> </li>
     * <li> <p>stream.compute.8xlarge</p> </li> <li> <p>stream.memory.large</p> </li>
     * <li> <p>stream.memory.xlarge</p> </li> <li> <p>stream.memory.2xlarge</p> </li>
     * <li> <p>stream.memory.4xlarge</p> </li> <li> <p>stream.memory.8xlarge</p> </li>
     * <li> <p>stream.memory.z1d.large</p> </li> <li> <p>stream.memory.z1d.xlarge</p>
     * </li> <li> <p>stream.memory.z1d.2xlarge</p> </li> <li>
     * <p>stream.memory.z1d.3xlarge</p> </li> <li> <p>stream.memory.z1d.6xlarge</p>
     * </li> <li> <p>stream.memory.z1d.12xlarge</p> </li> <li>
     * <p>stream.graphics-design.large</p> </li> <li>
     * <p>stream.graphics-design.xlarge</p> </li> <li>
     * <p>stream.graphics-design.2xlarge</p> </li> <li>
     * <p>stream.graphics-design.4xlarge</p> </li> <li>
     * <p>stream.graphics-desktop.2xlarge</p> </li> <li>
     * <p>stream.graphics.g4dn.xlarge</p> </li> <li>
     * <p>stream.graphics.g4dn.2xlarge</p> </li> <li>
     * <p>stream.graphics.g4dn.4xlarge</p> </li> <li>
     * <p>stream.graphics.g4dn.8xlarge</p> </li> <li>
     * <p>stream.graphics.g4dn.12xlarge</p> </li> <li>
     * <p>stream.graphics.g4dn.16xlarge</p> </li> <li>
     * <p>stream.graphics-pro.4xlarge</p> </li> <li> <p>stream.graphics-pro.8xlarge</p>
     * </li> <li> <p>stream.graphics-pro.16xlarge</p> </li> <li>
     * <p>stream.graphics.g5.xlarge</p> </li> <li> <p>stream.graphics.g5.2xlarge</p>
     * </li> <li> <p>stream.graphics.g5.4xlarge</p> </li> <li>
     * <p>stream.graphics.g5.8xlarge</p> </li> <li> <p>stream.graphics.g5.16xlarge</p>
     * </li> <li> <p>stream.graphics.g5.12xlarge</p> </li> <li>
     * <p>stream.graphics.g5.24xlarge</p> </li> <li> <p>stream.graphics.g6.xlarge</p>
     * </li> <li> <p>stream.graphics.g6.2xlarge</p> </li> <li>
     * <p>stream.graphics.g6.4xlarge</p> </li> <li> <p>stream.graphics.g6.8xlarge</p>
     * </li> <li> <p>stream.graphics.g6.16xlarge</p> </li> <li>
     * <p>stream.graphics.g6.12xlarge</p> </li> <li> <p>stream.graphics.g6.24xlarge</p>
     * </li> <li> <p>stream.graphics.gr6.4xlarge</p> </li> <li>
     * <p>stream.graphics.gr6.8xlarge</p> </li> </ul>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    ImageBuilder& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system platform of the image builder.</p>
     */
    inline PlatformType GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(PlatformType value) { m_platformHasBeenSet = true; m_platform = value; }
    inline ImageBuilder& WithPlatform(PlatformType value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that is applied to the image builder. To assume a
     * role, the image builder calls the AWS Security Token Service (STS)
     * <code>AssumeRole</code> API operation and passes the ARN of the role to use. The
     * operation creates a new session with temporary credentials. AppStream 2.0
     * retrieves the temporary credentials and creates the
     * <b>appstream_machine_role</b> credential profile on the instance.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/using-iam-roles-to-grant-permissions-to-applications-scripts-streaming-instances.html">Using
     * an IAM Role to Grant Permissions to Applications and Scripts Running on
     * AppStream 2.0 Streaming Instances</a> in the <i>Amazon AppStream 2.0
     * Administration Guide</i>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    ImageBuilder& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the image builder.</p>
     */
    inline ImageBuilderState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ImageBuilderState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ImageBuilder& WithState(ImageBuilderState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the last state change occurred.</p>
     */
    inline const ImageBuilderStateChangeReason& GetStateChangeReason() const { return m_stateChangeReason; }
    inline bool StateChangeReasonHasBeenSet() const { return m_stateChangeReasonHasBeenSet; }
    template<typename StateChangeReasonT = ImageBuilderStateChangeReason>
    void SetStateChangeReason(StateChangeReasonT&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::forward<StateChangeReasonT>(value); }
    template<typename StateChangeReasonT = ImageBuilderStateChangeReason>
    ImageBuilder& WithStateChangeReason(StateChangeReasonT&& value) { SetStateChangeReason(std::forward<StateChangeReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp when the image builder was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    ImageBuilder& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables default internet access for the image builder.</p>
     */
    inline bool GetEnableDefaultInternetAccess() const { return m_enableDefaultInternetAccess; }
    inline bool EnableDefaultInternetAccessHasBeenSet() const { return m_enableDefaultInternetAccessHasBeenSet; }
    inline void SetEnableDefaultInternetAccess(bool value) { m_enableDefaultInternetAccessHasBeenSet = true; m_enableDefaultInternetAccess = value; }
    inline ImageBuilder& WithEnableDefaultInternetAccess(bool value) { SetEnableDefaultInternetAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the directory and organizational unit (OU) to use to join the
     * image builder to a Microsoft Active Directory domain. </p>
     */
    inline const DomainJoinInfo& GetDomainJoinInfo() const { return m_domainJoinInfo; }
    inline bool DomainJoinInfoHasBeenSet() const { return m_domainJoinInfoHasBeenSet; }
    template<typename DomainJoinInfoT = DomainJoinInfo>
    void SetDomainJoinInfo(DomainJoinInfoT&& value) { m_domainJoinInfoHasBeenSet = true; m_domainJoinInfo = std::forward<DomainJoinInfoT>(value); }
    template<typename DomainJoinInfoT = DomainJoinInfo>
    ImageBuilder& WithDomainJoinInfo(DomainJoinInfoT&& value) { SetDomainJoinInfo(std::forward<DomainJoinInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const NetworkAccessConfiguration& GetNetworkAccessConfiguration() const { return m_networkAccessConfiguration; }
    inline bool NetworkAccessConfigurationHasBeenSet() const { return m_networkAccessConfigurationHasBeenSet; }
    template<typename NetworkAccessConfigurationT = NetworkAccessConfiguration>
    void SetNetworkAccessConfiguration(NetworkAccessConfigurationT&& value) { m_networkAccessConfigurationHasBeenSet = true; m_networkAccessConfiguration = std::forward<NetworkAccessConfigurationT>(value); }
    template<typename NetworkAccessConfigurationT = NetworkAccessConfiguration>
    ImageBuilder& WithNetworkAccessConfiguration(NetworkAccessConfigurationT&& value) { SetNetworkAccessConfiguration(std::forward<NetworkAccessConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image builder errors.</p>
     */
    inline const Aws::Vector<ResourceError>& GetImageBuilderErrors() const { return m_imageBuilderErrors; }
    inline bool ImageBuilderErrorsHasBeenSet() const { return m_imageBuilderErrorsHasBeenSet; }
    template<typename ImageBuilderErrorsT = Aws::Vector<ResourceError>>
    void SetImageBuilderErrors(ImageBuilderErrorsT&& value) { m_imageBuilderErrorsHasBeenSet = true; m_imageBuilderErrors = std::forward<ImageBuilderErrorsT>(value); }
    template<typename ImageBuilderErrorsT = Aws::Vector<ResourceError>>
    ImageBuilder& WithImageBuilderErrors(ImageBuilderErrorsT&& value) { SetImageBuilderErrors(std::forward<ImageBuilderErrorsT>(value)); return *this;}
    template<typename ImageBuilderErrorsT = ResourceError>
    ImageBuilder& AddImageBuilderErrors(ImageBuilderErrorsT&& value) { m_imageBuilderErrorsHasBeenSet = true; m_imageBuilderErrors.emplace_back(std::forward<ImageBuilderErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of the AppStream 2.0 agent that is currently being used by the
     * image builder. </p>
     */
    inline const Aws::String& GetAppstreamAgentVersion() const { return m_appstreamAgentVersion; }
    inline bool AppstreamAgentVersionHasBeenSet() const { return m_appstreamAgentVersionHasBeenSet; }
    template<typename AppstreamAgentVersionT = Aws::String>
    void SetAppstreamAgentVersion(AppstreamAgentVersionT&& value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion = std::forward<AppstreamAgentVersionT>(value); }
    template<typename AppstreamAgentVersionT = Aws::String>
    ImageBuilder& WithAppstreamAgentVersion(AppstreamAgentVersionT&& value) { SetAppstreamAgentVersion(std::forward<AppstreamAgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of virtual private cloud (VPC) interface endpoint objects.
     * Administrators can connect to the image builder only through the specified
     * endpoints.</p>
     */
    inline const Aws::Vector<AccessEndpoint>& GetAccessEndpoints() const { return m_accessEndpoints; }
    inline bool AccessEndpointsHasBeenSet() const { return m_accessEndpointsHasBeenSet; }
    template<typename AccessEndpointsT = Aws::Vector<AccessEndpoint>>
    void SetAccessEndpoints(AccessEndpointsT&& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints = std::forward<AccessEndpointsT>(value); }
    template<typename AccessEndpointsT = Aws::Vector<AccessEndpoint>>
    ImageBuilder& WithAccessEndpoints(AccessEndpointsT&& value) { SetAccessEndpoints(std::forward<AccessEndpointsT>(value)); return *this;}
    template<typename AccessEndpointsT = AccessEndpoint>
    ImageBuilder& AddAccessEndpoints(AccessEndpointsT&& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints.emplace_back(std::forward<AccessEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the image builder is using the latest AppStream 2.0 agent
     * version or not.</p>
     */
    inline LatestAppstreamAgentVersion GetLatestAppstreamAgentVersion() const { return m_latestAppstreamAgentVersion; }
    inline bool LatestAppstreamAgentVersionHasBeenSet() const { return m_latestAppstreamAgentVersionHasBeenSet; }
    inline void SetLatestAppstreamAgentVersion(LatestAppstreamAgentVersion value) { m_latestAppstreamAgentVersionHasBeenSet = true; m_latestAppstreamAgentVersion = value; }
    inline ImageBuilder& WithLatestAppstreamAgentVersion(LatestAppstreamAgentVersion value) { SetLatestAppstreamAgentVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_imageArn;
    bool m_imageArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    PlatformType m_platform{PlatformType::NOT_SET};
    bool m_platformHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    ImageBuilderState m_state{ImageBuilderState::NOT_SET};
    bool m_stateHasBeenSet = false;

    ImageBuilderStateChangeReason m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    bool m_enableDefaultInternetAccess{false};
    bool m_enableDefaultInternetAccessHasBeenSet = false;

    DomainJoinInfo m_domainJoinInfo;
    bool m_domainJoinInfoHasBeenSet = false;

    NetworkAccessConfiguration m_networkAccessConfiguration;
    bool m_networkAccessConfigurationHasBeenSet = false;

    Aws::Vector<ResourceError> m_imageBuilderErrors;
    bool m_imageBuilderErrorsHasBeenSet = false;

    Aws::String m_appstreamAgentVersion;
    bool m_appstreamAgentVersionHasBeenSet = false;

    Aws::Vector<AccessEndpoint> m_accessEndpoints;
    bool m_accessEndpointsHasBeenSet = false;

    LatestAppstreamAgentVersion m_latestAppstreamAgentVersion{LatestAppstreamAgentVersion::NOT_SET};
    bool m_latestAppstreamAgentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
