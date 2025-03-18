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
    AWS_LICENSEMANAGER_API EntitlementUsage() = default;
    AWS_LICENSEMANAGER_API EntitlementUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API EntitlementUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Entitlement usage name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    EntitlementUsage& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resource usage consumed.</p>
     */
    inline const Aws::String& GetConsumedValue() const { return m_consumedValue; }
    inline bool ConsumedValueHasBeenSet() const { return m_consumedValueHasBeenSet; }
    template<typename ConsumedValueT = Aws::String>
    void SetConsumedValue(ConsumedValueT&& value) { m_consumedValueHasBeenSet = true; m_consumedValue = std::forward<ConsumedValueT>(value); }
    template<typename ConsumedValueT = Aws::String>
    EntitlementUsage& WithConsumedValue(ConsumedValueT&& value) { SetConsumedValue(std::forward<ConsumedValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum entitlement usage count.</p>
     */
    inline const Aws::String& GetMaxCount() const { return m_maxCount; }
    inline bool MaxCountHasBeenSet() const { return m_maxCountHasBeenSet; }
    template<typename MaxCountT = Aws::String>
    void SetMaxCount(MaxCountT&& value) { m_maxCountHasBeenSet = true; m_maxCount = std::forward<MaxCountT>(value); }
    template<typename MaxCountT = Aws::String>
    EntitlementUsage& WithMaxCount(MaxCountT&& value) { SetMaxCount(std::forward<MaxCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Entitlement usage unit.</p>
     */
    inline EntitlementDataUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(EntitlementDataUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline EntitlementUsage& WithUnit(EntitlementDataUnit value) { SetUnit(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_consumedValue;
    bool m_consumedValueHasBeenSet = false;

    Aws::String m_maxCount;
    bool m_maxCountHasBeenSet = false;

    EntitlementDataUnit m_unit{EntitlementDataUnit::NOT_SET};
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
