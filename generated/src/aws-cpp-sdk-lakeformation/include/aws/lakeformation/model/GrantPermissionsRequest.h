﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/DataLakePrincipal.h>
#include <aws/lakeformation/model/Resource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/Condition.h>
#include <aws/lakeformation/model/Permission.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class GrantPermissionsRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API GrantPermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GrantPermissions"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline GrantPermissionsRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline GrantPermissionsRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline GrantPermissionsRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal to be granted the permissions on the resource. Supported
     * principals are IAM users or IAM roles, and they are defined by their principal
     * type and their ARN.</p> <p>Note that if you define a resource with a particular
     * ARN, then later delete, and recreate a resource with that same ARN, the resource
     * maintains the permissions already granted. </p>
     */
    inline const DataLakePrincipal& GetPrincipal() const{ return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    inline void SetPrincipal(const DataLakePrincipal& value) { m_principalHasBeenSet = true; m_principal = value; }
    inline void SetPrincipal(DataLakePrincipal&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }
    inline GrantPermissionsRequest& WithPrincipal(const DataLakePrincipal& value) { SetPrincipal(value); return *this;}
    inline GrantPermissionsRequest& WithPrincipal(DataLakePrincipal&& value) { SetPrincipal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource to which permissions are to be granted. Resources in Lake
     * Formation are the Data Catalog, databases, and tables.</p>
     */
    inline const Resource& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const Resource& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(Resource&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline GrantPermissionsRequest& WithResource(const Resource& value) { SetResource(value); return *this;}
    inline GrantPermissionsRequest& WithResource(Resource&& value) { SetResource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions granted to the principal on the resource. Lake Formation
     * defines privileges to grant and revoke access to metadata in the Data Catalog
     * and data organized in underlying data storage such as Amazon S3. Lake Formation
     * requires that each principal be authorized to perform a specific task on Lake
     * Formation resources. </p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const{ return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    inline void SetPermissions(const Aws::Vector<Permission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }
    inline void SetPermissions(Aws::Vector<Permission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }
    inline GrantPermissionsRequest& WithPermissions(const Aws::Vector<Permission>& value) { SetPermissions(value); return *this;}
    inline GrantPermissionsRequest& WithPermissions(Aws::Vector<Permission>&& value) { SetPermissions(std::move(value)); return *this;}
    inline GrantPermissionsRequest& AddPermissions(const Permission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }
    inline GrantPermissionsRequest& AddPermissions(Permission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Condition& GetCondition() const{ return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(const Condition& value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline void SetCondition(Condition&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }
    inline GrantPermissionsRequest& WithCondition(const Condition& value) { SetCondition(value); return *this;}
    inline GrantPermissionsRequest& WithCondition(Condition&& value) { SetCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates a list of the granted permissions that the principal may pass to
     * other users. These permissions may only be a subset of the permissions granted
     * in the <code>Privileges</code>.</p>
     */
    inline const Aws::Vector<Permission>& GetPermissionsWithGrantOption() const{ return m_permissionsWithGrantOption; }
    inline bool PermissionsWithGrantOptionHasBeenSet() const { return m_permissionsWithGrantOptionHasBeenSet; }
    inline void SetPermissionsWithGrantOption(const Aws::Vector<Permission>& value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption = value; }
    inline void SetPermissionsWithGrantOption(Aws::Vector<Permission>&& value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption = std::move(value); }
    inline GrantPermissionsRequest& WithPermissionsWithGrantOption(const Aws::Vector<Permission>& value) { SetPermissionsWithGrantOption(value); return *this;}
    inline GrantPermissionsRequest& WithPermissionsWithGrantOption(Aws::Vector<Permission>&& value) { SetPermissionsWithGrantOption(std::move(value)); return *this;}
    inline GrantPermissionsRequest& AddPermissionsWithGrantOption(const Permission& value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption.push_back(value); return *this; }
    inline GrantPermissionsRequest& AddPermissionsWithGrantOption(Permission&& value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    DataLakePrincipal m_principal;
    bool m_principalHasBeenSet = false;

    Resource m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::Vector<Permission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    Condition m_condition;
    bool m_conditionHasBeenSet = false;

    Aws::Vector<Permission> m_permissionsWithGrantOption;
    bool m_permissionsWithGrantOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
