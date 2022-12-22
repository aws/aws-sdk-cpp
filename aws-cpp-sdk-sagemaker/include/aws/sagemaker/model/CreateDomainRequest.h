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
#include <aws/sagemaker/model/AppSecurityGroupManagement.h>
#include <aws/sagemaker/model/DomainSettings.h>
#include <aws/sagemaker/model/DefaultSpaceSettings.h>
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
  class CreateDomainRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomain"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <p>The default settings to use to create a user profile when
     * <code>UserSettings</code> isn't specified in the call to the
     * <code>CreateUserProfile</code> API.</p> <p> <code>SecurityGroups</code> is
     * aggregated when specified in both calls. For all other settings in
     * <code>UserSettings</code>, the values specified in
     * <code>CreateUserProfile</code> take precedence over those specified in
     * <code>CreateDomain</code>.</p>
     */
    inline const UserSettings& GetDefaultUserSettings() const{ return m_defaultUserSettings; }

    /**
     * <p>The default settings to use to create a user profile when
     * <code>UserSettings</code> isn't specified in the call to the
     * <code>CreateUserProfile</code> API.</p> <p> <code>SecurityGroups</code> is
     * aggregated when specified in both calls. For all other settings in
     * <code>UserSettings</code>, the values specified in
     * <code>CreateUserProfile</code> take precedence over those specified in
     * <code>CreateDomain</code>.</p>
     */
    inline bool DefaultUserSettingsHasBeenSet() const { return m_defaultUserSettingsHasBeenSet; }

    /**
     * <p>The default settings to use to create a user profile when
     * <code>UserSettings</code> isn't specified in the call to the
     * <code>CreateUserProfile</code> API.</p> <p> <code>SecurityGroups</code> is
     * aggregated when specified in both calls. For all other settings in
     * <code>UserSettings</code>, the values specified in
     * <code>CreateUserProfile</code> take precedence over those specified in
     * <code>CreateDomain</code>.</p>
     */
    inline void SetDefaultUserSettings(const UserSettings& value) { m_defaultUserSettingsHasBeenSet = true; m_defaultUserSettings = value; }

    /**
     * <p>The default settings to use to create a user profile when
     * <code>UserSettings</code> isn't specified in the call to the
     * <code>CreateUserProfile</code> API.</p> <p> <code>SecurityGroups</code> is
     * aggregated when specified in both calls. For all other settings in
     * <code>UserSettings</code>, the values specified in
     * <code>CreateUserProfile</code> take precedence over those specified in
     * <code>CreateDomain</code>.</p>
     */
    inline void SetDefaultUserSettings(UserSettings&& value) { m_defaultUserSettingsHasBeenSet = true; m_defaultUserSettings = std::move(value); }

    /**
     * <p>The default settings to use to create a user profile when
     * <code>UserSettings</code> isn't specified in the call to the
     * <code>CreateUserProfile</code> API.</p> <p> <code>SecurityGroups</code> is
     * aggregated when specified in both calls. For all other settings in
     * <code>UserSettings</code>, the values specified in
     * <code>CreateUserProfile</code> take precedence over those specified in
     * <code>CreateDomain</code>.</p>
     */
    inline CreateDomainRequest& WithDefaultUserSettings(const UserSettings& value) { SetDefaultUserSettings(value); return *this;}

    /**
     * <p>The default settings to use to create a user profile when
     * <code>UserSettings</code> isn't specified in the call to the
     * <code>CreateUserProfile</code> API.</p> <p> <code>SecurityGroups</code> is
     * aggregated when specified in both calls. For all other settings in
     * <code>UserSettings</code>, the values specified in
     * <code>CreateUserProfile</code> take precedence over those specified in
     * <code>CreateDomain</code>.</p>
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
     * the <code>Search</code> API.</p> <p>Tags that you specify for the Domain are
     * also added to all Apps that the Domain launches.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to associated with the Domain. Each tag consists of a key and an
     * optional value. Tag keys must be unique per resource. Tags are searchable using
     * the <code>Search</code> API.</p> <p>Tags that you specify for the Domain are
     * also added to all Apps that the Domain launches.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to associated with the Domain. Each tag consists of a key and an
     * optional value. Tag keys must be unique per resource. Tags are searchable using
     * the <code>Search</code> API.</p> <p>Tags that you specify for the Domain are
     * also added to all Apps that the Domain launches.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to associated with the Domain. Each tag consists of a key and an
     * optional value. Tag keys must be unique per resource. Tags are searchable using
     * the <code>Search</code> API.</p> <p>Tags that you specify for the Domain are
     * also added to all Apps that the Domain launches.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to associated with the Domain. Each tag consists of a key and an
     * optional value. Tag keys must be unique per resource. Tags are searchable using
     * the <code>Search</code> API.</p> <p>Tags that you specify for the Domain are
     * also added to all Apps that the Domain launches.</p>
     */
    inline CreateDomainRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to associated with the Domain. Each tag consists of a key and an
     * optional value. Tag keys must be unique per resource. Tags are searchable using
     * the <code>Search</code> API.</p> <p>Tags that you specify for the Domain are
     * also added to all Apps that the Domain launches.</p>
     */
    inline CreateDomainRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to associated with the Domain. Each tag consists of a key and an
     * optional value. Tag keys must be unique per resource. Tags are searchable using
     * the <code>Search</code> API.</p> <p>Tags that you specify for the Domain are
     * also added to all Apps that the Domain launches.</p>
     */
    inline CreateDomainRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to associated with the Domain. Each tag consists of a key and an
     * optional value. Tag keys must be unique per resource. Tags are searchable using
     * the <code>Search</code> API.</p> <p>Tags that you specify for the Domain are
     * also added to all Apps that the Domain launches.</p>
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
     * <p>SageMaker uses Amazon Web Services KMS to encrypt the EFS volume attached to
     * the domain with an Amazon Web Services managed key by default. For more control,
     * specify a customer managed key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>SageMaker uses Amazon Web Services KMS to encrypt the EFS volume attached to
     * the domain with an Amazon Web Services managed key by default. For more control,
     * specify a customer managed key.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>SageMaker uses Amazon Web Services KMS to encrypt the EFS volume attached to
     * the domain with an Amazon Web Services managed key by default. For more control,
     * specify a customer managed key.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>SageMaker uses Amazon Web Services KMS to encrypt the EFS volume attached to
     * the domain with an Amazon Web Services managed key by default. For more control,
     * specify a customer managed key.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>SageMaker uses Amazon Web Services KMS to encrypt the EFS volume attached to
     * the domain with an Amazon Web Services managed key by default. For more control,
     * specify a customer managed key.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>SageMaker uses Amazon Web Services KMS to encrypt the EFS volume attached to
     * the domain with an Amazon Web Services managed key by default. For more control,
     * specify a customer managed key.</p>
     */
    inline CreateDomainRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>SageMaker uses Amazon Web Services KMS to encrypt the EFS volume attached to
     * the domain with an Amazon Web Services managed key by default. For more control,
     * specify a customer managed key.</p>
     */
    inline CreateDomainRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>SageMaker uses Amazon Web Services KMS to encrypt the EFS volume attached to
     * the domain with an Amazon Web Services managed key by default. For more control,
     * specify a customer managed key.</p>
     */
    inline CreateDomainRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The entity that creates and manages the required security groups for
     * inter-app communication in <code>VPCOnly</code> mode. Required when
     * <code>CreateDomain.AppNetworkAccessType</code> is <code>VPCOnly</code> and
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided.</p>
     */
    inline const AppSecurityGroupManagement& GetAppSecurityGroupManagement() const{ return m_appSecurityGroupManagement; }

    /**
     * <p>The entity that creates and manages the required security groups for
     * inter-app communication in <code>VPCOnly</code> mode. Required when
     * <code>CreateDomain.AppNetworkAccessType</code> is <code>VPCOnly</code> and
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided.</p>
     */
    inline bool AppSecurityGroupManagementHasBeenSet() const { return m_appSecurityGroupManagementHasBeenSet; }

    /**
     * <p>The entity that creates and manages the required security groups for
     * inter-app communication in <code>VPCOnly</code> mode. Required when
     * <code>CreateDomain.AppNetworkAccessType</code> is <code>VPCOnly</code> and
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided.</p>
     */
    inline void SetAppSecurityGroupManagement(const AppSecurityGroupManagement& value) { m_appSecurityGroupManagementHasBeenSet = true; m_appSecurityGroupManagement = value; }

    /**
     * <p>The entity that creates and manages the required security groups for
     * inter-app communication in <code>VPCOnly</code> mode. Required when
     * <code>CreateDomain.AppNetworkAccessType</code> is <code>VPCOnly</code> and
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided.</p>
     */
    inline void SetAppSecurityGroupManagement(AppSecurityGroupManagement&& value) { m_appSecurityGroupManagementHasBeenSet = true; m_appSecurityGroupManagement = std::move(value); }

    /**
     * <p>The entity that creates and manages the required security groups for
     * inter-app communication in <code>VPCOnly</code> mode. Required when
     * <code>CreateDomain.AppNetworkAccessType</code> is <code>VPCOnly</code> and
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided.</p>
     */
    inline CreateDomainRequest& WithAppSecurityGroupManagement(const AppSecurityGroupManagement& value) { SetAppSecurityGroupManagement(value); return *this;}

    /**
     * <p>The entity that creates and manages the required security groups for
     * inter-app communication in <code>VPCOnly</code> mode. Required when
     * <code>CreateDomain.AppNetworkAccessType</code> is <code>VPCOnly</code> and
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided.</p>
     */
    inline CreateDomainRequest& WithAppSecurityGroupManagement(AppSecurityGroupManagement&& value) { SetAppSecurityGroupManagement(std::move(value)); return *this;}


    /**
     * <p>A collection of <code>Domain</code> settings.</p>
     */
    inline const DomainSettings& GetDomainSettings() const{ return m_domainSettings; }

    /**
     * <p>A collection of <code>Domain</code> settings.</p>
     */
    inline bool DomainSettingsHasBeenSet() const { return m_domainSettingsHasBeenSet; }

    /**
     * <p>A collection of <code>Domain</code> settings.</p>
     */
    inline void SetDomainSettings(const DomainSettings& value) { m_domainSettingsHasBeenSet = true; m_domainSettings = value; }

    /**
     * <p>A collection of <code>Domain</code> settings.</p>
     */
    inline void SetDomainSettings(DomainSettings&& value) { m_domainSettingsHasBeenSet = true; m_domainSettings = std::move(value); }

    /**
     * <p>A collection of <code>Domain</code> settings.</p>
     */
    inline CreateDomainRequest& WithDomainSettings(const DomainSettings& value) { SetDomainSettings(value); return *this;}

    /**
     * <p>A collection of <code>Domain</code> settings.</p>
     */
    inline CreateDomainRequest& WithDomainSettings(DomainSettings&& value) { SetDomainSettings(std::move(value)); return *this;}


    /**
     * <p>The default settings used to create a space.</p>
     */
    inline const DefaultSpaceSettings& GetDefaultSpaceSettings() const{ return m_defaultSpaceSettings; }

    /**
     * <p>The default settings used to create a space.</p>
     */
    inline bool DefaultSpaceSettingsHasBeenSet() const { return m_defaultSpaceSettingsHasBeenSet; }

    /**
     * <p>The default settings used to create a space.</p>
     */
    inline void SetDefaultSpaceSettings(const DefaultSpaceSettings& value) { m_defaultSpaceSettingsHasBeenSet = true; m_defaultSpaceSettings = value; }

    /**
     * <p>The default settings used to create a space.</p>
     */
    inline void SetDefaultSpaceSettings(DefaultSpaceSettings&& value) { m_defaultSpaceSettingsHasBeenSet = true; m_defaultSpaceSettings = std::move(value); }

    /**
     * <p>The default settings used to create a space.</p>
     */
    inline CreateDomainRequest& WithDefaultSpaceSettings(const DefaultSpaceSettings& value) { SetDefaultSpaceSettings(value); return *this;}

    /**
     * <p>The default settings used to create a space.</p>
     */
    inline CreateDomainRequest& WithDefaultSpaceSettings(DefaultSpaceSettings&& value) { SetDefaultSpaceSettings(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    AuthMode m_authMode;
    bool m_authModeHasBeenSet = false;

    UserSettings m_defaultUserSettings;
    bool m_defaultUserSettingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    AppNetworkAccessType m_appNetworkAccessType;
    bool m_appNetworkAccessTypeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    AppSecurityGroupManagement m_appSecurityGroupManagement;
    bool m_appSecurityGroupManagementHasBeenSet = false;

    DomainSettings m_domainSettings;
    bool m_domainSettingsHasBeenSet = false;

    DefaultSpaceSettings m_defaultSpaceSettings;
    bool m_defaultSpaceSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
