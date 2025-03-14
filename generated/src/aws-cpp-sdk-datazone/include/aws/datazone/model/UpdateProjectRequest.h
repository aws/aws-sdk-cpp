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
    AWS_DATAZONE_API UpdateProjectRequest();

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
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateProjectRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateProjectRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateProjectRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain where a project is being updated.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline UpdateProjectRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline UpdateProjectRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline UpdateProjectRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment deployment details of the project.</p>
     */
    inline const EnvironmentDeploymentDetails& GetEnvironmentDeploymentDetails() const{ return m_environmentDeploymentDetails; }
    inline bool EnvironmentDeploymentDetailsHasBeenSet() const { return m_environmentDeploymentDetailsHasBeenSet; }
    inline void SetEnvironmentDeploymentDetails(const EnvironmentDeploymentDetails& value) { m_environmentDeploymentDetailsHasBeenSet = true; m_environmentDeploymentDetails = value; }
    inline void SetEnvironmentDeploymentDetails(EnvironmentDeploymentDetails&& value) { m_environmentDeploymentDetailsHasBeenSet = true; m_environmentDeploymentDetails = std::move(value); }
    inline UpdateProjectRequest& WithEnvironmentDeploymentDetails(const EnvironmentDeploymentDetails& value) { SetEnvironmentDeploymentDetails(value); return *this;}
    inline UpdateProjectRequest& WithEnvironmentDeploymentDetails(EnvironmentDeploymentDetails&& value) { SetEnvironmentDeploymentDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms to be updated as part of the <code>UpdateProject</code>
     * action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const{ return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    inline void SetGlossaryTerms(const Aws::Vector<Aws::String>& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = value; }
    inline void SetGlossaryTerms(Aws::Vector<Aws::String>&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::move(value); }
    inline UpdateProjectRequest& WithGlossaryTerms(const Aws::Vector<Aws::String>& value) { SetGlossaryTerms(value); return *this;}
    inline UpdateProjectRequest& WithGlossaryTerms(Aws::Vector<Aws::String>&& value) { SetGlossaryTerms(std::move(value)); return *this;}
    inline UpdateProjectRequest& AddGlossaryTerms(const Aws::String& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }
    inline UpdateProjectRequest& AddGlossaryTerms(Aws::String&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(std::move(value)); return *this; }
    inline UpdateProjectRequest& AddGlossaryTerms(const char* value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the project that is to be updated.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline UpdateProjectRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline UpdateProjectRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline UpdateProjectRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to be updated as part of the <code>UpdateProject</code> action.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateProjectRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateProjectRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateProjectRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The project profile version to which the project should be updated. You can
     * only specify the following string for this parameter: <code>latest</code>.</p>
     */
    inline const Aws::String& GetProjectProfileVersion() const{ return m_projectProfileVersion; }
    inline bool ProjectProfileVersionHasBeenSet() const { return m_projectProfileVersionHasBeenSet; }
    inline void SetProjectProfileVersion(const Aws::String& value) { m_projectProfileVersionHasBeenSet = true; m_projectProfileVersion = value; }
    inline void SetProjectProfileVersion(Aws::String&& value) { m_projectProfileVersionHasBeenSet = true; m_projectProfileVersion = std::move(value); }
    inline void SetProjectProfileVersion(const char* value) { m_projectProfileVersionHasBeenSet = true; m_projectProfileVersion.assign(value); }
    inline UpdateProjectRequest& WithProjectProfileVersion(const Aws::String& value) { SetProjectProfileVersion(value); return *this;}
    inline UpdateProjectRequest& WithProjectProfileVersion(Aws::String&& value) { SetProjectProfileVersion(std::move(value)); return *this;}
    inline UpdateProjectRequest& WithProjectProfileVersion(const char* value) { SetProjectProfileVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user parameters of the project.</p>
     */
    inline const Aws::Vector<EnvironmentConfigurationUserParameter>& GetUserParameters() const{ return m_userParameters; }
    inline bool UserParametersHasBeenSet() const { return m_userParametersHasBeenSet; }
    inline void SetUserParameters(const Aws::Vector<EnvironmentConfigurationUserParameter>& value) { m_userParametersHasBeenSet = true; m_userParameters = value; }
    inline void SetUserParameters(Aws::Vector<EnvironmentConfigurationUserParameter>&& value) { m_userParametersHasBeenSet = true; m_userParameters = std::move(value); }
    inline UpdateProjectRequest& WithUserParameters(const Aws::Vector<EnvironmentConfigurationUserParameter>& value) { SetUserParameters(value); return *this;}
    inline UpdateProjectRequest& WithUserParameters(Aws::Vector<EnvironmentConfigurationUserParameter>&& value) { SetUserParameters(std::move(value)); return *this;}
    inline UpdateProjectRequest& AddUserParameters(const EnvironmentConfigurationUserParameter& value) { m_userParametersHasBeenSet = true; m_userParameters.push_back(value); return *this; }
    inline UpdateProjectRequest& AddUserParameters(EnvironmentConfigurationUserParameter&& value) { m_userParametersHasBeenSet = true; m_userParameters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

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
