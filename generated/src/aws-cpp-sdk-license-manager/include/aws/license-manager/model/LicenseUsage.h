/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/EntitlementUsage.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>Describes the entitlement usage associated with a license.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/LicenseUsage">AWS
   * API Reference</a></p>
   */
  class LicenseUsage
  {
  public:
    AWS_LICENSEMANAGER_API LicenseUsage() = default;
    AWS_LICENSEMANAGER_API LicenseUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API LicenseUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>License entitlement usages.</p>
     */
    inline const Aws::Vector<EntitlementUsage>& GetEntitlementUsages() const { return m_entitlementUsages; }
    inline bool EntitlementUsagesHasBeenSet() const { return m_entitlementUsagesHasBeenSet; }
    template<typename EntitlementUsagesT = Aws::Vector<EntitlementUsage>>
    void SetEntitlementUsages(EntitlementUsagesT&& value) { m_entitlementUsagesHasBeenSet = true; m_entitlementUsages = std::forward<EntitlementUsagesT>(value); }
    template<typename EntitlementUsagesT = Aws::Vector<EntitlementUsage>>
    LicenseUsage& WithEntitlementUsages(EntitlementUsagesT&& value) { SetEntitlementUsages(std::forward<EntitlementUsagesT>(value)); return *this;}
    template<typename EntitlementUsagesT = EntitlementUsage>
    LicenseUsage& AddEntitlementUsages(EntitlementUsagesT&& value) { m_entitlementUsagesHasBeenSet = true; m_entitlementUsages.emplace_back(std::forward<EntitlementUsagesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<EntitlementUsage> m_entitlementUsages;
    bool m_entitlementUsagesHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
