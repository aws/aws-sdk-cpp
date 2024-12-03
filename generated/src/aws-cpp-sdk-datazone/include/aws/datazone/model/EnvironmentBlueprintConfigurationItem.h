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
    AWS_DATAZONE_API EnvironmentBlueprintConfigurationItem();
    AWS_DATAZONE_API EnvironmentBlueprintConfigurationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API EnvironmentBlueprintConfigurationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when an environment blueprint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline EnvironmentBlueprintConfigurationItem& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline EnvironmentBlueprintConfigurationItem& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which an environment
     * blueprint exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline EnvironmentBlueprintConfigurationItem& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline EnvironmentBlueprintConfigurationItem& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline EnvironmentBlueprintConfigurationItem& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The enabled Amazon Web Services Regions specified in a blueprint
     * configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledRegions() const{ return m_enabledRegions; }
    inline bool EnabledRegionsHasBeenSet() const { return m_enabledRegionsHasBeenSet; }
    inline void SetEnabledRegions(const Aws::Vector<Aws::String>& value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions = value; }
    inline void SetEnabledRegions(Aws::Vector<Aws::String>&& value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions = std::move(value); }
    inline EnvironmentBlueprintConfigurationItem& WithEnabledRegions(const Aws::Vector<Aws::String>& value) { SetEnabledRegions(value); return *this;}
    inline EnvironmentBlueprintConfigurationItem& WithEnabledRegions(Aws::Vector<Aws::String>&& value) { SetEnabledRegions(std::move(value)); return *this;}
    inline EnvironmentBlueprintConfigurationItem& AddEnabledRegions(const Aws::String& value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions.push_back(value); return *this; }
    inline EnvironmentBlueprintConfigurationItem& AddEnabledRegions(Aws::String&& value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions.push_back(std::move(value)); return *this; }
    inline EnvironmentBlueprintConfigurationItem& AddEnabledRegions(const char* value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the environment blueprint.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintId() const{ return m_environmentBlueprintId; }
    inline bool EnvironmentBlueprintIdHasBeenSet() const { return m_environmentBlueprintIdHasBeenSet; }
    inline void SetEnvironmentBlueprintId(const Aws::String& value) { m_environmentBlueprintIdHasBeenSet = true; m_environmentBlueprintId = value; }
    inline void SetEnvironmentBlueprintId(Aws::String&& value) { m_environmentBlueprintIdHasBeenSet = true; m_environmentBlueprintId = std::move(value); }
    inline void SetEnvironmentBlueprintId(const char* value) { m_environmentBlueprintIdHasBeenSet = true; m_environmentBlueprintId.assign(value); }
    inline EnvironmentBlueprintConfigurationItem& WithEnvironmentBlueprintId(const Aws::String& value) { SetEnvironmentBlueprintId(value); return *this;}
    inline EnvironmentBlueprintConfigurationItem& WithEnvironmentBlueprintId(Aws::String&& value) { SetEnvironmentBlueprintId(std::move(value)); return *this;}
    inline EnvironmentBlueprintConfigurationItem& WithEnvironmentBlueprintId(const char* value) { SetEnvironmentBlueprintId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment role permission boundary.</p>
     */
    inline const Aws::String& GetEnvironmentRolePermissionBoundary() const{ return m_environmentRolePermissionBoundary; }
    inline bool EnvironmentRolePermissionBoundaryHasBeenSet() const { return m_environmentRolePermissionBoundaryHasBeenSet; }
    inline void SetEnvironmentRolePermissionBoundary(const Aws::String& value) { m_environmentRolePermissionBoundaryHasBeenSet = true; m_environmentRolePermissionBoundary = value; }
    inline void SetEnvironmentRolePermissionBoundary(Aws::String&& value) { m_environmentRolePermissionBoundaryHasBeenSet = true; m_environmentRolePermissionBoundary = std::move(value); }
    inline void SetEnvironmentRolePermissionBoundary(const char* value) { m_environmentRolePermissionBoundaryHasBeenSet = true; m_environmentRolePermissionBoundary.assign(value); }
    inline EnvironmentBlueprintConfigurationItem& WithEnvironmentRolePermissionBoundary(const Aws::String& value) { SetEnvironmentRolePermissionBoundary(value); return *this;}
    inline EnvironmentBlueprintConfigurationItem& WithEnvironmentRolePermissionBoundary(Aws::String&& value) { SetEnvironmentRolePermissionBoundary(std::move(value)); return *this;}
    inline EnvironmentBlueprintConfigurationItem& WithEnvironmentRolePermissionBoundary(const char* value) { SetEnvironmentRolePermissionBoundary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the manage access role specified in the environment blueprint
     * configuration.</p>
     */
    inline const Aws::String& GetManageAccessRoleArn() const{ return m_manageAccessRoleArn; }
    inline bool ManageAccessRoleArnHasBeenSet() const { return m_manageAccessRoleArnHasBeenSet; }
    inline void SetManageAccessRoleArn(const Aws::String& value) { m_manageAccessRoleArnHasBeenSet = true; m_manageAccessRoleArn = value; }
    inline void SetManageAccessRoleArn(Aws::String&& value) { m_manageAccessRoleArnHasBeenSet = true; m_manageAccessRoleArn = std::move(value); }
    inline void SetManageAccessRoleArn(const char* value) { m_manageAccessRoleArnHasBeenSet = true; m_manageAccessRoleArn.assign(value); }
    inline EnvironmentBlueprintConfigurationItem& WithManageAccessRoleArn(const Aws::String& value) { SetManageAccessRoleArn(value); return *this;}
    inline EnvironmentBlueprintConfigurationItem& WithManageAccessRoleArn(Aws::String&& value) { SetManageAccessRoleArn(std::move(value)); return *this;}
    inline EnvironmentBlueprintConfigurationItem& WithManageAccessRoleArn(const char* value) { SetManageAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning configuration of a blueprint.</p>
     */
    inline const Aws::Vector<ProvisioningConfiguration>& GetProvisioningConfigurations() const{ return m_provisioningConfigurations; }
    inline bool ProvisioningConfigurationsHasBeenSet() const { return m_provisioningConfigurationsHasBeenSet; }
    inline void SetProvisioningConfigurations(const Aws::Vector<ProvisioningConfiguration>& value) { m_provisioningConfigurationsHasBeenSet = true; m_provisioningConfigurations = value; }
    inline void SetProvisioningConfigurations(Aws::Vector<ProvisioningConfiguration>&& value) { m_provisioningConfigurationsHasBeenSet = true; m_provisioningConfigurations = std::move(value); }
    inline EnvironmentBlueprintConfigurationItem& WithProvisioningConfigurations(const Aws::Vector<ProvisioningConfiguration>& value) { SetProvisioningConfigurations(value); return *this;}
    inline EnvironmentBlueprintConfigurationItem& WithProvisioningConfigurations(Aws::Vector<ProvisioningConfiguration>&& value) { SetProvisioningConfigurations(std::move(value)); return *this;}
    inline EnvironmentBlueprintConfigurationItem& AddProvisioningConfigurations(const ProvisioningConfiguration& value) { m_provisioningConfigurationsHasBeenSet = true; m_provisioningConfigurations.push_back(value); return *this; }
    inline EnvironmentBlueprintConfigurationItem& AddProvisioningConfigurations(ProvisioningConfiguration&& value) { m_provisioningConfigurationsHasBeenSet = true; m_provisioningConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the provisioning role specified in the environment blueprint
     * configuration.</p>
     */
    inline const Aws::String& GetProvisioningRoleArn() const{ return m_provisioningRoleArn; }
    inline bool ProvisioningRoleArnHasBeenSet() const { return m_provisioningRoleArnHasBeenSet; }
    inline void SetProvisioningRoleArn(const Aws::String& value) { m_provisioningRoleArnHasBeenSet = true; m_provisioningRoleArn = value; }
    inline void SetProvisioningRoleArn(Aws::String&& value) { m_provisioningRoleArnHasBeenSet = true; m_provisioningRoleArn = std::move(value); }
    inline void SetProvisioningRoleArn(const char* value) { m_provisioningRoleArnHasBeenSet = true; m_provisioningRoleArn.assign(value); }
    inline EnvironmentBlueprintConfigurationItem& WithProvisioningRoleArn(const Aws::String& value) { SetProvisioningRoleArn(value); return *this;}
    inline EnvironmentBlueprintConfigurationItem& WithProvisioningRoleArn(Aws::String&& value) { SetProvisioningRoleArn(std::move(value)); return *this;}
    inline EnvironmentBlueprintConfigurationItem& WithProvisioningRoleArn(const char* value) { SetProvisioningRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The regional parameters of the environment blueprint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetRegionalParameters() const{ return m_regionalParameters; }
    inline bool RegionalParametersHasBeenSet() const { return m_regionalParametersHasBeenSet; }
    inline void SetRegionalParameters(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters = value; }
    inline void SetRegionalParameters(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters = std::move(value); }
    inline EnvironmentBlueprintConfigurationItem& WithRegionalParameters(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { SetRegionalParameters(value); return *this;}
    inline EnvironmentBlueprintConfigurationItem& WithRegionalParameters(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { SetRegionalParameters(std::move(value)); return *this;}
    inline EnvironmentBlueprintConfigurationItem& AddRegionalParameters(const Aws::String& key, const Aws::Map<Aws::String, Aws::String>& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(key, value); return *this; }
    inline EnvironmentBlueprintConfigurationItem& AddRegionalParameters(Aws::String&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(std::move(key), value); return *this; }
    inline EnvironmentBlueprintConfigurationItem& AddRegionalParameters(const Aws::String& key, Aws::Map<Aws::String, Aws::String>&& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(key, std::move(value)); return *this; }
    inline EnvironmentBlueprintConfigurationItem& AddRegionalParameters(Aws::String&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline EnvironmentBlueprintConfigurationItem& AddRegionalParameters(const char* key, Aws::Map<Aws::String, Aws::String>&& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(key, std::move(value)); return *this; }
    inline EnvironmentBlueprintConfigurationItem& AddRegionalParameters(const char* key, const Aws::Map<Aws::String, Aws::String>& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the environment blueprint was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline EnvironmentBlueprintConfigurationItem& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline EnvironmentBlueprintConfigurationItem& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
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

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
