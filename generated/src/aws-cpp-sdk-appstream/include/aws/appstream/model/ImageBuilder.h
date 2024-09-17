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
    AWS_APPSTREAM_API ImageBuilder();
    AWS_APPSTREAM_API ImageBuilder(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API ImageBuilder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the image builder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ImageBuilder& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ImageBuilder& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ImageBuilder& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the image builder.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ImageBuilder& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ImageBuilder& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ImageBuilder& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the image from which this builder was created.</p>
     */
    inline const Aws::String& GetImageArn() const{ return m_imageArn; }
    inline bool ImageArnHasBeenSet() const { return m_imageArnHasBeenSet; }
    inline void SetImageArn(const Aws::String& value) { m_imageArnHasBeenSet = true; m_imageArn = value; }
    inline void SetImageArn(Aws::String&& value) { m_imageArnHasBeenSet = true; m_imageArn = std::move(value); }
    inline void SetImageArn(const char* value) { m_imageArnHasBeenSet = true; m_imageArn.assign(value); }
    inline ImageBuilder& WithImageArn(const Aws::String& value) { SetImageArn(value); return *this;}
    inline ImageBuilder& WithImageArn(Aws::String&& value) { SetImageArn(std::move(value)); return *this;}
    inline ImageBuilder& WithImageArn(const char* value) { SetImageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description to display.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ImageBuilder& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ImageBuilder& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ImageBuilder& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image builder name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline ImageBuilder& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline ImageBuilder& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline ImageBuilder& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC configuration of the image builder.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline ImageBuilder& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline ImageBuilder& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
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
     * </li> <li> <p>stream.graphics-pro.16xlarge</p> </li> </ul>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline ImageBuilder& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline ImageBuilder& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline ImageBuilder& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system platform of the image builder.</p>
     */
    inline const PlatformType& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const PlatformType& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(PlatformType&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline ImageBuilder& WithPlatform(const PlatformType& value) { SetPlatform(value); return *this;}
    inline ImageBuilder& WithPlatform(PlatformType&& value) { SetPlatform(std::move(value)); return *this;}
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
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline ImageBuilder& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline ImageBuilder& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline ImageBuilder& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the image builder.</p>
     */
    inline const ImageBuilderState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ImageBuilderState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ImageBuilderState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ImageBuilder& WithState(const ImageBuilderState& value) { SetState(value); return *this;}
    inline ImageBuilder& WithState(ImageBuilderState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the last state change occurred.</p>
     */
    inline const ImageBuilderStateChangeReason& GetStateChangeReason() const{ return m_stateChangeReason; }
    inline bool StateChangeReasonHasBeenSet() const { return m_stateChangeReasonHasBeenSet; }
    inline void SetStateChangeReason(const ImageBuilderStateChangeReason& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = value; }
    inline void SetStateChangeReason(ImageBuilderStateChangeReason&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::move(value); }
    inline ImageBuilder& WithStateChangeReason(const ImageBuilderStateChangeReason& value) { SetStateChangeReason(value); return *this;}
    inline ImageBuilder& WithStateChangeReason(ImageBuilderStateChangeReason&& value) { SetStateChangeReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp when the image builder was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline ImageBuilder& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline ImageBuilder& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables default internet access for the image builder.</p>
     */
    inline bool GetEnableDefaultInternetAccess() const{ return m_enableDefaultInternetAccess; }
    inline bool EnableDefaultInternetAccessHasBeenSet() const { return m_enableDefaultInternetAccessHasBeenSet; }
    inline void SetEnableDefaultInternetAccess(bool value) { m_enableDefaultInternetAccessHasBeenSet = true; m_enableDefaultInternetAccess = value; }
    inline ImageBuilder& WithEnableDefaultInternetAccess(bool value) { SetEnableDefaultInternetAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the directory and organizational unit (OU) to use to join the
     * image builder to a Microsoft Active Directory domain. </p>
     */
    inline const DomainJoinInfo& GetDomainJoinInfo() const{ return m_domainJoinInfo; }
    inline bool DomainJoinInfoHasBeenSet() const { return m_domainJoinInfoHasBeenSet; }
    inline void SetDomainJoinInfo(const DomainJoinInfo& value) { m_domainJoinInfoHasBeenSet = true; m_domainJoinInfo = value; }
    inline void SetDomainJoinInfo(DomainJoinInfo&& value) { m_domainJoinInfoHasBeenSet = true; m_domainJoinInfo = std::move(value); }
    inline ImageBuilder& WithDomainJoinInfo(const DomainJoinInfo& value) { SetDomainJoinInfo(value); return *this;}
    inline ImageBuilder& WithDomainJoinInfo(DomainJoinInfo&& value) { SetDomainJoinInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const NetworkAccessConfiguration& GetNetworkAccessConfiguration() const{ return m_networkAccessConfiguration; }
    inline bool NetworkAccessConfigurationHasBeenSet() const { return m_networkAccessConfigurationHasBeenSet; }
    inline void SetNetworkAccessConfiguration(const NetworkAccessConfiguration& value) { m_networkAccessConfigurationHasBeenSet = true; m_networkAccessConfiguration = value; }
    inline void SetNetworkAccessConfiguration(NetworkAccessConfiguration&& value) { m_networkAccessConfigurationHasBeenSet = true; m_networkAccessConfiguration = std::move(value); }
    inline ImageBuilder& WithNetworkAccessConfiguration(const NetworkAccessConfiguration& value) { SetNetworkAccessConfiguration(value); return *this;}
    inline ImageBuilder& WithNetworkAccessConfiguration(NetworkAccessConfiguration&& value) { SetNetworkAccessConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image builder errors.</p>
     */
    inline const Aws::Vector<ResourceError>& GetImageBuilderErrors() const{ return m_imageBuilderErrors; }
    inline bool ImageBuilderErrorsHasBeenSet() const { return m_imageBuilderErrorsHasBeenSet; }
    inline void SetImageBuilderErrors(const Aws::Vector<ResourceError>& value) { m_imageBuilderErrorsHasBeenSet = true; m_imageBuilderErrors = value; }
    inline void SetImageBuilderErrors(Aws::Vector<ResourceError>&& value) { m_imageBuilderErrorsHasBeenSet = true; m_imageBuilderErrors = std::move(value); }
    inline ImageBuilder& WithImageBuilderErrors(const Aws::Vector<ResourceError>& value) { SetImageBuilderErrors(value); return *this;}
    inline ImageBuilder& WithImageBuilderErrors(Aws::Vector<ResourceError>&& value) { SetImageBuilderErrors(std::move(value)); return *this;}
    inline ImageBuilder& AddImageBuilderErrors(const ResourceError& value) { m_imageBuilderErrorsHasBeenSet = true; m_imageBuilderErrors.push_back(value); return *this; }
    inline ImageBuilder& AddImageBuilderErrors(ResourceError&& value) { m_imageBuilderErrorsHasBeenSet = true; m_imageBuilderErrors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of the AppStream 2.0 agent that is currently being used by the
     * image builder. </p>
     */
    inline const Aws::String& GetAppstreamAgentVersion() const{ return m_appstreamAgentVersion; }
    inline bool AppstreamAgentVersionHasBeenSet() const { return m_appstreamAgentVersionHasBeenSet; }
    inline void SetAppstreamAgentVersion(const Aws::String& value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion = value; }
    inline void SetAppstreamAgentVersion(Aws::String&& value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion = std::move(value); }
    inline void SetAppstreamAgentVersion(const char* value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion.assign(value); }
    inline ImageBuilder& WithAppstreamAgentVersion(const Aws::String& value) { SetAppstreamAgentVersion(value); return *this;}
    inline ImageBuilder& WithAppstreamAgentVersion(Aws::String&& value) { SetAppstreamAgentVersion(std::move(value)); return *this;}
    inline ImageBuilder& WithAppstreamAgentVersion(const char* value) { SetAppstreamAgentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of virtual private cloud (VPC) interface endpoint objects.
     * Administrators can connect to the image builder only through the specified
     * endpoints.</p>
     */
    inline const Aws::Vector<AccessEndpoint>& GetAccessEndpoints() const{ return m_accessEndpoints; }
    inline bool AccessEndpointsHasBeenSet() const { return m_accessEndpointsHasBeenSet; }
    inline void SetAccessEndpoints(const Aws::Vector<AccessEndpoint>& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints = value; }
    inline void SetAccessEndpoints(Aws::Vector<AccessEndpoint>&& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints = std::move(value); }
    inline ImageBuilder& WithAccessEndpoints(const Aws::Vector<AccessEndpoint>& value) { SetAccessEndpoints(value); return *this;}
    inline ImageBuilder& WithAccessEndpoints(Aws::Vector<AccessEndpoint>&& value) { SetAccessEndpoints(std::move(value)); return *this;}
    inline ImageBuilder& AddAccessEndpoints(const AccessEndpoint& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints.push_back(value); return *this; }
    inline ImageBuilder& AddAccessEndpoints(AccessEndpoint&& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the image builder is using the latest AppStream 2.0 agent
     * version or not.</p>
     */
    inline const LatestAppstreamAgentVersion& GetLatestAppstreamAgentVersion() const{ return m_latestAppstreamAgentVersion; }
    inline bool LatestAppstreamAgentVersionHasBeenSet() const { return m_latestAppstreamAgentVersionHasBeenSet; }
    inline void SetLatestAppstreamAgentVersion(const LatestAppstreamAgentVersion& value) { m_latestAppstreamAgentVersionHasBeenSet = true; m_latestAppstreamAgentVersion = value; }
    inline void SetLatestAppstreamAgentVersion(LatestAppstreamAgentVersion&& value) { m_latestAppstreamAgentVersionHasBeenSet = true; m_latestAppstreamAgentVersion = std::move(value); }
    inline ImageBuilder& WithLatestAppstreamAgentVersion(const LatestAppstreamAgentVersion& value) { SetLatestAppstreamAgentVersion(value); return *this;}
    inline ImageBuilder& WithLatestAppstreamAgentVersion(LatestAppstreamAgentVersion&& value) { SetLatestAppstreamAgentVersion(std::move(value)); return *this;}
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

    PlatformType m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    ImageBuilderState m_state;
    bool m_stateHasBeenSet = false;

    ImageBuilderStateChangeReason m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    bool m_enableDefaultInternetAccess;
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

    LatestAppstreamAgentVersion m_latestAppstreamAgentVersion;
    bool m_latestAppstreamAgentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
