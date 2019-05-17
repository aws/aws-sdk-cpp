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
#include <aws/core/utils/memory/stl/AWSMap.h>
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
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

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
     * <p>The name of the image used to create the image builder.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }

    /**
     * <p>The name of the image used to create the image builder.</p>
     */
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }

    /**
     * <p>The name of the image used to create the image builder.</p>
     */
    inline void SetImageName(const Aws::String& value) { m_imageNameHasBeenSet = true; m_imageName = value; }

    /**
     * <p>The name of the image used to create the image builder.</p>
     */
    inline void SetImageName(Aws::String&& value) { m_imageNameHasBeenSet = true; m_imageName = std::move(value); }

    /**
     * <p>The name of the image used to create the image builder.</p>
     */
    inline void SetImageName(const char* value) { m_imageNameHasBeenSet = true; m_imageName.assign(value); }

    /**
     * <p>The name of the image used to create the image builder.</p>
     */
    inline CreateImageBuilderRequest& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}

    /**
     * <p>The name of the image used to create the image builder.</p>
     */
    inline CreateImageBuilderRequest& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}

    /**
     * <p>The name of the image used to create the image builder.</p>
     */
    inline CreateImageBuilderRequest& WithImageName(const char* value) { SetImageName(value); return *this;}


    /**
     * <p>The ARN of the public, private, or shared image to use.</p>
     */
    inline const Aws::String& GetImageArn() const{ return m_imageArn; }

    /**
     * <p>The ARN of the public, private, or shared image to use.</p>
     */
    inline bool ImageArnHasBeenSet() const { return m_imageArnHasBeenSet; }

    /**
     * <p>The ARN of the public, private, or shared image to use.</p>
     */
    inline void SetImageArn(const Aws::String& value) { m_imageArnHasBeenSet = true; m_imageArn = value; }

    /**
     * <p>The ARN of the public, private, or shared image to use.</p>
     */
    inline void SetImageArn(Aws::String&& value) { m_imageArnHasBeenSet = true; m_imageArn = std::move(value); }

    /**
     * <p>The ARN of the public, private, or shared image to use.</p>
     */
    inline void SetImageArn(const char* value) { m_imageArnHasBeenSet = true; m_imageArn.assign(value); }

    /**
     * <p>The ARN of the public, private, or shared image to use.</p>
     */
    inline CreateImageBuilderRequest& WithImageArn(const Aws::String& value) { SetImageArn(value); return *this;}

    /**
     * <p>The ARN of the public, private, or shared image to use.</p>
     */
    inline CreateImageBuilderRequest& WithImageArn(Aws::String&& value) { SetImageArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the public, private, or shared image to use.</p>
     */
    inline CreateImageBuilderRequest& WithImageArn(const char* value) { SetImageArn(value); return *this;}


    /**
     * <p>The instance type to use when launching the image builder.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type to use when launching the image builder.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

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
     * <p>The description to display.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description to display.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description to display.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description to display.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description to display.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description to display.</p>
     */
    inline CreateImageBuilderRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description to display.</p>
     */
    inline CreateImageBuilderRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description to display.</p>
     */
    inline CreateImageBuilderRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The image builder name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The image builder name to display.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The image builder name to display.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The image builder name to display.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The image builder name to display.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The image builder name to display.</p>
     */
    inline CreateImageBuilderRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The image builder name to display.</p>
     */
    inline CreateImageBuilderRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The image builder name to display.</p>
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
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

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
    inline bool EnableDefaultInternetAccessHasBeenSet() const { return m_enableDefaultInternetAccessHasBeenSet; }

    /**
     * <p>Enables or disables default internet access for the image builder.</p>
     */
    inline void SetEnableDefaultInternetAccess(bool value) { m_enableDefaultInternetAccessHasBeenSet = true; m_enableDefaultInternetAccess = value; }

    /**
     * <p>Enables or disables default internet access for the image builder.</p>
     */
    inline CreateImageBuilderRequest& WithEnableDefaultInternetAccess(bool value) { SetEnableDefaultInternetAccess(value); return *this;}


    /**
     * <p>The name of the directory and organizational unit (OU) to use to join the
     * image builder to a Microsoft Active Directory domain. </p>
     */
    inline const DomainJoinInfo& GetDomainJoinInfo() const{ return m_domainJoinInfo; }

    /**
     * <p>The name of the directory and organizational unit (OU) to use to join the
     * image builder to a Microsoft Active Directory domain. </p>
     */
    inline bool DomainJoinInfoHasBeenSet() const { return m_domainJoinInfoHasBeenSet; }

    /**
     * <p>The name of the directory and organizational unit (OU) to use to join the
     * image builder to a Microsoft Active Directory domain. </p>
     */
    inline void SetDomainJoinInfo(const DomainJoinInfo& value) { m_domainJoinInfoHasBeenSet = true; m_domainJoinInfo = value; }

    /**
     * <p>The name of the directory and organizational unit (OU) to use to join the
     * image builder to a Microsoft Active Directory domain. </p>
     */
    inline void SetDomainJoinInfo(DomainJoinInfo&& value) { m_domainJoinInfoHasBeenSet = true; m_domainJoinInfo = std::move(value); }

    /**
     * <p>The name of the directory and organizational unit (OU) to use to join the
     * image builder to a Microsoft Active Directory domain. </p>
     */
    inline CreateImageBuilderRequest& WithDomainJoinInfo(const DomainJoinInfo& value) { SetDomainJoinInfo(value); return *this;}

    /**
     * <p>The name of the directory and organizational unit (OU) to use to join the
     * image builder to a Microsoft Active Directory domain. </p>
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
    inline bool AppstreamAgentVersionHasBeenSet() const { return m_appstreamAgentVersionHasBeenSet; }

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


    /**
     * <p>The tags to associate with the image builder. A tag is a key-value pair, and
     * the value is optional. For example, Environment=Test. If you do not specify a
     * value, Environment=. </p> <p>Generally allowed characters are: letters, numbers,
     * and spaces representable in UTF-8, and the following special characters: </p>
     * <p>_ . : / = + \ - @</p> <p>If you do not specify a value, the value is set to
     * an empty string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to associate with the image builder. A tag is a key-value pair, and
     * the value is optional. For example, Environment=Test. If you do not specify a
     * value, Environment=. </p> <p>Generally allowed characters are: letters, numbers,
     * and spaces representable in UTF-8, and the following special characters: </p>
     * <p>_ . : / = + \ - @</p> <p>If you do not specify a value, the value is set to
     * an empty string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to associate with the image builder. A tag is a key-value pair, and
     * the value is optional. For example, Environment=Test. If you do not specify a
     * value, Environment=. </p> <p>Generally allowed characters are: letters, numbers,
     * and spaces representable in UTF-8, and the following special characters: </p>
     * <p>_ . : / = + \ - @</p> <p>If you do not specify a value, the value is set to
     * an empty string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer Guide</i>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to associate with the image builder. A tag is a key-value pair, and
     * the value is optional. For example, Environment=Test. If you do not specify a
     * value, Environment=. </p> <p>Generally allowed characters are: letters, numbers,
     * and spaces representable in UTF-8, and the following special characters: </p>
     * <p>_ . : / = + \ - @</p> <p>If you do not specify a value, the value is set to
     * an empty string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer Guide</i>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to associate with the image builder. A tag is a key-value pair, and
     * the value is optional. For example, Environment=Test. If you do not specify a
     * value, Environment=. </p> <p>Generally allowed characters are: letters, numbers,
     * and spaces representable in UTF-8, and the following special characters: </p>
     * <p>_ . : / = + \ - @</p> <p>If you do not specify a value, the value is set to
     * an empty string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer Guide</i>.</p>
     */
    inline CreateImageBuilderRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to associate with the image builder. A tag is a key-value pair, and
     * the value is optional. For example, Environment=Test. If you do not specify a
     * value, Environment=. </p> <p>Generally allowed characters are: letters, numbers,
     * and spaces representable in UTF-8, and the following special characters: </p>
     * <p>_ . : / = + \ - @</p> <p>If you do not specify a value, the value is set to
     * an empty string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer Guide</i>.</p>
     */
    inline CreateImageBuilderRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to associate with the image builder. A tag is a key-value pair, and
     * the value is optional. For example, Environment=Test. If you do not specify a
     * value, Environment=. </p> <p>Generally allowed characters are: letters, numbers,
     * and spaces representable in UTF-8, and the following special characters: </p>
     * <p>_ . : / = + \ - @</p> <p>If you do not specify a value, the value is set to
     * an empty string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer Guide</i>.</p>
     */
    inline CreateImageBuilderRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to associate with the image builder. A tag is a key-value pair, and
     * the value is optional. For example, Environment=Test. If you do not specify a
     * value, Environment=. </p> <p>Generally allowed characters are: letters, numbers,
     * and spaces representable in UTF-8, and the following special characters: </p>
     * <p>_ . : / = + \ - @</p> <p>If you do not specify a value, the value is set to
     * an empty string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer Guide</i>.</p>
     */
    inline CreateImageBuilderRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to associate with the image builder. A tag is a key-value pair, and
     * the value is optional. For example, Environment=Test. If you do not specify a
     * value, Environment=. </p> <p>Generally allowed characters are: letters, numbers,
     * and spaces representable in UTF-8, and the following special characters: </p>
     * <p>_ . : / = + \ - @</p> <p>If you do not specify a value, the value is set to
     * an empty string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer Guide</i>.</p>
     */
    inline CreateImageBuilderRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to associate with the image builder. A tag is a key-value pair, and
     * the value is optional. For example, Environment=Test. If you do not specify a
     * value, Environment=. </p> <p>Generally allowed characters are: letters, numbers,
     * and spaces representable in UTF-8, and the following special characters: </p>
     * <p>_ . : / = + \ - @</p> <p>If you do not specify a value, the value is set to
     * an empty string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer Guide</i>.</p>
     */
    inline CreateImageBuilderRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to associate with the image builder. A tag is a key-value pair, and
     * the value is optional. For example, Environment=Test. If you do not specify a
     * value, Environment=. </p> <p>Generally allowed characters are: letters, numbers,
     * and spaces representable in UTF-8, and the following special characters: </p>
     * <p>_ . : / = + \ - @</p> <p>If you do not specify a value, the value is set to
     * an empty string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer Guide</i>.</p>
     */
    inline CreateImageBuilderRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to associate with the image builder. A tag is a key-value pair, and
     * the value is optional. For example, Environment=Test. If you do not specify a
     * value, Environment=. </p> <p>Generally allowed characters are: letters, numbers,
     * and spaces representable in UTF-8, and the following special characters: </p>
     * <p>_ . : / = + \ - @</p> <p>If you do not specify a value, the value is set to
     * an empty string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer Guide</i>.</p>
     */
    inline CreateImageBuilderRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to associate with the image builder. A tag is a key-value pair, and
     * the value is optional. For example, Environment=Test. If you do not specify a
     * value, Environment=. </p> <p>Generally allowed characters are: letters, numbers,
     * and spaces representable in UTF-8, and the following special characters: </p>
     * <p>_ . : / = + \ - @</p> <p>If you do not specify a value, the value is set to
     * an empty string.</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Developer Guide</i>.</p>
     */
    inline CreateImageBuilderRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet;

    Aws::String m_imageArn;
    bool m_imageArnHasBeenSet;

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
