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


    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>Specifies the enabled Amazon Web Services Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledRegions() const{ return m_enabledRegions; }

    /**
     * <p>Specifies the enabled Amazon Web Services Regions.</p>
     */
    inline bool EnabledRegionsHasBeenSet() const { return m_enabledRegionsHasBeenSet; }

    /**
     * <p>Specifies the enabled Amazon Web Services Regions.</p>
     */
    inline void SetEnabledRegions(const Aws::Vector<Aws::String>& value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions = value; }

    /**
     * <p>Specifies the enabled Amazon Web Services Regions.</p>
     */
    inline void SetEnabledRegions(Aws::Vector<Aws::String>&& value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions = std::move(value); }

    /**
     * <p>Specifies the enabled Amazon Web Services Regions.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& WithEnabledRegions(const Aws::Vector<Aws::String>& value) { SetEnabledRegions(value); return *this;}

    /**
     * <p>Specifies the enabled Amazon Web Services Regions.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& WithEnabledRegions(Aws::Vector<Aws::String>&& value) { SetEnabledRegions(std::move(value)); return *this;}

    /**
     * <p>Specifies the enabled Amazon Web Services Regions.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& AddEnabledRegions(const Aws::String& value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions.push_back(value); return *this; }

    /**
     * <p>Specifies the enabled Amazon Web Services Regions.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& AddEnabledRegions(Aws::String&& value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the enabled Amazon Web Services Regions.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& AddEnabledRegions(const char* value) { m_enabledRegionsHasBeenSet = true; m_enabledRegions.push_back(value); return *this; }


    /**
     * <p>The identifier of the environment blueprint.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintIdentifier() const{ return m_environmentBlueprintIdentifier; }

    /**
     * <p>The identifier of the environment blueprint.</p>
     */
    inline bool EnvironmentBlueprintIdentifierHasBeenSet() const { return m_environmentBlueprintIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the environment blueprint.</p>
     */
    inline void SetEnvironmentBlueprintIdentifier(const Aws::String& value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier = value; }

    /**
     * <p>The identifier of the environment blueprint.</p>
     */
    inline void SetEnvironmentBlueprintIdentifier(Aws::String&& value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier = std::move(value); }

    /**
     * <p>The identifier of the environment blueprint.</p>
     */
    inline void SetEnvironmentBlueprintIdentifier(const char* value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier.assign(value); }

    /**
     * <p>The identifier of the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& WithEnvironmentBlueprintIdentifier(const Aws::String& value) { SetEnvironmentBlueprintIdentifier(value); return *this;}

    /**
     * <p>The identifier of the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& WithEnvironmentBlueprintIdentifier(Aws::String&& value) { SetEnvironmentBlueprintIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& WithEnvironmentBlueprintIdentifier(const char* value) { SetEnvironmentBlueprintIdentifier(value); return *this;}


    /**
     * <p>The ARN of the manage access role.</p>
     */
    inline const Aws::String& GetManageAccessRoleArn() const{ return m_manageAccessRoleArn; }

    /**
     * <p>The ARN of the manage access role.</p>
     */
    inline bool ManageAccessRoleArnHasBeenSet() const { return m_manageAccessRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the manage access role.</p>
     */
    inline void SetManageAccessRoleArn(const Aws::String& value) { m_manageAccessRoleArnHasBeenSet = true; m_manageAccessRoleArn = value; }

    /**
     * <p>The ARN of the manage access role.</p>
     */
    inline void SetManageAccessRoleArn(Aws::String&& value) { m_manageAccessRoleArnHasBeenSet = true; m_manageAccessRoleArn = std::move(value); }

    /**
     * <p>The ARN of the manage access role.</p>
     */
    inline void SetManageAccessRoleArn(const char* value) { m_manageAccessRoleArnHasBeenSet = true; m_manageAccessRoleArn.assign(value); }

    /**
     * <p>The ARN of the manage access role.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& WithManageAccessRoleArn(const Aws::String& value) { SetManageAccessRoleArn(value); return *this;}

    /**
     * <p>The ARN of the manage access role.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& WithManageAccessRoleArn(Aws::String&& value) { SetManageAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the manage access role.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& WithManageAccessRoleArn(const char* value) { SetManageAccessRoleArn(value); return *this;}


    /**
     * <p>The ARN of the provisioning role.</p>
     */
    inline const Aws::String& GetProvisioningRoleArn() const{ return m_provisioningRoleArn; }

    /**
     * <p>The ARN of the provisioning role.</p>
     */
    inline bool ProvisioningRoleArnHasBeenSet() const { return m_provisioningRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the provisioning role.</p>
     */
    inline void SetProvisioningRoleArn(const Aws::String& value) { m_provisioningRoleArnHasBeenSet = true; m_provisioningRoleArn = value; }

    /**
     * <p>The ARN of the provisioning role.</p>
     */
    inline void SetProvisioningRoleArn(Aws::String&& value) { m_provisioningRoleArnHasBeenSet = true; m_provisioningRoleArn = std::move(value); }

    /**
     * <p>The ARN of the provisioning role.</p>
     */
    inline void SetProvisioningRoleArn(const char* value) { m_provisioningRoleArnHasBeenSet = true; m_provisioningRoleArn.assign(value); }

    /**
     * <p>The ARN of the provisioning role.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& WithProvisioningRoleArn(const Aws::String& value) { SetProvisioningRoleArn(value); return *this;}

    /**
     * <p>The ARN of the provisioning role.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& WithProvisioningRoleArn(Aws::String&& value) { SetProvisioningRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the provisioning role.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& WithProvisioningRoleArn(const char* value) { SetProvisioningRoleArn(value); return *this;}


    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetRegionalParameters() const{ return m_regionalParameters; }

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline bool RegionalParametersHasBeenSet() const { return m_regionalParametersHasBeenSet; }

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline void SetRegionalParameters(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters = value; }

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline void SetRegionalParameters(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters = std::move(value); }

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& WithRegionalParameters(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { SetRegionalParameters(value); return *this;}

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& WithRegionalParameters(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { SetRegionalParameters(std::move(value)); return *this;}

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& AddRegionalParameters(const Aws::String& key, const Aws::Map<Aws::String, Aws::String>& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(key, value); return *this; }

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& AddRegionalParameters(Aws::String&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& AddRegionalParameters(const Aws::String& key, Aws::Map<Aws::String, Aws::String>&& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& AddRegionalParameters(Aws::String&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& AddRegionalParameters(const char* key, Aws::Map<Aws::String, Aws::String>&& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The regional parameters in the environment blueprint.</p>
     */
    inline PutEnvironmentBlueprintConfigurationRequest& AddRegionalParameters(const char* key, const Aws::Map<Aws::String, Aws::String>& value) { m_regionalParametersHasBeenSet = true; m_regionalParameters.emplace(key, value); return *this; }

  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_enabledRegions;
    bool m_enabledRegionsHasBeenSet = false;

    Aws::String m_environmentBlueprintIdentifier;
    bool m_environmentBlueprintIdentifierHasBeenSet = false;

    Aws::String m_manageAccessRoleArn;
    bool m_manageAccessRoleArnHasBeenSet = false;

    Aws::String m_provisioningRoleArn;
    bool m_provisioningRoleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_regionalParameters;
    bool m_regionalParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
