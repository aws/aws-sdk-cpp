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
    AWS_DATAZONE_API UpdateEnvironmentResult();
    AWS_DATAZONE_API UpdateEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API UpdateEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account in which the environment is
     * to be updated.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountId.assign(value); }
    inline UpdateEnvironmentResult& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline UpdateEnvironmentResult& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline UpdateEnvironmentResult& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region in which the environment is updated.</p>
     */
    inline const Aws::String& GetAwsAccountRegion() const{ return m_awsAccountRegion; }
    inline void SetAwsAccountRegion(const Aws::String& value) { m_awsAccountRegion = value; }
    inline void SetAwsAccountRegion(Aws::String&& value) { m_awsAccountRegion = std::move(value); }
    inline void SetAwsAccountRegion(const char* value) { m_awsAccountRegion.assign(value); }
    inline UpdateEnvironmentResult& WithAwsAccountRegion(const Aws::String& value) { SetAwsAccountRegion(value); return *this;}
    inline UpdateEnvironmentResult& WithAwsAccountRegion(Aws::String&& value) { SetAwsAccountRegion(std::move(value)); return *this;}
    inline UpdateEnvironmentResult& WithAwsAccountRegion(const char* value) { SetAwsAccountRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the environment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline UpdateEnvironmentResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline UpdateEnvironmentResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the environment.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline UpdateEnvironmentResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline UpdateEnvironmentResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline UpdateEnvironmentResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment properties to be updated as part of the
     * <code>UpdateEnvironment</code> action.</p>
     */
    inline const DeploymentProperties& GetDeploymentProperties() const{ return m_deploymentProperties; }
    inline void SetDeploymentProperties(const DeploymentProperties& value) { m_deploymentProperties = value; }
    inline void SetDeploymentProperties(DeploymentProperties&& value) { m_deploymentProperties = std::move(value); }
    inline UpdateEnvironmentResult& WithDeploymentProperties(const DeploymentProperties& value) { SetDeploymentProperties(value); return *this;}
    inline UpdateEnvironmentResult& WithDeploymentProperties(DeploymentProperties&& value) { SetDeploymentProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description to be updated as part of the <code>UpdateEnvironment</code>
     * action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateEnvironmentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateEnvironmentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateEnvironmentResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the domain in which the environment is to be updated.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline UpdateEnvironmentResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline UpdateEnvironmentResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline UpdateEnvironmentResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment actions to be updated as part of the
     * <code>UpdateEnvironment</code> action.</p>
     */
    inline const Aws::Vector<ConfigurableEnvironmentAction>& GetEnvironmentActions() const{ return m_environmentActions; }
    inline void SetEnvironmentActions(const Aws::Vector<ConfigurableEnvironmentAction>& value) { m_environmentActions = value; }
    inline void SetEnvironmentActions(Aws::Vector<ConfigurableEnvironmentAction>&& value) { m_environmentActions = std::move(value); }
    inline UpdateEnvironmentResult& WithEnvironmentActions(const Aws::Vector<ConfigurableEnvironmentAction>& value) { SetEnvironmentActions(value); return *this;}
    inline UpdateEnvironmentResult& WithEnvironmentActions(Aws::Vector<ConfigurableEnvironmentAction>&& value) { SetEnvironmentActions(std::move(value)); return *this;}
    inline UpdateEnvironmentResult& AddEnvironmentActions(const ConfigurableEnvironmentAction& value) { m_environmentActions.push_back(value); return *this; }
    inline UpdateEnvironmentResult& AddEnvironmentActions(ConfigurableEnvironmentAction&& value) { m_environmentActions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The blueprint identifier of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintId() const{ return m_environmentBlueprintId; }
    inline void SetEnvironmentBlueprintId(const Aws::String& value) { m_environmentBlueprintId = value; }
    inline void SetEnvironmentBlueprintId(Aws::String&& value) { m_environmentBlueprintId = std::move(value); }
    inline void SetEnvironmentBlueprintId(const char* value) { m_environmentBlueprintId.assign(value); }
    inline UpdateEnvironmentResult& WithEnvironmentBlueprintId(const Aws::String& value) { SetEnvironmentBlueprintId(value); return *this;}
    inline UpdateEnvironmentResult& WithEnvironmentBlueprintId(Aws::String&& value) { SetEnvironmentBlueprintId(std::move(value)); return *this;}
    inline UpdateEnvironmentResult& WithEnvironmentBlueprintId(const char* value) { SetEnvironmentBlueprintId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile identifier of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentProfileId() const{ return m_environmentProfileId; }
    inline void SetEnvironmentProfileId(const Aws::String& value) { m_environmentProfileId = value; }
    inline void SetEnvironmentProfileId(Aws::String&& value) { m_environmentProfileId = std::move(value); }
    inline void SetEnvironmentProfileId(const char* value) { m_environmentProfileId.assign(value); }
    inline UpdateEnvironmentResult& WithEnvironmentProfileId(const Aws::String& value) { SetEnvironmentProfileId(value); return *this;}
    inline UpdateEnvironmentResult& WithEnvironmentProfileId(Aws::String&& value) { SetEnvironmentProfileId(std::move(value)); return *this;}
    inline UpdateEnvironmentResult& WithEnvironmentProfileId(const char* value) { SetEnvironmentProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms to be updated as part of the
     * <code>UpdateEnvironment</code> action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const{ return m_glossaryTerms; }
    inline void SetGlossaryTerms(const Aws::Vector<Aws::String>& value) { m_glossaryTerms = value; }
    inline void SetGlossaryTerms(Aws::Vector<Aws::String>&& value) { m_glossaryTerms = std::move(value); }
    inline UpdateEnvironmentResult& WithGlossaryTerms(const Aws::Vector<Aws::String>& value) { SetGlossaryTerms(value); return *this;}
    inline UpdateEnvironmentResult& WithGlossaryTerms(Aws::Vector<Aws::String>&& value) { SetGlossaryTerms(std::move(value)); return *this;}
    inline UpdateEnvironmentResult& AddGlossaryTerms(const Aws::String& value) { m_glossaryTerms.push_back(value); return *this; }
    inline UpdateEnvironmentResult& AddGlossaryTerms(Aws::String&& value) { m_glossaryTerms.push_back(std::move(value)); return *this; }
    inline UpdateEnvironmentResult& AddGlossaryTerms(const char* value) { m_glossaryTerms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the environment that is to be updated.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateEnvironmentResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateEnvironmentResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateEnvironmentResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last deployment of the environment.</p>
     */
    inline const Deployment& GetLastDeployment() const{ return m_lastDeployment; }
    inline void SetLastDeployment(const Deployment& value) { m_lastDeployment = value; }
    inline void SetLastDeployment(Deployment&& value) { m_lastDeployment = std::move(value); }
    inline UpdateEnvironmentResult& WithLastDeployment(const Deployment& value) { SetLastDeployment(value); return *this;}
    inline UpdateEnvironmentResult& WithLastDeployment(Deployment&& value) { SetLastDeployment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to be updated as part of the <code>UpdateEnvironment</code>
     * action.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateEnvironmentResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateEnvironmentResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateEnvironmentResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The project identifier of the environment.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }
    inline void SetProjectId(const Aws::String& value) { m_projectId = value; }
    inline void SetProjectId(Aws::String&& value) { m_projectId = std::move(value); }
    inline void SetProjectId(const char* value) { m_projectId.assign(value); }
    inline UpdateEnvironmentResult& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}
    inline UpdateEnvironmentResult& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}
    inline UpdateEnvironmentResult& WithProjectId(const char* value) { SetProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider identifier of the environment.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }
    inline void SetProvider(const Aws::String& value) { m_provider = value; }
    inline void SetProvider(Aws::String&& value) { m_provider = std::move(value); }
    inline void SetProvider(const char* value) { m_provider.assign(value); }
    inline UpdateEnvironmentResult& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}
    inline UpdateEnvironmentResult& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}
    inline UpdateEnvironmentResult& WithProvider(const char* value) { SetProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioned resources to be updated as part of the
     * <code>UpdateEnvironment</code> action.</p>
     */
    inline const Aws::Vector<Resource>& GetProvisionedResources() const{ return m_provisionedResources; }
    inline void SetProvisionedResources(const Aws::Vector<Resource>& value) { m_provisionedResources = value; }
    inline void SetProvisionedResources(Aws::Vector<Resource>&& value) { m_provisionedResources = std::move(value); }
    inline UpdateEnvironmentResult& WithProvisionedResources(const Aws::Vector<Resource>& value) { SetProvisionedResources(value); return *this;}
    inline UpdateEnvironmentResult& WithProvisionedResources(Aws::Vector<Resource>&& value) { SetProvisionedResources(std::move(value)); return *this;}
    inline UpdateEnvironmentResult& AddProvisionedResources(const Resource& value) { m_provisionedResources.push_back(value); return *this; }
    inline UpdateEnvironmentResult& AddProvisionedResources(Resource&& value) { m_provisionedResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The provisioning properties to be updated as part of the
     * <code>UpdateEnvironment</code> action.</p>
     */
    inline const ProvisioningProperties& GetProvisioningProperties() const{ return m_provisioningProperties; }
    inline void SetProvisioningProperties(const ProvisioningProperties& value) { m_provisioningProperties = value; }
    inline void SetProvisioningProperties(ProvisioningProperties&& value) { m_provisioningProperties = std::move(value); }
    inline UpdateEnvironmentResult& WithProvisioningProperties(const ProvisioningProperties& value) { SetProvisioningProperties(value); return *this;}
    inline UpdateEnvironmentResult& WithProvisioningProperties(ProvisioningProperties&& value) { SetProvisioningProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status to be updated as part of the <code>UpdateEnvironment</code>
     * action.</p>
     */
    inline const EnvironmentStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const EnvironmentStatus& value) { m_status = value; }
    inline void SetStatus(EnvironmentStatus&& value) { m_status = std::move(value); }
    inline UpdateEnvironmentResult& WithStatus(const EnvironmentStatus& value) { SetStatus(value); return *this;}
    inline UpdateEnvironmentResult& WithStatus(EnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the environment was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline UpdateEnvironmentResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline UpdateEnvironmentResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user parameters to be updated as part of the
     * <code>UpdateEnvironment</code> action.</p>
     */
    inline const Aws::Vector<CustomParameter>& GetUserParameters() const{ return m_userParameters; }
    inline void SetUserParameters(const Aws::Vector<CustomParameter>& value) { m_userParameters = value; }
    inline void SetUserParameters(Aws::Vector<CustomParameter>&& value) { m_userParameters = std::move(value); }
    inline UpdateEnvironmentResult& WithUserParameters(const Aws::Vector<CustomParameter>& value) { SetUserParameters(value); return *this;}
    inline UpdateEnvironmentResult& WithUserParameters(Aws::Vector<CustomParameter>&& value) { SetUserParameters(std::move(value)); return *this;}
    inline UpdateEnvironmentResult& AddUserParameters(const CustomParameter& value) { m_userParameters.push_back(value); return *this; }
    inline UpdateEnvironmentResult& AddUserParameters(CustomParameter&& value) { m_userParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateEnvironmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateEnvironmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateEnvironmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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
