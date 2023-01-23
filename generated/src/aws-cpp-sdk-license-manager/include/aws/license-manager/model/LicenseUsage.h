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
    AWS_LICENSEMANAGER_API LicenseUsage();
    AWS_LICENSEMANAGER_API LicenseUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API LicenseUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>License entitlement usages.</p>
     */
    inline const Aws::Vector<EntitlementUsage>& GetEntitlementUsages() const{ return m_entitlementUsages; }

    /**
     * <p>License entitlement usages.</p>
     */
    inline bool EntitlementUsagesHasBeenSet() const { return m_entitlementUsagesHasBeenSet; }

    /**
     * <p>License entitlement usages.</p>
     */
    inline void SetEntitlementUsages(const Aws::Vector<EntitlementUsage>& value) { m_entitlementUsagesHasBeenSet = true; m_entitlementUsages = value; }

    /**
     * <p>License entitlement usages.</p>
     */
    inline void SetEntitlementUsages(Aws::Vector<EntitlementUsage>&& value) { m_entitlementUsagesHasBeenSet = true; m_entitlementUsages = std::move(value); }

    /**
     * <p>License entitlement usages.</p>
     */
    inline LicenseUsage& WithEntitlementUsages(const Aws::Vector<EntitlementUsage>& value) { SetEntitlementUsages(value); return *this;}

    /**
     * <p>License entitlement usages.</p>
     */
    inline LicenseUsage& WithEntitlementUsages(Aws::Vector<EntitlementUsage>&& value) { SetEntitlementUsages(std::move(value)); return *this;}

    /**
     * <p>License entitlement usages.</p>
     */
    inline LicenseUsage& AddEntitlementUsages(const EntitlementUsage& value) { m_entitlementUsagesHasBeenSet = true; m_entitlementUsages.push_back(value); return *this; }

    /**
     * <p>License entitlement usages.</p>
     */
    inline LicenseUsage& AddEntitlementUsages(EntitlementUsage&& value) { m_entitlementUsagesHasBeenSet = true; m_entitlementUsages.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EntitlementUsage> m_entitlementUsages;
    bool m_entitlementUsagesHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
