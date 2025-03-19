/**
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
    AWS_LAKEFORMATION_API GrantPermissionsRequest() = default;

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
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    GrantPermissionsRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal to be granted the permissions on the resource. Supported
     * principals are IAM users or IAM roles, and they are defined by their principal
     * type and their ARN.</p> <p>Note that if you define a resource with a particular
     * ARN, then later delete, and recreate a resource with that same ARN, the resource
     * maintains the permissions already granted. </p>
     */
    inline const DataLakePrincipal& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = DataLakePrincipal>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = DataLakePrincipal>
    GrantPermissionsRequest& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource to which permissions are to be granted. Resources in Lake
     * Formation are the Data Catalog, databases, and tables.</p>
     */
    inline const Resource& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Resource>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Resource>
    GrantPermissionsRequest& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions granted to the principal on the resource. Lake Formation
     * defines privileges to grant and revoke access to metadata in the Data Catalog
     * and data organized in underlying data storage such as Amazon S3. Lake Formation
     * requires that each principal be authorized to perform a specific task on Lake
     * Formation resources. </p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = Aws::Vector<Permission>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<Permission>>
    GrantPermissionsRequest& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    inline GrantPermissionsRequest& AddPermissions(Permission value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Condition& GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    template<typename ConditionT = Condition>
    void SetCondition(ConditionT&& value) { m_conditionHasBeenSet = true; m_condition = std::forward<ConditionT>(value); }
    template<typename ConditionT = Condition>
    GrantPermissionsRequest& WithCondition(ConditionT&& value) { SetCondition(std::forward<ConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates a list of the granted permissions that the principal may pass to
     * other users. These permissions may only be a subset of the permissions granted
     * in the <code>Privileges</code>.</p>
     */
    inline const Aws::Vector<Permission>& GetPermissionsWithGrantOption() const { return m_permissionsWithGrantOption; }
    inline bool PermissionsWithGrantOptionHasBeenSet() const { return m_permissionsWithGrantOptionHasBeenSet; }
    template<typename PermissionsWithGrantOptionT = Aws::Vector<Permission>>
    void SetPermissionsWithGrantOption(PermissionsWithGrantOptionT&& value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption = std::forward<PermissionsWithGrantOptionT>(value); }
    template<typename PermissionsWithGrantOptionT = Aws::Vector<Permission>>
    GrantPermissionsRequest& WithPermissionsWithGrantOption(PermissionsWithGrantOptionT&& value) { SetPermissionsWithGrantOption(std::forward<PermissionsWithGrantOptionT>(value)); return *this;}
    inline GrantPermissionsRequest& AddPermissionsWithGrantOption(Permission value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption.push_back(value); return *this; }
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
