/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/VpcConfig.h>
#include <aws/appstream/model/DomainJoinInfo.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/AccessEndpoint.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class CreateImageBuilderRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API CreateImageBuilderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateImageBuilder"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique name for the image builder.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateImageBuilderRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the image used to create the image builder.</p>
     */
    inline const Aws::String& GetImageName() const { return m_imageName; }
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }
    template<typename ImageNameT = Aws::String>
    void SetImageName(ImageNameT&& value) { m_imageNameHasBeenSet = true; m_imageName = std::forward<ImageNameT>(value); }
    template<typename ImageNameT = Aws::String>
    CreateImageBuilderRequest& WithImageName(ImageNameT&& value) { SetImageName(std::forward<ImageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the public, private, or shared image to use.</p>
     */
    inline const Aws::String& GetImageArn() const { return m_imageArn; }
    inline bool ImageArnHasBeenSet() const { return m_imageArnHasBeenSet; }
    template<typename ImageArnT = Aws::String>
    void SetImageArn(ImageArnT&& value) { m_imageArnHasBeenSet = true; m_imageArn = std::forward<ImageArnT>(value); }
    template<typename ImageArnT = Aws::String>
    CreateImageBuilderRequest& WithImageArn(ImageArnT&& value) { SetImageArn(std::forward<ImageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type to use when launching the image builder. The following
     * instance types are available:</p> <ul> <li> <p>stream.standard.small</p> </li>
     * <li> <p>stream.standard.medium</p> </li> <li> <p>stream.standard.large</p> </li>
     * <li> <p>stream.compute.large</p> </li> <li> <p>stream.compute.xlarge</p> </li>
     * <li> <p>stream.compute.2xlarge</p> </li> <li> <p>stream.compute.4xlarge</p>
     * </li> <li> <p>stream.compute.8xlarge</p> </li> <li> <p>stream.memory.large</p>
     * </li> <li> <p>stream.memory.xlarge</p> </li> <li> <p>stream.memory.2xlarge</p>
     * </li> <li> <p>stream.memory.4xlarge</p> </li> <li> <p>stream.memory.8xlarge</p>
     * </li> <li> <p>stream.memory.z1d.large</p> </li> <li>
     * <p>stream.memory.z1d.xlarge</p> </li> <li> <p>stream.memory.z1d.2xlarge</p>
     * </li> <li> <p>stream.memory.z1d.3xlarge</p> </li> <li>
     * <p>stream.memory.z1d.6xlarge</p> </li> <li> <p>stream.memory.z1d.12xlarge</p>
     * </li> <li> <p>stream.graphics-design.large</p> </li> <li>
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
     * <p>stream.graphics.gr6.8xlarge</p> </li> <li> <p>stream.graphics.g6f.large</p>
     * </li> <li> <p>stream.graphics.g6f.xlarge</p> </li> <li>
     * <p>stream.graphics.g6f.2xlarge</p> </li> <li> <p>stream.graphics.g6f.4xlarge</p>
     * </li> <li> <p>stream.graphics.gr6f.4xlarge</p> </li> </ul>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    CreateImageBuilderRequest& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
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
    CreateImageBuilderRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    CreateImageBuilderRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC configuration for the image builder. You can specify only one
     * subnet.</p>
     */
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    CreateImageBuilderRequest& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to apply to the image builder.
     * To assume a role, the image builder calls the AWS Security Token Service (STS)
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
    CreateImageBuilderRequest& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables default internet access for the image builder.</p>
     */
    inline bool GetEnableDefaultInternetAccess() const { return m_enableDefaultInternetAccess; }
    inline bool EnableDefaultInternetAccessHasBeenSet() const { return m_enableDefaultInternetAccessHasBeenSet; }
    inline void SetEnableDefaultInternetAccess(bool value) { m_enableDefaultInternetAccessHasBeenSet = true; m_enableDefaultInternetAccess = value; }
    inline CreateImageBuilderRequest& WithEnableDefaultInternetAccess(bool value) { SetEnableDefaultInternetAccess(value); return *this;}
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
    CreateImageBuilderRequest& WithDomainJoinInfo(DomainJoinInfoT&& value) { SetDomainJoinInfo(std::forward<DomainJoinInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the AppStream 2.0 agent to use for this image builder. To use
     * the latest version of the AppStream 2.0 agent, specify [LATEST]. </p>
     */
    inline const Aws::String& GetAppstreamAgentVersion() const { return m_appstreamAgentVersion; }
    inline bool AppstreamAgentVersionHasBeenSet() const { return m_appstreamAgentVersionHasBeenSet; }
    template<typename AppstreamAgentVersionT = Aws::String>
    void SetAppstreamAgentVersion(AppstreamAgentVersionT&& value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion = std::forward<AppstreamAgentVersionT>(value); }
    template<typename AppstreamAgentVersionT = Aws::String>
    CreateImageBuilderRequest& WithAppstreamAgentVersion(AppstreamAgentVersionT&& value) { SetAppstreamAgentVersion(std::forward<AppstreamAgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to associate with the image builder. A tag is a key-value pair, and
     * the value is optional. For example, Environment=Test. If you do not specify a
     * value, Environment=. </p> <p>Generally allowed characters are: letters, numbers,
     * and spaces representable in UTF-8, and the following special characters: </p>
     * <p>_ . : / = + \ - @</p> <p>If you do not specify a value, the value is set to
     * an empty string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateImageBuilderRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateImageBuilderRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The list of interface VPC endpoint (interface endpoint) objects.
     * Administrators can connect to the image builder only through the specified
     * endpoints.</p>
     */
    inline const Aws::Vector<AccessEndpoint>& GetAccessEndpoints() const { return m_accessEndpoints; }
    inline bool AccessEndpointsHasBeenSet() const { return m_accessEndpointsHasBeenSet; }
    template<typename AccessEndpointsT = Aws::Vector<AccessEndpoint>>
    void SetAccessEndpoints(AccessEndpointsT&& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints = std::forward<AccessEndpointsT>(value); }
    template<typename AccessEndpointsT = Aws::Vector<AccessEndpoint>>
    CreateImageBuilderRequest& WithAccessEndpoints(AccessEndpointsT&& value) { SetAccessEndpoints(std::forward<AccessEndpointsT>(value)); return *this;}
    template<typename AccessEndpointsT = AccessEndpoint>
    CreateImageBuilderRequest& AddAccessEndpoints(AccessEndpointsT&& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints.emplace_back(std::forward<AccessEndpointsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet = false;

    Aws::String m_imageArn;
    bool m_imageArnHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    bool m_enableDefaultInternetAccess{false};
    bool m_enableDefaultInternetAccessHasBeenSet = false;

    DomainJoinInfo m_domainJoinInfo;
    bool m_domainJoinInfoHasBeenSet = false;

    Aws::String m_appstreamAgentVersion;
    bool m_appstreamAgentVersionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<AccessEndpoint> m_accessEndpoints;
    bool m_accessEndpointsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
