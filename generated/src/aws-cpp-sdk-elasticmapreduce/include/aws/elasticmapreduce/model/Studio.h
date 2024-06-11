/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/AuthMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticmapreduce/model/IdcUserAssignment.h>
#include <aws/elasticmapreduce/model/Tag.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Details for an Amazon EMR Studio including ID, creation time, name, and so
   * on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/Studio">AWS
   * API Reference</a></p>
   */
  class Studio
  {
  public:
    AWS_EMR_API Studio();
    AWS_EMR_API Studio(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Studio& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }
    inline Studio& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}
    inline Studio& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}
    inline Studio& WithStudioId(const char* value) { SetStudioId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetStudioArn() const{ return m_studioArn; }
    inline bool StudioArnHasBeenSet() const { return m_studioArnHasBeenSet; }
    inline void SetStudioArn(const Aws::String& value) { m_studioArnHasBeenSet = true; m_studioArn = value; }
    inline void SetStudioArn(Aws::String&& value) { m_studioArnHasBeenSet = true; m_studioArn = std::move(value); }
    inline void SetStudioArn(const char* value) { m_studioArnHasBeenSet = true; m_studioArn.assign(value); }
    inline Studio& WithStudioArn(const Aws::String& value) { SetStudioArn(value); return *this;}
    inline Studio& WithStudioArn(Aws::String&& value) { SetStudioArn(std::move(value)); return *this;}
    inline Studio& WithStudioArn(const char* value) { SetStudioArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Studio& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Studio& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Studio& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed description of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Studio& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Studio& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Studio& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the Amazon EMR Studio authenticates users with IAM or IAM
     * Identity Center.</p>
     */
    inline const AuthMode& GetAuthMode() const{ return m_authMode; }
    inline bool AuthModeHasBeenSet() const { return m_authModeHasBeenSet; }
    inline void SetAuthMode(const AuthMode& value) { m_authModeHasBeenSet = true; m_authMode = value; }
    inline void SetAuthMode(AuthMode&& value) { m_authModeHasBeenSet = true; m_authMode = std::move(value); }
    inline Studio& WithAuthMode(const AuthMode& value) { SetAuthMode(value); return *this;}
    inline Studio& WithAuthMode(AuthMode&& value) { SetAuthMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC associated with the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline Studio& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline Studio& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline Studio& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of IDs of the subnets associated with the Amazon EMR Studio.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline Studio& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline Studio& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline Studio& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline Studio& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline Studio& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role assumed by the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }
    inline Studio& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}
    inline Studio& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}
    inline Studio& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role assumed by users logged in to the Amazon EMR Studio.
     * A Studio only requires a <code>UserRole</code> when you use IAM
     * authentication.</p>
     */
    inline const Aws::String& GetUserRole() const{ return m_userRole; }
    inline bool UserRoleHasBeenSet() const { return m_userRoleHasBeenSet; }
    inline void SetUserRole(const Aws::String& value) { m_userRoleHasBeenSet = true; m_userRole = value; }
    inline void SetUserRole(Aws::String&& value) { m_userRoleHasBeenSet = true; m_userRole = std::move(value); }
    inline void SetUserRole(const char* value) { m_userRoleHasBeenSet = true; m_userRole.assign(value); }
    inline Studio& WithUserRole(const Aws::String& value) { SetUserRole(value); return *this;}
    inline Studio& WithUserRole(Aws::String&& value) { SetUserRole(std::move(value)); return *this;}
    inline Studio& WithUserRole(const char* value) { SetUserRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Workspace security group associated with the Amazon EMR Studio.
     * The Workspace security group allows outbound network traffic to resources in the
     * Engine security group and to the internet.</p>
     */
    inline const Aws::String& GetWorkspaceSecurityGroupId() const{ return m_workspaceSecurityGroupId; }
    inline bool WorkspaceSecurityGroupIdHasBeenSet() const { return m_workspaceSecurityGroupIdHasBeenSet; }
    inline void SetWorkspaceSecurityGroupId(const Aws::String& value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId = value; }
    inline void SetWorkspaceSecurityGroupId(Aws::String&& value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId = std::move(value); }
    inline void SetWorkspaceSecurityGroupId(const char* value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId.assign(value); }
    inline Studio& WithWorkspaceSecurityGroupId(const Aws::String& value) { SetWorkspaceSecurityGroupId(value); return *this;}
    inline Studio& WithWorkspaceSecurityGroupId(Aws::String&& value) { SetWorkspaceSecurityGroupId(std::move(value)); return *this;}
    inline Studio& WithWorkspaceSecurityGroupId(const char* value) { SetWorkspaceSecurityGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Engine security group associated with the Amazon EMR Studio.
     * The Engine security group allows inbound network traffic from resources in the
     * Workspace security group.</p>
     */
    inline const Aws::String& GetEngineSecurityGroupId() const{ return m_engineSecurityGroupId; }
    inline bool EngineSecurityGroupIdHasBeenSet() const { return m_engineSecurityGroupIdHasBeenSet; }
    inline void SetEngineSecurityGroupId(const Aws::String& value) { m_engineSecurityGroupIdHasBeenSet = true; m_engineSecurityGroupId = value; }
    inline void SetEngineSecurityGroupId(Aws::String&& value) { m_engineSecurityGroupIdHasBeenSet = true; m_engineSecurityGroupId = std::move(value); }
    inline void SetEngineSecurityGroupId(const char* value) { m_engineSecurityGroupIdHasBeenSet = true; m_engineSecurityGroupId.assign(value); }
    inline Studio& WithEngineSecurityGroupId(const Aws::String& value) { SetEngineSecurityGroupId(value); return *this;}
    inline Studio& WithEngineSecurityGroupId(Aws::String&& value) { SetEngineSecurityGroupId(std::move(value)); return *this;}
    inline Studio& WithEngineSecurityGroupId(const char* value) { SetEngineSecurityGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique access URL of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline Studio& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline Studio& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline Studio& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the Amazon EMR Studio was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline Studio& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline Studio& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location to back up Amazon EMR Studio Workspaces and notebook
     * files.</p>
     */
    inline const Aws::String& GetDefaultS3Location() const{ return m_defaultS3Location; }
    inline bool DefaultS3LocationHasBeenSet() const { return m_defaultS3LocationHasBeenSet; }
    inline void SetDefaultS3Location(const Aws::String& value) { m_defaultS3LocationHasBeenSet = true; m_defaultS3Location = value; }
    inline void SetDefaultS3Location(Aws::String&& value) { m_defaultS3LocationHasBeenSet = true; m_defaultS3Location = std::move(value); }
    inline void SetDefaultS3Location(const char* value) { m_defaultS3LocationHasBeenSet = true; m_defaultS3Location.assign(value); }
    inline Studio& WithDefaultS3Location(const Aws::String& value) { SetDefaultS3Location(value); return *this;}
    inline Studio& WithDefaultS3Location(Aws::String&& value) { SetDefaultS3Location(std::move(value)); return *this;}
    inline Studio& WithDefaultS3Location(const char* value) { SetDefaultS3Location(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your identity provider's authentication endpoint. Amazon EMR Studio redirects
     * federated users to this endpoint for authentication when logging in to a Studio
     * with the Studio URL.</p>
     */
    inline const Aws::String& GetIdpAuthUrl() const{ return m_idpAuthUrl; }
    inline bool IdpAuthUrlHasBeenSet() const { return m_idpAuthUrlHasBeenSet; }
    inline void SetIdpAuthUrl(const Aws::String& value) { m_idpAuthUrlHasBeenSet = true; m_idpAuthUrl = value; }
    inline void SetIdpAuthUrl(Aws::String&& value) { m_idpAuthUrlHasBeenSet = true; m_idpAuthUrl = std::move(value); }
    inline void SetIdpAuthUrl(const char* value) { m_idpAuthUrlHasBeenSet = true; m_idpAuthUrl.assign(value); }
    inline Studio& WithIdpAuthUrl(const Aws::String& value) { SetIdpAuthUrl(value); return *this;}
    inline Studio& WithIdpAuthUrl(Aws::String&& value) { SetIdpAuthUrl(std::move(value)); return *this;}
    inline Studio& WithIdpAuthUrl(const char* value) { SetIdpAuthUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your identity provider's <code>RelayState</code> parameter.</p>
     */
    inline const Aws::String& GetIdpRelayStateParameterName() const{ return m_idpRelayStateParameterName; }
    inline bool IdpRelayStateParameterNameHasBeenSet() const { return m_idpRelayStateParameterNameHasBeenSet; }
    inline void SetIdpRelayStateParameterName(const Aws::String& value) { m_idpRelayStateParameterNameHasBeenSet = true; m_idpRelayStateParameterName = value; }
    inline void SetIdpRelayStateParameterName(Aws::String&& value) { m_idpRelayStateParameterNameHasBeenSet = true; m_idpRelayStateParameterName = std::move(value); }
    inline void SetIdpRelayStateParameterName(const char* value) { m_idpRelayStateParameterNameHasBeenSet = true; m_idpRelayStateParameterName.assign(value); }
    inline Studio& WithIdpRelayStateParameterName(const Aws::String& value) { SetIdpRelayStateParameterName(value); return *this;}
    inline Studio& WithIdpRelayStateParameterName(Aws::String&& value) { SetIdpRelayStateParameterName(std::move(value)); return *this;}
    inline Studio& WithIdpRelayStateParameterName(const char* value) { SetIdpRelayStateParameterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with the Amazon EMR Studio.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Studio& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Studio& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Studio& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Studio& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The ARN of the IAM Identity Center instance the Studio application belongs
     * to. </p>
     */
    inline const Aws::String& GetIdcInstanceArn() const{ return m_idcInstanceArn; }
    inline bool IdcInstanceArnHasBeenSet() const { return m_idcInstanceArnHasBeenSet; }
    inline void SetIdcInstanceArn(const Aws::String& value) { m_idcInstanceArnHasBeenSet = true; m_idcInstanceArn = value; }
    inline void SetIdcInstanceArn(Aws::String&& value) { m_idcInstanceArnHasBeenSet = true; m_idcInstanceArn = std::move(value); }
    inline void SetIdcInstanceArn(const char* value) { m_idcInstanceArnHasBeenSet = true; m_idcInstanceArn.assign(value); }
    inline Studio& WithIdcInstanceArn(const Aws::String& value) { SetIdcInstanceArn(value); return *this;}
    inline Studio& WithIdcInstanceArn(Aws::String&& value) { SetIdcInstanceArn(std::move(value)); return *this;}
    inline Studio& WithIdcInstanceArn(const char* value) { SetIdcInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the Studio has Trusted identity propagation enabled. The
     * default value is <code>false</code>. </p>
     */
    inline bool GetTrustedIdentityPropagationEnabled() const{ return m_trustedIdentityPropagationEnabled; }
    inline bool TrustedIdentityPropagationEnabledHasBeenSet() const { return m_trustedIdentityPropagationEnabledHasBeenSet; }
    inline void SetTrustedIdentityPropagationEnabled(bool value) { m_trustedIdentityPropagationEnabledHasBeenSet = true; m_trustedIdentityPropagationEnabled = value; }
    inline Studio& WithTrustedIdentityPropagationEnabled(bool value) { SetTrustedIdentityPropagationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the Studio has <code>REQUIRED</code> or
     * <code>OPTIONAL</code> IAM Identity Center user assignment. If the value is set
     * to <code>REQUIRED</code>, users must be explicitly assigned to the Studio
     * application to access the Studio. </p>
     */
    inline const IdcUserAssignment& GetIdcUserAssignment() const{ return m_idcUserAssignment; }
    inline bool IdcUserAssignmentHasBeenSet() const { return m_idcUserAssignmentHasBeenSet; }
    inline void SetIdcUserAssignment(const IdcUserAssignment& value) { m_idcUserAssignmentHasBeenSet = true; m_idcUserAssignment = value; }
    inline void SetIdcUserAssignment(IdcUserAssignment&& value) { m_idcUserAssignmentHasBeenSet = true; m_idcUserAssignment = std::move(value); }
    inline Studio& WithIdcUserAssignment(const IdcUserAssignment& value) { SetIdcUserAssignment(value); return *this;}
    inline Studio& WithIdcUserAssignment(IdcUserAssignment&& value) { SetIdcUserAssignment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key identifier (ARN) used to encrypt Amazon EMR Studio workspace and
     * notebook files when backed up to Amazon S3.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = value; }
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::move(value); }
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn.assign(value); }
    inline Studio& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}
    inline Studio& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}
    inline Studio& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}
    ///@}
  private:

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;

    Aws::String m_studioArn;
    bool m_studioArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AuthMode m_authMode;
    bool m_authModeHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    Aws::String m_userRole;
    bool m_userRoleHasBeenSet = false;

    Aws::String m_workspaceSecurityGroupId;
    bool m_workspaceSecurityGroupIdHasBeenSet = false;

    Aws::String m_engineSecurityGroupId;
    bool m_engineSecurityGroupIdHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_defaultS3Location;
    bool m_defaultS3LocationHasBeenSet = false;

    Aws::String m_idpAuthUrl;
    bool m_idpAuthUrlHasBeenSet = false;

    Aws::String m_idpRelayStateParameterName;
    bool m_idpRelayStateParameterNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_idcInstanceArn;
    bool m_idcInstanceArnHasBeenSet = false;

    bool m_trustedIdentityPropagationEnabled;
    bool m_trustedIdentityPropagationEnabledHasBeenSet = false;

    IdcUserAssignment m_idcUserAssignment;
    bool m_idcUserAssignmentHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
