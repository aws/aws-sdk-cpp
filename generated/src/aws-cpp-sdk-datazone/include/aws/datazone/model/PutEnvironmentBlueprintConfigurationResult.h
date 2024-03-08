/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class PutEnvironmentBlueprintConfigurationResult
  {
  public:
    AWS_DATAZONE_API PutEnvironmentBlueprintConfigurationResult();
    AWS_DATAZONE_API PutEnvironmentBlueprintConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API PutEnvironmentBlueprintConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp of when the environment blueprint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the environment blueprint was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when the environment blueprint was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the environment blueprint was created.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the environment blueprint was created.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>Specifies the enabled Amazon Web Services Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledRegions() const{ return m_enabledRegions; }

    /**
     * <p>Specifies the enabled Amazon Web Services Regions.</p>
     */
    inline void SetEnabledRegions(const Aws::Vector<Aws::String>& value) { m_enabledRegions = value; }

    /**
     * <p>Specifies the enabled Amazon Web Services Regions.</p>
     */
    inline void SetEnabledRegions(Aws::Vector<Aws::String>&& value) { m_enabledRegions = std::move(value); }

    /**
     * <p>Specifies the enabled Amazon Web Services Regions.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& WithEnabledRegions(const Aws::Vector<Aws::String>& value) { SetEnabledRegions(value); return *this;}

    /**
     * <p>Specifies the enabled Amazon Web Services Regions.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& WithEnabledRegions(Aws::Vector<Aws::String>&& value) { SetEnabledRegions(std::move(value)); return *this;}

    /**
     * <p>Specifies the enabled Amazon Web Services Regions.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& AddEnabledRegions(const Aws::String& value) { m_enabledRegions.push_back(value); return *this; }

    /**
     * <p>Specifies the enabled Amazon Web Services Regions.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& AddEnabledRegions(Aws::String&& value) { m_enabledRegions.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the enabled Amazon Web Services Regions.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& AddEnabledRegions(const char* value) { m_enabledRegions.push_back(value); return *this; }


    /**
     * <p>The identifier of the environment blueprint.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintId() const{ return m_environmentBlueprintId; }

    /**
     * <p>The identifier of the environment blueprint.</p>
     */
    inline void SetEnvironmentBlueprintId(const Aws::String& value) { m_environmentBlueprintId = value; }

    /**
     * <p>The identifier of the environment blueprint.</p>
     */
    inline void SetEnvironmentBlueprintId(Aws::String&& value) { m_environmentBlueprintId = std::move(value); }

    /**
     * <p>The identifier of the environment blueprint.</p>
     */
    inline void SetEnvironmentBlueprintId(const char* value) { m_environmentBlueprintId.assign(value); }

    /**
     * <p>The identifier of the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& WithEnvironmentBlueprintId(const Aws::String& value) { SetEnvironmentBlueprintId(value); return *this;}

    /**
     * <p>The identifier of the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& WithEnvironmentBlueprintId(Aws::String&& value) { SetEnvironmentBlueprintId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& WithEnvironmentBlueprintId(const char* value) { SetEnvironmentBlueprintId(value); return *this;}


    /**
     * <p>The ARN of the manage access role.</p>
     */
    inline const Aws::String& GetManageAccessRoleArn() const{ return m_manageAccessRoleArn; }

    /**
     * <p>The ARN of the manage access role.</p>
     */
    inline void SetManageAccessRoleArn(const Aws::String& value) { m_manageAccessRoleArn = value; }

    /**
     * <p>The ARN of the manage access role.</p>
     */
    inline void SetManageAccessRoleArn(Aws::String&& value) { m_manageAccessRoleArn = std::move(value); }

    /**
     * <p>The ARN of the manage access role.</p>
     */
    inline void SetManageAccessRoleArn(const char* value) { m_manageAccessRoleArn.assign(value); }

    /**
     * <p>The ARN of the manage access role.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& WithManageAccessRoleArn(const Aws::String& value) { SetManageAccessRoleArn(value); return *this;}

    /**
     * <p>The ARN of the manage access role.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& WithManageAccessRoleArn(Aws::String&& value) { SetManageAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the manage access role.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& WithManageAccessRoleArn(const char* value) { SetManageAccessRoleArn(value); return *this;}


    /**
     * <p>The ARN of the provisioning role.</p>
     */
    inline const Aws::String& GetProvisioningRoleArn() const{ return m_provisioningRoleArn; }

    /**
     * <p>The ARN of the provisioning role.</p>
     */
    inline void SetProvisioningRoleArn(const Aws::String& value) { m_provisioningRoleArn = value; }

    /**
     * <p>The ARN of the provisioning role.</p>
     */
    inline void SetProvisioningRoleArn(Aws::String&& value) { m_provisioningRoleArn = std::move(value); }

    /**
     * <p>The ARN of the provisioning role.</p>
     */
    inline void SetProvisioningRoleArn(const char* value) { m_provisioningRoleArn.assign(value); }

    /**
     * <p>The ARN of the provisioning role.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& WithProvisioningRoleArn(const Aws::String& value) { SetProvisioningRoleArn(value); return *this;}

    /**
     * <p>The ARN of the provisioning role.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& WithProvisioningRoleArn(Aws::String&& value) { SetProvisioningRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the provisioning role.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& WithProvisioningRoleArn(const char* value) { SetProvisioningRoleArn(value); return *this;}


    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetRegionalParameters() const{ return m_regionalParameters; }

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline void SetRegionalParameters(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { m_regionalParameters = value; }

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline void SetRegionalParameters(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { m_regionalParameters = std::move(value); }

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& WithRegionalParameters(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { SetRegionalParameters(value); return *this;}

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& WithRegionalParameters(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { SetRegionalParameters(std::move(value)); return *this;}

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& AddRegionalParameters(const Aws::String& key, const Aws::Map<Aws::String, Aws::String>& value) { m_regionalParameters.emplace(key, value); return *this; }

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& AddRegionalParameters(Aws::String&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_regionalParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& AddRegionalParameters(const Aws::String& key, Aws::Map<Aws::String, Aws::String>&& value) { m_regionalParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& AddRegionalParameters(Aws::String&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_regionalParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& AddRegionalParameters(const char* key, Aws::Map<Aws::String, Aws::String>&& value) { m_regionalParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& AddRegionalParameters(const char* key, const Aws::Map<Aws::String, Aws::String>& value) { m_regionalParameters.emplace(key, value); return *this; }


    /**
     * <p>The timestamp of when the environment blueprint was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the environment blueprint was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The timestamp of when the environment blueprint was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the environment blueprint was updated.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the environment blueprint was updated.</p>
     */
    inline PutEnvironmentBlueprintConfigurationResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutEnvironmentBlueprintConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutEnvironmentBlueprintConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutEnvironmentBlueprintConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_domainId;

    Aws::Vector<Aws::String> m_enabledRegions;

    Aws::String m_environmentBlueprintId;

    Aws::String m_manageAccessRoleArn;

    Aws::String m_provisioningRoleArn;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_regionalParameters;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
