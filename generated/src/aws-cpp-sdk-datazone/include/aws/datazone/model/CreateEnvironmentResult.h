/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datazone/model/DeploymentProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/Deployment.h>
#include <aws/datazone/model/ProvisioningProperties.h>
#include <aws/datazone/model/EnvironmentStatus.h>
#include <aws/datazone/model/ConfigurableEnvironmentAction.h>
#include <aws/datazone/model/Resource.h>
#include <aws/datazone/model/CustomParameter.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{
  class CreateEnvironmentResult
  {
  public:
    AWS_DATAZONE_API CreateEnvironmentResult() = default;
    AWS_DATAZONE_API CreateEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Web Services account in which the Amazon DataZone environment is
     * created.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    CreateEnvironmentResult& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services region in which the Amazon DataZone environment is
     * created.</p>
     */
    inline const Aws::String& GetAwsAccountRegion() const { return m_awsAccountRegion; }
    template<typename AwsAccountRegionT = Aws::String>
    void SetAwsAccountRegion(AwsAccountRegionT&& value) { m_awsAccountRegionHasBeenSet = true; m_awsAccountRegion = std::forward<AwsAccountRegionT>(value); }
    template<typename AwsAccountRegionT = Aws::String>
    CreateEnvironmentResult& WithAwsAccountRegion(AwsAccountRegionT&& value) { SetAwsAccountRegion(std::forward<AwsAccountRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the environment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateEnvironmentResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created this environment.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    CreateEnvironmentResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment properties of this Amazon DataZone environment.</p>
     */
    inline const DeploymentProperties& GetDeploymentProperties() const { return m_deploymentProperties; }
    template<typename DeploymentPropertiesT = DeploymentProperties>
    void SetDeploymentProperties(DeploymentPropertiesT&& value) { m_deploymentPropertiesHasBeenSet = true; m_deploymentProperties = std::forward<DeploymentPropertiesT>(value); }
    template<typename DeploymentPropertiesT = DeploymentProperties>
    CreateEnvironmentResult& WithDeploymentProperties(DeploymentPropertiesT&& value) { SetDeploymentProperties(std::forward<DeploymentPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of this Amazon DataZone environment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateEnvironmentResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment is
     * created.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    CreateEnvironmentResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configurable actions of this Amazon DataZone environment.</p>
     */
    inline const Aws::Vector<ConfigurableEnvironmentAction>& GetEnvironmentActions() const { return m_environmentActions; }
    template<typename EnvironmentActionsT = Aws::Vector<ConfigurableEnvironmentAction>>
    void SetEnvironmentActions(EnvironmentActionsT&& value) { m_environmentActionsHasBeenSet = true; m_environmentActions = std::forward<EnvironmentActionsT>(value); }
    template<typename EnvironmentActionsT = Aws::Vector<ConfigurableEnvironmentAction>>
    CreateEnvironmentResult& WithEnvironmentActions(EnvironmentActionsT&& value) { SetEnvironmentActions(std::forward<EnvironmentActionsT>(value)); return *this;}
    template<typename EnvironmentActionsT = ConfigurableEnvironmentAction>
    CreateEnvironmentResult& AddEnvironmentActions(EnvironmentActionsT&& value) { m_environmentActionsHasBeenSet = true; m_environmentActions.emplace_back(std::forward<EnvironmentActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the blueprint with which this Amazon DataZone environment was
     * created.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintId() const { return m_environmentBlueprintId; }
    template<typename EnvironmentBlueprintIdT = Aws::String>
    void SetEnvironmentBlueprintId(EnvironmentBlueprintIdT&& value) { m_environmentBlueprintIdHasBeenSet = true; m_environmentBlueprintId = std::forward<EnvironmentBlueprintIdT>(value); }
    template<typename EnvironmentBlueprintIdT = Aws::String>
    CreateEnvironmentResult& WithEnvironmentBlueprintId(EnvironmentBlueprintIdT&& value) { SetEnvironmentBlueprintId(std::forward<EnvironmentBlueprintIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration ID of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentConfigurationId() const { return m_environmentConfigurationId; }
    template<typename EnvironmentConfigurationIdT = Aws::String>
    void SetEnvironmentConfigurationId(EnvironmentConfigurationIdT&& value) { m_environmentConfigurationIdHasBeenSet = true; m_environmentConfigurationId = std::forward<EnvironmentConfigurationIdT>(value); }
    template<typename EnvironmentConfigurationIdT = Aws::String>
    CreateEnvironmentResult& WithEnvironmentConfigurationId(EnvironmentConfigurationIdT&& value) { SetEnvironmentConfigurationId(std::forward<EnvironmentConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment profile with which this Amazon DataZone environment
     * was created.</p>
     */
    inline const Aws::String& GetEnvironmentProfileId() const { return m_environmentProfileId; }
    template<typename EnvironmentProfileIdT = Aws::String>
    void SetEnvironmentProfileId(EnvironmentProfileIdT&& value) { m_environmentProfileIdHasBeenSet = true; m_environmentProfileId = std::forward<EnvironmentProfileIdT>(value); }
    template<typename EnvironmentProfileIdT = Aws::String>
    CreateEnvironmentResult& WithEnvironmentProfileId(EnvironmentProfileIdT&& value) { SetEnvironmentProfileId(std::forward<EnvironmentProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms that can be used in this Amazon DataZone environment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const { return m_glossaryTerms; }
    template<typename GlossaryTermsT = Aws::Vector<Aws::String>>
    void SetGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::forward<GlossaryTermsT>(value); }
    template<typename GlossaryTermsT = Aws::Vector<Aws::String>>
    CreateEnvironmentResult& WithGlossaryTerms(GlossaryTermsT&& value) { SetGlossaryTerms(std::forward<GlossaryTermsT>(value)); return *this;}
    template<typename GlossaryTermsT = Aws::String>
    CreateEnvironmentResult& AddGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.emplace_back(std::forward<GlossaryTermsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of this Amazon DataZone environment.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateEnvironmentResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the last deployment of this Amazon DataZone environment.</p>
     */
    inline const Deployment& GetLastDeployment() const { return m_lastDeployment; }
    template<typename LastDeploymentT = Deployment>
    void SetLastDeployment(LastDeploymentT&& value) { m_lastDeploymentHasBeenSet = true; m_lastDeployment = std::forward<LastDeploymentT>(value); }
    template<typename LastDeploymentT = Deployment>
    CreateEnvironmentResult& WithLastDeployment(LastDeploymentT&& value) { SetLastDeployment(std::forward<LastDeploymentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this environment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateEnvironmentResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone project in which this environment is
     * created.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    CreateEnvironmentResult& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider of this Amazon DataZone environment.</p>
     */
    inline const Aws::String& GetProvider() const { return m_provider; }
    template<typename ProviderT = Aws::String>
    void SetProvider(ProviderT&& value) { m_providerHasBeenSet = true; m_provider = std::forward<ProviderT>(value); }
    template<typename ProviderT = Aws::String>
    CreateEnvironmentResult& WithProvider(ProviderT&& value) { SetProvider(std::forward<ProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioned resources of this Amazon DataZone environment.</p>
     */
    inline const Aws::Vector<Resource>& GetProvisionedResources() const { return m_provisionedResources; }
    template<typename ProvisionedResourcesT = Aws::Vector<Resource>>
    void SetProvisionedResources(ProvisionedResourcesT&& value) { m_provisionedResourcesHasBeenSet = true; m_provisionedResources = std::forward<ProvisionedResourcesT>(value); }
    template<typename ProvisionedResourcesT = Aws::Vector<Resource>>
    CreateEnvironmentResult& WithProvisionedResources(ProvisionedResourcesT&& value) { SetProvisionedResources(std::forward<ProvisionedResourcesT>(value)); return *this;}
    template<typename ProvisionedResourcesT = Resource>
    CreateEnvironmentResult& AddProvisionedResources(ProvisionedResourcesT&& value) { m_provisionedResourcesHasBeenSet = true; m_provisionedResources.emplace_back(std::forward<ProvisionedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The provisioning properties of this Amazon DataZone environment.</p>
     */
    inline const ProvisioningProperties& GetProvisioningProperties() const { return m_provisioningProperties; }
    template<typename ProvisioningPropertiesT = ProvisioningProperties>
    void SetProvisioningProperties(ProvisioningPropertiesT&& value) { m_provisioningPropertiesHasBeenSet = true; m_provisioningProperties = std::forward<ProvisioningPropertiesT>(value); }
    template<typename ProvisioningPropertiesT = ProvisioningProperties>
    CreateEnvironmentResult& WithProvisioningProperties(ProvisioningPropertiesT&& value) { SetProvisioningProperties(std::forward<ProvisioningPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this Amazon DataZone environment.</p>
     */
    inline EnvironmentStatus GetStatus() const { return m_status; }
    inline void SetStatus(EnvironmentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateEnvironmentResult& WithStatus(EnvironmentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when this environment was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    CreateEnvironmentResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user parameters of this Amazon DataZone environment.</p>
     */
    inline const Aws::Vector<CustomParameter>& GetUserParameters() const { return m_userParameters; }
    template<typename UserParametersT = Aws::Vector<CustomParameter>>
    void SetUserParameters(UserParametersT&& value) { m_userParametersHasBeenSet = true; m_userParameters = std::forward<UserParametersT>(value); }
    template<typename UserParametersT = Aws::Vector<CustomParameter>>
    CreateEnvironmentResult& WithUserParameters(UserParametersT&& value) { SetUserParameters(std::forward<UserParametersT>(value)); return *this;}
    template<typename UserParametersT = CustomParameter>
    CreateEnvironmentResult& AddUserParameters(UserParametersT&& value) { m_userParametersHasBeenSet = true; m_userParameters.emplace_back(std::forward<UserParametersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateEnvironmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_awsAccountRegion;
    bool m_awsAccountRegionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    DeploymentProperties m_deploymentProperties;
    bool m_deploymentPropertiesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::Vector<ConfigurableEnvironmentAction> m_environmentActions;
    bool m_environmentActionsHasBeenSet = false;

    Aws::String m_environmentBlueprintId;
    bool m_environmentBlueprintIdHasBeenSet = false;

    Aws::String m_environmentConfigurationId;
    bool m_environmentConfigurationIdHasBeenSet = false;

    Aws::String m_environmentProfileId;
    bool m_environmentProfileIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Deployment m_lastDeployment;
    bool m_lastDeploymentHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    Aws::Vector<Resource> m_provisionedResources;
    bool m_provisionedResourcesHasBeenSet = false;

    ProvisioningProperties m_provisioningProperties;
    bool m_provisioningPropertiesHasBeenSet = false;

    EnvironmentStatus m_status{EnvironmentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<CustomParameter> m_userParameters;
    bool m_userParametersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
