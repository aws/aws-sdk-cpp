/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AuthMode.h>
#include <aws/sagemaker/model/UserSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AppNetworkAccessType.h>
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
     * <p>The mode of authentication that members use to access the domain.</p>
     */
    inline const AuthMode& GetAuthMode() const{ return m_authMode; }

    /**
     * <p>The mode of authentication that members use to access the domain.</p>
     */
    inline bool AuthModeHasBeenSet() const { return m_authModeHasBeenSet; }

    /**
     * <p>The mode of authentication that members use to access the domain.</p>
     */
    inline void SetAuthMode(const AuthMode& value) { m_authModeHasBeenSet = true; m_authMode = value; }

    /**
     * <p>The mode of authentication that members use to access the domain.</p>
     */
    inline void SetAuthMode(AuthMode&& value) { m_authModeHasBeenSet = true; m_authMode = std::move(value); }

    /**
     * <p>The mode of authentication that members use to access the domain.</p>
     */
    inline CreateDomainRequest& WithAuthMode(const AuthMode& value) { SetAuthMode(value); return *this;}

    /**
     * <p>The mode of authentication that members use to access the domain.</p>
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
     * <p>The VPC subnets that Studio uses for communication.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The VPC subnets that Studio uses for communication.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The VPC subnets that Studio uses for communication.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The VPC subnets that Studio uses for communication.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The VPC subnets that Studio uses for communication.</p>
     */
    inline CreateDomainRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The VPC subnets that Studio uses for communication.</p>
     */
    inline CreateDomainRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The VPC subnets that Studio uses for communication.</p>
     */
    inline CreateDomainRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The VPC subnets that Studio uses for communication.</p>
     */
    inline CreateDomainRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The VPC subnets that Studio uses for communication.</p>
     */
    inline CreateDomainRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The ID of the Amazon Virtual Private Cloud (VPC) that Studio uses for
     * communication.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the Amazon Virtual Private Cloud (VPC) that Studio uses for
     * communication.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Virtual Private Cloud (VPC) that Studio uses for
     * communication.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the Amazon Virtual Private Cloud (VPC) that Studio uses for
     * communication.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the Amazon Virtual Private Cloud (VPC) that Studio uses for
     * communication.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the Amazon Virtual Private Cloud (VPC) that Studio uses for
     * communication.</p>
     */
    inline CreateDomainRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the Amazon Virtual Private Cloud (VPC) that Studio uses for
     * communication.</p>
     */
    inline CreateDomainRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Virtual Private Cloud (VPC) that Studio uses for
     * communication.</p>
     */
    inline CreateDomainRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>Tags to associated with the Domain. Each tag consists of a key and an
     * optional value. Tag keys must be unique per resource. Tags are searchable using
     * the <a>Search</a> API.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to associated with the Domain. Each tag consists of a key and an
     * optional value. Tag keys must be unique per resource. Tags are searchable using
     * the <a>Search</a> API.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to associated with the Domain. Each tag consists of a key and an
     * optional value. Tag keys must be unique per resource. Tags are searchable using
     * the <a>Search</a> API.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to associated with the Domain. Each tag consists of a key and an
     * optional value. Tag keys must be unique per resource. Tags are searchable using
     * the <a>Search</a> API.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to associated with the Domain. Each tag consists of a key and an
     * optional value. Tag keys must be unique per resource. Tags are searchable using
     * the <a>Search</a> API.</p>
     */
    inline CreateDomainRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to associated with the Domain. Each tag consists of a key and an
     * optional value. Tag keys must be unique per resource. Tags are searchable using
     * the <a>Search</a> API.</p>
     */
    inline CreateDomainRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to associated with the Domain. Each tag consists of a key and an
     * optional value. Tag keys must be unique per resource. Tags are searchable using
     * the <a>Search</a> API.</p>
     */
    inline CreateDomainRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to associated with the Domain. Each tag consists of a key and an
     * optional value. Tag keys must be unique per resource. Tags are searchable using
     * the <a>Search</a> API.</p>
     */
    inline CreateDomainRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the VPC used for non-EFS traffic. The default value is
     * <code>PublicInternetOnly</code>.</p> <ul> <li> <p>
     * <code>PublicInternetOnly</code> - Non-EFS traffic is through a VPC managed by
     * Amazon SageMaker, which allows direct internet access</p> </li> <li> <p>
     * <code>VpcOnly</code> - All Studio traffic is through the specified VPC and
     * subnets</p> </li> </ul>
     */
    inline const AppNetworkAccessType& GetAppNetworkAccessType() const{ return m_appNetworkAccessType; }

    /**
     * <p>Specifies the VPC used for non-EFS traffic. The default value is
     * <code>PublicInternetOnly</code>.</p> <ul> <li> <p>
     * <code>PublicInternetOnly</code> - Non-EFS traffic is through a VPC managed by
     * Amazon SageMaker, which allows direct internet access</p> </li> <li> <p>
     * <code>VpcOnly</code> - All Studio traffic is through the specified VPC and
     * subnets</p> </li> </ul>
     */
    inline bool AppNetworkAccessTypeHasBeenSet() const { return m_appNetworkAccessTypeHasBeenSet; }

    /**
     * <p>Specifies the VPC used for non-EFS traffic. The default value is
     * <code>PublicInternetOnly</code>.</p> <ul> <li> <p>
     * <code>PublicInternetOnly</code> - Non-EFS traffic is through a VPC managed by
     * Amazon SageMaker, which allows direct internet access</p> </li> <li> <p>
     * <code>VpcOnly</code> - All Studio traffic is through the specified VPC and
     * subnets</p> </li> </ul>
     */
    inline void SetAppNetworkAccessType(const AppNetworkAccessType& value) { m_appNetworkAccessTypeHasBeenSet = true; m_appNetworkAccessType = value; }

    /**
     * <p>Specifies the VPC used for non-EFS traffic. The default value is
     * <code>PublicInternetOnly</code>.</p> <ul> <li> <p>
     * <code>PublicInternetOnly</code> - Non-EFS traffic is through a VPC managed by
     * Amazon SageMaker, which allows direct internet access</p> </li> <li> <p>
     * <code>VpcOnly</code> - All Studio traffic is through the specified VPC and
     * subnets</p> </li> </ul>
     */
    inline void SetAppNetworkAccessType(AppNetworkAccessType&& value) { m_appNetworkAccessTypeHasBeenSet = true; m_appNetworkAccessType = std::move(value); }

    /**
     * <p>Specifies the VPC used for non-EFS traffic. The default value is
     * <code>PublicInternetOnly</code>.</p> <ul> <li> <p>
     * <code>PublicInternetOnly</code> - Non-EFS traffic is through a VPC managed by
     * Amazon SageMaker, which allows direct internet access</p> </li> <li> <p>
     * <code>VpcOnly</code> - All Studio traffic is through the specified VPC and
     * subnets</p> </li> </ul>
     */
    inline CreateDomainRequest& WithAppNetworkAccessType(const AppNetworkAccessType& value) { SetAppNetworkAccessType(value); return *this;}

    /**
     * <p>Specifies the VPC used for non-EFS traffic. The default value is
     * <code>PublicInternetOnly</code>.</p> <ul> <li> <p>
     * <code>PublicInternetOnly</code> - Non-EFS traffic is through a VPC managed by
     * Amazon SageMaker, which allows direct internet access</p> </li> <li> <p>
     * <code>VpcOnly</code> - All Studio traffic is through the specified VPC and
     * subnets</p> </li> </ul>
     */
    inline CreateDomainRequest& WithAppNetworkAccessType(AppNetworkAccessType&& value) { SetAppNetworkAccessType(std::move(value)); return *this;}


    /**
     * <p>SageMaker uses AWS KMS to encrypt the EFS volume attached to the domain with
     * an AWS managed customer master key (CMK) by default. For more control, specify a
     * customer managed CMK.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>SageMaker uses AWS KMS to encrypt the EFS volume attached to the domain with
     * an AWS managed customer master key (CMK) by default. For more control, specify a
     * customer managed CMK.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>SageMaker uses AWS KMS to encrypt the EFS volume attached to the domain with
     * an AWS managed customer master key (CMK) by default. For more control, specify a
     * customer managed CMK.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>SageMaker uses AWS KMS to encrypt the EFS volume attached to the domain with
     * an AWS managed customer master key (CMK) by default. For more control, specify a
     * customer managed CMK.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>SageMaker uses AWS KMS to encrypt the EFS volume attached to the domain with
     * an AWS managed customer master key (CMK) by default. For more control, specify a
     * customer managed CMK.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>SageMaker uses AWS KMS to encrypt the EFS volume attached to the domain with
     * an AWS managed customer master key (CMK) by default. For more control, specify a
     * customer managed CMK.</p>
     */
    inline CreateDomainRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>SageMaker uses AWS KMS to encrypt the EFS volume attached to the domain with
     * an AWS managed customer master key (CMK) by default. For more control, specify a
     * customer managed CMK.</p>
     */
    inline CreateDomainRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>SageMaker uses AWS KMS to encrypt the EFS volume attached to the domain with
     * an AWS managed customer master key (CMK) by default. For more control, specify a
     * customer managed CMK.</p>
     */
    inline CreateDomainRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

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

    AppNetworkAccessType m_appNetworkAccessType;
    bool m_appNetworkAccessTypeHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
