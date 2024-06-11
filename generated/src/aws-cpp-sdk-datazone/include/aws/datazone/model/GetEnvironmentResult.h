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
  class GetEnvironmentResult
  {
  public:
    AWS_DATAZONE_API GetEnvironmentResult();
    AWS_DATAZONE_API GetEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account where the environment exists.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountId.assign(value); }
    inline GetEnvironmentResult& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline GetEnvironmentResult& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services region where the environment exists.</p>
     */
    inline const Aws::String& GetAwsAccountRegion() const{ return m_awsAccountRegion; }
    inline void SetAwsAccountRegion(const Aws::String& value) { m_awsAccountRegion = value; }
    inline void SetAwsAccountRegion(Aws::String&& value) { m_awsAccountRegion = std::move(value); }
    inline void SetAwsAccountRegion(const char* value) { m_awsAccountRegion.assign(value); }
    inline GetEnvironmentResult& WithAwsAccountRegion(const Aws::String& value) { SetAwsAccountRegion(value); return *this;}
    inline GetEnvironmentResult& WithAwsAccountRegion(Aws::String&& value) { SetAwsAccountRegion(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithAwsAccountRegion(const char* value) { SetAwsAccountRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the environment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetEnvironmentResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetEnvironmentResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the environment.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetEnvironmentResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetEnvironmentResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment properties of the environment.</p>
     */
    inline const DeploymentProperties& GetDeploymentProperties() const{ return m_deploymentProperties; }
    inline void SetDeploymentProperties(const DeploymentProperties& value) { m_deploymentProperties = value; }
    inline void SetDeploymentProperties(DeploymentProperties&& value) { m_deploymentProperties = std::move(value); }
    inline GetEnvironmentResult& WithDeploymentProperties(const DeploymentProperties& value) { SetDeploymentProperties(value); return *this;}
    inline GetEnvironmentResult& WithDeploymentProperties(DeploymentProperties&& value) { SetDeploymentProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetEnvironmentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetEnvironmentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain where the environment exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline GetEnvironmentResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline GetEnvironmentResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions of the environment.</p>
     */
    inline const Aws::Vector<ConfigurableEnvironmentAction>& GetEnvironmentActions() const{ return m_environmentActions; }
    inline void SetEnvironmentActions(const Aws::Vector<ConfigurableEnvironmentAction>& value) { m_environmentActions = value; }
    inline void SetEnvironmentActions(Aws::Vector<ConfigurableEnvironmentAction>&& value) { m_environmentActions = std::move(value); }
    inline GetEnvironmentResult& WithEnvironmentActions(const Aws::Vector<ConfigurableEnvironmentAction>& value) { SetEnvironmentActions(value); return *this;}
    inline GetEnvironmentResult& WithEnvironmentActions(Aws::Vector<ConfigurableEnvironmentAction>&& value) { SetEnvironmentActions(std::move(value)); return *this;}
    inline GetEnvironmentResult& AddEnvironmentActions(const ConfigurableEnvironmentAction& value) { m_environmentActions.push_back(value); return *this; }
    inline GetEnvironmentResult& AddEnvironmentActions(ConfigurableEnvironmentAction&& value) { m_environmentActions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The blueprint with which the environment is created.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintId() const{ return m_environmentBlueprintId; }
    inline void SetEnvironmentBlueprintId(const Aws::String& value) { m_environmentBlueprintId = value; }
    inline void SetEnvironmentBlueprintId(Aws::String&& value) { m_environmentBlueprintId = std::move(value); }
    inline void SetEnvironmentBlueprintId(const char* value) { m_environmentBlueprintId.assign(value); }
    inline GetEnvironmentResult& WithEnvironmentBlueprintId(const Aws::String& value) { SetEnvironmentBlueprintId(value); return *this;}
    inline GetEnvironmentResult& WithEnvironmentBlueprintId(Aws::String&& value) { SetEnvironmentBlueprintId(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithEnvironmentBlueprintId(const char* value) { SetEnvironmentBlueprintId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment profile with which the environment is created.</p>
     */
    inline const Aws::String& GetEnvironmentProfileId() const{ return m_environmentProfileId; }
    inline void SetEnvironmentProfileId(const Aws::String& value) { m_environmentProfileId = value; }
    inline void SetEnvironmentProfileId(Aws::String&& value) { m_environmentProfileId = std::move(value); }
    inline void SetEnvironmentProfileId(const char* value) { m_environmentProfileId.assign(value); }
    inline GetEnvironmentResult& WithEnvironmentProfileId(const Aws::String& value) { SetEnvironmentProfileId(value); return *this;}
    inline GetEnvironmentResult& WithEnvironmentProfileId(Aws::String&& value) { SetEnvironmentProfileId(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithEnvironmentProfileId(const char* value) { SetEnvironmentProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The business glossary terms that can be used in this environment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const{ return m_glossaryTerms; }
    inline void SetGlossaryTerms(const Aws::Vector<Aws::String>& value) { m_glossaryTerms = value; }
    inline void SetGlossaryTerms(Aws::Vector<Aws::String>&& value) { m_glossaryTerms = std::move(value); }
    inline GetEnvironmentResult& WithGlossaryTerms(const Aws::Vector<Aws::String>& value) { SetGlossaryTerms(value); return *this;}
    inline GetEnvironmentResult& WithGlossaryTerms(Aws::Vector<Aws::String>&& value) { SetGlossaryTerms(std::move(value)); return *this;}
    inline GetEnvironmentResult& AddGlossaryTerms(const Aws::String& value) { m_glossaryTerms.push_back(value); return *this; }
    inline GetEnvironmentResult& AddGlossaryTerms(Aws::String&& value) { m_glossaryTerms.push_back(std::move(value)); return *this; }
    inline GetEnvironmentResult& AddGlossaryTerms(const char* value) { m_glossaryTerms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the environment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetEnvironmentResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetEnvironmentResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the last deployment of the environment.</p>
     */
    inline const Deployment& GetLastDeployment() const{ return m_lastDeployment; }
    inline void SetLastDeployment(const Deployment& value) { m_lastDeployment = value; }
    inline void SetLastDeployment(Deployment&& value) { m_lastDeployment = std::move(value); }
    inline GetEnvironmentResult& WithLastDeployment(const Deployment& value) { SetLastDeployment(value); return *this;}
    inline GetEnvironmentResult& WithLastDeployment(Deployment&& value) { SetLastDeployment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetEnvironmentResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetEnvironmentResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone project in which this environment is
     * created.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }
    inline void SetProjectId(const Aws::String& value) { m_projectId = value; }
    inline void SetProjectId(Aws::String&& value) { m_projectId = std::move(value); }
    inline void SetProjectId(const char* value) { m_projectId.assign(value); }
    inline GetEnvironmentResult& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}
    inline GetEnvironmentResult& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithProjectId(const char* value) { SetProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider of this Amazon DataZone environment.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }
    inline void SetProvider(const Aws::String& value) { m_provider = value; }
    inline void SetProvider(Aws::String&& value) { m_provider = std::move(value); }
    inline void SetProvider(const char* value) { m_provider.assign(value); }
    inline GetEnvironmentResult& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}
    inline GetEnvironmentResult& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithProvider(const char* value) { SetProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioned resources of this Amazon DataZone environment.</p>
     */
    inline const Aws::Vector<Resource>& GetProvisionedResources() const{ return m_provisionedResources; }
    inline void SetProvisionedResources(const Aws::Vector<Resource>& value) { m_provisionedResources = value; }
    inline void SetProvisionedResources(Aws::Vector<Resource>&& value) { m_provisionedResources = std::move(value); }
    inline GetEnvironmentResult& WithProvisionedResources(const Aws::Vector<Resource>& value) { SetProvisionedResources(value); return *this;}
    inline GetEnvironmentResult& WithProvisionedResources(Aws::Vector<Resource>&& value) { SetProvisionedResources(std::move(value)); return *this;}
    inline GetEnvironmentResult& AddProvisionedResources(const Resource& value) { m_provisionedResources.push_back(value); return *this; }
    inline GetEnvironmentResult& AddProvisionedResources(Resource&& value) { m_provisionedResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The provisioning properties of this Amazon DataZone environment.</p>
     */
    inline const ProvisioningProperties& GetProvisioningProperties() const{ return m_provisioningProperties; }
    inline void SetProvisioningProperties(const ProvisioningProperties& value) { m_provisioningProperties = value; }
    inline void SetProvisioningProperties(ProvisioningProperties&& value) { m_provisioningProperties = std::move(value); }
    inline GetEnvironmentResult& WithProvisioningProperties(const ProvisioningProperties& value) { SetProvisioningProperties(value); return *this;}
    inline GetEnvironmentResult& WithProvisioningProperties(ProvisioningProperties&& value) { SetProvisioningProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this Amazon DataZone environment.</p>
     */
    inline const EnvironmentStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const EnvironmentStatus& value) { m_status = value; }
    inline void SetStatus(EnvironmentStatus&& value) { m_status = std::move(value); }
    inline GetEnvironmentResult& WithStatus(const EnvironmentStatus& value) { SetStatus(value); return *this;}
    inline GetEnvironmentResult& WithStatus(EnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when this environment was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetEnvironmentResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetEnvironmentResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user parameters of this Amazon DataZone environment.</p>
     */
    inline const Aws::Vector<CustomParameter>& GetUserParameters() const{ return m_userParameters; }
    inline void SetUserParameters(const Aws::Vector<CustomParameter>& value) { m_userParameters = value; }
    inline void SetUserParameters(Aws::Vector<CustomParameter>&& value) { m_userParameters = std::move(value); }
    inline GetEnvironmentResult& WithUserParameters(const Aws::Vector<CustomParameter>& value) { SetUserParameters(value); return *this;}
    inline GetEnvironmentResult& WithUserParameters(Aws::Vector<CustomParameter>&& value) { SetUserParameters(std::move(value)); return *this;}
    inline GetEnvironmentResult& AddUserParameters(const CustomParameter& value) { m_userParameters.push_back(value); return *this; }
    inline GetEnvironmentResult& AddUserParameters(CustomParameter&& value) { m_userParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEnvironmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEnvironmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;

    Aws::String m_awsAccountRegion;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    DeploymentProperties m_deploymentProperties;

    Aws::String m_description;

    Aws::String m_domainId;

    Aws::Vector<ConfigurableEnvironmentAction> m_environmentActions;

    Aws::String m_environmentBlueprintId;

    Aws::String m_environmentProfileId;

    Aws::Vector<Aws::String> m_glossaryTerms;

    Aws::String m_id;

    Deployment m_lastDeployment;

    Aws::String m_name;

    Aws::String m_projectId;

    Aws::String m_provider;

    Aws::Vector<Resource> m_provisionedResources;

    ProvisioningProperties m_provisioningProperties;

    EnvironmentStatus m_status;

    Aws::Utils::DateTime m_updatedAt;

    Aws::Vector<CustomParameter> m_userParameters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
