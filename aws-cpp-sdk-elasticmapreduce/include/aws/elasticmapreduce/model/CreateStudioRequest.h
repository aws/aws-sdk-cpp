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


    /**
     * <p>A descriptive name for the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive name for the Amazon EMR Studio.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive name for the Amazon EMR Studio.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive name for the Amazon EMR Studio.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive name for the Amazon EMR Studio.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive name for the Amazon EMR Studio.</p>
     */
    inline CreateStudioRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive name for the Amazon EMR Studio.</p>
     */
    inline CreateStudioRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive name for the Amazon EMR Studio.</p>
     */
    inline CreateStudioRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A detailed description of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A detailed description of the Amazon EMR Studio.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A detailed description of the Amazon EMR Studio.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A detailed description of the Amazon EMR Studio.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A detailed description of the Amazon EMR Studio.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A detailed description of the Amazon EMR Studio.</p>
     */
    inline CreateStudioRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A detailed description of the Amazon EMR Studio.</p>
     */
    inline CreateStudioRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A detailed description of the Amazon EMR Studio.</p>
     */
    inline CreateStudioRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies whether the Studio authenticates users using IAM or Amazon Web
     * Services SSO.</p>
     */
    inline const AuthMode& GetAuthMode() const{ return m_authMode; }

    /**
     * <p>Specifies whether the Studio authenticates users using IAM or Amazon Web
     * Services SSO.</p>
     */
    inline bool AuthModeHasBeenSet() const { return m_authModeHasBeenSet; }

    /**
     * <p>Specifies whether the Studio authenticates users using IAM or Amazon Web
     * Services SSO.</p>
     */
    inline void SetAuthMode(const AuthMode& value) { m_authModeHasBeenSet = true; m_authMode = value; }

    /**
     * <p>Specifies whether the Studio authenticates users using IAM or Amazon Web
     * Services SSO.</p>
     */
    inline void SetAuthMode(AuthMode&& value) { m_authModeHasBeenSet = true; m_authMode = std::move(value); }

    /**
     * <p>Specifies whether the Studio authenticates users using IAM or Amazon Web
     * Services SSO.</p>
     */
    inline CreateStudioRequest& WithAuthMode(const AuthMode& value) { SetAuthMode(value); return *this;}

    /**
     * <p>Specifies whether the Studio authenticates users using IAM or Amazon Web
     * Services SSO.</p>
     */
    inline CreateStudioRequest& WithAuthMode(AuthMode&& value) { SetAuthMode(std::move(value)); return *this;}


    /**
     * <p>The ID of the Amazon Virtual Private Cloud (Amazon VPC) to associate with the
     * Studio.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the Amazon Virtual Private Cloud (Amazon VPC) to associate with the
     * Studio.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Virtual Private Cloud (Amazon VPC) to associate with the
     * Studio.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the Amazon Virtual Private Cloud (Amazon VPC) to associate with the
     * Studio.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the Amazon Virtual Private Cloud (Amazon VPC) to associate with the
     * Studio.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the Amazon Virtual Private Cloud (Amazon VPC) to associate with the
     * Studio.</p>
     */
    inline CreateStudioRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the Amazon Virtual Private Cloud (Amazon VPC) to associate with the
     * Studio.</p>
     */
    inline CreateStudioRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Virtual Private Cloud (Amazon VPC) to associate with the
     * Studio.</p>
     */
    inline CreateStudioRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>A list of subnet IDs to associate with the Amazon EMR Studio. A Studio can
     * have a maximum of 5 subnets. The subnets must belong to the VPC specified by
     * <code>VpcId</code>. Studio users can create a Workspace in any of the specified
     * subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of subnet IDs to associate with the Amazon EMR Studio. A Studio can
     * have a maximum of 5 subnets. The subnets must belong to the VPC specified by
     * <code>VpcId</code>. Studio users can create a Workspace in any of the specified
     * subnets.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>A list of subnet IDs to associate with the Amazon EMR Studio. A Studio can
     * have a maximum of 5 subnets. The subnets must belong to the VPC specified by
     * <code>VpcId</code>. Studio users can create a Workspace in any of the specified
     * subnets.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>A list of subnet IDs to associate with the Amazon EMR Studio. A Studio can
     * have a maximum of 5 subnets. The subnets must belong to the VPC specified by
     * <code>VpcId</code>. Studio users can create a Workspace in any of the specified
     * subnets.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>A list of subnet IDs to associate with the Amazon EMR Studio. A Studio can
     * have a maximum of 5 subnets. The subnets must belong to the VPC specified by
     * <code>VpcId</code>. Studio users can create a Workspace in any of the specified
     * subnets.</p>
     */
    inline CreateStudioRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of subnet IDs to associate with the Amazon EMR Studio. A Studio can
     * have a maximum of 5 subnets. The subnets must belong to the VPC specified by
     * <code>VpcId</code>. Studio users can create a Workspace in any of the specified
     * subnets.</p>
     */
    inline CreateStudioRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of subnet IDs to associate with the Amazon EMR Studio. A Studio can
     * have a maximum of 5 subnets. The subnets must belong to the VPC specified by
     * <code>VpcId</code>. Studio users can create a Workspace in any of the specified
     * subnets.</p>
     */
    inline CreateStudioRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of subnet IDs to associate with the Amazon EMR Studio. A Studio can
     * have a maximum of 5 subnets. The subnets must belong to the VPC specified by
     * <code>VpcId</code>. Studio users can create a Workspace in any of the specified
     * subnets.</p>
     */
    inline CreateStudioRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of subnet IDs to associate with the Amazon EMR Studio. A Studio can
     * have a maximum of 5 subnets. The subnets must belong to the VPC specified by
     * <code>VpcId</code>. Studio users can create a Workspace in any of the specified
     * subnets.</p>
     */
    inline CreateStudioRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The IAM role that the Amazon EMR Studio assumes. The service role provides a
     * way for Amazon EMR Studio to interoperate with other Amazon Web Services
     * services.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The IAM role that the Amazon EMR Studio assumes. The service role provides a
     * way for Amazon EMR Studio to interoperate with other Amazon Web Services
     * services.</p>
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The IAM role that the Amazon EMR Studio assumes. The service role provides a
     * way for Amazon EMR Studio to interoperate with other Amazon Web Services
     * services.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The IAM role that the Amazon EMR Studio assumes. The service role provides a
     * way for Amazon EMR Studio to interoperate with other Amazon Web Services
     * services.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The IAM role that the Amazon EMR Studio assumes. The service role provides a
     * way for Amazon EMR Studio to interoperate with other Amazon Web Services
     * services.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The IAM role that the Amazon EMR Studio assumes. The service role provides a
     * way for Amazon EMR Studio to interoperate with other Amazon Web Services
     * services.</p>
     */
    inline CreateStudioRequest& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The IAM role that the Amazon EMR Studio assumes. The service role provides a
     * way for Amazon EMR Studio to interoperate with other Amazon Web Services
     * services.</p>
     */
    inline CreateStudioRequest& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role that the Amazon EMR Studio assumes. The service role provides a
     * way for Amazon EMR Studio to interoperate with other Amazon Web Services
     * services.</p>
     */
    inline CreateStudioRequest& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>The IAM user role that users and groups assume when logged in to an Amazon
     * EMR Studio. Only specify a <code>UserRole</code> when you use Amazon Web
     * Services SSO authentication. The permissions attached to the
     * <code>UserRole</code> can be scoped down for each user or group using session
     * policies.</p>
     */
    inline const Aws::String& GetUserRole() const{ return m_userRole; }

    /**
     * <p>The IAM user role that users and groups assume when logged in to an Amazon
     * EMR Studio. Only specify a <code>UserRole</code> when you use Amazon Web
     * Services SSO authentication. The permissions attached to the
     * <code>UserRole</code> can be scoped down for each user or group using session
     * policies.</p>
     */
    inline bool UserRoleHasBeenSet() const { return m_userRoleHasBeenSet; }

    /**
     * <p>The IAM user role that users and groups assume when logged in to an Amazon
     * EMR Studio. Only specify a <code>UserRole</code> when you use Amazon Web
     * Services SSO authentication. The permissions attached to the
     * <code>UserRole</code> can be scoped down for each user or group using session
     * policies.</p>
     */
    inline void SetUserRole(const Aws::String& value) { m_userRoleHasBeenSet = true; m_userRole = value; }

    /**
     * <p>The IAM user role that users and groups assume when logged in to an Amazon
     * EMR Studio. Only specify a <code>UserRole</code> when you use Amazon Web
     * Services SSO authentication. The permissions attached to the
     * <code>UserRole</code> can be scoped down for each user or group using session
     * policies.</p>
     */
    inline void SetUserRole(Aws::String&& value) { m_userRoleHasBeenSet = true; m_userRole = std::move(value); }

    /**
     * <p>The IAM user role that users and groups assume when logged in to an Amazon
     * EMR Studio. Only specify a <code>UserRole</code> when you use Amazon Web
     * Services SSO authentication. The permissions attached to the
     * <code>UserRole</code> can be scoped down for each user or group using session
     * policies.</p>
     */
    inline void SetUserRole(const char* value) { m_userRoleHasBeenSet = true; m_userRole.assign(value); }

    /**
     * <p>The IAM user role that users and groups assume when logged in to an Amazon
     * EMR Studio. Only specify a <code>UserRole</code> when you use Amazon Web
     * Services SSO authentication. The permissions attached to the
     * <code>UserRole</code> can be scoped down for each user or group using session
     * policies.</p>
     */
    inline CreateStudioRequest& WithUserRole(const Aws::String& value) { SetUserRole(value); return *this;}

    /**
     * <p>The IAM user role that users and groups assume when logged in to an Amazon
     * EMR Studio. Only specify a <code>UserRole</code> when you use Amazon Web
     * Services SSO authentication. The permissions attached to the
     * <code>UserRole</code> can be scoped down for each user or group using session
     * policies.</p>
     */
    inline CreateStudioRequest& WithUserRole(Aws::String&& value) { SetUserRole(std::move(value)); return *this;}

    /**
     * <p>The IAM user role that users and groups assume when logged in to an Amazon
     * EMR Studio. Only specify a <code>UserRole</code> when you use Amazon Web
     * Services SSO authentication. The permissions attached to the
     * <code>UserRole</code> can be scoped down for each user or group using session
     * policies.</p>
     */
    inline CreateStudioRequest& WithUserRole(const char* value) { SetUserRole(value); return *this;}


    /**
     * <p>The ID of the Amazon EMR Studio Workspace security group. The Workspace
     * security group allows outbound network traffic to resources in the Engine
     * security group, and it must be in the same VPC specified by
     * <code>VpcId</code>.</p>
     */
    inline const Aws::String& GetWorkspaceSecurityGroupId() const{ return m_workspaceSecurityGroupId; }

    /**
     * <p>The ID of the Amazon EMR Studio Workspace security group. The Workspace
     * security group allows outbound network traffic to resources in the Engine
     * security group, and it must be in the same VPC specified by
     * <code>VpcId</code>.</p>
     */
    inline bool WorkspaceSecurityGroupIdHasBeenSet() const { return m_workspaceSecurityGroupIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon EMR Studio Workspace security group. The Workspace
     * security group allows outbound network traffic to resources in the Engine
     * security group, and it must be in the same VPC specified by
     * <code>VpcId</code>.</p>
     */
    inline void SetWorkspaceSecurityGroupId(const Aws::String& value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId = value; }

    /**
     * <p>The ID of the Amazon EMR Studio Workspace security group. The Workspace
     * security group allows outbound network traffic to resources in the Engine
     * security group, and it must be in the same VPC specified by
     * <code>VpcId</code>.</p>
     */
    inline void SetWorkspaceSecurityGroupId(Aws::String&& value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId = std::move(value); }

    /**
     * <p>The ID of the Amazon EMR Studio Workspace security group. The Workspace
     * security group allows outbound network traffic to resources in the Engine
     * security group, and it must be in the same VPC specified by
     * <code>VpcId</code>.</p>
     */
    inline void SetWorkspaceSecurityGroupId(const char* value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId.assign(value); }

    /**
     * <p>The ID of the Amazon EMR Studio Workspace security group. The Workspace
     * security group allows outbound network traffic to resources in the Engine
     * security group, and it must be in the same VPC specified by
     * <code>VpcId</code>.</p>
     */
    inline CreateStudioRequest& WithWorkspaceSecurityGroupId(const Aws::String& value) { SetWorkspaceSecurityGroupId(value); return *this;}

    /**
     * <p>The ID of the Amazon EMR Studio Workspace security group. The Workspace
     * security group allows outbound network traffic to resources in the Engine
     * security group, and it must be in the same VPC specified by
     * <code>VpcId</code>.</p>
     */
    inline CreateStudioRequest& WithWorkspaceSecurityGroupId(Aws::String&& value) { SetWorkspaceSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon EMR Studio Workspace security group. The Workspace
     * security group allows outbound network traffic to resources in the Engine
     * security group, and it must be in the same VPC specified by
     * <code>VpcId</code>.</p>
     */
    inline CreateStudioRequest& WithWorkspaceSecurityGroupId(const char* value) { SetWorkspaceSecurityGroupId(value); return *this;}


    /**
     * <p>The ID of the Amazon EMR Studio Engine security group. The Engine security
     * group allows inbound network traffic from the Workspace security group, and it
     * must be in the same VPC specified by <code>VpcId</code>.</p>
     */
    inline const Aws::String& GetEngineSecurityGroupId() const{ return m_engineSecurityGroupId; }

    /**
     * <p>The ID of the Amazon EMR Studio Engine security group. The Engine security
     * group allows inbound network traffic from the Workspace security group, and it
     * must be in the same VPC specified by <code>VpcId</code>.</p>
     */
    inline bool EngineSecurityGroupIdHasBeenSet() const { return m_engineSecurityGroupIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon EMR Studio Engine security group. The Engine security
     * group allows inbound network traffic from the Workspace security group, and it
     * must be in the same VPC specified by <code>VpcId</code>.</p>
     */
    inline void SetEngineSecurityGroupId(const Aws::String& value) { m_engineSecurityGroupIdHasBeenSet = true; m_engineSecurityGroupId = value; }

    /**
     * <p>The ID of the Amazon EMR Studio Engine security group. The Engine security
     * group allows inbound network traffic from the Workspace security group, and it
     * must be in the same VPC specified by <code>VpcId</code>.</p>
     */
    inline void SetEngineSecurityGroupId(Aws::String&& value) { m_engineSecurityGroupIdHasBeenSet = true; m_engineSecurityGroupId = std::move(value); }

    /**
     * <p>The ID of the Amazon EMR Studio Engine security group. The Engine security
     * group allows inbound network traffic from the Workspace security group, and it
     * must be in the same VPC specified by <code>VpcId</code>.</p>
     */
    inline void SetEngineSecurityGroupId(const char* value) { m_engineSecurityGroupIdHasBeenSet = true; m_engineSecurityGroupId.assign(value); }

    /**
     * <p>The ID of the Amazon EMR Studio Engine security group. The Engine security
     * group allows inbound network traffic from the Workspace security group, and it
     * must be in the same VPC specified by <code>VpcId</code>.</p>
     */
    inline CreateStudioRequest& WithEngineSecurityGroupId(const Aws::String& value) { SetEngineSecurityGroupId(value); return *this;}

    /**
     * <p>The ID of the Amazon EMR Studio Engine security group. The Engine security
     * group allows inbound network traffic from the Workspace security group, and it
     * must be in the same VPC specified by <code>VpcId</code>.</p>
     */
    inline CreateStudioRequest& WithEngineSecurityGroupId(Aws::String&& value) { SetEngineSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon EMR Studio Engine security group. The Engine security
     * group allows inbound network traffic from the Workspace security group, and it
     * must be in the same VPC specified by <code>VpcId</code>.</p>
     */
    inline CreateStudioRequest& WithEngineSecurityGroupId(const char* value) { SetEngineSecurityGroupId(value); return *this;}


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
    inline CreateStudioRequest& WithDefaultS3Location(const Aws::String& value) { SetDefaultS3Location(value); return *this;}

    /**
     * <p>The Amazon S3 location to back up Amazon EMR Studio Workspaces and notebook
     * files.</p>
     */
    inline CreateStudioRequest& WithDefaultS3Location(Aws::String&& value) { SetDefaultS3Location(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location to back up Amazon EMR Studio Workspaces and notebook
     * files.</p>
     */
    inline CreateStudioRequest& WithDefaultS3Location(const char* value) { SetDefaultS3Location(value); return *this;}


    /**
     * <p>The authentication endpoint of your identity provider (IdP). Specify this
     * value when you use IAM authentication and want to let federated users log in to
     * a Studio with the Studio URL and credentials from your IdP. Amazon EMR Studio
     * redirects users to this endpoint to enter credentials.</p>
     */
    inline const Aws::String& GetIdpAuthUrl() const{ return m_idpAuthUrl; }

    /**
     * <p>The authentication endpoint of your identity provider (IdP). Specify this
     * value when you use IAM authentication and want to let federated users log in to
     * a Studio with the Studio URL and credentials from your IdP. Amazon EMR Studio
     * redirects users to this endpoint to enter credentials.</p>
     */
    inline bool IdpAuthUrlHasBeenSet() const { return m_idpAuthUrlHasBeenSet; }

    /**
     * <p>The authentication endpoint of your identity provider (IdP). Specify this
     * value when you use IAM authentication and want to let federated users log in to
     * a Studio with the Studio URL and credentials from your IdP. Amazon EMR Studio
     * redirects users to this endpoint to enter credentials.</p>
     */
    inline void SetIdpAuthUrl(const Aws::String& value) { m_idpAuthUrlHasBeenSet = true; m_idpAuthUrl = value; }

    /**
     * <p>The authentication endpoint of your identity provider (IdP). Specify this
     * value when you use IAM authentication and want to let federated users log in to
     * a Studio with the Studio URL and credentials from your IdP. Amazon EMR Studio
     * redirects users to this endpoint to enter credentials.</p>
     */
    inline void SetIdpAuthUrl(Aws::String&& value) { m_idpAuthUrlHasBeenSet = true; m_idpAuthUrl = std::move(value); }

    /**
     * <p>The authentication endpoint of your identity provider (IdP). Specify this
     * value when you use IAM authentication and want to let federated users log in to
     * a Studio with the Studio URL and credentials from your IdP. Amazon EMR Studio
     * redirects users to this endpoint to enter credentials.</p>
     */
    inline void SetIdpAuthUrl(const char* value) { m_idpAuthUrlHasBeenSet = true; m_idpAuthUrl.assign(value); }

    /**
     * <p>The authentication endpoint of your identity provider (IdP). Specify this
     * value when you use IAM authentication and want to let federated users log in to
     * a Studio with the Studio URL and credentials from your IdP. Amazon EMR Studio
     * redirects users to this endpoint to enter credentials.</p>
     */
    inline CreateStudioRequest& WithIdpAuthUrl(const Aws::String& value) { SetIdpAuthUrl(value); return *this;}

    /**
     * <p>The authentication endpoint of your identity provider (IdP). Specify this
     * value when you use IAM authentication and want to let federated users log in to
     * a Studio with the Studio URL and credentials from your IdP. Amazon EMR Studio
     * redirects users to this endpoint to enter credentials.</p>
     */
    inline CreateStudioRequest& WithIdpAuthUrl(Aws::String&& value) { SetIdpAuthUrl(std::move(value)); return *this;}

    /**
     * <p>The authentication endpoint of your identity provider (IdP). Specify this
     * value when you use IAM authentication and want to let federated users log in to
     * a Studio with the Studio URL and credentials from your IdP. Amazon EMR Studio
     * redirects users to this endpoint to enter credentials.</p>
     */
    inline CreateStudioRequest& WithIdpAuthUrl(const char* value) { SetIdpAuthUrl(value); return *this;}


    /**
     * <p>The name that your identity provider (IdP) uses for its
     * <code>RelayState</code> parameter. For example, <code>RelayState</code> or
     * <code>TargetSource</code>. Specify this value when you use IAM authentication
     * and want to let federated users log in to a Studio using the Studio URL. The
     * <code>RelayState</code> parameter differs by IdP.</p>
     */
    inline const Aws::String& GetIdpRelayStateParameterName() const{ return m_idpRelayStateParameterName; }

    /**
     * <p>The name that your identity provider (IdP) uses for its
     * <code>RelayState</code> parameter. For example, <code>RelayState</code> or
     * <code>TargetSource</code>. Specify this value when you use IAM authentication
     * and want to let federated users log in to a Studio using the Studio URL. The
     * <code>RelayState</code> parameter differs by IdP.</p>
     */
    inline bool IdpRelayStateParameterNameHasBeenSet() const { return m_idpRelayStateParameterNameHasBeenSet; }

    /**
     * <p>The name that your identity provider (IdP) uses for its
     * <code>RelayState</code> parameter. For example, <code>RelayState</code> or
     * <code>TargetSource</code>. Specify this value when you use IAM authentication
     * and want to let federated users log in to a Studio using the Studio URL. The
     * <code>RelayState</code> parameter differs by IdP.</p>
     */
    inline void SetIdpRelayStateParameterName(const Aws::String& value) { m_idpRelayStateParameterNameHasBeenSet = true; m_idpRelayStateParameterName = value; }

    /**
     * <p>The name that your identity provider (IdP) uses for its
     * <code>RelayState</code> parameter. For example, <code>RelayState</code> or
     * <code>TargetSource</code>. Specify this value when you use IAM authentication
     * and want to let federated users log in to a Studio using the Studio URL. The
     * <code>RelayState</code> parameter differs by IdP.</p>
     */
    inline void SetIdpRelayStateParameterName(Aws::String&& value) { m_idpRelayStateParameterNameHasBeenSet = true; m_idpRelayStateParameterName = std::move(value); }

    /**
     * <p>The name that your identity provider (IdP) uses for its
     * <code>RelayState</code> parameter. For example, <code>RelayState</code> or
     * <code>TargetSource</code>. Specify this value when you use IAM authentication
     * and want to let federated users log in to a Studio using the Studio URL. The
     * <code>RelayState</code> parameter differs by IdP.</p>
     */
    inline void SetIdpRelayStateParameterName(const char* value) { m_idpRelayStateParameterNameHasBeenSet = true; m_idpRelayStateParameterName.assign(value); }

    /**
     * <p>The name that your identity provider (IdP) uses for its
     * <code>RelayState</code> parameter. For example, <code>RelayState</code> or
     * <code>TargetSource</code>. Specify this value when you use IAM authentication
     * and want to let federated users log in to a Studio using the Studio URL. The
     * <code>RelayState</code> parameter differs by IdP.</p>
     */
    inline CreateStudioRequest& WithIdpRelayStateParameterName(const Aws::String& value) { SetIdpRelayStateParameterName(value); return *this;}

    /**
     * <p>The name that your identity provider (IdP) uses for its
     * <code>RelayState</code> parameter. For example, <code>RelayState</code> or
     * <code>TargetSource</code>. Specify this value when you use IAM authentication
     * and want to let federated users log in to a Studio using the Studio URL. The
     * <code>RelayState</code> parameter differs by IdP.</p>
     */
    inline CreateStudioRequest& WithIdpRelayStateParameterName(Aws::String&& value) { SetIdpRelayStateParameterName(std::move(value)); return *this;}

    /**
     * <p>The name that your identity provider (IdP) uses for its
     * <code>RelayState</code> parameter. For example, <code>RelayState</code> or
     * <code>TargetSource</code>. Specify this value when you use IAM authentication
     * and want to let federated users log in to a Studio using the Studio URL. The
     * <code>RelayState</code> parameter differs by IdP.</p>
     */
    inline CreateStudioRequest& WithIdpRelayStateParameterName(const char* value) { SetIdpRelayStateParameterName(value); return *this;}


    /**
     * <p>A list of tags to associate with the Amazon EMR Studio. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters, and an optional value string with a maximum of 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to associate with the Amazon EMR Studio. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters, and an optional value string with a maximum of 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to associate with the Amazon EMR Studio. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters, and an optional value string with a maximum of 256 characters.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to associate with the Amazon EMR Studio. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters, and an optional value string with a maximum of 256 characters.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to associate with the Amazon EMR Studio. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters, and an optional value string with a maximum of 256 characters.</p>
     */
    inline CreateStudioRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to associate with the Amazon EMR Studio. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters, and an optional value string with a maximum of 256 characters.</p>
     */
    inline CreateStudioRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to associate with the Amazon EMR Studio. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters, and an optional value string with a maximum of 256 characters.</p>
     */
    inline CreateStudioRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to associate with the Amazon EMR Studio. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters, and an optional value string with a maximum of 256 characters.</p>
     */
    inline CreateStudioRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
