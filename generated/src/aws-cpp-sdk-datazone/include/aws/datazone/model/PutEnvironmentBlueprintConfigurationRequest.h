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
    AWS_DATAZONE_API PutEnvironmentBlueprintConfigurationRequest();

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
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline PutEnvironmentBlueprintConfigurationRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline PutEnvironmentBlueprintConfigurationRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline PutEnvironmentBlueprintConfigurationRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the enabled Amazon Web Services Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledRegions() const{ return m_enabledRegions; }
    inline bool EnabledRegionsHasBeenSet() const { return m_enabledRegionsHasBeenSet; }
    inline void SetEnabledRegions(const Aws::Vector<Aws::String>& value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions = value; }
    inline void SetEnabledRegions(Aws::Vector<Aws::String>&& value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions = std::move(value); }
    inline PutEnvironmentBlueprintConfigurationRequest& WithEnabledRegions(const Aws::Vector<Aws::String>& value) { SetEnabledRegions(value); return *this;}
    inline PutEnvironmentBlueprintConfigurationRequest& WithEnabledRegions(Aws::Vector<Aws::String>&& value) { SetEnabledRegions(std::move(value)); return *this;}
    inline PutEnvironmentBlueprintConfigurationRequest& AddEnabledRegions(const Aws::String& value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions.push_back(value); return *this; }
    inline PutEnvironmentBlueprintConfigurationRequest& AddEnabledRegions(Aws::String&& value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions.push_back(std::move(value)); return *this; }
    inline PutEnvironmentBlueprintConfigurationRequest& AddEnabledRegions(const char* value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the environment blueprint.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintIdentifier() const{ return m_environmentBlueprintIdentifier; }
    inline bool EnvironmentBlueprintIdentifierHasBeenSet() const { return m_environmentBlueprintIdentifierHasBeenSet; }
    inline void SetEnvironmentBlueprintIdentifier(const Aws::String& value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier = value; }
    inline void SetEnvironmentBlueprintIdentifier(Aws::String&& value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier = std::move(value); }
    inline void SetEnvironmentBlueprintIdentifier(const char* value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier.assign(value); }
    inline PutEnvironmentBlueprintConfigurationRequest& WithEnvironmentBlueprintIdentifier(const Aws::String& value) { SetEnvironmentBlueprintIdentifier(value); return *this;}
    inline PutEnvironmentBlueprintConfigurationRequest& WithEnvironmentBlueprintIdentifier(Aws::String&& value) { SetEnvironmentBlueprintIdentifier(std::move(value)); return *this;}
    inline PutEnvironmentBlueprintConfigurationRequest& WithEnvironmentBlueprintIdentifier(const char* value) { SetEnvironmentBlueprintIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment role permissions boundary.</p>
     */
    inline const Aws::String& GetEnvironmentRolePermissionBoundary() const{ return m_environmentRolePermissionBoundary; }
    inline bool EnvironmentRolePermissionBoundaryHasBeenSet() const { return m_environmentRolePermissionBoundaryHasBeenSet; }
    inline void SetEnvironmentRolePermissionBoundary(const Aws::String& value) { m_environmentRolePermissionBoundaryHasBeenSet = true; m_environmentRolePermissionBoundary = value; }
    inline void SetEnvironmentRolePermissionBoundary(Aws::String&& value) { m_environmentRolePermissionBoundaryHasBeenSet = true; m_environmentRolePermissionBoundary = std::move(value); }
    inline void SetEnvironmentRolePermissionBoundary(const char* value) { m_environmentRolePermissionBoundaryHasBeenSet = true; m_environmentRolePermissionBoundary.assign(value); }
    inline PutEnvironmentBlueprintConfigurationRequest& WithEnvironmentRolePermissionBoundary(const Aws::String& value) { SetEnvironmentRolePermissionBoundary(value); return *this;}
    inline PutEnvironmentBlueprintConfigurationRequest& WithEnvironmentRolePermissionBoundary(Aws::String&& value) { SetEnvironmentRolePermissionBoundary(std::move(value)); return *this;}
    inline PutEnvironmentBlueprintConfigurationRequest& WithEnvironmentRolePermissionBoundary(const char* value) { SetEnvironmentRolePermissionBoundary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the manage access role.</p>
     */
    inline const Aws::String& GetManageAccessRoleArn() const{ return m_manageAccessRoleArn; }
    inline bool ManageAccessRoleArnHasBeenSet() const { return m_manageAccessRoleArnHasBeenSet; }
    inline void SetManageAccessRoleArn(const Aws::String& value) { m_manageAccessRoleArnHasBeenSet = true; m_manageAccessRoleArn = value; }
    inline void SetManageAccessRoleArn(Aws::String&& value) { m_manageAccessRoleArnHasBeenSet = true; m_manageAccessRoleArn = std::move(value); }
    inline void SetManageAccessRoleArn(const char* value) { m_manageAccessRoleArnHasBeenSet = true; m_manageAccessRoleArn.assign(value); }
    inline PutEnvironmentBlueprintConfigurationRequest& WithManageAccessRoleArn(const Aws::String& value) { SetManageAccessRoleArn(value); return *this;}
    inline PutEnvironmentBlueprintConfigurationRequest& WithManageAccessRoleArn(Aws::String&& value) { SetManageAccessRoleArn(std::move(value)); return *this;}
    inline PutEnvironmentBlueprintConfigurationRequest& WithManageAccessRoleArn(const char* value) { SetManageAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning configuration of a blueprint.</p>
     */
    inline const Aws::Vector<ProvisioningConfiguration>& GetProvisioningConfigurations() const{ return m_provisioningConfigurations; }
    inline bool ProvisioningConfigurationsHasBeenSet() const { return m_provisioningConfigurationsHasBeenSet; }
    inline void SetProvisioningConfigurations(const Aws::Vector<ProvisioningConfiguration>& value) { m_provisioningConfigurationsHasBeenSet = true; m_provisioningConfigurations = value; }
    inline void SetProvisioningConfigurations(Aws::Vector<ProvisioningConfiguration>&& value) { m_provisioningConfigurationsHasBeenSet = true; m_provisioningConfigurations = std::move(value); }
    inline PutEnvironmentBlueprintConfigurationRequest& WithProvisioningConfigurations(const Aws::Vector<ProvisioningConfiguration>& value) { SetProvisioningConfigurations(value); return *this;}
    inline PutEnvironmentBlueprintConfigurationRequest& WithProvisioningConfigurations(Aws::Vector<ProvisioningConfiguration>&& value) { SetProvisioningConfigurations(std::move(value)); return *this;}
    inline PutEnvironmentBlueprintConfigurationRequest& AddProvisioningConfigurations(const ProvisioningConfiguration& value) { m_provisioningConfigurationsHasBeenSet = true; m_provisioningConfigurations.push_back(value); return *this; }
    inline PutEnvironmentBlueprintConfigurationRequest& AddProvisioningConfigurations(ProvisioningConfiguration&& value) { m_provisioningConfigurationsHasBeenSet = true; m_provisioningConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the provisioning role.</p>
     */
    inline const Aws::String& GetProvisioningRoleArn() const{ return m_provisioningRoleArn; }
    inline bool ProvisioningRoleArnHasBeenSet() const { return m_provisioningRoleArnHasBeenSet; }
    inline void SetProvisioningRoleArn(const Aws::String& value) { m_provisioningRoleArnHasBeenSet = true; m_provisioningRoleArn = value; }
    inline void SetProvisioningRoleArn(Aws::String&& value) { m_provisioningRoleArnHasBeenSet = true; m_provisioningRoleArn = std::move(value); }
    inline void SetProvisioningRoleArn(const char* value) { m_provisioningRoleArnHasBeenSet = true; m_provisioningRoleArn.assign(value); }
    inline PutEnvironmentBlueprintConfigurationRequest& WithProvisioningRoleArn(const Aws::String& value) { SetProvisioningRoleArn(value); return *this;}
    inline PutEnvironmentBlueprintConfigurationRequest& WithProvisioningRoleArn(Aws::String&& value) { SetProvisioningRoleArn(std::move(value)); return *this;}
    inline PutEnvironmentBlueprintConfigurationRequest& WithProvisioningRoleArn(const char* value) { SetProvisioningRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetRegionalParameters() const{ return m_regionalParameters; }
    inline bool RegionalParametersHasBeenSet() const { return m_regionalParametersHasBeenSet; }
    inline void SetRegionalParameters(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters = value; }
    inline void SetRegionalParameters(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters = std::move(value); }
    inline PutEnvironmentBlueprintConfigurationRequest& WithRegionalParameters(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { SetRegionalParameters(value); return *this;}
    inline PutEnvironmentBlueprintConfigurationRequest& WithRegionalParameters(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { SetRegionalParameters(std::move(value)); return *this;}
    inline PutEnvironmentBlueprintConfigurationRequest& AddRegionalParameters(const Aws::String& key, const Aws::Map<Aws::String, Aws::String>& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(key, value); return *this; }
    inline PutEnvironmentBlueprintConfigurationRequest& AddRegionalParameters(Aws::String&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(std::move(key), value); return *this; }
    inline PutEnvironmentBlueprintConfigurationRequest& AddRegionalParameters(const Aws::String& key, Aws::Map<Aws::String, Aws::String>&& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(key, std::move(value)); return *this; }
    inline PutEnvironmentBlueprintConfigurationRequest& AddRegionalParameters(Aws::String&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline PutEnvironmentBlueprintConfigurationRequest& AddRegionalParameters(const char* key, Aws::Map<Aws::String, Aws::String>&& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(key, std::move(value)); return *this; }
    inline PutEnvironmentBlueprintConfigurationRequest& AddRegionalParameters(const char* key, const Aws::Map<Aws::String, Aws::String>& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(key, value); return *this; }
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
