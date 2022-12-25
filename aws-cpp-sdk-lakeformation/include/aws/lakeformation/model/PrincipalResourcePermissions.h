/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/DataLakePrincipal.h>
#include <aws/lakeformation/model/Resource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/DetailsMap.h>
#include <aws/lakeformation/model/Permission.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>The permissions granted or revoked on a resource.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/PrincipalResourcePermissions">AWS
   * API Reference</a></p>
   */
  class PrincipalResourcePermissions
  {
  public:
    AWS_LAKEFORMATION_API PrincipalResourcePermissions();
    AWS_LAKEFORMATION_API PrincipalResourcePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API PrincipalResourcePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Data Lake principal to be granted or revoked permissions.</p>
     */
    inline const DataLakePrincipal& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The Data Lake principal to be granted or revoked permissions.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The Data Lake principal to be granted or revoked permissions.</p>
     */
    inline void SetPrincipal(const DataLakePrincipal& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The Data Lake principal to be granted or revoked permissions.</p>
     */
    inline void SetPrincipal(DataLakePrincipal&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The Data Lake principal to be granted or revoked permissions.</p>
     */
    inline PrincipalResourcePermissions& WithPrincipal(const DataLakePrincipal& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The Data Lake principal to be granted or revoked permissions.</p>
     */
    inline PrincipalResourcePermissions& WithPrincipal(DataLakePrincipal&& value) { SetPrincipal(std::move(value)); return *this;}


    /**
     * <p>The resource where permissions are to be granted or revoked.</p>
     */
    inline const Resource& GetResource() const{ return m_resource; }

    /**
     * <p>The resource where permissions are to be granted or revoked.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The resource where permissions are to be granted or revoked.</p>
     */
    inline void SetResource(const Resource& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The resource where permissions are to be granted or revoked.</p>
     */
    inline void SetResource(Resource&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The resource where permissions are to be granted or revoked.</p>
     */
    inline PrincipalResourcePermissions& WithResource(const Resource& value) { SetResource(value); return *this;}

    /**
     * <p>The resource where permissions are to be granted or revoked.</p>
     */
    inline PrincipalResourcePermissions& WithResource(Resource&& value) { SetResource(std::move(value)); return *this;}


    /**
     * <p>The permissions to be granted or revoked on the resource.</p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>The permissions to be granted or revoked on the resource.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>The permissions to be granted or revoked on the resource.</p>
     */
    inline void SetPermissions(const Aws::Vector<Permission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>The permissions to be granted or revoked on the resource.</p>
     */
    inline void SetPermissions(Aws::Vector<Permission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>The permissions to be granted or revoked on the resource.</p>
     */
    inline PrincipalResourcePermissions& WithPermissions(const Aws::Vector<Permission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>The permissions to be granted or revoked on the resource.</p>
     */
    inline PrincipalResourcePermissions& WithPermissions(Aws::Vector<Permission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>The permissions to be granted or revoked on the resource.</p>
     */
    inline PrincipalResourcePermissions& AddPermissions(const Permission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>The permissions to be granted or revoked on the resource.</p>
     */
    inline PrincipalResourcePermissions& AddPermissions(Permission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether to grant the ability to grant permissions (as a subset of
     * permissions granted).</p>
     */
    inline const Aws::Vector<Permission>& GetPermissionsWithGrantOption() const{ return m_permissionsWithGrantOption; }

    /**
     * <p>Indicates whether to grant the ability to grant permissions (as a subset of
     * permissions granted).</p>
     */
    inline bool PermissionsWithGrantOptionHasBeenSet() const { return m_permissionsWithGrantOptionHasBeenSet; }

    /**
     * <p>Indicates whether to grant the ability to grant permissions (as a subset of
     * permissions granted).</p>
     */
    inline void SetPermissionsWithGrantOption(const Aws::Vector<Permission>& value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption = value; }

    /**
     * <p>Indicates whether to grant the ability to grant permissions (as a subset of
     * permissions granted).</p>
     */
    inline void SetPermissionsWithGrantOption(Aws::Vector<Permission>&& value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption = std::move(value); }

    /**
     * <p>Indicates whether to grant the ability to grant permissions (as a subset of
     * permissions granted).</p>
     */
    inline PrincipalResourcePermissions& WithPermissionsWithGrantOption(const Aws::Vector<Permission>& value) { SetPermissionsWithGrantOption(value); return *this;}

    /**
     * <p>Indicates whether to grant the ability to grant permissions (as a subset of
     * permissions granted).</p>
     */
    inline PrincipalResourcePermissions& WithPermissionsWithGrantOption(Aws::Vector<Permission>&& value) { SetPermissionsWithGrantOption(std::move(value)); return *this;}

    /**
     * <p>Indicates whether to grant the ability to grant permissions (as a subset of
     * permissions granted).</p>
     */
    inline PrincipalResourcePermissions& AddPermissionsWithGrantOption(const Permission& value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption.push_back(value); return *this; }

    /**
     * <p>Indicates whether to grant the ability to grant permissions (as a subset of
     * permissions granted).</p>
     */
    inline PrincipalResourcePermissions& AddPermissionsWithGrantOption(Permission&& value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption.push_back(std::move(value)); return *this; }


    /**
     * <p>This attribute can be used to return any additional details of
     * <code>PrincipalResourcePermissions</code>. Currently returns only as a RAM
     * resource share ARN.</p>
     */
    inline const DetailsMap& GetAdditionalDetails() const{ return m_additionalDetails; }

    /**
     * <p>This attribute can be used to return any additional details of
     * <code>PrincipalResourcePermissions</code>. Currently returns only as a RAM
     * resource share ARN.</p>
     */
    inline bool AdditionalDetailsHasBeenSet() const { return m_additionalDetailsHasBeenSet; }

    /**
     * <p>This attribute can be used to return any additional details of
     * <code>PrincipalResourcePermissions</code>. Currently returns only as a RAM
     * resource share ARN.</p>
     */
    inline void SetAdditionalDetails(const DetailsMap& value) { m_additionalDetailsHasBeenSet = true; m_additionalDetails = value; }

    /**
     * <p>This attribute can be used to return any additional details of
     * <code>PrincipalResourcePermissions</code>. Currently returns only as a RAM
     * resource share ARN.</p>
     */
    inline void SetAdditionalDetails(DetailsMap&& value) { m_additionalDetailsHasBeenSet = true; m_additionalDetails = std::move(value); }

    /**
     * <p>This attribute can be used to return any additional details of
     * <code>PrincipalResourcePermissions</code>. Currently returns only as a RAM
     * resource share ARN.</p>
     */
    inline PrincipalResourcePermissions& WithAdditionalDetails(const DetailsMap& value) { SetAdditionalDetails(value); return *this;}

    /**
     * <p>This attribute can be used to return any additional details of
     * <code>PrincipalResourcePermissions</code>. Currently returns only as a RAM
     * resource share ARN.</p>
     */
    inline PrincipalResourcePermissions& WithAdditionalDetails(DetailsMap&& value) { SetAdditionalDetails(std::move(value)); return *this;}

  private:

    DataLakePrincipal m_principal;
    bool m_principalHasBeenSet = false;

    Resource m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::Vector<Permission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    Aws::Vector<Permission> m_permissionsWithGrantOption;
    bool m_permissionsWithGrantOptionHasBeenSet = false;

    DetailsMap m_additionalDetails;
    bool m_additionalDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
