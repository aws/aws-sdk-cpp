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
    AWS_DATAZONE_API CreateEnvironmentRequest();

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
    inline int GetDeploymentOrder() const{ return m_deploymentOrder; }
    inline bool DeploymentOrderHasBeenSet() const { return m_deploymentOrderHasBeenSet; }
    inline void SetDeploymentOrder(int value) { m_deploymentOrderHasBeenSet = true; m_deploymentOrder = value; }
    inline CreateEnvironmentRequest& WithDeploymentOrder(int value) { SetDeploymentOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Amazon DataZone environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateEnvironmentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateEnvironmentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment is
     * created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline CreateEnvironmentRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline CreateEnvironmentRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the account in which the environment is being created.</p>
     */
    inline const Aws::String& GetEnvironmentAccountIdentifier() const{ return m_environmentAccountIdentifier; }
    inline bool EnvironmentAccountIdentifierHasBeenSet() const { return m_environmentAccountIdentifierHasBeenSet; }
    inline void SetEnvironmentAccountIdentifier(const Aws::String& value) { m_environmentAccountIdentifierHasBeenSet = true; m_environmentAccountIdentifier = value; }
    inline void SetEnvironmentAccountIdentifier(Aws::String&& value) { m_environmentAccountIdentifierHasBeenSet = true; m_environmentAccountIdentifier = std::move(value); }
    inline void SetEnvironmentAccountIdentifier(const char* value) { m_environmentAccountIdentifierHasBeenSet = true; m_environmentAccountIdentifier.assign(value); }
    inline CreateEnvironmentRequest& WithEnvironmentAccountIdentifier(const Aws::String& value) { SetEnvironmentAccountIdentifier(value); return *this;}
    inline CreateEnvironmentRequest& WithEnvironmentAccountIdentifier(Aws::String&& value) { SetEnvironmentAccountIdentifier(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& WithEnvironmentAccountIdentifier(const char* value) { SetEnvironmentAccountIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region of the account in which the environment is being created.</p>
     */
    inline const Aws::String& GetEnvironmentAccountRegion() const{ return m_environmentAccountRegion; }
    inline bool EnvironmentAccountRegionHasBeenSet() const { return m_environmentAccountRegionHasBeenSet; }
    inline void SetEnvironmentAccountRegion(const Aws::String& value) { m_environmentAccountRegionHasBeenSet = true; m_environmentAccountRegion = value; }
    inline void SetEnvironmentAccountRegion(Aws::String&& value) { m_environmentAccountRegionHasBeenSet = true; m_environmentAccountRegion = std::move(value); }
    inline void SetEnvironmentAccountRegion(const char* value) { m_environmentAccountRegionHasBeenSet = true; m_environmentAccountRegion.assign(value); }
    inline CreateEnvironmentRequest& WithEnvironmentAccountRegion(const Aws::String& value) { SetEnvironmentAccountRegion(value); return *this;}
    inline CreateEnvironmentRequest& WithEnvironmentAccountRegion(Aws::String&& value) { SetEnvironmentAccountRegion(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& WithEnvironmentAccountRegion(const char* value) { SetEnvironmentAccountRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the blueprint with which the environment is being created.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintIdentifier() const{ return m_environmentBlueprintIdentifier; }
    inline bool EnvironmentBlueprintIdentifierHasBeenSet() const { return m_environmentBlueprintIdentifierHasBeenSet; }
    inline void SetEnvironmentBlueprintIdentifier(const Aws::String& value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier = value; }
    inline void SetEnvironmentBlueprintIdentifier(Aws::String&& value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier = std::move(value); }
    inline void SetEnvironmentBlueprintIdentifier(const char* value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier.assign(value); }
    inline CreateEnvironmentRequest& WithEnvironmentBlueprintIdentifier(const Aws::String& value) { SetEnvironmentBlueprintIdentifier(value); return *this;}
    inline CreateEnvironmentRequest& WithEnvironmentBlueprintIdentifier(Aws::String&& value) { SetEnvironmentBlueprintIdentifier(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& WithEnvironmentBlueprintIdentifier(const char* value) { SetEnvironmentBlueprintIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration ID of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentConfigurationId() const{ return m_environmentConfigurationId; }
    inline bool EnvironmentConfigurationIdHasBeenSet() const { return m_environmentConfigurationIdHasBeenSet; }
    inline void SetEnvironmentConfigurationId(const Aws::String& value) { m_environmentConfigurationIdHasBeenSet = true; m_environmentConfigurationId = value; }
    inline void SetEnvironmentConfigurationId(Aws::String&& value) { m_environmentConfigurationIdHasBeenSet = true; m_environmentConfigurationId = std::move(value); }
    inline void SetEnvironmentConfigurationId(const char* value) { m_environmentConfigurationIdHasBeenSet = true; m_environmentConfigurationId.assign(value); }
    inline CreateEnvironmentRequest& WithEnvironmentConfigurationId(const Aws::String& value) { SetEnvironmentConfigurationId(value); return *this;}
    inline CreateEnvironmentRequest& WithEnvironmentConfigurationId(Aws::String&& value) { SetEnvironmentConfigurationId(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& WithEnvironmentConfigurationId(const char* value) { SetEnvironmentConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the environment profile that is used to create this Amazon
     * DataZone environment.</p>
     */
    inline const Aws::String& GetEnvironmentProfileIdentifier() const{ return m_environmentProfileIdentifier; }
    inline bool EnvironmentProfileIdentifierHasBeenSet() const { return m_environmentProfileIdentifierHasBeenSet; }
    inline void SetEnvironmentProfileIdentifier(const Aws::String& value) { m_environmentProfileIdentifierHasBeenSet = true; m_environmentProfileIdentifier = value; }
    inline void SetEnvironmentProfileIdentifier(Aws::String&& value) { m_environmentProfileIdentifierHasBeenSet = true; m_environmentProfileIdentifier = std::move(value); }
    inline void SetEnvironmentProfileIdentifier(const char* value) { m_environmentProfileIdentifierHasBeenSet = true; m_environmentProfileIdentifier.assign(value); }
    inline CreateEnvironmentRequest& WithEnvironmentProfileIdentifier(const Aws::String& value) { SetEnvironmentProfileIdentifier(value); return *this;}
    inline CreateEnvironmentRequest& WithEnvironmentProfileIdentifier(Aws::String&& value) { SetEnvironmentProfileIdentifier(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& WithEnvironmentProfileIdentifier(const char* value) { SetEnvironmentProfileIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms that can be used in this Amazon DataZone environment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const{ return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    inline void SetGlossaryTerms(const Aws::Vector<Aws::String>& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = value; }
    inline void SetGlossaryTerms(Aws::Vector<Aws::String>&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::move(value); }
    inline CreateEnvironmentRequest& WithGlossaryTerms(const Aws::Vector<Aws::String>& value) { SetGlossaryTerms(value); return *this;}
    inline CreateEnvironmentRequest& WithGlossaryTerms(Aws::Vector<Aws::String>&& value) { SetGlossaryTerms(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& AddGlossaryTerms(const Aws::String& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }
    inline CreateEnvironmentRequest& AddGlossaryTerms(Aws::String&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(std::move(value)); return *this; }
    inline CreateEnvironmentRequest& AddGlossaryTerms(const char* value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon DataZone environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateEnvironmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateEnvironmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone project in which this environment is
     * created.</p>
     */
    inline const Aws::String& GetProjectIdentifier() const{ return m_projectIdentifier; }
    inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }
    inline void SetProjectIdentifier(const Aws::String& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = value; }
    inline void SetProjectIdentifier(Aws::String&& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = std::move(value); }
    inline void SetProjectIdentifier(const char* value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier.assign(value); }
    inline CreateEnvironmentRequest& WithProjectIdentifier(const Aws::String& value) { SetProjectIdentifier(value); return *this;}
    inline CreateEnvironmentRequest& WithProjectIdentifier(Aws::String&& value) { SetProjectIdentifier(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& WithProjectIdentifier(const char* value) { SetProjectIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user parameters of this Amazon DataZone environment.</p>
     */
    inline const Aws::Vector<EnvironmentParameter>& GetUserParameters() const{ return m_userParameters; }
    inline bool UserParametersHasBeenSet() const { return m_userParametersHasBeenSet; }
    inline void SetUserParameters(const Aws::Vector<EnvironmentParameter>& value) { m_userParametersHasBeenSet = true; m_userParameters = value; }
    inline void SetUserParameters(Aws::Vector<EnvironmentParameter>&& value) { m_userParametersHasBeenSet = true; m_userParameters = std::move(value); }
    inline CreateEnvironmentRequest& WithUserParameters(const Aws::Vector<EnvironmentParameter>& value) { SetUserParameters(value); return *this;}
    inline CreateEnvironmentRequest& WithUserParameters(Aws::Vector<EnvironmentParameter>&& value) { SetUserParameters(std::move(value)); return *this;}
    inline CreateEnvironmentRequest& AddUserParameters(const EnvironmentParameter& value) { m_userParametersHasBeenSet = true; m_userParameters.push_back(value); return *this; }
    inline CreateEnvironmentRequest& AddUserParameters(EnvironmentParameter&& value) { m_userParametersHasBeenSet = true; m_userParameters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_deploymentOrder;
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
