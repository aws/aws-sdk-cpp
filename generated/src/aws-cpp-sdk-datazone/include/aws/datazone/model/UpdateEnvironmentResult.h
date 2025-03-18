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
  class UpdateEnvironmentResult
  {
  public:
    AWS_DATAZONE_API UpdateEnvironmentResult() = default;
    AWS_DATAZONE_API UpdateEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API UpdateEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account in which the environment is
     * to be updated.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    UpdateEnvironmentResult& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region in which the environment is updated.</p>
     */
    inline const Aws::String& GetAwsAccountRegion() const { return m_awsAccountRegion; }
    template<typename AwsAccountRegionT = Aws::String>
    void SetAwsAccountRegion(AwsAccountRegionT&& value) { m_awsAccountRegionHasBeenSet = true; m_awsAccountRegion = std::forward<AwsAccountRegionT>(value); }
    template<typename AwsAccountRegionT = Aws::String>
    UpdateEnvironmentResult& WithAwsAccountRegion(AwsAccountRegionT&& value) { SetAwsAccountRegion(std::forward<AwsAccountRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the environment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    UpdateEnvironmentResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the environment.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    UpdateEnvironmentResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment properties to be updated as part of the
     * <code>UpdateEnvironment</code> action.</p>
     */
    inline const DeploymentProperties& GetDeploymentProperties() const { return m_deploymentProperties; }
    template<typename DeploymentPropertiesT = DeploymentProperties>
    void SetDeploymentProperties(DeploymentPropertiesT&& value) { m_deploymentPropertiesHasBeenSet = true; m_deploymentProperties = std::forward<DeploymentPropertiesT>(value); }
    template<typename DeploymentPropertiesT = DeploymentProperties>
    UpdateEnvironmentResult& WithDeploymentProperties(DeploymentPropertiesT&& value) { SetDeploymentProperties(std::forward<DeploymentPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description to be updated as part of the <code>UpdateEnvironment</code>
     * action.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateEnvironmentResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the domain in which the environment is to be updated.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    UpdateEnvironmentResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment actions to be updated as part of the
     * <code>UpdateEnvironment</code> action.</p>
     */
    inline const Aws::Vector<ConfigurableEnvironmentAction>& GetEnvironmentActions() const { return m_environmentActions; }
    template<typename EnvironmentActionsT = Aws::Vector<ConfigurableEnvironmentAction>>
    void SetEnvironmentActions(EnvironmentActionsT&& value) { m_environmentActionsHasBeenSet = true; m_environmentActions = std::forward<EnvironmentActionsT>(value); }
    template<typename EnvironmentActionsT = Aws::Vector<ConfigurableEnvironmentAction>>
    UpdateEnvironmentResult& WithEnvironmentActions(EnvironmentActionsT&& value) { SetEnvironmentActions(std::forward<EnvironmentActionsT>(value)); return *this;}
    template<typename EnvironmentActionsT = ConfigurableEnvironmentAction>
    UpdateEnvironmentResult& AddEnvironmentActions(EnvironmentActionsT&& value) { m_environmentActionsHasBeenSet = true; m_environmentActions.emplace_back(std::forward<EnvironmentActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The blueprint identifier of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintId() const { return m_environmentBlueprintId; }
    template<typename EnvironmentBlueprintIdT = Aws::String>
    void SetEnvironmentBlueprintId(EnvironmentBlueprintIdT&& value) { m_environmentBlueprintIdHasBeenSet = true; m_environmentBlueprintId = std::forward<EnvironmentBlueprintIdT>(value); }
    template<typename EnvironmentBlueprintIdT = Aws::String>
    UpdateEnvironmentResult& WithEnvironmentBlueprintId(EnvironmentBlueprintIdT&& value) { SetEnvironmentBlueprintId(std::forward<EnvironmentBlueprintIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration ID of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentConfigurationId() const { return m_environmentConfigurationId; }
    template<typename EnvironmentConfigurationIdT = Aws::String>
    void SetEnvironmentConfigurationId(EnvironmentConfigurationIdT&& value) { m_environmentConfigurationIdHasBeenSet = true; m_environmentConfigurationId = std::forward<EnvironmentConfigurationIdT>(value); }
    template<typename EnvironmentConfigurationIdT = Aws::String>
    UpdateEnvironmentResult& WithEnvironmentConfigurationId(EnvironmentConfigurationIdT&& value) { SetEnvironmentConfigurationId(std::forward<EnvironmentConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile identifier of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentProfileId() const { return m_environmentProfileId; }
    template<typename EnvironmentProfileIdT = Aws::String>
    void SetEnvironmentProfileId(EnvironmentProfileIdT&& value) { m_environmentProfileIdHasBeenSet = true; m_environmentProfileId = std::forward<EnvironmentProfileIdT>(value); }
    template<typename EnvironmentProfileIdT = Aws::String>
    UpdateEnvironmentResult& WithEnvironmentProfileId(EnvironmentProfileIdT&& value) { SetEnvironmentProfileId(std::forward<EnvironmentProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms to be updated as part of the
     * <code>UpdateEnvironment</code> action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const { return m_glossaryTerms; }
    template<typename GlossaryTermsT = Aws::Vector<Aws::String>>
    void SetGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::forward<GlossaryTermsT>(value); }
    template<typename GlossaryTermsT = Aws::Vector<Aws::String>>
    UpdateEnvironmentResult& WithGlossaryTerms(GlossaryTermsT&& value) { SetGlossaryTerms(std::forward<GlossaryTermsT>(value)); return *this;}
    template<typename GlossaryTermsT = Aws::String>
    UpdateEnvironmentResult& AddGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.emplace_back(std::forward<GlossaryTermsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the environment that is to be updated.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateEnvironmentResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last deployment of the environment.</p>
     */
    inline const Deployment& GetLastDeployment() const { return m_lastDeployment; }
    template<typename LastDeploymentT = Deployment>
    void SetLastDeployment(LastDeploymentT&& value) { m_lastDeploymentHasBeenSet = true; m_lastDeployment = std::forward<LastDeploymentT>(value); }
    template<typename LastDeploymentT = Deployment>
    UpdateEnvironmentResult& WithLastDeployment(LastDeploymentT&& value) { SetLastDeployment(std::forward<LastDeploymentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to be updated as part of the <code>UpdateEnvironment</code>
     * action.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateEnvironmentResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The project identifier of the environment.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    UpdateEnvironmentResult& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider identifier of the environment.</p>
     */
    inline const Aws::String& GetProvider() const { return m_provider; }
    template<typename ProviderT = Aws::String>
    void SetProvider(ProviderT&& value) { m_providerHasBeenSet = true; m_provider = std::forward<ProviderT>(value); }
    template<typename ProviderT = Aws::String>
    UpdateEnvironmentResult& WithProvider(ProviderT&& value) { SetProvider(std::forward<ProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioned resources to be updated as part of the
     * <code>UpdateEnvironment</code> action.</p>
     */
    inline const Aws::Vector<Resource>& GetProvisionedResources() const { return m_provisionedResources; }
    template<typename ProvisionedResourcesT = Aws::Vector<Resource>>
    void SetProvisionedResources(ProvisionedResourcesT&& value) { m_provisionedResourcesHasBeenSet = true; m_provisionedResources = std::forward<ProvisionedResourcesT>(value); }
    template<typename ProvisionedResourcesT = Aws::Vector<Resource>>
    UpdateEnvironmentResult& WithProvisionedResources(ProvisionedResourcesT&& value) { SetProvisionedResources(std::forward<ProvisionedResourcesT>(value)); return *this;}
    template<typename ProvisionedResourcesT = Resource>
    UpdateEnvironmentResult& AddProvisionedResources(ProvisionedResourcesT&& value) { m_provisionedResourcesHasBeenSet = true; m_provisionedResources.emplace_back(std::forward<ProvisionedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The provisioning properties to be updated as part of the
     * <code>UpdateEnvironment</code> action.</p>
     */
    inline const ProvisioningProperties& GetProvisioningProperties() const { return m_provisioningProperties; }
    template<typename ProvisioningPropertiesT = ProvisioningProperties>
    void SetProvisioningProperties(ProvisioningPropertiesT&& value) { m_provisioningPropertiesHasBeenSet = true; m_provisioningProperties = std::forward<ProvisioningPropertiesT>(value); }
    template<typename ProvisioningPropertiesT = ProvisioningProperties>
    UpdateEnvironmentResult& WithProvisioningProperties(ProvisioningPropertiesT&& value) { SetProvisioningProperties(std::forward<ProvisioningPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status to be updated as part of the <code>UpdateEnvironment</code>
     * action.</p>
     */
    inline EnvironmentStatus GetStatus() const { return m_status; }
    inline void SetStatus(EnvironmentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateEnvironmentResult& WithStatus(EnvironmentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the environment was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    UpdateEnvironmentResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user parameters to be updated as part of the
     * <code>UpdateEnvironment</code> action.</p>
     */
    inline const Aws::Vector<CustomParameter>& GetUserParameters() const { return m_userParameters; }
    template<typename UserParametersT = Aws::Vector<CustomParameter>>
    void SetUserParameters(UserParametersT&& value) { m_userParametersHasBeenSet = true; m_userParameters = std::forward<UserParametersT>(value); }
    template<typename UserParametersT = Aws::Vector<CustomParameter>>
    UpdateEnvironmentResult& WithUserParameters(UserParametersT&& value) { SetUserParameters(std::forward<UserParametersT>(value)); return *this;}
    template<typename UserParametersT = CustomParameter>
    UpdateEnvironmentResult& AddUserParameters(UserParametersT&& value) { m_userParametersHasBeenSet = true; m_userParameters.emplace_back(std::forward<UserParametersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateEnvironmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
