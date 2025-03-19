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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{

  /**
   * <p>The configuration details of an environment blueprint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/EnvironmentBlueprintConfigurationItem">AWS
   * API Reference</a></p>
   */
  class EnvironmentBlueprintConfigurationItem
  {
  public:
    AWS_DATAZONE_API EnvironmentBlueprintConfigurationItem() = default;
    AWS_DATAZONE_API EnvironmentBlueprintConfigurationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API EnvironmentBlueprintConfigurationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when an environment blueprint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    EnvironmentBlueprintConfigurationItem& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which an environment
     * blueprint exists.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    EnvironmentBlueprintConfigurationItem& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The enabled Amazon Web Services Regions specified in a blueprint
     * configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledRegions() const { return m_enabledRegions; }
    inline bool EnabledRegionsHasBeenSet() const { return m_enabledRegionsHasBeenSet; }
    template<typename EnabledRegionsT = Aws::Vector<Aws::String>>
    void SetEnabledRegions(EnabledRegionsT&& value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions = std::forward<EnabledRegionsT>(value); }
    template<typename EnabledRegionsT = Aws::Vector<Aws::String>>
    EnvironmentBlueprintConfigurationItem& WithEnabledRegions(EnabledRegionsT&& value) { SetEnabledRegions(std::forward<EnabledRegionsT>(value)); return *this;}
    template<typename EnabledRegionsT = Aws::String>
    EnvironmentBlueprintConfigurationItem& AddEnabledRegions(EnabledRegionsT&& value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions.emplace_back(std::forward<EnabledRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the environment blueprint.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintId() const { return m_environmentBlueprintId; }
    inline bool EnvironmentBlueprintIdHasBeenSet() const { return m_environmentBlueprintIdHasBeenSet; }
    template<typename EnvironmentBlueprintIdT = Aws::String>
    void SetEnvironmentBlueprintId(EnvironmentBlueprintIdT&& value) { m_environmentBlueprintIdHasBeenSet = true; m_environmentBlueprintId = std::forward<EnvironmentBlueprintIdT>(value); }
    template<typename EnvironmentBlueprintIdT = Aws::String>
    EnvironmentBlueprintConfigurationItem& WithEnvironmentBlueprintId(EnvironmentBlueprintIdT&& value) { SetEnvironmentBlueprintId(std::forward<EnvironmentBlueprintIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment role permission boundary.</p>
     */
    inline const Aws::String& GetEnvironmentRolePermissionBoundary() const { return m_environmentRolePermissionBoundary; }
    inline bool EnvironmentRolePermissionBoundaryHasBeenSet() const { return m_environmentRolePermissionBoundaryHasBeenSet; }
    template<typename EnvironmentRolePermissionBoundaryT = Aws::String>
    void SetEnvironmentRolePermissionBoundary(EnvironmentRolePermissionBoundaryT&& value) { m_environmentRolePermissionBoundaryHasBeenSet = true; m_environmentRolePermissionBoundary = std::forward<EnvironmentRolePermissionBoundaryT>(value); }
    template<typename EnvironmentRolePermissionBoundaryT = Aws::String>
    EnvironmentBlueprintConfigurationItem& WithEnvironmentRolePermissionBoundary(EnvironmentRolePermissionBoundaryT&& value) { SetEnvironmentRolePermissionBoundary(std::forward<EnvironmentRolePermissionBoundaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the manage access role specified in the environment blueprint
     * configuration.</p>
     */
    inline const Aws::String& GetManageAccessRoleArn() const { return m_manageAccessRoleArn; }
    inline bool ManageAccessRoleArnHasBeenSet() const { return m_manageAccessRoleArnHasBeenSet; }
    template<typename ManageAccessRoleArnT = Aws::String>
    void SetManageAccessRoleArn(ManageAccessRoleArnT&& value) { m_manageAccessRoleArnHasBeenSet = true; m_manageAccessRoleArn = std::forward<ManageAccessRoleArnT>(value); }
    template<typename ManageAccessRoleArnT = Aws::String>
    EnvironmentBlueprintConfigurationItem& WithManageAccessRoleArn(ManageAccessRoleArnT&& value) { SetManageAccessRoleArn(std::forward<ManageAccessRoleArnT>(value)); return *this;}
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
    EnvironmentBlueprintConfigurationItem& WithProvisioningConfigurations(ProvisioningConfigurationsT&& value) { SetProvisioningConfigurations(std::forward<ProvisioningConfigurationsT>(value)); return *this;}
    template<typename ProvisioningConfigurationsT = ProvisioningConfiguration>
    EnvironmentBlueprintConfigurationItem& AddProvisioningConfigurations(ProvisioningConfigurationsT&& value) { m_provisioningConfigurationsHasBeenSet = true; m_provisioningConfigurations.emplace_back(std::forward<ProvisioningConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the provisioning role specified in the environment blueprint
     * configuration.</p>
     */
    inline const Aws::String& GetProvisioningRoleArn() const { return m_provisioningRoleArn; }
    inline bool ProvisioningRoleArnHasBeenSet() const { return m_provisioningRoleArnHasBeenSet; }
    template<typename ProvisioningRoleArnT = Aws::String>
    void SetProvisioningRoleArn(ProvisioningRoleArnT&& value) { m_provisioningRoleArnHasBeenSet = true; m_provisioningRoleArn = std::forward<ProvisioningRoleArnT>(value); }
    template<typename ProvisioningRoleArnT = Aws::String>
    EnvironmentBlueprintConfigurationItem& WithProvisioningRoleArn(ProvisioningRoleArnT&& value) { SetProvisioningRoleArn(std::forward<ProvisioningRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The regional parameters of the environment blueprint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetRegionalParameters() const { return m_regionalParameters; }
    inline bool RegionalParametersHasBeenSet() const { return m_regionalParametersHasBeenSet; }
    template<typename RegionalParametersT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    void SetRegionalParameters(RegionalParametersT&& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters = std::forward<RegionalParametersT>(value); }
    template<typename RegionalParametersT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    EnvironmentBlueprintConfigurationItem& WithRegionalParameters(RegionalParametersT&& value) { SetRegionalParameters(std::forward<RegionalParametersT>(value)); return *this;}
    template<typename RegionalParametersKeyT = Aws::String, typename RegionalParametersValueT = Aws::Map<Aws::String, Aws::String>>
    EnvironmentBlueprintConfigurationItem& AddRegionalParameters(RegionalParametersKeyT&& key, RegionalParametersValueT&& value) {
      m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(std::forward<RegionalParametersKeyT>(key), std::forward<RegionalParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the environment blueprint was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    EnvironmentBlueprintConfigurationItem& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
