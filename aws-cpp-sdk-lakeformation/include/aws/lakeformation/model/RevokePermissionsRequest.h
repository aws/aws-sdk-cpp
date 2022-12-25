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
  class RevokePermissionsRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API RevokePermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokePermissions"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline RevokePermissionsRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline RevokePermissionsRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline RevokePermissionsRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The principal to be revoked permissions on the resource.</p>
     */
    inline const DataLakePrincipal& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The principal to be revoked permissions on the resource.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The principal to be revoked permissions on the resource.</p>
     */
    inline void SetPrincipal(const DataLakePrincipal& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The principal to be revoked permissions on the resource.</p>
     */
    inline void SetPrincipal(DataLakePrincipal&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The principal to be revoked permissions on the resource.</p>
     */
    inline RevokePermissionsRequest& WithPrincipal(const DataLakePrincipal& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The principal to be revoked permissions on the resource.</p>
     */
    inline RevokePermissionsRequest& WithPrincipal(DataLakePrincipal&& value) { SetPrincipal(std::move(value)); return *this;}


    /**
     * <p>The resource to which permissions are to be revoked.</p>
     */
    inline const Resource& GetResource() const{ return m_resource; }

    /**
     * <p>The resource to which permissions are to be revoked.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The resource to which permissions are to be revoked.</p>
     */
    inline void SetResource(const Resource& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The resource to which permissions are to be revoked.</p>
     */
    inline void SetResource(Resource&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The resource to which permissions are to be revoked.</p>
     */
    inline RevokePermissionsRequest& WithResource(const Resource& value) { SetResource(value); return *this;}

    /**
     * <p>The resource to which permissions are to be revoked.</p>
     */
    inline RevokePermissionsRequest& WithResource(Resource&& value) { SetResource(std::move(value)); return *this;}


    /**
     * <p>The permissions revoked to the principal on the resource. For information
     * about permissions, see <a
     * href="https://docs-aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security
     * and Access Control to Metadata and Data</a>.</p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>The permissions revoked to the principal on the resource. For information
     * about permissions, see <a
     * href="https://docs-aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security
     * and Access Control to Metadata and Data</a>.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>The permissions revoked to the principal on the resource. For information
     * about permissions, see <a
     * href="https://docs-aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security
     * and Access Control to Metadata and Data</a>.</p>
     */
    inline void SetPermissions(const Aws::Vector<Permission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>The permissions revoked to the principal on the resource. For information
     * about permissions, see <a
     * href="https://docs-aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security
     * and Access Control to Metadata and Data</a>.</p>
     */
    inline void SetPermissions(Aws::Vector<Permission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>The permissions revoked to the principal on the resource. For information
     * about permissions, see <a
     * href="https://docs-aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security
     * and Access Control to Metadata and Data</a>.</p>
     */
    inline RevokePermissionsRequest& WithPermissions(const Aws::Vector<Permission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>The permissions revoked to the principal on the resource. For information
     * about permissions, see <a
     * href="https://docs-aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security
     * and Access Control to Metadata and Data</a>.</p>
     */
    inline RevokePermissionsRequest& WithPermissions(Aws::Vector<Permission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>The permissions revoked to the principal on the resource. For information
     * about permissions, see <a
     * href="https://docs-aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security
     * and Access Control to Metadata and Data</a>.</p>
     */
    inline RevokePermissionsRequest& AddPermissions(const Permission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>The permissions revoked to the principal on the resource. For information
     * about permissions, see <a
     * href="https://docs-aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security
     * and Access Control to Metadata and Data</a>.</p>
     */
    inline RevokePermissionsRequest& AddPermissions(Permission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates a list of permissions for which to revoke the grant option allowing
     * the principal to pass permissions to other principals.</p>
     */
    inline const Aws::Vector<Permission>& GetPermissionsWithGrantOption() const{ return m_permissionsWithGrantOption; }

    /**
     * <p>Indicates a list of permissions for which to revoke the grant option allowing
     * the principal to pass permissions to other principals.</p>
     */
    inline bool PermissionsWithGrantOptionHasBeenSet() const { return m_permissionsWithGrantOptionHasBeenSet; }

    /**
     * <p>Indicates a list of permissions for which to revoke the grant option allowing
     * the principal to pass permissions to other principals.</p>
     */
    inline void SetPermissionsWithGrantOption(const Aws::Vector<Permission>& value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption = value; }

    /**
     * <p>Indicates a list of permissions for which to revoke the grant option allowing
     * the principal to pass permissions to other principals.</p>
     */
    inline void SetPermissionsWithGrantOption(Aws::Vector<Permission>&& value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption = std::move(value); }

    /**
     * <p>Indicates a list of permissions for which to revoke the grant option allowing
     * the principal to pass permissions to other principals.</p>
     */
    inline RevokePermissionsRequest& WithPermissionsWithGrantOption(const Aws::Vector<Permission>& value) { SetPermissionsWithGrantOption(value); return *this;}

    /**
     * <p>Indicates a list of permissions for which to revoke the grant option allowing
     * the principal to pass permissions to other principals.</p>
     */
    inline RevokePermissionsRequest& WithPermissionsWithGrantOption(Aws::Vector<Permission>&& value) { SetPermissionsWithGrantOption(std::move(value)); return *this;}

    /**
     * <p>Indicates a list of permissions for which to revoke the grant option allowing
     * the principal to pass permissions to other principals.</p>
     */
    inline RevokePermissionsRequest& AddPermissionsWithGrantOption(const Permission& value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption.push_back(value); return *this; }

    /**
     * <p>Indicates a list of permissions for which to revoke the grant option allowing
     * the principal to pass permissions to other principals.</p>
     */
    inline RevokePermissionsRequest& AddPermissionsWithGrantOption(Permission&& value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    DataLakePrincipal m_principal;
    bool m_principalHasBeenSet = false;

    Resource m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::Vector<Permission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    Aws::Vector<Permission> m_permissionsWithGrantOption;
    bool m_permissionsWithGrantOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
