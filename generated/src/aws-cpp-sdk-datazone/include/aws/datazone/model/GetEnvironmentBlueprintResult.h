/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datazone/model/DeploymentProperties.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/ProvisioningProperties.h>
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
  class GetEnvironmentBlueprintResult
  {
  public:
    AWS_DATAZONE_API GetEnvironmentBlueprintResult();
    AWS_DATAZONE_API GetEnvironmentBlueprintResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetEnvironmentBlueprintResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A timestamp of when this blueprint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetEnvironmentBlueprintResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetEnvironmentBlueprintResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment properties of this Amazon DataZone blueprint.</p>
     */
    inline const DeploymentProperties& GetDeploymentProperties() const{ return m_deploymentProperties; }
    inline void SetDeploymentProperties(const DeploymentProperties& value) { m_deploymentProperties = value; }
    inline void SetDeploymentProperties(DeploymentProperties&& value) { m_deploymentProperties = std::move(value); }
    inline GetEnvironmentBlueprintResult& WithDeploymentProperties(const DeploymentProperties& value) { SetDeploymentProperties(value); return *this;}
    inline GetEnvironmentBlueprintResult& WithDeploymentProperties(DeploymentProperties&& value) { SetDeploymentProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of this Amazon DataZone blueprint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetEnvironmentBlueprintResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetEnvironmentBlueprintResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetEnvironmentBlueprintResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms attached to this Amazon DataZone blueprint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const{ return m_glossaryTerms; }
    inline void SetGlossaryTerms(const Aws::Vector<Aws::String>& value) { m_glossaryTerms = value; }
    inline void SetGlossaryTerms(Aws::Vector<Aws::String>&& value) { m_glossaryTerms = std::move(value); }
    inline GetEnvironmentBlueprintResult& WithGlossaryTerms(const Aws::Vector<Aws::String>& value) { SetGlossaryTerms(value); return *this;}
    inline GetEnvironmentBlueprintResult& WithGlossaryTerms(Aws::Vector<Aws::String>&& value) { SetGlossaryTerms(std::move(value)); return *this;}
    inline GetEnvironmentBlueprintResult& AddGlossaryTerms(const Aws::String& value) { m_glossaryTerms.push_back(value); return *this; }
    inline GetEnvironmentBlueprintResult& AddGlossaryTerms(Aws::String&& value) { m_glossaryTerms.push_back(std::move(value)); return *this; }
    inline GetEnvironmentBlueprintResult& AddGlossaryTerms(const char* value) { m_glossaryTerms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of this Amazon DataZone blueprint.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetEnvironmentBlueprintResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetEnvironmentBlueprintResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetEnvironmentBlueprintResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this Amazon DataZone blueprint.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetEnvironmentBlueprintResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetEnvironmentBlueprintResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetEnvironmentBlueprintResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider of this Amazon DataZone blueprint.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }
    inline void SetProvider(const Aws::String& value) { m_provider = value; }
    inline void SetProvider(Aws::String&& value) { m_provider = std::move(value); }
    inline void SetProvider(const char* value) { m_provider.assign(value); }
    inline GetEnvironmentBlueprintResult& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}
    inline GetEnvironmentBlueprintResult& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}
    inline GetEnvironmentBlueprintResult& WithProvider(const char* value) { SetProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning properties of this Amazon DataZone blueprint.</p>
     */
    inline const ProvisioningProperties& GetProvisioningProperties() const{ return m_provisioningProperties; }
    inline void SetProvisioningProperties(const ProvisioningProperties& value) { m_provisioningProperties = value; }
    inline void SetProvisioningProperties(ProvisioningProperties&& value) { m_provisioningProperties = std::move(value); }
    inline GetEnvironmentBlueprintResult& WithProvisioningProperties(const ProvisioningProperties& value) { SetProvisioningProperties(value); return *this;}
    inline GetEnvironmentBlueprintResult& WithProvisioningProperties(ProvisioningProperties&& value) { SetProvisioningProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when this blueprint was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetEnvironmentBlueprintResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetEnvironmentBlueprintResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user parameters of this blueprint.</p>
     */
    inline const Aws::Vector<CustomParameter>& GetUserParameters() const{ return m_userParameters; }
    inline void SetUserParameters(const Aws::Vector<CustomParameter>& value) { m_userParameters = value; }
    inline void SetUserParameters(Aws::Vector<CustomParameter>&& value) { m_userParameters = std::move(value); }
    inline GetEnvironmentBlueprintResult& WithUserParameters(const Aws::Vector<CustomParameter>& value) { SetUserParameters(value); return *this;}
    inline GetEnvironmentBlueprintResult& WithUserParameters(Aws::Vector<CustomParameter>&& value) { SetUserParameters(std::move(value)); return *this;}
    inline GetEnvironmentBlueprintResult& AddUserParameters(const CustomParameter& value) { m_userParameters.push_back(value); return *this; }
    inline GetEnvironmentBlueprintResult& AddUserParameters(CustomParameter&& value) { m_userParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEnvironmentBlueprintResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEnvironmentBlueprintResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEnvironmentBlueprintResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    DeploymentProperties m_deploymentProperties;

    Aws::String m_description;

    Aws::Vector<Aws::String> m_glossaryTerms;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_provider;

    ProvisioningProperties m_provisioningProperties;

    Aws::Utils::DateTime m_updatedAt;

    Aws::Vector<CustomParameter> m_userParameters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
