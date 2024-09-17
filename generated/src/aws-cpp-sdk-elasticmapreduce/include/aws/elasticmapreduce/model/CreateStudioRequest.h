/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/AuthMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/IdcUserAssignment.h>
#include <aws/elasticmapreduce/model/Tag.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class CreateStudioRequest : public EMRRequest
  {
  public:
    AWS_EMR_API CreateStudioRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStudio"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A descriptive name for the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateStudioRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateStudioRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateStudioRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed description of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateStudioRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateStudioRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateStudioRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the Studio authenticates users using IAM or IAM Identity
     * Center.</p>
     */
    inline const AuthMode& GetAuthMode() const{ return m_authMode; }
    inline bool AuthModeHasBeenSet() const { return m_authModeHasBeenSet; }
    inline void SetAuthMode(const AuthMode& value) { m_authModeHasBeenSet = true; m_authMode = value; }
    inline void SetAuthMode(AuthMode&& value) { m_authModeHasBeenSet = true; m_authMode = std::move(value); }
    inline CreateStudioRequest& WithAuthMode(const AuthMode& value) { SetAuthMode(value); return *this;}
    inline CreateStudioRequest& WithAuthMode(AuthMode&& value) { SetAuthMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Virtual Private Cloud (Amazon VPC) to associate with the
     * Studio.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline CreateStudioRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline CreateStudioRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline CreateStudioRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of subnet IDs to associate with the Amazon EMR Studio. A Studio can
     * have a maximum of 5 subnets. The subnets must belong to the VPC specified by
     * <code>VpcId</code>. Studio users can create a Workspace in any of the specified
     * subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline CreateStudioRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline CreateStudioRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline CreateStudioRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline CreateStudioRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline CreateStudioRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IAM role that the Amazon EMR Studio assumes. The service role provides a
     * way for Amazon EMR Studio to interoperate with other Amazon Web Services
     * services.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }
    inline CreateStudioRequest& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}
    inline CreateStudioRequest& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}
    inline CreateStudioRequest& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM user role that users and groups assume when logged in to an Amazon
     * EMR Studio. Only specify a <code>UserRole</code> when you use IAM Identity
     * Center authentication. The permissions attached to the <code>UserRole</code> can
     * be scoped down for each user or group using session policies.</p>
     */
    inline const Aws::String& GetUserRole() const{ return m_userRole; }
    inline bool UserRoleHasBeenSet() const { return m_userRoleHasBeenSet; }
    inline void SetUserRole(const Aws::String& value) { m_userRoleHasBeenSet = true; m_userRole = value; }
    inline void SetUserRole(Aws::String&& value) { m_userRoleHasBeenSet = true; m_userRole = std::move(value); }
    inline void SetUserRole(const char* value) { m_userRoleHasBeenSet = true; m_userRole.assign(value); }
    inline CreateStudioRequest& WithUserRole(const Aws::String& value) { SetUserRole(value); return *this;}
    inline CreateStudioRequest& WithUserRole(Aws::String&& value) { SetUserRole(std::move(value)); return *this;}
    inline CreateStudioRequest& WithUserRole(const char* value) { SetUserRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon EMR Studio Workspace security group. The Workspace
     * security group allows outbound network traffic to resources in the Engine
     * security group, and it must be in the same VPC specified by
     * <code>VpcId</code>.</p>
     */
    inline const Aws::String& GetWorkspaceSecurityGroupId() const{ return m_workspaceSecurityGroupId; }
    inline bool WorkspaceSecurityGroupIdHasBeenSet() const { return m_workspaceSecurityGroupIdHasBeenSet; }
    inline void SetWorkspaceSecurityGroupId(const Aws::String& value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId = value; }
    inline void SetWorkspaceSecurityGroupId(Aws::String&& value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId = std::move(value); }
    inline void SetWorkspaceSecurityGroupId(const char* value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId.assign(value); }
    inline CreateStudioRequest& WithWorkspaceSecurityGroupId(const Aws::String& value) { SetWorkspaceSecurityGroupId(value); return *this;}
    inline CreateStudioRequest& WithWorkspaceSecurityGroupId(Aws::String&& value) { SetWorkspaceSecurityGroupId(std::move(value)); return *this;}
    inline CreateStudioRequest& WithWorkspaceSecurityGroupId(const char* value) { SetWorkspaceSecurityGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon EMR Studio Engine security group. The Engine security
     * group allows inbound network traffic from the Workspace security group, and it
     * must be in the same VPC specified by <code>VpcId</code>.</p>
     */
    inline const Aws::String& GetEngineSecurityGroupId() const{ return m_engineSecurityGroupId; }
    inline bool EngineSecurityGroupIdHasBeenSet() const { return m_engineSecurityGroupIdHasBeenSet; }
    inline void SetEngineSecurityGroupId(const Aws::String& value) { m_engineSecurityGroupIdHasBeenSet = true; m_engineSecurityGroupId = value; }
    inline void SetEngineSecurityGroupId(Aws::String&& value) { m_engineSecurityGroupIdHasBeenSet = true; m_engineSecurityGroupId = std::move(value); }
    inline void SetEngineSecurityGroupId(const char* value) { m_engineSecurityGroupIdHasBeenSet = true; m_engineSecurityGroupId.assign(value); }
    inline CreateStudioRequest& WithEngineSecurityGroupId(const Aws::String& value) { SetEngineSecurityGroupId(value); return *this;}
    inline CreateStudioRequest& WithEngineSecurityGroupId(Aws::String&& value) { SetEngineSecurityGroupId(std::move(value)); return *this;}
    inline CreateStudioRequest& WithEngineSecurityGroupId(const char* value) { SetEngineSecurityGroupId(value); return *this;}
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
    inline CreateStudioRequest& WithDefaultS3Location(const Aws::String& value) { SetDefaultS3Location(value); return *this;}
    inline CreateStudioRequest& WithDefaultS3Location(Aws::String&& value) { SetDefaultS3Location(std::move(value)); return *this;}
    inline CreateStudioRequest& WithDefaultS3Location(const char* value) { SetDefaultS3Location(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication endpoint of your identity provider (IdP). Specify this
     * value when you use IAM authentication and want to let federated users log in to
     * a Studio with the Studio URL and credentials from your IdP. Amazon EMR Studio
     * redirects users to this endpoint to enter credentials.</p>
     */
    inline const Aws::String& GetIdpAuthUrl() const{ return m_idpAuthUrl; }
    inline bool IdpAuthUrlHasBeenSet() const { return m_idpAuthUrlHasBeenSet; }
    inline void SetIdpAuthUrl(const Aws::String& value) { m_idpAuthUrlHasBeenSet = true; m_idpAuthUrl = value; }
    inline void SetIdpAuthUrl(Aws::String&& value) { m_idpAuthUrlHasBeenSet = true; m_idpAuthUrl = std::move(value); }
    inline void SetIdpAuthUrl(const char* value) { m_idpAuthUrlHasBeenSet = true; m_idpAuthUrl.assign(value); }
    inline CreateStudioRequest& WithIdpAuthUrl(const Aws::String& value) { SetIdpAuthUrl(value); return *this;}
    inline CreateStudioRequest& WithIdpAuthUrl(Aws::String&& value) { SetIdpAuthUrl(std::move(value)); return *this;}
    inline CreateStudioRequest& WithIdpAuthUrl(const char* value) { SetIdpAuthUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that your identity provider (IdP) uses for its
     * <code>RelayState</code> parameter. For example, <code>RelayState</code> or
     * <code>TargetSource</code>. Specify this value when you use IAM authentication
     * and want to let federated users log in to a Studio using the Studio URL. The
     * <code>RelayState</code> parameter differs by IdP.</p>
     */
    inline const Aws::String& GetIdpRelayStateParameterName() const{ return m_idpRelayStateParameterName; }
    inline bool IdpRelayStateParameterNameHasBeenSet() const { return m_idpRelayStateParameterNameHasBeenSet; }
    inline void SetIdpRelayStateParameterName(const Aws::String& value) { m_idpRelayStateParameterNameHasBeenSet = true; m_idpRelayStateParameterName = value; }
    inline void SetIdpRelayStateParameterName(Aws::String&& value) { m_idpRelayStateParameterNameHasBeenSet = true; m_idpRelayStateParameterName = std::move(value); }
    inline void SetIdpRelayStateParameterName(const char* value) { m_idpRelayStateParameterNameHasBeenSet = true; m_idpRelayStateParameterName.assign(value); }
    inline CreateStudioRequest& WithIdpRelayStateParameterName(const Aws::String& value) { SetIdpRelayStateParameterName(value); return *this;}
    inline CreateStudioRequest& WithIdpRelayStateParameterName(Aws::String&& value) { SetIdpRelayStateParameterName(std::move(value)); return *this;}
    inline CreateStudioRequest& WithIdpRelayStateParameterName(const char* value) { SetIdpRelayStateParameterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to associate with the Amazon EMR Studio. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters, and an optional value string with a maximum of 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateStudioRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateStudioRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateStudioRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateStudioRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A Boolean indicating whether to enable Trusted identity propagation for the
     * Studio. The default value is <code>false</code>. </p>
     */
    inline bool GetTrustedIdentityPropagationEnabled() const{ return m_trustedIdentityPropagationEnabled; }
    inline bool TrustedIdentityPropagationEnabledHasBeenSet() const { return m_trustedIdentityPropagationEnabledHasBeenSet; }
    inline void SetTrustedIdentityPropagationEnabled(bool value) { m_trustedIdentityPropagationEnabledHasBeenSet = true; m_trustedIdentityPropagationEnabled = value; }
    inline CreateStudioRequest& WithTrustedIdentityPropagationEnabled(bool value) { SetTrustedIdentityPropagationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether IAM Identity Center user assignment is
     * <code>REQUIRED</code> or <code>OPTIONAL</code>. If the value is set to
     * <code>REQUIRED</code>, users must be explicitly assigned to the Studio
     * application to access the Studio. </p>
     */
    inline const IdcUserAssignment& GetIdcUserAssignment() const{ return m_idcUserAssignment; }
    inline bool IdcUserAssignmentHasBeenSet() const { return m_idcUserAssignmentHasBeenSet; }
    inline void SetIdcUserAssignment(const IdcUserAssignment& value) { m_idcUserAssignmentHasBeenSet = true; m_idcUserAssignment = value; }
    inline void SetIdcUserAssignment(IdcUserAssignment&& value) { m_idcUserAssignmentHasBeenSet = true; m_idcUserAssignment = std::move(value); }
    inline CreateStudioRequest& WithIdcUserAssignment(const IdcUserAssignment& value) { SetIdcUserAssignment(value); return *this;}
    inline CreateStudioRequest& WithIdcUserAssignment(IdcUserAssignment&& value) { SetIdcUserAssignment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the IAM Identity Center instance to create the Studio
     * application. </p>
     */
    inline const Aws::String& GetIdcInstanceArn() const{ return m_idcInstanceArn; }
    inline bool IdcInstanceArnHasBeenSet() const { return m_idcInstanceArnHasBeenSet; }
    inline void SetIdcInstanceArn(const Aws::String& value) { m_idcInstanceArnHasBeenSet = true; m_idcInstanceArn = value; }
    inline void SetIdcInstanceArn(Aws::String&& value) { m_idcInstanceArnHasBeenSet = true; m_idcInstanceArn = std::move(value); }
    inline void SetIdcInstanceArn(const char* value) { m_idcInstanceArnHasBeenSet = true; m_idcInstanceArn.assign(value); }
    inline CreateStudioRequest& WithIdcInstanceArn(const Aws::String& value) { SetIdcInstanceArn(value); return *this;}
    inline CreateStudioRequest& WithIdcInstanceArn(Aws::String&& value) { SetIdcInstanceArn(std::move(value)); return *this;}
    inline CreateStudioRequest& WithIdcInstanceArn(const char* value) { SetIdcInstanceArn(value); return *this;}
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
    inline CreateStudioRequest& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}
    inline CreateStudioRequest& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}
    inline CreateStudioRequest& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}
    ///@}
  private:

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

    Aws::String m_defaultS3Location;
    bool m_defaultS3LocationHasBeenSet = false;

    Aws::String m_idpAuthUrl;
    bool m_idpAuthUrlHasBeenSet = false;

    Aws::String m_idpRelayStateParameterName;
    bool m_idpRelayStateParameterNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_trustedIdentityPropagationEnabled;
    bool m_trustedIdentityPropagationEnabledHasBeenSet = false;

    IdcUserAssignment m_idcUserAssignment;
    bool m_idcUserAssignmentHasBeenSet = false;

    Aws::String m_idcInstanceArn;
    bool m_idcInstanceArnHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
