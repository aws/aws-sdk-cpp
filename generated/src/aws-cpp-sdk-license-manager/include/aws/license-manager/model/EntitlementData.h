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
   * <p>Data associated with an entitlement resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/EntitlementData">AWS
   * API Reference</a></p>
   */
  class EntitlementData
  {
  public:
    AWS_LICENSEMANAGER_API EntitlementData();
    AWS_LICENSEMANAGER_API EntitlementData(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API EntitlementData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Entitlement data name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Entitlement data name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Entitlement data name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Entitlement data name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Entitlement data name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Entitlement data name.</p>
     */
    inline EntitlementData& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Entitlement data name.</p>
     */
    inline EntitlementData& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Entitlement data name.</p>
     */
    inline EntitlementData& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Entitlement data value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Entitlement data value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Entitlement data value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Entitlement data value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Entitlement data value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Entitlement data value.</p>
     */
    inline EntitlementData& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Entitlement data value.</p>
     */
    inline EntitlementData& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Entitlement data value.</p>
     */
    inline EntitlementData& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>Entitlement data unit.</p>
     */
    inline const EntitlementDataUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>Entitlement data unit.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>Entitlement data unit.</p>
     */
    inline void SetUnit(const EntitlementDataUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>Entitlement data unit.</p>
     */
    inline void SetUnit(EntitlementDataUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>Entitlement data unit.</p>
     */
    inline EntitlementData& WithUnit(const EntitlementDataUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>Entitlement data unit.</p>
     */
    inline EntitlementData& WithUnit(EntitlementDataUnit&& value) { SetUnit(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    EntitlementDataUnit m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
