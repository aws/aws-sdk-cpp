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
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API LinuxSubscriptionsDiscoverySettings() = default;
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API LinuxSubscriptionsDiscoverySettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API LinuxSubscriptionsDiscoverySettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details if you have enabled resource discovery across your accounts in
     * Organizations.</p>
     */
    inline OrganizationIntegration GetOrganizationIntegration() const { return m_organizationIntegration; }
    inline bool OrganizationIntegrationHasBeenSet() const { return m_organizationIntegrationHasBeenSet; }
    inline void SetOrganizationIntegration(OrganizationIntegration value) { m_organizationIntegrationHasBeenSet = true; m_organizationIntegration = value; }
    inline LinuxSubscriptionsDiscoverySettings& WithOrganizationIntegration(OrganizationIntegration value) { SetOrganizationIntegration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Regions in which to discover data for Linux subscriptions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceRegions() const { return m_sourceRegions; }
    inline bool SourceRegionsHasBeenSet() const { return m_sourceRegionsHasBeenSet; }
    template<typename SourceRegionsT = Aws::Vector<Aws::String>>
    void SetSourceRegions(SourceRegionsT&& value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions = std::forward<SourceRegionsT>(value); }
    template<typename SourceRegionsT = Aws::Vector<Aws::String>>
    LinuxSubscriptionsDiscoverySettings& WithSourceRegions(SourceRegionsT&& value) { SetSourceRegions(std::forward<SourceRegionsT>(value)); return *this;}
    template<typename SourceRegionsT = Aws::String>
    LinuxSubscriptionsDiscoverySettings& AddSourceRegions(SourceRegionsT&& value) { m_sourceRegionsHasBeenSet = true; m_sourceRegions.emplace_back(std::forward<SourceRegionsT>(value)); return *this; }
    ///@}
  private:

    OrganizationIntegration m_organizationIntegration{OrganizationIntegration::NOT_SET};
    bool m_organizationIntegrationHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceRegions;
    bool m_sourceRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
