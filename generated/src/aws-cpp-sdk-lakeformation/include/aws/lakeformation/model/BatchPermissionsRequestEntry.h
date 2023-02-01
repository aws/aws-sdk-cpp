/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/DataLakePrincipal.h>
#include <aws/lakeformation/model/Resource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A permission to a resource granted by batch operation to the
   * principal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/BatchPermissionsRequestEntry">AWS
   * API Reference</a></p>
   */
  class BatchPermissionsRequestEntry
  {
  public:
    AWS_LAKEFORMATION_API BatchPermissionsRequestEntry();
    AWS_LAKEFORMATION_API BatchPermissionsRequestEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API BatchPermissionsRequestEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the batch permissions request entry.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier for the batch permissions request entry.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique identifier for the batch permissions request entry.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique identifier for the batch permissions request entry.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique identifier for the batch permissions request entry.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique identifier for the batch permissions request entry.</p>
     */
    inline BatchPermissionsRequestEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier for the batch permissions request entry.</p>
     */
    inline BatchPermissionsRequestEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the batch permissions request entry.</p>
     */
    inline BatchPermissionsRequestEntry& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The principal to be granted a permission.</p>
     */
    inline const DataLakePrincipal& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The principal to be granted a permission.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The principal to be granted a permission.</p>
     */
    inline void SetPrincipal(const DataLakePrincipal& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The principal to be granted a permission.</p>
     */
    inline void SetPrincipal(DataLakePrincipal&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The principal to be granted a permission.</p>
     */
    inline BatchPermissionsRequestEntry& WithPrincipal(const DataLakePrincipal& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The principal to be granted a permission.</p>
     */
    inline BatchPermissionsRequestEntry& WithPrincipal(DataLakePrincipal&& value) { SetPrincipal(std::move(value)); return *this;}


    /**
     * <p>The resource to which the principal is to be granted a permission.</p>
     */
    inline const Resource& GetResource() const{ return m_resource; }

    /**
     * <p>The resource to which the principal is to be granted a permission.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The resource to which the principal is to be granted a permission.</p>
     */
    inline void SetResource(const Resource& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The resource to which the principal is to be granted a permission.</p>
     */
    inline void SetResource(Resource&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The resource to which the principal is to be granted a permission.</p>
     */
    inline BatchPermissionsRequestEntry& WithResource(const Resource& value) { SetResource(value); return *this;}

    /**
     * <p>The resource to which the principal is to be granted a permission.</p>
     */
    inline BatchPermissionsRequestEntry& WithResource(Resource&& value) { SetResource(std::move(value)); return *this;}


    /**
     * <p>The permissions to be granted.</p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>The permissions to be granted.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>The permissions to be granted.</p>
     */
    inline void SetPermissions(const Aws::Vector<Permission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>The permissions to be granted.</p>
     */
    inline void SetPermissions(Aws::Vector<Permission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>The permissions to be granted.</p>
     */
    inline BatchPermissionsRequestEntry& WithPermissions(const Aws::Vector<Permission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>The permissions to be granted.</p>
     */
    inline BatchPermissionsRequestEntry& WithPermissions(Aws::Vector<Permission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>The permissions to be granted.</p>
     */
    inline BatchPermissionsRequestEntry& AddPermissions(const Permission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>The permissions to be granted.</p>
     */
    inline BatchPermissionsRequestEntry& AddPermissions(Permission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates if the option to pass permissions is granted.</p>
     */
    inline const Aws::Vector<Permission>& GetPermissionsWithGrantOption() const{ return m_permissionsWithGrantOption; }

    /**
     * <p>Indicates if the option to pass permissions is granted.</p>
     */
    inline bool PermissionsWithGrantOptionHasBeenSet() const { return m_permissionsWithGrantOptionHasBeenSet; }

    /**
     * <p>Indicates if the option to pass permissions is granted.</p>
     */
    inline void SetPermissionsWithGrantOption(const Aws::Vector<Permission>& value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption = value; }

    /**
     * <p>Indicates if the option to pass permissions is granted.</p>
     */
    inline void SetPermissionsWithGrantOption(Aws::Vector<Permission>&& value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption = std::move(value); }

    /**
     * <p>Indicates if the option to pass permissions is granted.</p>
     */
    inline BatchPermissionsRequestEntry& WithPermissionsWithGrantOption(const Aws::Vector<Permission>& value) { SetPermissionsWithGrantOption(value); return *this;}

    /**
     * <p>Indicates if the option to pass permissions is granted.</p>
     */
    inline BatchPermissionsRequestEntry& WithPermissionsWithGrantOption(Aws::Vector<Permission>&& value) { SetPermissionsWithGrantOption(std::move(value)); return *this;}

    /**
     * <p>Indicates if the option to pass permissions is granted.</p>
     */
    inline BatchPermissionsRequestEntry& AddPermissionsWithGrantOption(const Permission& value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption.push_back(value); return *this; }

    /**
     * <p>Indicates if the option to pass permissions is granted.</p>
     */
    inline BatchPermissionsRequestEntry& AddPermissionsWithGrantOption(Permission&& value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

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
