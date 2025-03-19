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
#include <aws/lakeformation/model/Condition.h>
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
    AWS_LAKEFORMATION_API BatchPermissionsRequestEntry() = default;
    AWS_LAKEFORMATION_API BatchPermissionsRequestEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API BatchPermissionsRequestEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the batch permissions request entry.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    BatchPermissionsRequestEntry& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal to be granted a permission.</p>
     */
    inline const DataLakePrincipal& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = DataLakePrincipal>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = DataLakePrincipal>
    BatchPermissionsRequestEntry& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource to which the principal is to be granted a permission.</p>
     */
    inline const Resource& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Resource>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Resource>
    BatchPermissionsRequestEntry& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions to be granted.</p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = Aws::Vector<Permission>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<Permission>>
    BatchPermissionsRequestEntry& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    inline BatchPermissionsRequestEntry& AddPermissions(Permission value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Condition& GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    template<typename ConditionT = Condition>
    void SetCondition(ConditionT&& value) { m_conditionHasBeenSet = true; m_condition = std::forward<ConditionT>(value); }
    template<typename ConditionT = Condition>
    BatchPermissionsRequestEntry& WithCondition(ConditionT&& value) { SetCondition(std::forward<ConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the option to pass permissions is granted.</p>
     */
    inline const Aws::Vector<Permission>& GetPermissionsWithGrantOption() const { return m_permissionsWithGrantOption; }
    inline bool PermissionsWithGrantOptionHasBeenSet() const { return m_permissionsWithGrantOptionHasBeenSet; }
    template<typename PermissionsWithGrantOptionT = Aws::Vector<Permission>>
    void SetPermissionsWithGrantOption(PermissionsWithGrantOptionT&& value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption = std::forward<PermissionsWithGrantOptionT>(value); }
    template<typename PermissionsWithGrantOptionT = Aws::Vector<Permission>>
    BatchPermissionsRequestEntry& WithPermissionsWithGrantOption(PermissionsWithGrantOptionT&& value) { SetPermissionsWithGrantOption(std::forward<PermissionsWithGrantOptionT>(value)); return *this;}
    inline BatchPermissionsRequestEntry& AddPermissionsWithGrantOption(Permission value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

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
