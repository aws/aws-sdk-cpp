/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/PrincipalType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workdocs/model/PermissionInfo.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/Principal">AWS
   * API Reference</a></p>
   */
  class Principal
  {
  public:
    AWS_WORKDOCS_API Principal();
    AWS_WORKDOCS_API Principal(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Principal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline Principal& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline Principal& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline Principal& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of resource.</p>
     */
    inline const PrincipalType& GetType() const{ return m_type; }

    /**
     * <p>The type of resource.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetType(const PrincipalType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetType(PrincipalType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of resource.</p>
     */
    inline Principal& WithType(const PrincipalType& value) { SetType(value); return *this;}

    /**
     * <p>The type of resource.</p>
     */
    inline Principal& WithType(PrincipalType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The permission information for the resource.</p>
     */
    inline const Aws::Vector<PermissionInfo>& GetRoles() const{ return m_roles; }

    /**
     * <p>The permission information for the resource.</p>
     */
    inline bool RolesHasBeenSet() const { return m_rolesHasBeenSet; }

    /**
     * <p>The permission information for the resource.</p>
     */
    inline void SetRoles(const Aws::Vector<PermissionInfo>& value) { m_rolesHasBeenSet = true; m_roles = value; }

    /**
     * <p>The permission information for the resource.</p>
     */
    inline void SetRoles(Aws::Vector<PermissionInfo>&& value) { m_rolesHasBeenSet = true; m_roles = std::move(value); }

    /**
     * <p>The permission information for the resource.</p>
     */
    inline Principal& WithRoles(const Aws::Vector<PermissionInfo>& value) { SetRoles(value); return *this;}

    /**
     * <p>The permission information for the resource.</p>
     */
    inline Principal& WithRoles(Aws::Vector<PermissionInfo>&& value) { SetRoles(std::move(value)); return *this;}

    /**
     * <p>The permission information for the resource.</p>
     */
    inline Principal& AddRoles(const PermissionInfo& value) { m_rolesHasBeenSet = true; m_roles.push_back(value); return *this; }

    /**
     * <p>The permission information for the resource.</p>
     */
    inline Principal& AddRoles(PermissionInfo&& value) { m_rolesHasBeenSet = true; m_roles.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    PrincipalType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<PermissionInfo> m_roles;
    bool m_rolesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
