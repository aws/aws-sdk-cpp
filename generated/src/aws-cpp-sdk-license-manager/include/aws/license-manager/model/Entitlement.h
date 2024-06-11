/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/EntitlementUnit.h>
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
   * <p>Describes a resource entitled for use with a license.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/Entitlement">AWS
   * API Reference</a></p>
   */
  class Entitlement
  {
  public:
    AWS_LICENSEMANAGER_API Entitlement();
    AWS_LICENSEMANAGER_API Entitlement(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Entitlement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Entitlement name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Entitlement& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Entitlement& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Entitlement& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Entitlement resource. Use only if the unit is None.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline Entitlement& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline Entitlement& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline Entitlement& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum entitlement count. Use if the unit is not None.</p>
     */
    inline long long GetMaxCount() const{ return m_maxCount; }
    inline bool MaxCountHasBeenSet() const { return m_maxCountHasBeenSet; }
    inline void SetMaxCount(long long value) { m_maxCountHasBeenSet = true; m_maxCount = value; }
    inline Entitlement& WithMaxCount(long long value) { SetMaxCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether overages are allowed.</p>
     */
    inline bool GetOverage() const{ return m_overage; }
    inline bool OverageHasBeenSet() const { return m_overageHasBeenSet; }
    inline void SetOverage(bool value) { m_overageHasBeenSet = true; m_overage = value; }
    inline Entitlement& WithOverage(bool value) { SetOverage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Entitlement unit.</p>
     */
    inline const EntitlementUnit& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const EntitlementUnit& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(EntitlementUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline Entitlement& WithUnit(const EntitlementUnit& value) { SetUnit(value); return *this;}
    inline Entitlement& WithUnit(EntitlementUnit&& value) { SetUnit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether check-ins are allowed.</p>
     */
    inline bool GetAllowCheckIn() const{ return m_allowCheckIn; }
    inline bool AllowCheckInHasBeenSet() const { return m_allowCheckInHasBeenSet; }
    inline void SetAllowCheckIn(bool value) { m_allowCheckInHasBeenSet = true; m_allowCheckIn = value; }
    inline Entitlement& WithAllowCheckIn(bool value) { SetAllowCheckIn(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    long long m_maxCount;
    bool m_maxCountHasBeenSet = false;

    bool m_overage;
    bool m_overageHasBeenSet = false;

    EntitlementUnit m_unit;
    bool m_unitHasBeenSet = false;

    bool m_allowCheckIn;
    bool m_allowCheckInHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
