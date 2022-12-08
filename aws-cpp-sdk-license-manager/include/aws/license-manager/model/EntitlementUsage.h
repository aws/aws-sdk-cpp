/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/EntitlementDataUnit.h>
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
   * <p>Usage associated with an entitlement resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/EntitlementUsage">AWS
   * API Reference</a></p>
   */
  class EntitlementUsage
  {
  public:
    AWS_LICENSEMANAGER_API EntitlementUsage();
    AWS_LICENSEMANAGER_API EntitlementUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API EntitlementUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Entitlement usage name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Entitlement usage name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Entitlement usage name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Entitlement usage name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Entitlement usage name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Entitlement usage name.</p>
     */
    inline EntitlementUsage& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Entitlement usage name.</p>
     */
    inline EntitlementUsage& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Entitlement usage name.</p>
     */
    inline EntitlementUsage& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Resource usage consumed.</p>
     */
    inline const Aws::String& GetConsumedValue() const{ return m_consumedValue; }

    /**
     * <p>Resource usage consumed.</p>
     */
    inline bool ConsumedValueHasBeenSet() const { return m_consumedValueHasBeenSet; }

    /**
     * <p>Resource usage consumed.</p>
     */
    inline void SetConsumedValue(const Aws::String& value) { m_consumedValueHasBeenSet = true; m_consumedValue = value; }

    /**
     * <p>Resource usage consumed.</p>
     */
    inline void SetConsumedValue(Aws::String&& value) { m_consumedValueHasBeenSet = true; m_consumedValue = std::move(value); }

    /**
     * <p>Resource usage consumed.</p>
     */
    inline void SetConsumedValue(const char* value) { m_consumedValueHasBeenSet = true; m_consumedValue.assign(value); }

    /**
     * <p>Resource usage consumed.</p>
     */
    inline EntitlementUsage& WithConsumedValue(const Aws::String& value) { SetConsumedValue(value); return *this;}

    /**
     * <p>Resource usage consumed.</p>
     */
    inline EntitlementUsage& WithConsumedValue(Aws::String&& value) { SetConsumedValue(std::move(value)); return *this;}

    /**
     * <p>Resource usage consumed.</p>
     */
    inline EntitlementUsage& WithConsumedValue(const char* value) { SetConsumedValue(value); return *this;}


    /**
     * <p>Maximum entitlement usage count.</p>
     */
    inline const Aws::String& GetMaxCount() const{ return m_maxCount; }

    /**
     * <p>Maximum entitlement usage count.</p>
     */
    inline bool MaxCountHasBeenSet() const { return m_maxCountHasBeenSet; }

    /**
     * <p>Maximum entitlement usage count.</p>
     */
    inline void SetMaxCount(const Aws::String& value) { m_maxCountHasBeenSet = true; m_maxCount = value; }

    /**
     * <p>Maximum entitlement usage count.</p>
     */
    inline void SetMaxCount(Aws::String&& value) { m_maxCountHasBeenSet = true; m_maxCount = std::move(value); }

    /**
     * <p>Maximum entitlement usage count.</p>
     */
    inline void SetMaxCount(const char* value) { m_maxCountHasBeenSet = true; m_maxCount.assign(value); }

    /**
     * <p>Maximum entitlement usage count.</p>
     */
    inline EntitlementUsage& WithMaxCount(const Aws::String& value) { SetMaxCount(value); return *this;}

    /**
     * <p>Maximum entitlement usage count.</p>
     */
    inline EntitlementUsage& WithMaxCount(Aws::String&& value) { SetMaxCount(std::move(value)); return *this;}

    /**
     * <p>Maximum entitlement usage count.</p>
     */
    inline EntitlementUsage& WithMaxCount(const char* value) { SetMaxCount(value); return *this;}


    /**
     * <p>Entitlement usage unit.</p>
     */
    inline const EntitlementDataUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>Entitlement usage unit.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>Entitlement usage unit.</p>
     */
    inline void SetUnit(const EntitlementDataUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>Entitlement usage unit.</p>
     */
    inline void SetUnit(EntitlementDataUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>Entitlement usage unit.</p>
     */
    inline EntitlementUsage& WithUnit(const EntitlementDataUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>Entitlement usage unit.</p>
     */
    inline EntitlementUsage& WithUnit(EntitlementDataUnit&& value) { SetUnit(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_consumedValue;
    bool m_consumedValueHasBeenSet = false;

    Aws::String m_maxCount;
    bool m_maxCountHasBeenSet = false;

    EntitlementDataUnit m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
