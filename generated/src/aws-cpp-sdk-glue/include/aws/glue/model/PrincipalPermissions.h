/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataLakePrincipal.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/Permission.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Permissions granted to a principal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PrincipalPermissions">AWS
   * API Reference</a></p>
   */
  class PrincipalPermissions
  {
  public:
    AWS_GLUE_API PrincipalPermissions();
    AWS_GLUE_API PrincipalPermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API PrincipalPermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The principal who is granted permissions.</p>
     */
    inline const DataLakePrincipal& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The principal who is granted permissions.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The principal who is granted permissions.</p>
     */
    inline void SetPrincipal(const DataLakePrincipal& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The principal who is granted permissions.</p>
     */
    inline void SetPrincipal(DataLakePrincipal&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The principal who is granted permissions.</p>
     */
    inline PrincipalPermissions& WithPrincipal(const DataLakePrincipal& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The principal who is granted permissions.</p>
     */
    inline PrincipalPermissions& WithPrincipal(DataLakePrincipal&& value) { SetPrincipal(std::move(value)); return *this;}


    /**
     * <p>The permissions that are granted to the principal.</p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>The permissions that are granted to the principal.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>The permissions that are granted to the principal.</p>
     */
    inline void SetPermissions(const Aws::Vector<Permission>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>The permissions that are granted to the principal.</p>
     */
    inline void SetPermissions(Aws::Vector<Permission>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>The permissions that are granted to the principal.</p>
     */
    inline PrincipalPermissions& WithPermissions(const Aws::Vector<Permission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>The permissions that are granted to the principal.</p>
     */
    inline PrincipalPermissions& WithPermissions(Aws::Vector<Permission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>The permissions that are granted to the principal.</p>
     */
    inline PrincipalPermissions& AddPermissions(const Permission& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>The permissions that are granted to the principal.</p>
     */
    inline PrincipalPermissions& AddPermissions(Permission&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }

  private:

    DataLakePrincipal m_principal;
    bool m_principalHasBeenSet = false;

    Aws::Vector<Permission> m_permissions;
    bool m_permissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
