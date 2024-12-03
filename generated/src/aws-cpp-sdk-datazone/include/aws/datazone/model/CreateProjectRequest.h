/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateProjectRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProject"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The description of the Amazon DataZone project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateProjectRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateProjectRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateProjectRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which this project is created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline CreateProjectRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline CreateProjectRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline CreateProjectRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain unit. This parameter is not required and if it is not
     * specified, then the project is created at the root domain unit level.</p>
     */
    inline const Aws::String& GetDomainUnitId() const{ return m_domainUnitId; }
    inline bool DomainUnitIdHasBeenSet() const { return m_domainUnitIdHasBeenSet; }
    inline void SetDomainUnitId(const Aws::String& value) { m_domainUnitIdHasBeenSet = true; m_domainUnitId = value; }
    inline void SetDomainUnitId(Aws::String&& value) { m_domainUnitIdHasBeenSet = true; m_domainUnitId = std::move(value); }
    inline void SetDomainUnitId(const char* value) { m_domainUnitIdHasBeenSet = true; m_domainUnitId.assign(value); }
    inline CreateProjectRequest& WithDomainUnitId(const Aws::String& value) { SetDomainUnitId(value); return *this;}
    inline CreateProjectRequest& WithDomainUnitId(Aws::String&& value) { SetDomainUnitId(std::move(value)); return *this;}
    inline CreateProjectRequest& WithDomainUnitId(const char* value) { SetDomainUnitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms that can be used in this Amazon DataZone project.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const{ return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    inline void SetGlossaryTerms(const Aws::Vector<Aws::String>& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = value; }
    inline void SetGlossaryTerms(Aws::Vector<Aws::String>&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::move(value); }
    inline CreateProjectRequest& WithGlossaryTerms(const Aws::Vector<Aws::String>& value) { SetGlossaryTerms(value); return *this;}
    inline CreateProjectRequest& WithGlossaryTerms(Aws::Vector<Aws::String>&& value) { SetGlossaryTerms(std::move(value)); return *this;}
    inline CreateProjectRequest& AddGlossaryTerms(const Aws::String& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }
    inline CreateProjectRequest& AddGlossaryTerms(Aws::String&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(std::move(value)); return *this; }
    inline CreateProjectRequest& AddGlossaryTerms(const char* value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon DataZone project.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateProjectRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateProjectRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateProjectRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the project profile.</p>
     */
    inline const Aws::String& GetProjectProfileId() const{ return m_projectProfileId; }
    inline bool ProjectProfileIdHasBeenSet() const { return m_projectProfileIdHasBeenSet; }
    inline void SetProjectProfileId(const Aws::String& value) { m_projectProfileIdHasBeenSet = true; m_projectProfileId = value; }
    inline void SetProjectProfileId(Aws::String&& value) { m_projectProfileIdHasBeenSet = true; m_projectProfileId = std::move(value); }
    inline void SetProjectProfileId(const char* value) { m_projectProfileIdHasBeenSet = true; m_projectProfileId.assign(value); }
    inline CreateProjectRequest& WithProjectProfileId(const Aws::String& value) { SetProjectProfileId(value); return *this;}
    inline CreateProjectRequest& WithProjectProfileId(Aws::String&& value) { SetProjectProfileId(std::move(value)); return *this;}
    inline CreateProjectRequest& WithProjectProfileId(const char* value) { SetProjectProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user parameters of the project.</p>
     */
    inline const Aws::Vector<EnvironmentConfigurationUserParameter>& GetUserParameters() const{ return m_userParameters; }
    inline bool UserParametersHasBeenSet() const { return m_userParametersHasBeenSet; }
    inline void SetUserParameters(const Aws::Vector<EnvironmentConfigurationUserParameter>& value) { m_userParametersHasBeenSet = true; m_userParameters = value; }
    inline void SetUserParameters(Aws::Vector<EnvironmentConfigurationUserParameter>&& value) { m_userParametersHasBeenSet = true; m_userParameters = std::move(value); }
    inline CreateProjectRequest& WithUserParameters(const Aws::Vector<EnvironmentConfigurationUserParameter>& value) { SetUserParameters(value); return *this;}
    inline CreateProjectRequest& WithUserParameters(Aws::Vector<EnvironmentConfigurationUserParameter>&& value) { SetUserParameters(std::move(value)); return *this;}
    inline CreateProjectRequest& AddUserParameters(const EnvironmentConfigurationUserParameter& value) { m_userParametersHasBeenSet = true; m_userParameters.push_back(value); return *this; }
    inline CreateProjectRequest& AddUserParameters(EnvironmentConfigurationUserParameter&& value) { m_userParametersHasBeenSet = true; m_userParameters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_domainUnitId;
    bool m_domainUnitIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_projectProfileId;
    bool m_projectProfileIdHasBeenSet = false;

    Aws::Vector<EnvironmentConfigurationUserParameter> m_userParameters;
    bool m_userParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
