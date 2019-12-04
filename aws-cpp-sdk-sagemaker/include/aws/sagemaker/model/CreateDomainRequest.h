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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AuthMode.h>
#include <aws/sagemaker/model/UserSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API CreateDomainRequest : public SageMakerRequest
  {
  public:
    CreateDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomain"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>A name for the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>A name for the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>A name for the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>A name for the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>A name for the domain.</p>
     */
    inline CreateDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>A name for the domain.</p>
     */
    inline CreateDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>A name for the domain.</p>
     */
    inline CreateDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The mode of authentication that member use to access the domain.</p>
     */
    inline const AuthMode& GetAuthMode() const{ return m_authMode; }

    /**
     * <p>The mode of authentication that member use to access the domain.</p>
     */
    inline bool AuthModeHasBeenSet() const { return m_authModeHasBeenSet; }

    /**
     * <p>The mode of authentication that member use to access the domain.</p>
     */
    inline void SetAuthMode(const AuthMode& value) { m_authModeHasBeenSet = true; m_authMode = value; }

    /**
     * <p>The mode of authentication that member use to access the domain.</p>
     */
    inline void SetAuthMode(AuthMode&& value) { m_authModeHasBeenSet = true; m_authMode = std::move(value); }

    /**
     * <p>The mode of authentication that member use to access the domain.</p>
     */
    inline CreateDomainRequest& WithAuthMode(const AuthMode& value) { SetAuthMode(value); return *this;}

    /**
     * <p>The mode of authentication that member use to access the domain.</p>
     */
    inline CreateDomainRequest& WithAuthMode(AuthMode&& value) { SetAuthMode(std::move(value)); return *this;}


    /**
     * <p>The default user settings.</p>
     */
    inline const UserSettings& GetDefaultUserSettings() const{ return m_defaultUserSettings; }

    /**
     * <p>The default user settings.</p>
     */
    inline bool DefaultUserSettingsHasBeenSet() const { return m_defaultUserSettingsHasBeenSet; }

    /**
     * <p>The default user settings.</p>
     */
    inline void SetDefaultUserSettings(const UserSettings& value) { m_defaultUserSettingsHasBeenSet = true; m_defaultUserSettings = value; }

    /**
     * <p>The default user settings.</p>
     */
    inline void SetDefaultUserSettings(UserSettings&& value) { m_defaultUserSettingsHasBeenSet = true; m_defaultUserSettings = std::move(value); }

    /**
     * <p>The default user settings.</p>
     */
    inline CreateDomainRequest& WithDefaultUserSettings(const UserSettings& value) { SetDefaultUserSettings(value); return *this;}

    /**
     * <p>The default user settings.</p>
     */
    inline CreateDomainRequest& WithDefaultUserSettings(UserSettings&& value) { SetDefaultUserSettings(std::move(value)); return *this;}


    /**
     * <p>Security setting to limit to a set of subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>Security setting to limit to a set of subnets.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>Security setting to limit to a set of subnets.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>Security setting to limit to a set of subnets.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>Security setting to limit to a set of subnets.</p>
     */
    inline CreateDomainRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>Security setting to limit to a set of subnets.</p>
     */
    inline CreateDomainRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>Security setting to limit to a set of subnets.</p>
     */
    inline CreateDomainRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>Security setting to limit to a set of subnets.</p>
     */
    inline CreateDomainRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Security setting to limit to a set of subnets.</p>
     */
    inline CreateDomainRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>Security setting to limit the domain's communication to a Amazon Virtual
     * Private Cloud.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>Security setting to limit the domain's communication to a Amazon Virtual
     * Private Cloud.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>Security setting to limit the domain's communication to a Amazon Virtual
     * Private Cloud.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>Security setting to limit the domain's communication to a Amazon Virtual
     * Private Cloud.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>Security setting to limit the domain's communication to a Amazon Virtual
     * Private Cloud.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>Security setting to limit the domain's communication to a Amazon Virtual
     * Private Cloud.</p>
     */
    inline CreateDomainRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>Security setting to limit the domain's communication to a Amazon Virtual
     * Private Cloud.</p>
     */
    inline CreateDomainRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>Security setting to limit the domain's communication to a Amazon Virtual
     * Private Cloud.</p>
     */
    inline CreateDomainRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline CreateDomainRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline CreateDomainRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline CreateDomainRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline CreateDomainRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The AWS Key Management Service encryption key ID.</p>
     */
    inline const Aws::String& GetHomeEfsFileSystemKmsKeyId() const{ return m_homeEfsFileSystemKmsKeyId; }

    /**
     * <p>The AWS Key Management Service encryption key ID.</p>
     */
    inline bool HomeEfsFileSystemKmsKeyIdHasBeenSet() const { return m_homeEfsFileSystemKmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS Key Management Service encryption key ID.</p>
     */
    inline void SetHomeEfsFileSystemKmsKeyId(const Aws::String& value) { m_homeEfsFileSystemKmsKeyIdHasBeenSet = true; m_homeEfsFileSystemKmsKeyId = value; }

    /**
     * <p>The AWS Key Management Service encryption key ID.</p>
     */
    inline void SetHomeEfsFileSystemKmsKeyId(Aws::String&& value) { m_homeEfsFileSystemKmsKeyIdHasBeenSet = true; m_homeEfsFileSystemKmsKeyId = std::move(value); }

    /**
     * <p>The AWS Key Management Service encryption key ID.</p>
     */
    inline void SetHomeEfsFileSystemKmsKeyId(const char* value) { m_homeEfsFileSystemKmsKeyIdHasBeenSet = true; m_homeEfsFileSystemKmsKeyId.assign(value); }

    /**
     * <p>The AWS Key Management Service encryption key ID.</p>
     */
    inline CreateDomainRequest& WithHomeEfsFileSystemKmsKeyId(const Aws::String& value) { SetHomeEfsFileSystemKmsKeyId(value); return *this;}

    /**
     * <p>The AWS Key Management Service encryption key ID.</p>
     */
    inline CreateDomainRequest& WithHomeEfsFileSystemKmsKeyId(Aws::String&& value) { SetHomeEfsFileSystemKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service encryption key ID.</p>
     */
    inline CreateDomainRequest& WithHomeEfsFileSystemKmsKeyId(const char* value) { SetHomeEfsFileSystemKmsKeyId(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    AuthMode m_authMode;
    bool m_authModeHasBeenSet;

    UserSettings m_defaultUserSettings;
    bool m_defaultUserSettingsHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_homeEfsFileSystemKmsKeyId;
    bool m_homeEfsFileSystemKmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
