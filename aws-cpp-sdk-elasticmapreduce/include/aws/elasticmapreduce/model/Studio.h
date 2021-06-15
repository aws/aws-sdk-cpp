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
  class AWS_EMR_API Studio
  {
  public:
    Studio();
    Studio(Aws::Utils::Json::JsonView jsonValue);
    Studio& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline Studio& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline Studio& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline Studio& WithStudioId(const char* value) { SetStudioId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetStudioArn() const{ return m_studioArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EMR Studio.</p>
     */
    inline bool StudioArnHasBeenSet() const { return m_studioArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EMR Studio.</p>
     */
    inline void SetStudioArn(const Aws::String& value) { m_studioArnHasBeenSet = true; m_studioArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EMR Studio.</p>
     */
    inline void SetStudioArn(Aws::String&& value) { m_studioArnHasBeenSet = true; m_studioArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EMR Studio.</p>
     */
    inline void SetStudioArn(const char* value) { m_studioArnHasBeenSet = true; m_studioArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EMR Studio.</p>
     */
    inline Studio& WithStudioArn(const Aws::String& value) { SetStudioArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EMR Studio.</p>
     */
    inline Studio& WithStudioArn(Aws::String&& value) { SetStudioArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EMR Studio.</p>
     */
    inline Studio& WithStudioArn(const char* value) { SetStudioArn(value); return *this;}


    /**
     * <p>The name of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Amazon EMR Studio.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Amazon EMR Studio.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Amazon EMR Studio.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Amazon EMR Studio.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Amazon EMR Studio.</p>
     */
    inline Studio& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon EMR Studio.</p>
     */
    inline Studio& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon EMR Studio.</p>
     */
    inline Studio& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The detailed description of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The detailed description of the Amazon EMR Studio.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The detailed description of the Amazon EMR Studio.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The detailed description of the Amazon EMR Studio.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The detailed description of the Amazon EMR Studio.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The detailed description of the Amazon EMR Studio.</p>
     */
    inline Studio& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The detailed description of the Amazon EMR Studio.</p>
     */
    inline Studio& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The detailed description of the Amazon EMR Studio.</p>
     */
    inline Studio& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies whether the Amazon EMR Studio authenticates users using single
     * sign-on (SSO) or IAM.</p>
     */
    inline const AuthMode& GetAuthMode() const{ return m_authMode; }

    /**
     * <p>Specifies whether the Amazon EMR Studio authenticates users using single
     * sign-on (SSO) or IAM.</p>
     */
    inline bool AuthModeHasBeenSet() const { return m_authModeHasBeenSet; }

    /**
     * <p>Specifies whether the Amazon EMR Studio authenticates users using single
     * sign-on (SSO) or IAM.</p>
     */
    inline void SetAuthMode(const AuthMode& value) { m_authModeHasBeenSet = true; m_authMode = value; }

    /**
     * <p>Specifies whether the Amazon EMR Studio authenticates users using single
     * sign-on (SSO) or IAM.</p>
     */
    inline void SetAuthMode(AuthMode&& value) { m_authModeHasBeenSet = true; m_authMode = std::move(value); }

    /**
     * <p>Specifies whether the Amazon EMR Studio authenticates users using single
     * sign-on (SSO) or IAM.</p>
     */
    inline Studio& WithAuthMode(const AuthMode& value) { SetAuthMode(value); return *this;}

    /**
     * <p>Specifies whether the Amazon EMR Studio authenticates users using single
     * sign-on (SSO) or IAM.</p>
     */
    inline Studio& WithAuthMode(AuthMode&& value) { SetAuthMode(std::move(value)); return *this;}


    /**
     * <p>The ID of the VPC associated with the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC associated with the Amazon EMR Studio.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC associated with the Amazon EMR Studio.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC associated with the Amazon EMR Studio.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC associated with the Amazon EMR Studio.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC associated with the Amazon EMR Studio.</p>
     */
    inline Studio& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC associated with the Amazon EMR Studio.</p>
     */
    inline Studio& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC associated with the Amazon EMR Studio.</p>
     */
    inline Studio& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The list of IDs of the subnets associated with the Amazon EMR Studio.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The list of IDs of the subnets associated with the Amazon EMR Studio.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The list of IDs of the subnets associated with the Amazon EMR Studio.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The list of IDs of the subnets associated with the Amazon EMR Studio.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The list of IDs of the subnets associated with the Amazon EMR Studio.</p>
     */
    inline Studio& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The list of IDs of the subnets associated with the Amazon EMR Studio.</p>
     */
    inline Studio& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The list of IDs of the subnets associated with the Amazon EMR Studio.</p>
     */
    inline Studio& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The list of IDs of the subnets associated with the Amazon EMR Studio.</p>
     */
    inline Studio& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of IDs of the subnets associated with the Amazon EMR Studio.</p>
     */
    inline Studio& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The name of the IAM role assumed by the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The name of the IAM role assumed by the Amazon EMR Studio.</p>
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The name of the IAM role assumed by the Amazon EMR Studio.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The name of the IAM role assumed by the Amazon EMR Studio.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The name of the IAM role assumed by the Amazon EMR Studio.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The name of the IAM role assumed by the Amazon EMR Studio.</p>
     */
    inline Studio& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The name of the IAM role assumed by the Amazon EMR Studio.</p>
     */
    inline Studio& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM role assumed by the Amazon EMR Studio.</p>
     */
    inline Studio& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>The name of the IAM role assumed by users logged in to the Amazon EMR
     * Studio.</p>
     */
    inline const Aws::String& GetUserRole() const{ return m_userRole; }

    /**
     * <p>The name of the IAM role assumed by users logged in to the Amazon EMR
     * Studio.</p>
     */
    inline bool UserRoleHasBeenSet() const { return m_userRoleHasBeenSet; }

    /**
     * <p>The name of the IAM role assumed by users logged in to the Amazon EMR
     * Studio.</p>
     */
    inline void SetUserRole(const Aws::String& value) { m_userRoleHasBeenSet = true; m_userRole = value; }

    /**
     * <p>The name of the IAM role assumed by users logged in to the Amazon EMR
     * Studio.</p>
     */
    inline void SetUserRole(Aws::String&& value) { m_userRoleHasBeenSet = true; m_userRole = std::move(value); }

    /**
     * <p>The name of the IAM role assumed by users logged in to the Amazon EMR
     * Studio.</p>
     */
    inline void SetUserRole(const char* value) { m_userRoleHasBeenSet = true; m_userRole.assign(value); }

    /**
     * <p>The name of the IAM role assumed by users logged in to the Amazon EMR
     * Studio.</p>
     */
    inline Studio& WithUserRole(const Aws::String& value) { SetUserRole(value); return *this;}

    /**
     * <p>The name of the IAM role assumed by users logged in to the Amazon EMR
     * Studio.</p>
     */
    inline Studio& WithUserRole(Aws::String&& value) { SetUserRole(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM role assumed by users logged in to the Amazon EMR
     * Studio.</p>
     */
    inline Studio& WithUserRole(const char* value) { SetUserRole(value); return *this;}


    /**
     * <p>The ID of the Workspace security group associated with the Amazon EMR Studio.
     * The Workspace security group allows outbound network traffic to resources in the
     * Engine security group and to the internet.</p>
     */
    inline const Aws::String& GetWorkspaceSecurityGroupId() const{ return m_workspaceSecurityGroupId; }

    /**
     * <p>The ID of the Workspace security group associated with the Amazon EMR Studio.
     * The Workspace security group allows outbound network traffic to resources in the
     * Engine security group and to the internet.</p>
     */
    inline bool WorkspaceSecurityGroupIdHasBeenSet() const { return m_workspaceSecurityGroupIdHasBeenSet; }

    /**
     * <p>The ID of the Workspace security group associated with the Amazon EMR Studio.
     * The Workspace security group allows outbound network traffic to resources in the
     * Engine security group and to the internet.</p>
     */
    inline void SetWorkspaceSecurityGroupId(const Aws::String& value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId = value; }

    /**
     * <p>The ID of the Workspace security group associated with the Amazon EMR Studio.
     * The Workspace security group allows outbound network traffic to resources in the
     * Engine security group and to the internet.</p>
     */
    inline void SetWorkspaceSecurityGroupId(Aws::String&& value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId = std::move(value); }

    /**
     * <p>The ID of the Workspace security group associated with the Amazon EMR Studio.
     * The Workspace security group allows outbound network traffic to resources in the
     * Engine security group and to the internet.</p>
     */
    inline void SetWorkspaceSecurityGroupId(const char* value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId.assign(value); }

    /**
     * <p>The ID of the Workspace security group associated with the Amazon EMR Studio.
     * The Workspace security group allows outbound network traffic to resources in the
     * Engine security group and to the internet.</p>
     */
    inline Studio& WithWorkspaceSecurityGroupId(const Aws::String& value) { SetWorkspaceSecurityGroupId(value); return *this;}

    /**
     * <p>The ID of the Workspace security group associated with the Amazon EMR Studio.
     * The Workspace security group allows outbound network traffic to resources in the
     * Engine security group and to the internet.</p>
     */
    inline Studio& WithWorkspaceSecurityGroupId(Aws::String&& value) { SetWorkspaceSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Workspace security group associated with the Amazon EMR Studio.
     * The Workspace security group allows outbound network traffic to resources in the
     * Engine security group and to the internet.</p>
     */
    inline Studio& WithWorkspaceSecurityGroupId(const char* value) { SetWorkspaceSecurityGroupId(value); return *this;}


    /**
     * <p>The ID of the Engine security group associated with the Amazon EMR Studio.
     * The Engine security group allows inbound network traffic from resources in the
     * Workspace security group.</p>
     */
    inline const Aws::String& GetEngineSecurityGroupId() const{ return m_engineSecurityGroupId; }

    /**
     * <p>The ID of the Engine security group associated with the Amazon EMR Studio.
     * The Engine security group allows inbound network traffic from resources in the
     * Workspace security group.</p>
     */
    inline bool EngineSecurityGroupIdHasBeenSet() const { return m_engineSecurityGroupIdHasBeenSet; }

    /**
     * <p>The ID of the Engine security group associated with the Amazon EMR Studio.
     * The Engine security group allows inbound network traffic from resources in the
     * Workspace security group.</p>
     */
    inline void SetEngineSecurityGroupId(const Aws::String& value) { m_engineSecurityGroupIdHasBeenSet = true; m_engineSecurityGroupId = value; }

    /**
     * <p>The ID of the Engine security group associated with the Amazon EMR Studio.
     * The Engine security group allows inbound network traffic from resources in the
     * Workspace security group.</p>
     */
    inline void SetEngineSecurityGroupId(Aws::String&& value) { m_engineSecurityGroupIdHasBeenSet = true; m_engineSecurityGroupId = std::move(value); }

    /**
     * <p>The ID of the Engine security group associated with the Amazon EMR Studio.
     * The Engine security group allows inbound network traffic from resources in the
     * Workspace security group.</p>
     */
    inline void SetEngineSecurityGroupId(const char* value) { m_engineSecurityGroupIdHasBeenSet = true; m_engineSecurityGroupId.assign(value); }

    /**
     * <p>The ID of the Engine security group associated with the Amazon EMR Studio.
     * The Engine security group allows inbound network traffic from resources in the
     * Workspace security group.</p>
     */
    inline Studio& WithEngineSecurityGroupId(const Aws::String& value) { SetEngineSecurityGroupId(value); return *this;}

    /**
     * <p>The ID of the Engine security group associated with the Amazon EMR Studio.
     * The Engine security group allows inbound network traffic from resources in the
     * Workspace security group.</p>
     */
    inline Studio& WithEngineSecurityGroupId(Aws::String&& value) { SetEngineSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Engine security group associated with the Amazon EMR Studio.
     * The Engine security group allows inbound network traffic from resources in the
     * Workspace security group.</p>
     */
    inline Studio& WithEngineSecurityGroupId(const char* value) { SetEngineSecurityGroupId(value); return *this;}


    /**
     * <p>The unique access URL of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The unique access URL of the Amazon EMR Studio.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The unique access URL of the Amazon EMR Studio.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The unique access URL of the Amazon EMR Studio.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The unique access URL of the Amazon EMR Studio.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The unique access URL of the Amazon EMR Studio.</p>
     */
    inline Studio& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The unique access URL of the Amazon EMR Studio.</p>
     */
    inline Studio& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The unique access URL of the Amazon EMR Studio.</p>
     */
    inline Studio& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>The time the Amazon EMR Studio was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the Amazon EMR Studio was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the Amazon EMR Studio was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the Amazon EMR Studio was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the Amazon EMR Studio was created.</p>
     */
    inline Studio& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the Amazon EMR Studio was created.</p>
     */
    inline Studio& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 location to back up Amazon EMR Studio Workspaces and notebook
     * files.</p>
     */
    inline const Aws::String& GetDefaultS3Location() const{ return m_defaultS3Location; }

    /**
     * <p>The Amazon S3 location to back up Amazon EMR Studio Workspaces and notebook
     * files.</p>
     */
    inline bool DefaultS3LocationHasBeenSet() const { return m_defaultS3LocationHasBeenSet; }

    /**
     * <p>The Amazon S3 location to back up Amazon EMR Studio Workspaces and notebook
     * files.</p>
     */
    inline void SetDefaultS3Location(const Aws::String& value) { m_defaultS3LocationHasBeenSet = true; m_defaultS3Location = value; }

    /**
     * <p>The Amazon S3 location to back up Amazon EMR Studio Workspaces and notebook
     * files.</p>
     */
    inline void SetDefaultS3Location(Aws::String&& value) { m_defaultS3LocationHasBeenSet = true; m_defaultS3Location = std::move(value); }

    /**
     * <p>The Amazon S3 location to back up Amazon EMR Studio Workspaces and notebook
     * files.</p>
     */
    inline void SetDefaultS3Location(const char* value) { m_defaultS3LocationHasBeenSet = true; m_defaultS3Location.assign(value); }

    /**
     * <p>The Amazon S3 location to back up Amazon EMR Studio Workspaces and notebook
     * files.</p>
     */
    inline Studio& WithDefaultS3Location(const Aws::String& value) { SetDefaultS3Location(value); return *this;}

    /**
     * <p>The Amazon S3 location to back up Amazon EMR Studio Workspaces and notebook
     * files.</p>
     */
    inline Studio& WithDefaultS3Location(Aws::String&& value) { SetDefaultS3Location(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location to back up Amazon EMR Studio Workspaces and notebook
     * files.</p>
     */
    inline Studio& WithDefaultS3Location(const char* value) { SetDefaultS3Location(value); return *this;}


    /**
     * <p>A list of tags associated with the Amazon EMR Studio.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags associated with the Amazon EMR Studio.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags associated with the Amazon EMR Studio.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags associated with the Amazon EMR Studio.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags associated with the Amazon EMR Studio.</p>
     */
    inline Studio& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags associated with the Amazon EMR Studio.</p>
     */
    inline Studio& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags associated with the Amazon EMR Studio.</p>
     */
    inline Studio& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags associated with the Amazon EMR Studio.</p>
     */
    inline Studio& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet;

    Aws::String m_studioArn;
    bool m_studioArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    AuthMode m_authMode;
    bool m_authModeHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;

    Aws::String m_userRole;
    bool m_userRoleHasBeenSet;

    Aws::String m_workspaceSecurityGroupId;
    bool m_workspaceSecurityGroupIdHasBeenSet;

    Aws::String m_engineSecurityGroupId;
    bool m_engineSecurityGroupIdHasBeenSet;

    Aws::String m_url;
    bool m_urlHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::String m_defaultS3Location;
    bool m_defaultS3LocationHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
