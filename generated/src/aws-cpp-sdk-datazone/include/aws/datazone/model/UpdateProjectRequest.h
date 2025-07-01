/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/EnvironmentDeploymentDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/EnvironmentConfigurationUserParameter.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class UpdateProjectRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API UpdateProjectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProject"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The description to be updated as part of the <code>UpdateProject</code>
     * action.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateProjectRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain where a project is being updated.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    UpdateProjectRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain unit.</p>
     */
    inline const Aws::String& GetDomainUnitId() const { return m_domainUnitId; }
    inline bool DomainUnitIdHasBeenSet() const { return m_domainUnitIdHasBeenSet; }
    template<typename DomainUnitIdT = Aws::String>
    void SetDomainUnitId(DomainUnitIdT&& value) { m_domainUnitIdHasBeenSet = true; m_domainUnitId = std::forward<DomainUnitIdT>(value); }
    template<typename DomainUnitIdT = Aws::String>
    UpdateProjectRequest& WithDomainUnitId(DomainUnitIdT&& value) { SetDomainUnitId(std::forward<DomainUnitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment deployment details of the project.</p>
     */
    inline const EnvironmentDeploymentDetails& GetEnvironmentDeploymentDetails() const { return m_environmentDeploymentDetails; }
    inline bool EnvironmentDeploymentDetailsHasBeenSet() const { return m_environmentDeploymentDetailsHasBeenSet; }
    template<typename EnvironmentDeploymentDetailsT = EnvironmentDeploymentDetails>
    void SetEnvironmentDeploymentDetails(EnvironmentDeploymentDetailsT&& value) { m_environmentDeploymentDetailsHasBeenSet = true; m_environmentDeploymentDetails = std::forward<EnvironmentDeploymentDetailsT>(value); }
    template<typename EnvironmentDeploymentDetailsT = EnvironmentDeploymentDetails>
    UpdateProjectRequest& WithEnvironmentDeploymentDetails(EnvironmentDeploymentDetailsT&& value) { SetEnvironmentDeploymentDetails(std::forward<EnvironmentDeploymentDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms to be updated as part of the <code>UpdateProject</code>
     * action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const { return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    template<typename GlossaryTermsT = Aws::Vector<Aws::String>>
    void SetGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::forward<GlossaryTermsT>(value); }
    template<typename GlossaryTermsT = Aws::Vector<Aws::String>>
    UpdateProjectRequest& WithGlossaryTerms(GlossaryTermsT&& value) { SetGlossaryTerms(std::forward<GlossaryTermsT>(value)); return *this;}
    template<typename GlossaryTermsT = Aws::String>
    UpdateProjectRequest& AddGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.emplace_back(std::forward<GlossaryTermsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the project that is to be updated.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    UpdateProjectRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to be updated as part of the <code>UpdateProject</code> action.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateProjectRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The project profile version to which the project should be updated. You can
     * only specify the following string for this parameter: <code>latest</code>.</p>
     */
    inline const Aws::String& GetProjectProfileVersion() const { return m_projectProfileVersion; }
    inline bool ProjectProfileVersionHasBeenSet() const { return m_projectProfileVersionHasBeenSet; }
    template<typename ProjectProfileVersionT = Aws::String>
    void SetProjectProfileVersion(ProjectProfileVersionT&& value) { m_projectProfileVersionHasBeenSet = true; m_projectProfileVersion = std::forward<ProjectProfileVersionT>(value); }
    template<typename ProjectProfileVersionT = Aws::String>
    UpdateProjectRequest& WithProjectProfileVersion(ProjectProfileVersionT&& value) { SetProjectProfileVersion(std::forward<ProjectProfileVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user parameters of the project.</p>
     */
    inline const Aws::Vector<EnvironmentConfigurationUserParameter>& GetUserParameters() const { return m_userParameters; }
    inline bool UserParametersHasBeenSet() const { return m_userParametersHasBeenSet; }
    template<typename UserParametersT = Aws::Vector<EnvironmentConfigurationUserParameter>>
    void SetUserParameters(UserParametersT&& value) { m_userParametersHasBeenSet = true; m_userParameters = std::forward<UserParametersT>(value); }
    template<typename UserParametersT = Aws::Vector<EnvironmentConfigurationUserParameter>>
    UpdateProjectRequest& WithUserParameters(UserParametersT&& value) { SetUserParameters(std::forward<UserParametersT>(value)); return *this;}
    template<typename UserParametersT = EnvironmentConfigurationUserParameter>
    UpdateProjectRequest& AddUserParameters(UserParametersT&& value) { m_userParametersHasBeenSet = true; m_userParameters.emplace_back(std::forward<UserParametersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_domainUnitId;
    bool m_domainUnitIdHasBeenSet = false;

    EnvironmentDeploymentDetails m_environmentDeploymentDetails;
    bool m_environmentDeploymentDetailsHasBeenSet = false;

    Aws::Vector<Aws::String> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_projectProfileVersion;
    bool m_projectProfileVersionHasBeenSet = false;

    Aws::Vector<EnvironmentConfigurationUserParameter> m_userParameters;
    bool m_userParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
