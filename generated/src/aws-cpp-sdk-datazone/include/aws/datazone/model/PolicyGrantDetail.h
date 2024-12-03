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
    AWS_DATAZONE_API PolicyGrantDetail();
    AWS_DATAZONE_API PolicyGrantDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API PolicyGrantDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies that the policy grant is to be added to the members of the
     * project.</p>
     */
    inline const AddToProjectMemberPoolPolicyGrantDetail& GetAddToProjectMemberPool() const{ return m_addToProjectMemberPool; }
    inline bool AddToProjectMemberPoolHasBeenSet() const { return m_addToProjectMemberPoolHasBeenSet; }
    inline void SetAddToProjectMemberPool(const AddToProjectMemberPoolPolicyGrantDetail& value) { m_addToProjectMemberPoolHasBeenSet = true; m_addToProjectMemberPool = value; }
    inline void SetAddToProjectMemberPool(AddToProjectMemberPoolPolicyGrantDetail&& value) { m_addToProjectMemberPoolHasBeenSet = true; m_addToProjectMemberPool = std::move(value); }
    inline PolicyGrantDetail& WithAddToProjectMemberPool(const AddToProjectMemberPoolPolicyGrantDetail& value) { SetAddToProjectMemberPool(value); return *this;}
    inline PolicyGrantDetail& WithAddToProjectMemberPool(AddToProjectMemberPoolPolicyGrantDetail&& value) { SetAddToProjectMemberPool(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that this is a create asset type policy.</p>
     */
    inline const CreateAssetTypePolicyGrantDetail& GetCreateAssetType() const{ return m_createAssetType; }
    inline bool CreateAssetTypeHasBeenSet() const { return m_createAssetTypeHasBeenSet; }
    inline void SetCreateAssetType(const CreateAssetTypePolicyGrantDetail& value) { m_createAssetTypeHasBeenSet = true; m_createAssetType = value; }
    inline void SetCreateAssetType(CreateAssetTypePolicyGrantDetail&& value) { m_createAssetTypeHasBeenSet = true; m_createAssetType = std::move(value); }
    inline PolicyGrantDetail& WithCreateAssetType(const CreateAssetTypePolicyGrantDetail& value) { SetCreateAssetType(value); return *this;}
    inline PolicyGrantDetail& WithCreateAssetType(CreateAssetTypePolicyGrantDetail&& value) { SetCreateAssetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that this is a create domain unit policy.</p>
     */
    inline const CreateDomainUnitPolicyGrantDetail& GetCreateDomainUnit() const{ return m_createDomainUnit; }
    inline bool CreateDomainUnitHasBeenSet() const { return m_createDomainUnitHasBeenSet; }
    inline void SetCreateDomainUnit(const CreateDomainUnitPolicyGrantDetail& value) { m_createDomainUnitHasBeenSet = true; m_createDomainUnit = value; }
    inline void SetCreateDomainUnit(CreateDomainUnitPolicyGrantDetail&& value) { m_createDomainUnitHasBeenSet = true; m_createDomainUnit = std::move(value); }
    inline PolicyGrantDetail& WithCreateDomainUnit(const CreateDomainUnitPolicyGrantDetail& value) { SetCreateDomainUnit(value); return *this;}
    inline PolicyGrantDetail& WithCreateDomainUnit(CreateDomainUnitPolicyGrantDetail&& value) { SetCreateDomainUnit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that this is a create environment policy.</p>
     */
    inline const Unit& GetCreateEnvironment() const{ return m_createEnvironment; }
    inline bool CreateEnvironmentHasBeenSet() const { return m_createEnvironmentHasBeenSet; }
    inline void SetCreateEnvironment(const Unit& value) { m_createEnvironmentHasBeenSet = true; m_createEnvironment = value; }
    inline void SetCreateEnvironment(Unit&& value) { m_createEnvironmentHasBeenSet = true; m_createEnvironment = std::move(value); }
    inline PolicyGrantDetail& WithCreateEnvironment(const Unit& value) { SetCreateEnvironment(value); return *this;}
    inline PolicyGrantDetail& WithCreateEnvironment(Unit&& value) { SetCreateEnvironment(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Unit& GetCreateEnvironmentFromBlueprint() const{ return m_createEnvironmentFromBlueprint; }
    inline bool CreateEnvironmentFromBlueprintHasBeenSet() const { return m_createEnvironmentFromBlueprintHasBeenSet; }
    inline void SetCreateEnvironmentFromBlueprint(const Unit& value) { m_createEnvironmentFromBlueprintHasBeenSet = true; m_createEnvironmentFromBlueprint = value; }
    inline void SetCreateEnvironmentFromBlueprint(Unit&& value) { m_createEnvironmentFromBlueprintHasBeenSet = true; m_createEnvironmentFromBlueprint = std::move(value); }
    inline PolicyGrantDetail& WithCreateEnvironmentFromBlueprint(const Unit& value) { SetCreateEnvironmentFromBlueprint(value); return *this;}
    inline PolicyGrantDetail& WithCreateEnvironmentFromBlueprint(Unit&& value) { SetCreateEnvironmentFromBlueprint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that this is a create environment profile policy.</p>
     */
    inline const CreateEnvironmentProfilePolicyGrantDetail& GetCreateEnvironmentProfile() const{ return m_createEnvironmentProfile; }
    inline bool CreateEnvironmentProfileHasBeenSet() const { return m_createEnvironmentProfileHasBeenSet; }
    inline void SetCreateEnvironmentProfile(const CreateEnvironmentProfilePolicyGrantDetail& value) { m_createEnvironmentProfileHasBeenSet = true; m_createEnvironmentProfile = value; }
    inline void SetCreateEnvironmentProfile(CreateEnvironmentProfilePolicyGrantDetail&& value) { m_createEnvironmentProfileHasBeenSet = true; m_createEnvironmentProfile = std::move(value); }
    inline PolicyGrantDetail& WithCreateEnvironmentProfile(const CreateEnvironmentProfilePolicyGrantDetail& value) { SetCreateEnvironmentProfile(value); return *this;}
    inline PolicyGrantDetail& WithCreateEnvironmentProfile(CreateEnvironmentProfilePolicyGrantDetail&& value) { SetCreateEnvironmentProfile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that this is a create form type policy.</p>
     */
    inline const CreateFormTypePolicyGrantDetail& GetCreateFormType() const{ return m_createFormType; }
    inline bool CreateFormTypeHasBeenSet() const { return m_createFormTypeHasBeenSet; }
    inline void SetCreateFormType(const CreateFormTypePolicyGrantDetail& value) { m_createFormTypeHasBeenSet = true; m_createFormType = value; }
    inline void SetCreateFormType(CreateFormTypePolicyGrantDetail&& value) { m_createFormTypeHasBeenSet = true; m_createFormType = std::move(value); }
    inline PolicyGrantDetail& WithCreateFormType(const CreateFormTypePolicyGrantDetail& value) { SetCreateFormType(value); return *this;}
    inline PolicyGrantDetail& WithCreateFormType(CreateFormTypePolicyGrantDetail&& value) { SetCreateFormType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that this is a create glossary policy.</p>
     */
    inline const CreateGlossaryPolicyGrantDetail& GetCreateGlossary() const{ return m_createGlossary; }
    inline bool CreateGlossaryHasBeenSet() const { return m_createGlossaryHasBeenSet; }
    inline void SetCreateGlossary(const CreateGlossaryPolicyGrantDetail& value) { m_createGlossaryHasBeenSet = true; m_createGlossary = value; }
    inline void SetCreateGlossary(CreateGlossaryPolicyGrantDetail&& value) { m_createGlossaryHasBeenSet = true; m_createGlossary = std::move(value); }
    inline PolicyGrantDetail& WithCreateGlossary(const CreateGlossaryPolicyGrantDetail& value) { SetCreateGlossary(value); return *this;}
    inline PolicyGrantDetail& WithCreateGlossary(CreateGlossaryPolicyGrantDetail&& value) { SetCreateGlossary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that this is a create project policy.</p>
     */
    inline const CreateProjectPolicyGrantDetail& GetCreateProject() const{ return m_createProject; }
    inline bool CreateProjectHasBeenSet() const { return m_createProjectHasBeenSet; }
    inline void SetCreateProject(const CreateProjectPolicyGrantDetail& value) { m_createProjectHasBeenSet = true; m_createProject = value; }
    inline void SetCreateProject(CreateProjectPolicyGrantDetail&& value) { m_createProjectHasBeenSet = true; m_createProject = std::move(value); }
    inline PolicyGrantDetail& WithCreateProject(const CreateProjectPolicyGrantDetail& value) { SetCreateProject(value); return *this;}
    inline PolicyGrantDetail& WithCreateProject(CreateProjectPolicyGrantDetail&& value) { SetCreateProject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to create a project from project profile.</p>
     */
    inline const CreateProjectFromProjectProfilePolicyGrantDetail& GetCreateProjectFromProjectProfile() const{ return m_createProjectFromProjectProfile; }
    inline bool CreateProjectFromProjectProfileHasBeenSet() const { return m_createProjectFromProjectProfileHasBeenSet; }
    inline void SetCreateProjectFromProjectProfile(const CreateProjectFromProjectProfilePolicyGrantDetail& value) { m_createProjectFromProjectProfileHasBeenSet = true; m_createProjectFromProjectProfile = value; }
    inline void SetCreateProjectFromProjectProfile(CreateProjectFromProjectProfilePolicyGrantDetail&& value) { m_createProjectFromProjectProfileHasBeenSet = true; m_createProjectFromProjectProfile = std::move(value); }
    inline PolicyGrantDetail& WithCreateProjectFromProjectProfile(const CreateProjectFromProjectProfilePolicyGrantDetail& value) { SetCreateProjectFromProjectProfile(value); return *this;}
    inline PolicyGrantDetail& WithCreateProjectFromProjectProfile(CreateProjectFromProjectProfilePolicyGrantDetail&& value) { SetCreateProjectFromProjectProfile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that this is the delegation of the create environment profile
     * policy.</p>
     */
    inline const Unit& GetDelegateCreateEnvironmentProfile() const{ return m_delegateCreateEnvironmentProfile; }
    inline bool DelegateCreateEnvironmentProfileHasBeenSet() const { return m_delegateCreateEnvironmentProfileHasBeenSet; }
    inline void SetDelegateCreateEnvironmentProfile(const Unit& value) { m_delegateCreateEnvironmentProfileHasBeenSet = true; m_delegateCreateEnvironmentProfile = value; }
    inline void SetDelegateCreateEnvironmentProfile(Unit&& value) { m_delegateCreateEnvironmentProfileHasBeenSet = true; m_delegateCreateEnvironmentProfile = std::move(value); }
    inline PolicyGrantDetail& WithDelegateCreateEnvironmentProfile(const Unit& value) { SetDelegateCreateEnvironmentProfile(value); return *this;}
    inline PolicyGrantDetail& WithDelegateCreateEnvironmentProfile(Unit&& value) { SetDelegateCreateEnvironmentProfile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to override domain unit owners.</p>
     */
    inline const OverrideDomainUnitOwnersPolicyGrantDetail& GetOverrideDomainUnitOwners() const{ return m_overrideDomainUnitOwners; }
    inline bool OverrideDomainUnitOwnersHasBeenSet() const { return m_overrideDomainUnitOwnersHasBeenSet; }
    inline void SetOverrideDomainUnitOwners(const OverrideDomainUnitOwnersPolicyGrantDetail& value) { m_overrideDomainUnitOwnersHasBeenSet = true; m_overrideDomainUnitOwners = value; }
    inline void SetOverrideDomainUnitOwners(OverrideDomainUnitOwnersPolicyGrantDetail&& value) { m_overrideDomainUnitOwnersHasBeenSet = true; m_overrideDomainUnitOwners = std::move(value); }
    inline PolicyGrantDetail& WithOverrideDomainUnitOwners(const OverrideDomainUnitOwnersPolicyGrantDetail& value) { SetOverrideDomainUnitOwners(value); return *this;}
    inline PolicyGrantDetail& WithOverrideDomainUnitOwners(OverrideDomainUnitOwnersPolicyGrantDetail&& value) { SetOverrideDomainUnitOwners(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to override project owners.</p>
     */
    inline const OverrideProjectOwnersPolicyGrantDetail& GetOverrideProjectOwners() const{ return m_overrideProjectOwners; }
    inline bool OverrideProjectOwnersHasBeenSet() const { return m_overrideProjectOwnersHasBeenSet; }
    inline void SetOverrideProjectOwners(const OverrideProjectOwnersPolicyGrantDetail& value) { m_overrideProjectOwnersHasBeenSet = true; m_overrideProjectOwners = value; }
    inline void SetOverrideProjectOwners(OverrideProjectOwnersPolicyGrantDetail&& value) { m_overrideProjectOwnersHasBeenSet = true; m_overrideProjectOwners = std::move(value); }
    inline PolicyGrantDetail& WithOverrideProjectOwners(const OverrideProjectOwnersPolicyGrantDetail& value) { SetOverrideProjectOwners(value); return *this;}
    inline PolicyGrantDetail& WithOverrideProjectOwners(OverrideProjectOwnersPolicyGrantDetail&& value) { SetOverrideProjectOwners(std::move(value)); return *this;}
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
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
