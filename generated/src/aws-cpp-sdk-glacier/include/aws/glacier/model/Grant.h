/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/model/Grantee.h>
#include <aws/glacier/model/Permission.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>Contains information about a grant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/Grant">AWS API
   * Reference</a></p>
   */
  class Grant
  {
  public:
    AWS_GLACIER_API Grant();
    AWS_GLACIER_API Grant(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Grant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The grantee.</p>
     */
    inline const Grantee& GetGrantee() const{ return m_grantee; }

    /**
     * <p>The grantee.</p>
     */
    inline bool GranteeHasBeenSet() const { return m_granteeHasBeenSet; }

    /**
     * <p>The grantee.</p>
     */
    inline void SetGrantee(const Grantee& value) { m_granteeHasBeenSet = true; m_grantee = value; }

    /**
     * <p>The grantee.</p>
     */
    inline void SetGrantee(Grantee&& value) { m_granteeHasBeenSet = true; m_grantee = std::move(value); }

    /**
     * <p>The grantee.</p>
     */
    inline Grant& WithGrantee(const Grantee& value) { SetGrantee(value); return *this;}

    /**
     * <p>The grantee.</p>
     */
    inline Grant& WithGrantee(Grantee&& value) { SetGrantee(std::move(value)); return *this;}


    /**
     * <p>Specifies the permission given to the grantee. </p>
     */
    inline const Permission& GetPermission() const{ return m_permission; }

    /**
     * <p>Specifies the permission given to the grantee. </p>
     */
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }

    /**
     * <p>Specifies the permission given to the grantee. </p>
     */
    inline void SetPermission(const Permission& value) { m_permissionHasBeenSet = true; m_permission = value; }

    /**
     * <p>Specifies the permission given to the grantee. </p>
     */
    inline void SetPermission(Permission&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }

    /**
     * <p>Specifies the permission given to the grantee. </p>
     */
    inline Grant& WithPermission(const Permission& value) { SetPermission(value); return *this;}

    /**
     * <p>Specifies the permission given to the grantee. </p>
     */
    inline Grant& WithPermission(Permission&& value) { SetPermission(std::move(value)); return *this;}

  private:

    Grantee m_grantee;
    bool m_granteeHasBeenSet = false;

    Permission m_permission;
    bool m_permissionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
