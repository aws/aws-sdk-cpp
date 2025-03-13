/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/DataLakePrincipal.h>
#include <aws/lakeformation/model/Resource.h>
#include <aws/lakeformation/model/Condition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/DetailsMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_LAKEFORMATION_API PrincipalResourcePermissions() = default;
    AWS_LAKEFORMATION_API PrincipalResourcePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API PrincipalResourcePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Data Lake principal to be granted or revoked permissions.</p>
     */
    inline const DataLakePrincipal& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = DataLakePrincipal>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = DataLakePrincipal>
    PrincipalResourcePermissions& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource where permissions are to be granted or revoked.</p>
     */
    inline const Resource& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Resource>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Resource>
    PrincipalResourcePermissions& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Lake Formation condition, which applies to permissions and opt-ins that
     * contain an expression.</p>
     */
    inline const Condition& GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    template<typename ConditionT = Condition>
    void SetCondition(ConditionT&& value) { m_conditionHasBeenSet = true; m_condition = std::forward<ConditionT>(value); }
    template<typename ConditionT = Condition>
    PrincipalResourcePermissions& WithCondition(ConditionT&& value) { SetCondition(std::forward<ConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions to be granted or revoked on the resource.</p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = Aws::Vector<Permission>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<Permission>>
    PrincipalResourcePermissions& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    inline PrincipalResourcePermissions& AddPermissions(Permission value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether to grant the ability to grant permissions (as a subset of
     * permissions granted).</p>
     */
    inline const Aws::Vector<Permission>& GetPermissionsWithGrantOption() const { return m_permissionsWithGrantOption; }
    inline bool PermissionsWithGrantOptionHasBeenSet() const { return m_permissionsWithGrantOptionHasBeenSet; }
    template<typename PermissionsWithGrantOptionT = Aws::Vector<Permission>>
    void SetPermissionsWithGrantOption(PermissionsWithGrantOptionT&& value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption = std::forward<PermissionsWithGrantOptionT>(value); }
    template<typename PermissionsWithGrantOptionT = Aws::Vector<Permission>>
    PrincipalResourcePermissions& WithPermissionsWithGrantOption(PermissionsWithGrantOptionT&& value) { SetPermissionsWithGrantOption(std::forward<PermissionsWithGrantOptionT>(value)); return *this;}
    inline PrincipalResourcePermissions& AddPermissionsWithGrantOption(Permission value) { m_permissionsWithGrantOptionHasBeenSet = true; m_permissionsWithGrantOption.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This attribute can be used to return any additional details of
     * <code>PrincipalResourcePermissions</code>. Currently returns only as a RAM
     * resource share ARN.</p>
     */
    inline const DetailsMap& GetAdditionalDetails() const { return m_additionalDetails; }
    inline bool AdditionalDetailsHasBeenSet() const { return m_additionalDetailsHasBeenSet; }
    template<typename AdditionalDetailsT = DetailsMap>
    void SetAdditionalDetails(AdditionalDetailsT&& value) { m_additionalDetailsHasBeenSet = true; m_additionalDetails = std::forward<AdditionalDetailsT>(value); }
    template<typename AdditionalDetailsT = DetailsMap>
    PrincipalResourcePermissions& WithAdditionalDetails(AdditionalDetailsT&& value) { SetAdditionalDetails(std::forward<AdditionalDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the resource was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    PrincipalResourcePermissions& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who updated the record.</p>
     */
    inline const Aws::String& GetLastUpdatedBy() const { return m_lastUpdatedBy; }
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }
    template<typename LastUpdatedByT = Aws::String>
    void SetLastUpdatedBy(LastUpdatedByT&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::forward<LastUpdatedByT>(value); }
    template<typename LastUpdatedByT = Aws::String>
    PrincipalResourcePermissions& WithLastUpdatedBy(LastUpdatedByT&& value) { SetLastUpdatedBy(std::forward<LastUpdatedByT>(value)); return *this;}
    ///@}
  private:

    DataLakePrincipal m_principal;
    bool m_principalHasBeenSet = false;

    Resource m_resource;
    bool m_resourceHasBeenSet = false;

    Condition m_condition;
    bool m_conditionHasBeenSet = false;

    Aws::Vector<Permission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    Aws::Vector<Permission> m_permissionsWithGrantOption;
    bool m_permissionsWithGrantOptionHasBeenSet = false;

    DetailsMap m_additionalDetails;
    bool m_additionalDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_lastUpdatedBy;
    bool m_lastUpdatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
