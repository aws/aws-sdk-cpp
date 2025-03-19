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
#include <aws/datazone/model/ProvisioningConfiguration.h>
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
  class GetEnvironmentBlueprintConfigurationResult
  {
  public:
    AWS_DATAZONE_API GetEnvironmentBlueprintConfigurationResult() = default;
    AWS_DATAZONE_API GetEnvironmentBlueprintConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetEnvironmentBlueprintConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp of when this blueprint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetEnvironmentBlueprintConfigurationResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain where this blueprint exists.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    GetEnvironmentBlueprintConfigurationResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services regions in which this blueprint is enabled.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledRegions() const { return m_enabledRegions; }
    template<typename EnabledRegionsT = Aws::Vector<Aws::String>>
    void SetEnabledRegions(EnabledRegionsT&& value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions = std::forward<EnabledRegionsT>(value); }
    template<typename EnabledRegionsT = Aws::Vector<Aws::String>>
    GetEnvironmentBlueprintConfigurationResult& WithEnabledRegions(EnabledRegionsT&& value) { SetEnabledRegions(std::forward<EnabledRegionsT>(value)); return *this;}
    template<typename EnabledRegionsT = Aws::String>
    GetEnvironmentBlueprintConfigurationResult& AddEnabledRegions(EnabledRegionsT&& value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions.emplace_back(std::forward<EnabledRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the blueprint.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintId() const { return m_environmentBlueprintId; }
    template<typename EnvironmentBlueprintIdT = Aws::String>
    void SetEnvironmentBlueprintId(EnvironmentBlueprintIdT&& value) { m_environmentBlueprintIdHasBeenSet = true; m_environmentBlueprintId = std::forward<EnvironmentBlueprintIdT>(value); }
    template<typename EnvironmentBlueprintIdT = Aws::String>
    GetEnvironmentBlueprintConfigurationResult& WithEnvironmentBlueprintId(EnvironmentBlueprintIdT&& value) { SetEnvironmentBlueprintId(std::forward<EnvironmentBlueprintIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment role permissions boundary.</p>
     */
    inline const Aws::String& GetEnvironmentRolePermissionBoundary() const { return m_environmentRolePermissionBoundary; }
    template<typename EnvironmentRolePermissionBoundaryT = Aws::String>
    void SetEnvironmentRolePermissionBoundary(EnvironmentRolePermissionBoundaryT&& value) { m_environmentRolePermissionBoundaryHasBeenSet = true; m_environmentRolePermissionBoundary = std::forward<EnvironmentRolePermissionBoundaryT>(value); }
    template<typename EnvironmentRolePermissionBoundaryT = Aws::String>
    GetEnvironmentBlueprintConfigurationResult& WithEnvironmentRolePermissionBoundary(EnvironmentRolePermissionBoundaryT&& value) { SetEnvironmentRolePermissionBoundary(std::forward<EnvironmentRolePermissionBoundaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the manage access role with which this blueprint is created.</p>
     */
    inline const Aws::String& GetManageAccessRoleArn() const { return m_manageAccessRoleArn; }
    template<typename ManageAccessRoleArnT = Aws::String>
    void SetManageAccessRoleArn(ManageAccessRoleArnT&& value) { m_manageAccessRoleArnHasBeenSet = true; m_manageAccessRoleArn = std::forward<ManageAccessRoleArnT>(value); }
    template<typename ManageAccessRoleArnT = Aws::String>
    GetEnvironmentBlueprintConfigurationResult& WithManageAccessRoleArn(ManageAccessRoleArnT&& value) { SetManageAccessRoleArn(std::forward<ManageAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning configuration of a blueprint.</p>
     */
    inline const Aws::Vector<ProvisioningConfiguration>& GetProvisioningConfigurations() const { return m_provisioningConfigurations; }
    template<typename ProvisioningConfigurationsT = Aws::Vector<ProvisioningConfiguration>>
    void SetProvisioningConfigurations(ProvisioningConfigurationsT&& value) { m_provisioningConfigurationsHasBeenSet = true; m_provisioningConfigurations = std::forward<ProvisioningConfigurationsT>(value); }
    template<typename ProvisioningConfigurationsT = Aws::Vector<ProvisioningConfiguration>>
    GetEnvironmentBlueprintConfigurationResult& WithProvisioningConfigurations(ProvisioningConfigurationsT&& value) { SetProvisioningConfigurations(std::forward<ProvisioningConfigurationsT>(value)); return *this;}
    template<typename ProvisioningConfigurationsT = ProvisioningConfiguration>
    GetEnvironmentBlueprintConfigurationResult& AddProvisioningConfigurations(ProvisioningConfigurationsT&& value) { m_provisioningConfigurationsHasBeenSet = true; m_provisioningConfigurations.emplace_back(std::forward<ProvisioningConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the provisioning role with which this blueprint is created.</p>
     */
    inline const Aws::String& GetProvisioningRoleArn() const { return m_provisioningRoleArn; }
    template<typename ProvisioningRoleArnT = Aws::String>
    void SetProvisioningRoleArn(ProvisioningRoleArnT&& value) { m_provisioningRoleArnHasBeenSet = true; m_provisioningRoleArn = std::forward<ProvisioningRoleArnT>(value); }
    template<typename ProvisioningRoleArnT = Aws::String>
    GetEnvironmentBlueprintConfigurationResult& WithProvisioningRoleArn(ProvisioningRoleArnT&& value) { SetProvisioningRoleArn(std::forward<ProvisioningRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The regional parameters of the blueprint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetRegionalParameters() const { return m_regionalParameters; }
    template<typename RegionalParametersT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    void SetRegionalParameters(RegionalParametersT&& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters = std::forward<RegionalParametersT>(value); }
    template<typename RegionalParametersT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    GetEnvironmentBlueprintConfigurationResult& WithRegionalParameters(RegionalParametersT&& value) { SetRegionalParameters(std::forward<RegionalParametersT>(value)); return *this;}
    template<typename RegionalParametersKeyT = Aws::String, typename RegionalParametersValueT = Aws::Map<Aws::String, Aws::String>>
    GetEnvironmentBlueprintConfigurationResult& AddRegionalParameters(RegionalParametersKeyT&& key, RegionalParametersValueT&& value) {
      m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(std::forward<RegionalParametersKeyT>(key), std::forward<RegionalParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when this blueprint was upated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetEnvironmentBlueprintConfigurationResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEnvironmentBlueprintConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_enabledRegions;
    bool m_enabledRegionsHasBeenSet = false;

    Aws::String m_environmentBlueprintId;
    bool m_environmentBlueprintIdHasBeenSet = false;

    Aws::String m_environmentRolePermissionBoundary;
    bool m_environmentRolePermissionBoundaryHasBeenSet = false;

    Aws::String m_manageAccessRoleArn;
    bool m_manageAccessRoleArnHasBeenSet = false;

    Aws::Vector<ProvisioningConfiguration> m_provisioningConfigurations;
    bool m_provisioningConfigurationsHasBeenSet = false;

    Aws::String m_provisioningRoleArn;
    bool m_provisioningRoleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_regionalParameters;
    bool m_regionalParametersHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
