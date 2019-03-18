/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GLACIER_API Grant
  {
  public:
    Grant();
    Grant(Aws::Utils::Json::JsonView jsonValue);
    Grant& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_granteeHasBeenSet;

    Permission m_permission;
    bool m_permissionHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
