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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/VpcConfig.h>
#include <aws/appstream/model/DomainJoinInfo.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class AWS_APPSTREAM_API CreateImageBuilderRequest : public AppStreamRequest
  {
  public:
    CreateImageBuilderRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateImageBuilder"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique name for the image builder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A unique name for the image builder.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A unique name for the image builder.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A unique name for the image builder.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A unique name for the image builder.</p>
     */
    inline CreateImageBuilderRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A unique name for the image builder.</p>
     */
    inline CreateImageBuilderRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A unique name for the image builder.</p>
     */
    inline CreateImageBuilderRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the image used to create the builder.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }

    /**
     * <p>The name of the image used to create the builder.</p>
     */
    inline void SetImageName(const Aws::String& value) { m_imageNameHasBeenSet = true; m_imageName = value; }

    /**
     * <p>The name of the image used to create the builder.</p>
     */
    inline void SetImageName(Aws::String&& value) { m_imageNameHasBeenSet = true; m_imageName = std::move(value); }

    /**
     * <p>The name of the image used to create the builder.</p>
     */
    inline void SetImageName(const char* value) { m_imageNameHasBeenSet = true; m_imageName.assign(value); }

    /**
     * <p>The name of the image used to create the builder.</p>
     */
    inline CreateImageBuilderRequest& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}

    /**
     * <p>The name of the image used to create the builder.</p>
     */
    inline CreateImageBuilderRequest& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}

    /**
     * <p>The name of the image used to create the builder.</p>
     */
    inline CreateImageBuilderRequest& WithImageName(const char* value) { SetImageName(value); return *this;}


    /**
     * <p>The instance type to use when launching the image builder.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type to use when launching the image builder.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type to use when launching the image builder.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type to use when launching the image builder.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type to use when launching the image builder.</p>
     */
    inline CreateImageBuilderRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type to use when launching the image builder.</p>
     */
    inline CreateImageBuilderRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type to use when launching the image builder.</p>
     */
    inline CreateImageBuilderRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The description for display.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for display.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for display.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for display.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for display.</p>
     */
    inline CreateImageBuilderRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for display.</p>
     */
    inline CreateImageBuilderRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for display.</p>
     */
    inline CreateImageBuilderRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The image builder name for display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The image builder name for display.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The image builder name for display.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The image builder name for display.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The image builder name for display.</p>
     */
    inline CreateImageBuilderRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The image builder name for display.</p>
     */
    inline CreateImageBuilderRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The image builder name for display.</p>
     */
    inline CreateImageBuilderRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The VPC configuration for the image builder. You can specify only one
     * subnet.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>The VPC configuration for the image builder. You can specify only one
     * subnet.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>The VPC configuration for the image builder. You can specify only one
     * subnet.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>The VPC configuration for the image builder. You can specify only one
     * subnet.</p>
     */
    inline CreateImageBuilderRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>The VPC configuration for the image builder. You can specify only one
     * subnet.</p>
     */
    inline CreateImageBuilderRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>Enables or disables default internet access for the image builder.</p>
     */
    inline bool GetEnableDefaultInternetAccess() const{ return m_enableDefaultInternetAccess; }

    /**
     * <p>Enables or disables default internet access for the image builder.</p>
     */
    inline void SetEnableDefaultInternetAccess(bool value) { m_enableDefaultInternetAccessHasBeenSet = true; m_enableDefaultInternetAccess = value; }

    /**
     * <p>Enables or disables default internet access for the image builder.</p>
     */
    inline CreateImageBuilderRequest& WithEnableDefaultInternetAccess(bool value) { SetEnableDefaultInternetAccess(value); return *this;}


    /**
     * <p>The information needed to join a Microsoft Active Directory domain.</p>
     */
    inline const DomainJoinInfo& GetDomainJoinInfo() const{ return m_domainJoinInfo; }

    /**
     * <p>The information needed to join a Microsoft Active Directory domain.</p>
     */
    inline void SetDomainJoinInfo(const DomainJoinInfo& value) { m_domainJoinInfoHasBeenSet = true; m_domainJoinInfo = value; }

    /**
     * <p>The information needed to join a Microsoft Active Directory domain.</p>
     */
    inline void SetDomainJoinInfo(DomainJoinInfo&& value) { m_domainJoinInfoHasBeenSet = true; m_domainJoinInfo = std::move(value); }

    /**
     * <p>The information needed to join a Microsoft Active Directory domain.</p>
     */
    inline CreateImageBuilderRequest& WithDomainJoinInfo(const DomainJoinInfo& value) { SetDomainJoinInfo(value); return *this;}

    /**
     * <p>The information needed to join a Microsoft Active Directory domain.</p>
     */
    inline CreateImageBuilderRequest& WithDomainJoinInfo(DomainJoinInfo&& value) { SetDomainJoinInfo(std::move(value)); return *this;}


    /**
     * <p>The version of the AppStream 2.0 agent to use for this image builder. To use
     * the latest version of the AppStream 2.0 agent, specify [LATEST]. </p>
     */
    inline const Aws::String& GetAppstreamAgentVersion() const{ return m_appstreamAgentVersion; }

    /**
     * <p>The version of the AppStream 2.0 agent to use for this image builder. To use
     * the latest version of the AppStream 2.0 agent, specify [LATEST]. </p>
     */
    inline void SetAppstreamAgentVersion(const Aws::String& value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion = value; }

    /**
     * <p>The version of the AppStream 2.0 agent to use for this image builder. To use
     * the latest version of the AppStream 2.0 agent, specify [LATEST]. </p>
     */
    inline void SetAppstreamAgentVersion(Aws::String&& value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion = std::move(value); }

    /**
     * <p>The version of the AppStream 2.0 agent to use for this image builder. To use
     * the latest version of the AppStream 2.0 agent, specify [LATEST]. </p>
     */
    inline void SetAppstreamAgentVersion(const char* value) { m_appstreamAgentVersionHasBeenSet = true; m_appstreamAgentVersion.assign(value); }

    /**
     * <p>The version of the AppStream 2.0 agent to use for this image builder. To use
     * the latest version of the AppStream 2.0 agent, specify [LATEST]. </p>
     */
    inline CreateImageBuilderRequest& WithAppstreamAgentVersion(const Aws::String& value) { SetAppstreamAgentVersion(value); return *this;}

    /**
     * <p>The version of the AppStream 2.0 agent to use for this image builder. To use
     * the latest version of the AppStream 2.0 agent, specify [LATEST]. </p>
     */
    inline CreateImageBuilderRequest& WithAppstreamAgentVersion(Aws::String&& value) { SetAppstreamAgentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the AppStream 2.0 agent to use for this image builder. To use
     * the latest version of the AppStream 2.0 agent, specify [LATEST]. </p>
     */
    inline CreateImageBuilderRequest& WithAppstreamAgentVersion(const char* value) { SetAppstreamAgentVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet;

    bool m_enableDefaultInternetAccess;
    bool m_enableDefaultInternetAccessHasBeenSet;

    DomainJoinInfo m_domainJoinInfo;
    bool m_domainJoinInfoHasBeenSet;

    Aws::String m_appstreamAgentVersion;
    bool m_appstreamAgentVersionHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
