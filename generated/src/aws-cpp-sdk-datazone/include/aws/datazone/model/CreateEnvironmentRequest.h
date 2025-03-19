/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/EnvironmentParameter.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class CreateEnvironmentRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateEnvironmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironment"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The deployment order of the environment.</p>
     */
    inline int GetDeploymentOrder() const { return m_deploymentOrder; }
    inline bool DeploymentOrderHasBeenSet() const { return m_deploymentOrderHasBeenSet; }
    inline void SetDeploymentOrder(int value) { m_deploymentOrderHasBeenSet = true; m_deploymentOrder = value; }
    inline CreateEnvironmentRequest& WithDeploymentOrder(int value) { SetDeploymentOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Amazon DataZone environment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateEnvironmentRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment is
     * created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    CreateEnvironmentRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the account in which the environment is being created.</p>
     */
    inline const Aws::String& GetEnvironmentAccountIdentifier() const { return m_environmentAccountIdentifier; }
    inline bool EnvironmentAccountIdentifierHasBeenSet() const { return m_environmentAccountIdentifierHasBeenSet; }
    template<typename EnvironmentAccountIdentifierT = Aws::String>
    void SetEnvironmentAccountIdentifier(EnvironmentAccountIdentifierT&& value) { m_environmentAccountIdentifierHasBeenSet = true; m_environmentAccountIdentifier = std::forward<EnvironmentAccountIdentifierT>(value); }
    template<typename EnvironmentAccountIdentifierT = Aws::String>
    CreateEnvironmentRequest& WithEnvironmentAccountIdentifier(EnvironmentAccountIdentifierT&& value) { SetEnvironmentAccountIdentifier(std::forward<EnvironmentAccountIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region of the account in which the environment is being created.</p>
     */
    inline const Aws::String& GetEnvironmentAccountRegion() const { return m_environmentAccountRegion; }
    inline bool EnvironmentAccountRegionHasBeenSet() const { return m_environmentAccountRegionHasBeenSet; }
    template<typename EnvironmentAccountRegionT = Aws::String>
    void SetEnvironmentAccountRegion(EnvironmentAccountRegionT&& value) { m_environmentAccountRegionHasBeenSet = true; m_environmentAccountRegion = std::forward<EnvironmentAccountRegionT>(value); }
    template<typename EnvironmentAccountRegionT = Aws::String>
    CreateEnvironmentRequest& WithEnvironmentAccountRegion(EnvironmentAccountRegionT&& value) { SetEnvironmentAccountRegion(std::forward<EnvironmentAccountRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the blueprint with which the environment is being created.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintIdentifier() const { return m_environmentBlueprintIdentifier; }
    inline bool EnvironmentBlueprintIdentifierHasBeenSet() const { return m_environmentBlueprintIdentifierHasBeenSet; }
    template<typename EnvironmentBlueprintIdentifierT = Aws::String>
    void SetEnvironmentBlueprintIdentifier(EnvironmentBlueprintIdentifierT&& value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier = std::forward<EnvironmentBlueprintIdentifierT>(value); }
    template<typename EnvironmentBlueprintIdentifierT = Aws::String>
    CreateEnvironmentRequest& WithEnvironmentBlueprintIdentifier(EnvironmentBlueprintIdentifierT&& value) { SetEnvironmentBlueprintIdentifier(std::forward<EnvironmentBlueprintIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration ID of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentConfigurationId() const { return m_environmentConfigurationId; }
    inline bool EnvironmentConfigurationIdHasBeenSet() const { return m_environmentConfigurationIdHasBeenSet; }
    template<typename EnvironmentConfigurationIdT = Aws::String>
    void SetEnvironmentConfigurationId(EnvironmentConfigurationIdT&& value) { m_environmentConfigurationIdHasBeenSet = true; m_environmentConfigurationId = std::forward<EnvironmentConfigurationIdT>(value); }
    template<typename EnvironmentConfigurationIdT = Aws::String>
    CreateEnvironmentRequest& WithEnvironmentConfigurationId(EnvironmentConfigurationIdT&& value) { SetEnvironmentConfigurationId(std::forward<EnvironmentConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the environment profile that is used to create this Amazon
     * DataZone environment.</p>
     */
    inline const Aws::String& GetEnvironmentProfileIdentifier() const { return m_environmentProfileIdentifier; }
    inline bool EnvironmentProfileIdentifierHasBeenSet() const { return m_environmentProfileIdentifierHasBeenSet; }
    template<typename EnvironmentProfileIdentifierT = Aws::String>
    void SetEnvironmentProfileIdentifier(EnvironmentProfileIdentifierT&& value) { m_environmentProfileIdentifierHasBeenSet = true; m_environmentProfileIdentifier = std::forward<EnvironmentProfileIdentifierT>(value); }
    template<typename EnvironmentProfileIdentifierT = Aws::String>
    CreateEnvironmentRequest& WithEnvironmentProfileIdentifier(EnvironmentProfileIdentifierT&& value) { SetEnvironmentProfileIdentifier(std::forward<EnvironmentProfileIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms that can be used in this Amazon DataZone environment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const { return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    template<typename GlossaryTermsT = Aws::Vector<Aws::String>>
    void SetGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::forward<GlossaryTermsT>(value); }
    template<typename GlossaryTermsT = Aws::Vector<Aws::String>>
    CreateEnvironmentRequest& WithGlossaryTerms(GlossaryTermsT&& value) { SetGlossaryTerms(std::forward<GlossaryTermsT>(value)); return *this;}
    template<typename GlossaryTermsT = Aws::String>
    CreateEnvironmentRequest& AddGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.emplace_back(std::forward<GlossaryTermsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon DataZone environment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateEnvironmentRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone project in which this environment is
     * created.</p>
     */
    inline const Aws::String& GetProjectIdentifier() const { return m_projectIdentifier; }
    inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }
    template<typename ProjectIdentifierT = Aws::String>
    void SetProjectIdentifier(ProjectIdentifierT&& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = std::forward<ProjectIdentifierT>(value); }
    template<typename ProjectIdentifierT = Aws::String>
    CreateEnvironmentRequest& WithProjectIdentifier(ProjectIdentifierT&& value) { SetProjectIdentifier(std::forward<ProjectIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user parameters of this Amazon DataZone environment.</p>
     */
    inline const Aws::Vector<EnvironmentParameter>& GetUserParameters() const { return m_userParameters; }
    inline bool UserParametersHasBeenSet() const { return m_userParametersHasBeenSet; }
    template<typename UserParametersT = Aws::Vector<EnvironmentParameter>>
    void SetUserParameters(UserParametersT&& value) { m_userParametersHasBeenSet = true; m_userParameters = std::forward<UserParametersT>(value); }
    template<typename UserParametersT = Aws::Vector<EnvironmentParameter>>
    CreateEnvironmentRequest& WithUserParameters(UserParametersT&& value) { SetUserParameters(std::forward<UserParametersT>(value)); return *this;}
    template<typename UserParametersT = EnvironmentParameter>
    CreateEnvironmentRequest& AddUserParameters(UserParametersT&& value) { m_userParametersHasBeenSet = true; m_userParameters.emplace_back(std::forward<UserParametersT>(value)); return *this; }
    ///@}
  private:

    int m_deploymentOrder{0};
    bool m_deploymentOrderHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_environmentAccountIdentifier;
    bool m_environmentAccountIdentifierHasBeenSet = false;

    Aws::String m_environmentAccountRegion;
    bool m_environmentAccountRegionHasBeenSet = false;

    Aws::String m_environmentBlueprintIdentifier;
    bool m_environmentBlueprintIdentifierHasBeenSet = false;

    Aws::String m_environmentConfigurationId;
    bool m_environmentConfigurationIdHasBeenSet = false;

    Aws::String m_environmentProfileIdentifier;
    bool m_environmentProfileIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_projectIdentifier;
    bool m_projectIdentifierHasBeenSet = false;

    Aws::Vector<EnvironmentParameter> m_userParameters;
    bool m_userParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
