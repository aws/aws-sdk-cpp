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
    AWS_EMR_API CreateStudioRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateStudioRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed description of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateStudioRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the Studio authenticates users using IAM or IAM Identity
     * Center.</p>
     */
    inline AuthMode GetAuthMode() const { return m_authMode; }
    inline bool AuthModeHasBeenSet() const { return m_authModeHasBeenSet; }
    inline void SetAuthMode(AuthMode value) { m_authModeHasBeenSet = true; m_authMode = value; }
    inline CreateStudioRequest& WithAuthMode(AuthMode value) { SetAuthMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Virtual Private Cloud (Amazon VPC) to associate with the
     * Studio.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    CreateStudioRequest& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of subnet IDs to associate with the Amazon EMR Studio. A Studio can
     * have a maximum of 5 subnets. The subnets must belong to the VPC specified by
     * <code>VpcId</code>. Studio users can create a Workspace in any of the specified
     * subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    CreateStudioRequest& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    CreateStudioRequest& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IAM role that the Amazon EMR Studio assumes. The service role provides a
     * way for Amazon EMR Studio to interoperate with other Amazon Web Services
     * services.</p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    CreateStudioRequest& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM user role that users and groups assume when logged in to an Amazon
     * EMR Studio. Only specify a <code>UserRole</code> when you use IAM Identity
     * Center authentication. The permissions attached to the <code>UserRole</code> can
     * be scoped down for each user or group using session policies.</p>
     */
    inline const Aws::String& GetUserRole() const { return m_userRole; }
    inline bool UserRoleHasBeenSet() const { return m_userRoleHasBeenSet; }
    template<typename UserRoleT = Aws::String>
    void SetUserRole(UserRoleT&& value) { m_userRoleHasBeenSet = true; m_userRole = std::forward<UserRoleT>(value); }
    template<typename UserRoleT = Aws::String>
    CreateStudioRequest& WithUserRole(UserRoleT&& value) { SetUserRole(std::forward<UserRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon EMR Studio Workspace security group. The Workspace
     * security group allows outbound network traffic to resources in the Engine
     * security group, and it must be in the same VPC specified by
     * <code>VpcId</code>.</p>
     */
    inline const Aws::String& GetWorkspaceSecurityGroupId() const { return m_workspaceSecurityGroupId; }
    inline bool WorkspaceSecurityGroupIdHasBeenSet() const { return m_workspaceSecurityGroupIdHasBeenSet; }
    template<typename WorkspaceSecurityGroupIdT = Aws::String>
    void SetWorkspaceSecurityGroupId(WorkspaceSecurityGroupIdT&& value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId = std::forward<WorkspaceSecurityGroupIdT>(value); }
    template<typename WorkspaceSecurityGroupIdT = Aws::String>
    CreateStudioRequest& WithWorkspaceSecurityGroupId(WorkspaceSecurityGroupIdT&& value) { SetWorkspaceSecurityGroupId(std::forward<WorkspaceSecurityGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon EMR Studio Engine security group. The Engine security
     * group allows inbound network traffic from the Workspace security group, and it
     * must be in the same VPC specified by <code>VpcId</code>.</p>
     */
    inline const Aws::String& GetEngineSecurityGroupId() const { return m_engineSecurityGroupId; }
    inline bool EngineSecurityGroupIdHasBeenSet() const { return m_engineSecurityGroupIdHasBeenSet; }
    template<typename EngineSecurityGroupIdT = Aws::String>
    void SetEngineSecurityGroupId(EngineSecurityGroupIdT&& value) { m_engineSecurityGroupIdHasBeenSet = true; m_engineSecurityGroupId = std::forward<EngineSecurityGroupIdT>(value); }
    template<typename EngineSecurityGroupIdT = Aws::String>
    CreateStudioRequest& WithEngineSecurityGroupId(EngineSecurityGroupIdT&& value) { SetEngineSecurityGroupId(std::forward<EngineSecurityGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location to back up Amazon EMR Studio Workspaces and notebook
     * files.</p>
     */
    inline const Aws::String& GetDefaultS3Location() const { return m_defaultS3Location; }
    inline bool DefaultS3LocationHasBeenSet() const { return m_defaultS3LocationHasBeenSet; }
    template<typename DefaultS3LocationT = Aws::String>
    void SetDefaultS3Location(DefaultS3LocationT&& value) { m_defaultS3LocationHasBeenSet = true; m_defaultS3Location = std::forward<DefaultS3LocationT>(value); }
    template<typename DefaultS3LocationT = Aws::String>
    CreateStudioRequest& WithDefaultS3Location(DefaultS3LocationT&& value) { SetDefaultS3Location(std::forward<DefaultS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication endpoint of your identity provider (IdP). Specify this
     * value when you use IAM authentication and want to let federated users log in to
     * a Studio with the Studio URL and credentials from your IdP. Amazon EMR Studio
     * redirects users to this endpoint to enter credentials.</p>
     */
    inline const Aws::String& GetIdpAuthUrl() const { return m_idpAuthUrl; }
    inline bool IdpAuthUrlHasBeenSet() const { return m_idpAuthUrlHasBeenSet; }
    template<typename IdpAuthUrlT = Aws::String>
    void SetIdpAuthUrl(IdpAuthUrlT&& value) { m_idpAuthUrlHasBeenSet = true; m_idpAuthUrl = std::forward<IdpAuthUrlT>(value); }
    template<typename IdpAuthUrlT = Aws::String>
    CreateStudioRequest& WithIdpAuthUrl(IdpAuthUrlT&& value) { SetIdpAuthUrl(std::forward<IdpAuthUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that your identity provider (IdP) uses for its
     * <code>RelayState</code> parameter. For example, <code>RelayState</code> or
     * <code>TargetSource</code>. Specify this value when you use IAM authentication
     * and want to let federated users log in to a Studio using the Studio URL. The
     * <code>RelayState</code> parameter differs by IdP.</p>
     */
    inline const Aws::String& GetIdpRelayStateParameterName() const { return m_idpRelayStateParameterName; }
    inline bool IdpRelayStateParameterNameHasBeenSet() const { return m_idpRelayStateParameterNameHasBeenSet; }
    template<typename IdpRelayStateParameterNameT = Aws::String>
    void SetIdpRelayStateParameterName(IdpRelayStateParameterNameT&& value) { m_idpRelayStateParameterNameHasBeenSet = true; m_idpRelayStateParameterName = std::forward<IdpRelayStateParameterNameT>(value); }
    template<typename IdpRelayStateParameterNameT = Aws::String>
    CreateStudioRequest& WithIdpRelayStateParameterName(IdpRelayStateParameterNameT&& value) { SetIdpRelayStateParameterName(std::forward<IdpRelayStateParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to associate with the Amazon EMR Studio. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters, and an optional value string with a maximum of 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateStudioRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateStudioRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A Boolean indicating whether to enable Trusted identity propagation for the
     * Studio. The default value is <code>false</code>. </p>
     */
    inline bool GetTrustedIdentityPropagationEnabled() const { return m_trustedIdentityPropagationEnabled; }
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
    inline IdcUserAssignment GetIdcUserAssignment() const { return m_idcUserAssignment; }
    inline bool IdcUserAssignmentHasBeenSet() const { return m_idcUserAssignmentHasBeenSet; }
    inline void SetIdcUserAssignment(IdcUserAssignment value) { m_idcUserAssignmentHasBeenSet = true; m_idcUserAssignment = value; }
    inline CreateStudioRequest& WithIdcUserAssignment(IdcUserAssignment value) { SetIdcUserAssignment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the IAM Identity Center instance to create the Studio
     * application. </p>
     */
    inline const Aws::String& GetIdcInstanceArn() const { return m_idcInstanceArn; }
    inline bool IdcInstanceArnHasBeenSet() const { return m_idcInstanceArnHasBeenSet; }
    template<typename IdcInstanceArnT = Aws::String>
    void SetIdcInstanceArn(IdcInstanceArnT&& value) { m_idcInstanceArnHasBeenSet = true; m_idcInstanceArn = std::forward<IdcInstanceArnT>(value); }
    template<typename IdcInstanceArnT = Aws::String>
    CreateStudioRequest& WithIdcInstanceArn(IdcInstanceArnT&& value) { SetIdcInstanceArn(std::forward<IdcInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key identifier (ARN) used to encrypt Amazon EMR Studio workspace and
     * notebook files when backed up to Amazon S3.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    template<typename EncryptionKeyArnT = Aws::String>
    void SetEncryptionKeyArn(EncryptionKeyArnT&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value); }
    template<typename EncryptionKeyArnT = Aws::String>
    CreateStudioRequest& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AuthMode m_authMode{AuthMode::NOT_SET};
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

    bool m_trustedIdentityPropagationEnabled{false};
    bool m_trustedIdentityPropagationEnabledHasBeenSet = false;

    IdcUserAssignment m_idcUserAssignment{IdcUserAssignment::NOT_SET};
    bool m_idcUserAssignmentHasBeenSet = false;

    Aws::String m_idcInstanceArn;
    bool m_idcInstanceArnHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
