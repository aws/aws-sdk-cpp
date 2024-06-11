/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/license-manager-linux-subscriptions/model/OrganizationIntegration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LicenseManagerLinuxSubscriptions
{
namespace Model
{

  /**
   * <p>Lists the settings defined for discovering Linux subscriptions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/LinuxSubscriptionsDiscoverySettings">AWS
   * API Reference</a></p>
   */
  class LinuxSubscriptionsDiscoverySettings
  {
  public:
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API LinuxSubscriptionsDiscoverySettings();
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API LinuxSubscriptionsDiscoverySettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API LinuxSubscriptionsDiscoverySettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details if you have enabled resource discovery across your accounts in
     * Organizations.</p>
     */
    inline const OrganizationIntegration& GetOrganizationIntegration() const{ return m_organizationIntegration; }
    inline bool OrganizationIntegrationHasBeenSet() const { return m_organizationIntegrationHasBeenSet; }
    inline void SetOrganizationIntegration(const OrganizationIntegration& value) { m_organizationIntegrationHasBeenSet = true; m_organizationIntegration = value; }
    inline void SetOrganizationIntegration(OrganizationIntegration&& value) { m_organizationIntegrationHasBeenSet = true; m_organizationIntegration = std::move(value); }
    inline LinuxSubscriptionsDiscoverySettings& WithOrganizationIntegration(const OrganizationIntegration& value) { SetOrganizationIntegration(value); return *this;}
    inline LinuxSubscriptionsDiscoverySettings& WithOrganizationIntegration(OrganizationIntegration&& value) { SetOrganizationIntegration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Regions in which to discover data for Linux subscriptions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceRegions() const{ return m_sourceRegions; }
    inline bool SourceRegionsHasBeenSet() const { return m_sourceRegionsHasBeenSet; }
    inline void SetSourceRegions(const Aws::Vector<Aws::String>& value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions = value; }
    inline void SetSourceRegions(Aws::Vector<Aws::String>&& value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions = std::move(value); }
    inline LinuxSubscriptionsDiscoverySettings& WithSourceRegions(const Aws::Vector<Aws::String>& value) { SetSourceRegions(value); return *this;}
    inline LinuxSubscriptionsDiscoverySettings& WithSourceRegions(Aws::Vector<Aws::String>&& value) { SetSourceRegions(std::move(value)); return *this;}
    inline LinuxSubscriptionsDiscoverySettings& AddSourceRegions(const Aws::String& value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions.push_back(value); return *this; }
    inline LinuxSubscriptionsDiscoverySettings& AddSourceRegions(Aws::String&& value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions.push_back(std::move(value)); return *this; }
    inline LinuxSubscriptionsDiscoverySettings& AddSourceRegions(const char* value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions.push_back(value); return *this; }
    ///@}
  private:

    OrganizationIntegration m_organizationIntegration;
    bool m_organizationIntegrationHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceRegions;
    bool m_sourceRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
