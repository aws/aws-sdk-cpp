/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AddToProjectMemberPoolPolicyGrantDetail.h>
#include <aws/datazone/model/CreateAssetTypePolicyGrantDetail.h>
#include <aws/datazone/model/CreateDomainUnitPolicyGrantDetail.h>
#include <aws/datazone/model/Unit.h>
#include <aws/datazone/model/CreateEnvironmentProfilePolicyGrantDetail.h>
#include <aws/datazone/model/CreateFormTypePolicyGrantDetail.h>
#include <aws/datazone/model/CreateGlossaryPolicyGrantDetail.h>
#include <aws/datazone/model/CreateProjectPolicyGrantDetail.h>
#include <aws/datazone/model/CreateProjectFromProjectProfilePolicyGrantDetail.h>
#include <aws/datazone/model/OverrideDomainUnitOwnersPolicyGrantDetail.h>
#include <aws/datazone/model/OverrideProjectOwnersPolicyGrantDetail.h>
#include <aws/datazone/model/UseAssetTypePolicyGrantDetail.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of the policy grant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/PolicyGrantDetail">AWS
   * API Reference</a></p>
   */
  class PolicyGrantDetail
  {
  public:
    AWS_DATAZONE_API PolicyGrantDetail() = default;
    AWS_DATAZONE_API PolicyGrantDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API PolicyGrantDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies that the policy grant is to be added to the members of the
     * project.</p>
     */
    inline const AddToProjectMemberPoolPolicyGrantDetail& GetAddToProjectMemberPool() const { return m_addToProjectMemberPool; }
    inline bool AddToProjectMemberPoolHasBeenSet() const { return m_addToProjectMemberPoolHasBeenSet; }
    template<typename AddToProjectMemberPoolT = AddToProjectMemberPoolPolicyGrantDetail>
    void SetAddToProjectMemberPool(AddToProjectMemberPoolT&& value) { m_addToProjectMemberPoolHasBeenSet = true; m_addToProjectMemberPool = std::forward<AddToProjectMemberPoolT>(value); }
    template<typename AddToProjectMemberPoolT = AddToProjectMemberPoolPolicyGrantDetail>
    PolicyGrantDetail& WithAddToProjectMemberPool(AddToProjectMemberPoolT&& value) { SetAddToProjectMemberPool(std::forward<AddToProjectMemberPoolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that this is a create asset type policy.</p>
     */
    inline const CreateAssetTypePolicyGrantDetail& GetCreateAssetType() const { return m_createAssetType; }
    inline bool CreateAssetTypeHasBeenSet() const { return m_createAssetTypeHasBeenSet; }
    template<typename CreateAssetTypeT = CreateAssetTypePolicyGrantDetail>
    void SetCreateAssetType(CreateAssetTypeT&& value) { m_createAssetTypeHasBeenSet = true; m_createAssetType = std::forward<CreateAssetTypeT>(value); }
    template<typename CreateAssetTypeT = CreateAssetTypePolicyGrantDetail>
    PolicyGrantDetail& WithCreateAssetType(CreateAssetTypeT&& value) { SetCreateAssetType(std::forward<CreateAssetTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that this is a create domain unit policy.</p>
     */
    inline const CreateDomainUnitPolicyGrantDetail& GetCreateDomainUnit() const { return m_createDomainUnit; }
    inline bool CreateDomainUnitHasBeenSet() const { return m_createDomainUnitHasBeenSet; }
    template<typename CreateDomainUnitT = CreateDomainUnitPolicyGrantDetail>
    void SetCreateDomainUnit(CreateDomainUnitT&& value) { m_createDomainUnitHasBeenSet = true; m_createDomainUnit = std::forward<CreateDomainUnitT>(value); }
    template<typename CreateDomainUnitT = CreateDomainUnitPolicyGrantDetail>
    PolicyGrantDetail& WithCreateDomainUnit(CreateDomainUnitT&& value) { SetCreateDomainUnit(std::forward<CreateDomainUnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that this is a create environment policy.</p>
     */
    inline const Unit& GetCreateEnvironment() const { return m_createEnvironment; }
    inline bool CreateEnvironmentHasBeenSet() const { return m_createEnvironmentHasBeenSet; }
    template<typename CreateEnvironmentT = Unit>
    void SetCreateEnvironment(CreateEnvironmentT&& value) { m_createEnvironmentHasBeenSet = true; m_createEnvironment = std::forward<CreateEnvironmentT>(value); }
    template<typename CreateEnvironmentT = Unit>
    PolicyGrantDetail& WithCreateEnvironment(CreateEnvironmentT&& value) { SetCreateEnvironment(std::forward<CreateEnvironmentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Unit& GetCreateEnvironmentFromBlueprint() const { return m_createEnvironmentFromBlueprint; }
    inline bool CreateEnvironmentFromBlueprintHasBeenSet() const { return m_createEnvironmentFromBlueprintHasBeenSet; }
    template<typename CreateEnvironmentFromBlueprintT = Unit>
    void SetCreateEnvironmentFromBlueprint(CreateEnvironmentFromBlueprintT&& value) { m_createEnvironmentFromBlueprintHasBeenSet = true; m_createEnvironmentFromBlueprint = std::forward<CreateEnvironmentFromBlueprintT>(value); }
    template<typename CreateEnvironmentFromBlueprintT = Unit>
    PolicyGrantDetail& WithCreateEnvironmentFromBlueprint(CreateEnvironmentFromBlueprintT&& value) { SetCreateEnvironmentFromBlueprint(std::forward<CreateEnvironmentFromBlueprintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that this is a create environment profile policy.</p>
     */
    inline const CreateEnvironmentProfilePolicyGrantDetail& GetCreateEnvironmentProfile() const { return m_createEnvironmentProfile; }
    inline bool CreateEnvironmentProfileHasBeenSet() const { return m_createEnvironmentProfileHasBeenSet; }
    template<typename CreateEnvironmentProfileT = CreateEnvironmentProfilePolicyGrantDetail>
    void SetCreateEnvironmentProfile(CreateEnvironmentProfileT&& value) { m_createEnvironmentProfileHasBeenSet = true; m_createEnvironmentProfile = std::forward<CreateEnvironmentProfileT>(value); }
    template<typename CreateEnvironmentProfileT = CreateEnvironmentProfilePolicyGrantDetail>
    PolicyGrantDetail& WithCreateEnvironmentProfile(CreateEnvironmentProfileT&& value) { SetCreateEnvironmentProfile(std::forward<CreateEnvironmentProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that this is a create form type policy.</p>
     */
    inline const CreateFormTypePolicyGrantDetail& GetCreateFormType() const { return m_createFormType; }
    inline bool CreateFormTypeHasBeenSet() const { return m_createFormTypeHasBeenSet; }
    template<typename CreateFormTypeT = CreateFormTypePolicyGrantDetail>
    void SetCreateFormType(CreateFormTypeT&& value) { m_createFormTypeHasBeenSet = true; m_createFormType = std::forward<CreateFormTypeT>(value); }
    template<typename CreateFormTypeT = CreateFormTypePolicyGrantDetail>
    PolicyGrantDetail& WithCreateFormType(CreateFormTypeT&& value) { SetCreateFormType(std::forward<CreateFormTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies that this is a create glossary policy.</p>
     */
    inline const CreateGlossaryPolicyGrantDetail& GetCreateGlossary() const { return m_createGlossary; }
    inline bool CreateGlossaryHasBeenSet() const { return m_createGlossaryHasBeenSet; }
    template<typename CreateGlossaryT = CreateGlossaryPolicyGrantDetail>
    void SetCreateGlossary(CreateGlossaryT&& value) { m_createGlossaryHasBeenSet = true; m_createGlossary = std::forward<CreateGlossaryT>(value); }
    template<typename CreateGlossaryT = CreateGlossaryPolicyGrantDetail>
    PolicyGrantDetail& WithCreateGlossary(CreateGlossaryT&& value) { SetCreateGlossary(std::forward<CreateGlossaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that this is a create project policy.</p>
     */
    inline const CreateProjectPolicyGrantDetail& GetCreateProject() const { return m_createProject; }
    inline bool CreateProjectHasBeenSet() const { return m_createProjectHasBeenSet; }
    template<typename CreateProjectT = CreateProjectPolicyGrantDetail>
    void SetCreateProject(CreateProjectT&& value) { m_createProjectHasBeenSet = true; m_createProject = std::forward<CreateProjectT>(value); }
    template<typename CreateProjectT = CreateProjectPolicyGrantDetail>
    PolicyGrantDetail& WithCreateProject(CreateProjectT&& value) { SetCreateProject(std::forward<CreateProjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to create a project from project profile.</p>
     */
    inline const CreateProjectFromProjectProfilePolicyGrantDetail& GetCreateProjectFromProjectProfile() const { return m_createProjectFromProjectProfile; }
    inline bool CreateProjectFromProjectProfileHasBeenSet() const { return m_createProjectFromProjectProfileHasBeenSet; }
    template<typename CreateProjectFromProjectProfileT = CreateProjectFromProjectProfilePolicyGrantDetail>
    void SetCreateProjectFromProjectProfile(CreateProjectFromProjectProfileT&& value) { m_createProjectFromProjectProfileHasBeenSet = true; m_createProjectFromProjectProfile = std::forward<CreateProjectFromProjectProfileT>(value); }
    template<typename CreateProjectFromProjectProfileT = CreateProjectFromProjectProfilePolicyGrantDetail>
    PolicyGrantDetail& WithCreateProjectFromProjectProfile(CreateProjectFromProjectProfileT&& value) { SetCreateProjectFromProjectProfile(std::forward<CreateProjectFromProjectProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that this is the delegation of the create environment profile
     * policy.</p>
     */
    inline const Unit& GetDelegateCreateEnvironmentProfile() const { return m_delegateCreateEnvironmentProfile; }
    inline bool DelegateCreateEnvironmentProfileHasBeenSet() const { return m_delegateCreateEnvironmentProfileHasBeenSet; }
    template<typename DelegateCreateEnvironmentProfileT = Unit>
    void SetDelegateCreateEnvironmentProfile(DelegateCreateEnvironmentProfileT&& value) { m_delegateCreateEnvironmentProfileHasBeenSet = true; m_delegateCreateEnvironmentProfile = std::forward<DelegateCreateEnvironmentProfileT>(value); }
    template<typename DelegateCreateEnvironmentProfileT = Unit>
    PolicyGrantDetail& WithDelegateCreateEnvironmentProfile(DelegateCreateEnvironmentProfileT&& value) { SetDelegateCreateEnvironmentProfile(std::forward<DelegateCreateEnvironmentProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to override domain unit owners.</p>
     */
    inline const OverrideDomainUnitOwnersPolicyGrantDetail& GetOverrideDomainUnitOwners() const { return m_overrideDomainUnitOwners; }
    inline bool OverrideDomainUnitOwnersHasBeenSet() const { return m_overrideDomainUnitOwnersHasBeenSet; }
    template<typename OverrideDomainUnitOwnersT = OverrideDomainUnitOwnersPolicyGrantDetail>
    void SetOverrideDomainUnitOwners(OverrideDomainUnitOwnersT&& value) { m_overrideDomainUnitOwnersHasBeenSet = true; m_overrideDomainUnitOwners = std::forward<OverrideDomainUnitOwnersT>(value); }
    template<typename OverrideDomainUnitOwnersT = OverrideDomainUnitOwnersPolicyGrantDetail>
    PolicyGrantDetail& WithOverrideDomainUnitOwners(OverrideDomainUnitOwnersT&& value) { SetOverrideDomainUnitOwners(std::forward<OverrideDomainUnitOwnersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to override project owners.</p>
     */
    inline const OverrideProjectOwnersPolicyGrantDetail& GetOverrideProjectOwners() const { return m_overrideProjectOwners; }
    inline bool OverrideProjectOwnersHasBeenSet() const { return m_overrideProjectOwnersHasBeenSet; }
    template<typename OverrideProjectOwnersT = OverrideProjectOwnersPolicyGrantDetail>
    void SetOverrideProjectOwners(OverrideProjectOwnersT&& value) { m_overrideProjectOwnersHasBeenSet = true; m_overrideProjectOwners = std::forward<OverrideProjectOwnersT>(value); }
    template<typename OverrideProjectOwnersT = OverrideProjectOwnersPolicyGrantDetail>
    PolicyGrantDetail& WithOverrideProjectOwners(OverrideProjectOwnersT&& value) { SetOverrideProjectOwners(std::forward<OverrideProjectOwnersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the domain unit(s) whose projects can use this asset type while
     * creating asset or asset revisions.</p>
     */
    inline const UseAssetTypePolicyGrantDetail& GetUseAssetType() const { return m_useAssetType; }
    inline bool UseAssetTypeHasBeenSet() const { return m_useAssetTypeHasBeenSet; }
    template<typename UseAssetTypeT = UseAssetTypePolicyGrantDetail>
    void SetUseAssetType(UseAssetTypeT&& value) { m_useAssetTypeHasBeenSet = true; m_useAssetType = std::forward<UseAssetTypeT>(value); }
    template<typename UseAssetTypeT = UseAssetTypePolicyGrantDetail>
    PolicyGrantDetail& WithUseAssetType(UseAssetTypeT&& value) { SetUseAssetType(std::forward<UseAssetTypeT>(value)); return *this;}
    ///@}
  private:

    AddToProjectMemberPoolPolicyGrantDetail m_addToProjectMemberPool;
    bool m_addToProjectMemberPoolHasBeenSet = false;

    CreateAssetTypePolicyGrantDetail m_createAssetType;
    bool m_createAssetTypeHasBeenSet = false;

    CreateDomainUnitPolicyGrantDetail m_createDomainUnit;
    bool m_createDomainUnitHasBeenSet = false;

    Unit m_createEnvironment;
    bool m_createEnvironmentHasBeenSet = false;

    Unit m_createEnvironmentFromBlueprint;
    bool m_createEnvironmentFromBlueprintHasBeenSet = false;

    CreateEnvironmentProfilePolicyGrantDetail m_createEnvironmentProfile;
    bool m_createEnvironmentProfileHasBeenSet = false;

    CreateFormTypePolicyGrantDetail m_createFormType;
    bool m_createFormTypeHasBeenSet = false;

    CreateGlossaryPolicyGrantDetail m_createGlossary;
    bool m_createGlossaryHasBeenSet = false;

    CreateProjectPolicyGrantDetail m_createProject;
    bool m_createProjectHasBeenSet = false;

    CreateProjectFromProjectProfilePolicyGrantDetail m_createProjectFromProjectProfile;
    bool m_createProjectFromProjectProfileHasBeenSet = false;

    Unit m_delegateCreateEnvironmentProfile;
    bool m_delegateCreateEnvironmentProfileHasBeenSet = false;

    OverrideDomainUnitOwnersPolicyGrantDetail m_overrideDomainUnitOwners;
    bool m_overrideDomainUnitOwnersHasBeenSet = false;

    OverrideProjectOwnersPolicyGrantDetail m_overrideProjectOwners;
    bool m_overrideProjectOwnersHasBeenSet = false;

    UseAssetTypePolicyGrantDetail m_useAssetType;
    bool m_useAssetTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
