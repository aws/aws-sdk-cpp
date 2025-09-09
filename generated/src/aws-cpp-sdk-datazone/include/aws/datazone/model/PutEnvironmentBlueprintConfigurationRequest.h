/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/datazone/model/ProvisioningConfiguration.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class PutEnvironmentBlueprintConfigurationRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API PutEnvironmentBlueprintConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEnvironmentBlueprintConfiguration"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    PutEnvironmentBlueprintConfigurationRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the enabled Amazon Web Services Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledRegions() const { return m_enabledRegions; }
    inline bool EnabledRegionsHasBeenSet() const { return m_enabledRegionsHasBeenSet; }
    template<typename EnabledRegionsT = Aws::Vector<Aws::String>>
    void SetEnabledRegions(EnabledRegionsT&& value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions = std::forward<EnabledRegionsT>(value); }
    template<typename EnabledRegionsT = Aws::Vector<Aws::String>>
    PutEnvironmentBlueprintConfigurationRequest& WithEnabledRegions(EnabledRegionsT&& value) { SetEnabledRegions(std::forward<EnabledRegionsT>(value)); return *this;}
    template<typename EnabledRegionsT = Aws::String>
    PutEnvironmentBlueprintConfigurationRequest& AddEnabledRegions(EnabledRegionsT&& value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions.emplace_back(std::forward<EnabledRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the environment blueprint.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintIdentifier() const { return m_environmentBlueprintIdentifier; }
    inline bool EnvironmentBlueprintIdentifierHasBeenSet() const { return m_environmentBlueprintIdentifierHasBeenSet; }
    template<typename EnvironmentBlueprintIdentifierT = Aws::String>
    void SetEnvironmentBlueprintIdentifier(EnvironmentBlueprintIdentifierT&& value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier = std::forward<EnvironmentBlueprintIdentifierT>(value); }
    template<typename EnvironmentBlueprintIdentifierT = Aws::String>
    PutEnvironmentBlueprintConfigurationRequest& WithEnvironmentBlueprintIdentifier(EnvironmentBlueprintIdentifierT&& value) { SetEnvironmentBlueprintIdentifier(std::forward<EnvironmentBlueprintIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment role permissions boundary.</p>
     */
    inline const Aws::String& GetEnvironmentRolePermissionBoundary() const { return m_environmentRolePermissionBoundary; }
    inline bool EnvironmentRolePermissionBoundaryHasBeenSet() const { return m_environmentRolePermissionBoundaryHasBeenSet; }
    template<typename EnvironmentRolePermissionBoundaryT = Aws::String>
    void SetEnvironmentRolePermissionBoundary(EnvironmentRolePermissionBoundaryT&& value) { m_environmentRolePermissionBoundaryHasBeenSet = true; m_environmentRolePermissionBoundary = std::forward<EnvironmentRolePermissionBoundaryT>(value); }
    template<typename EnvironmentRolePermissionBoundaryT = Aws::String>
    PutEnvironmentBlueprintConfigurationRequest& WithEnvironmentRolePermissionBoundary(EnvironmentRolePermissionBoundaryT&& value) { SetEnvironmentRolePermissionBoundary(std::forward<EnvironmentRolePermissionBoundaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Region-agnostic environment blueprint parameters. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetGlobalParameters() const { return m_globalParameters; }
    inline bool GlobalParametersHasBeenSet() const { return m_globalParametersHasBeenSet; }
    template<typename GlobalParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetGlobalParameters(GlobalParametersT&& value) { m_globalParametersHasBeenSet = true; m_globalParameters = std::forward<GlobalParametersT>(value); }
    template<typename GlobalParametersT = Aws::Map<Aws::String, Aws::String>>
    PutEnvironmentBlueprintConfigurationRequest& WithGlobalParameters(GlobalParametersT&& value) { SetGlobalParameters(std::forward<GlobalParametersT>(value)); return *this;}
    template<typename GlobalParametersKeyT = Aws::String, typename GlobalParametersValueT = Aws::String>
    PutEnvironmentBlueprintConfigurationRequest& AddGlobalParameters(GlobalParametersKeyT&& key, GlobalParametersValueT&& value) {
      m_globalParametersHasBeenSet = true; m_globalParameters.emplace(std::forward<GlobalParametersKeyT>(key), std::forward<GlobalParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The ARN of the manage access role.</p>
     */
    inline const Aws::String& GetManageAccessRoleArn() const { return m_manageAccessRoleArn; }
    inline bool ManageAccessRoleArnHasBeenSet() const { return m_manageAccessRoleArnHasBeenSet; }
    template<typename ManageAccessRoleArnT = Aws::String>
    void SetManageAccessRoleArn(ManageAccessRoleArnT&& value) { m_manageAccessRoleArnHasBeenSet = true; m_manageAccessRoleArn = std::forward<ManageAccessRoleArnT>(value); }
    template<typename ManageAccessRoleArnT = Aws::String>
    PutEnvironmentBlueprintConfigurationRequest& WithManageAccessRoleArn(ManageAccessRoleArnT&& value) { SetManageAccessRoleArn(std::forward<ManageAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning configuration of a blueprint.</p>
     */
    inline const Aws::Vector<ProvisioningConfiguration>& GetProvisioningConfigurations() const { return m_provisioningConfigurations; }
    inline bool ProvisioningConfigurationsHasBeenSet() const { return m_provisioningConfigurationsHasBeenSet; }
    template<typename ProvisioningConfigurationsT = Aws::Vector<ProvisioningConfiguration>>
    void SetProvisioningConfigurations(ProvisioningConfigurationsT&& value) { m_provisioningConfigurationsHasBeenSet = true; m_provisioningConfigurations = std::forward<ProvisioningConfigurationsT>(value); }
    template<typename ProvisioningConfigurationsT = Aws::Vector<ProvisioningConfiguration>>
    PutEnvironmentBlueprintConfigurationRequest& WithProvisioningConfigurations(ProvisioningConfigurationsT&& value) { SetProvisioningConfigurations(std::forward<ProvisioningConfigurationsT>(value)); return *this;}
    template<typename ProvisioningConfigurationsT = ProvisioningConfiguration>
    PutEnvironmentBlueprintConfigurationRequest& AddProvisioningConfigurations(ProvisioningConfigurationsT&& value) { m_provisioningConfigurationsHasBeenSet = true; m_provisioningConfigurations.emplace_back(std::forward<ProvisioningConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the provisioning role.</p>
     */
    inline const Aws::String& GetProvisioningRoleArn() const { return m_provisioningRoleArn; }
    inline bool ProvisioningRoleArnHasBeenSet() const { return m_provisioningRoleArnHasBeenSet; }
    template<typename ProvisioningRoleArnT = Aws::String>
    void SetProvisioningRoleArn(ProvisioningRoleArnT&& value) { m_provisioningRoleArnHasBeenSet = true; m_provisioningRoleArn = std::forward<ProvisioningRoleArnT>(value); }
    template<typename ProvisioningRoleArnT = Aws::String>
    PutEnvironmentBlueprintConfigurationRequest& WithProvisioningRoleArn(ProvisioningRoleArnT&& value) { SetProvisioningRoleArn(std::forward<ProvisioningRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetRegionalParameters() const { return m_regionalParameters; }
    inline bool RegionalParametersHasBeenSet() const { return m_regionalParametersHasBeenSet; }
    template<typename RegionalParametersT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    void SetRegionalParameters(RegionalParametersT&& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters = std::forward<RegionalParametersT>(value); }
    template<typename RegionalParametersT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    PutEnvironmentBlueprintConfigurationRequest& WithRegionalParameters(RegionalParametersT&& value) { SetRegionalParameters(std::forward<RegionalParametersT>(value)); return *this;}
    template<typename RegionalParametersKeyT = Aws::String, typename RegionalParametersValueT = Aws::Map<Aws::String, Aws::String>>
    PutEnvironmentBlueprintConfigurationRequest& AddRegionalParameters(RegionalParametersKeyT&& key, RegionalParametersValueT&& value) {
      m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(std::forward<RegionalParametersKeyT>(key), std::forward<RegionalParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_enabledRegions;
    bool m_enabledRegionsHasBeenSet = false;

    Aws::String m_environmentBlueprintIdentifier;
    bool m_environmentBlueprintIdentifierHasBeenSet = false;

    Aws::String m_environmentRolePermissionBoundary;
    bool m_environmentRolePermissionBoundaryHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_globalParameters;
    bool m_globalParametersHasBeenSet = false;

    Aws::String m_manageAccessRoleArn;
    bool m_manageAccessRoleArnHasBeenSet = false;

    Aws::Vector<ProvisioningConfiguration> m_provisioningConfigurations;
    bool m_provisioningConfigurationsHasBeenSet = false;

    Aws::String m_provisioningRoleArn;
    bool m_provisioningRoleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_regionalParameters;
    bool m_regionalParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
