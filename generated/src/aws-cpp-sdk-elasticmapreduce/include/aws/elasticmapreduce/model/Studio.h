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
    AWS_EMR_API Studio() = default;
    AWS_EMR_API Studio(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Studio& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetStudioId() const { return m_studioId; }
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }
    template<typename StudioIdT = Aws::String>
    void SetStudioId(StudioIdT&& value) { m_studioIdHasBeenSet = true; m_studioId = std::forward<StudioIdT>(value); }
    template<typename StudioIdT = Aws::String>
    Studio& WithStudioId(StudioIdT&& value) { SetStudioId(std::forward<StudioIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetStudioArn() const { return m_studioArn; }
    inline bool StudioArnHasBeenSet() const { return m_studioArnHasBeenSet; }
    template<typename StudioArnT = Aws::String>
    void SetStudioArn(StudioArnT&& value) { m_studioArnHasBeenSet = true; m_studioArn = std::forward<StudioArnT>(value); }
    template<typename StudioArnT = Aws::String>
    Studio& WithStudioArn(StudioArnT&& value) { SetStudioArn(std::forward<StudioArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Studio& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed description of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Studio& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the Amazon EMR Studio authenticates users with IAM or IAM
     * Identity Center.</p>
     */
    inline AuthMode GetAuthMode() const { return m_authMode; }
    inline bool AuthModeHasBeenSet() const { return m_authModeHasBeenSet; }
    inline void SetAuthMode(AuthMode value) { m_authModeHasBeenSet = true; m_authMode = value; }
    inline Studio& WithAuthMode(AuthMode value) { SetAuthMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC associated with the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    Studio& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of IDs of the subnets associated with the Amazon EMR Studio.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    Studio& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    Studio& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role assumed by the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    Studio& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role assumed by users logged in to the Amazon EMR Studio.
     * A Studio only requires a <code>UserRole</code> when you use IAM
     * authentication.</p>
     */
    inline const Aws::String& GetUserRole() const { return m_userRole; }
    inline bool UserRoleHasBeenSet() const { return m_userRoleHasBeenSet; }
    template<typename UserRoleT = Aws::String>
    void SetUserRole(UserRoleT&& value) { m_userRoleHasBeenSet = true; m_userRole = std::forward<UserRoleT>(value); }
    template<typename UserRoleT = Aws::String>
    Studio& WithUserRole(UserRoleT&& value) { SetUserRole(std::forward<UserRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Workspace security group associated with the Amazon EMR Studio.
     * The Workspace security group allows outbound network traffic to resources in the
     * Engine security group and to the internet.</p>
     */
    inline const Aws::String& GetWorkspaceSecurityGroupId() const { return m_workspaceSecurityGroupId; }
    inline bool WorkspaceSecurityGroupIdHasBeenSet() const { return m_workspaceSecurityGroupIdHasBeenSet; }
    template<typename WorkspaceSecurityGroupIdT = Aws::String>
    void SetWorkspaceSecurityGroupId(WorkspaceSecurityGroupIdT&& value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId = std::forward<WorkspaceSecurityGroupIdT>(value); }
    template<typename WorkspaceSecurityGroupIdT = Aws::String>
    Studio& WithWorkspaceSecurityGroupId(WorkspaceSecurityGroupIdT&& value) { SetWorkspaceSecurityGroupId(std::forward<WorkspaceSecurityGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Engine security group associated with the Amazon EMR Studio.
     * The Engine security group allows inbound network traffic from resources in the
     * Workspace security group.</p>
     */
    inline const Aws::String& GetEngineSecurityGroupId() const { return m_engineSecurityGroupId; }
    inline bool EngineSecurityGroupIdHasBeenSet() const { return m_engineSecurityGroupIdHasBeenSet; }
    template<typename EngineSecurityGroupIdT = Aws::String>
    void SetEngineSecurityGroupId(EngineSecurityGroupIdT&& value) { m_engineSecurityGroupIdHasBeenSet = true; m_engineSecurityGroupId = std::forward<EngineSecurityGroupIdT>(value); }
    template<typename EngineSecurityGroupIdT = Aws::String>
    Studio& WithEngineSecurityGroupId(EngineSecurityGroupIdT&& value) { SetEngineSecurityGroupId(std::forward<EngineSecurityGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique access URL of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    Studio& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the Amazon EMR Studio was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Studio& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    Studio& WithDefaultS3Location(DefaultS3LocationT&& value) { SetDefaultS3Location(std::forward<DefaultS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your identity provider's authentication endpoint. Amazon EMR Studio redirects
     * federated users to this endpoint for authentication when logging in to a Studio
     * with the Studio URL.</p>
     */
    inline const Aws::String& GetIdpAuthUrl() const { return m_idpAuthUrl; }
    inline bool IdpAuthUrlHasBeenSet() const { return m_idpAuthUrlHasBeenSet; }
    template<typename IdpAuthUrlT = Aws::String>
    void SetIdpAuthUrl(IdpAuthUrlT&& value) { m_idpAuthUrlHasBeenSet = true; m_idpAuthUrl = std::forward<IdpAuthUrlT>(value); }
    template<typename IdpAuthUrlT = Aws::String>
    Studio& WithIdpAuthUrl(IdpAuthUrlT&& value) { SetIdpAuthUrl(std::forward<IdpAuthUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your identity provider's <code>RelayState</code> parameter.</p>
     */
    inline const Aws::String& GetIdpRelayStateParameterName() const { return m_idpRelayStateParameterName; }
    inline bool IdpRelayStateParameterNameHasBeenSet() const { return m_idpRelayStateParameterNameHasBeenSet; }
    template<typename IdpRelayStateParameterNameT = Aws::String>
    void SetIdpRelayStateParameterName(IdpRelayStateParameterNameT&& value) { m_idpRelayStateParameterNameHasBeenSet = true; m_idpRelayStateParameterName = std::forward<IdpRelayStateParameterNameT>(value); }
    template<typename IdpRelayStateParameterNameT = Aws::String>
    Studio& WithIdpRelayStateParameterName(IdpRelayStateParameterNameT&& value) { SetIdpRelayStateParameterName(std::forward<IdpRelayStateParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with the Amazon EMR Studio.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Studio& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Studio& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The ARN of the IAM Identity Center instance the Studio application belongs
     * to. </p>
     */
    inline const Aws::String& GetIdcInstanceArn() const { return m_idcInstanceArn; }
    inline bool IdcInstanceArnHasBeenSet() const { return m_idcInstanceArnHasBeenSet; }
    template<typename IdcInstanceArnT = Aws::String>
    void SetIdcInstanceArn(IdcInstanceArnT&& value) { m_idcInstanceArnHasBeenSet = true; m_idcInstanceArn = std::forward<IdcInstanceArnT>(value); }
    template<typename IdcInstanceArnT = Aws::String>
    Studio& WithIdcInstanceArn(IdcInstanceArnT&& value) { SetIdcInstanceArn(std::forward<IdcInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the Studio has Trusted identity propagation enabled. The
     * default value is <code>false</code>. </p>
     */
    inline bool GetTrustedIdentityPropagationEnabled() const { return m_trustedIdentityPropagationEnabled; }
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
    inline IdcUserAssignment GetIdcUserAssignment() const { return m_idcUserAssignment; }
    inline bool IdcUserAssignmentHasBeenSet() const { return m_idcUserAssignmentHasBeenSet; }
    inline void SetIdcUserAssignment(IdcUserAssignment value) { m_idcUserAssignmentHasBeenSet = true; m_idcUserAssignment = value; }
    inline Studio& WithIdcUserAssignment(IdcUserAssignment value) { SetIdcUserAssignment(value); return *this;}
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
    Studio& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
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

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
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

    bool m_trustedIdentityPropagationEnabled{false};
    bool m_trustedIdentityPropagationEnabledHasBeenSet = false;

    IdcUserAssignment m_idcUserAssignment{IdcUserAssignment::NOT_SET};
    bool m_idcUserAssignmentHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
