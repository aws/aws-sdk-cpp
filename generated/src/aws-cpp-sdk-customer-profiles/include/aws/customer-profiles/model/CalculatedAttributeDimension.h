/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/AttributeDimensionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/ConditionOverrides.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Object that segments on Customer Profile's Calculated
   * Attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/CalculatedAttributeDimension">AWS
   * API Reference</a></p>
   */
  class CalculatedAttributeDimension
  {
  public:
    AWS_CUSTOMERPROFILES_API CalculatedAttributeDimension() = default;
    AWS_CUSTOMERPROFILES_API CalculatedAttributeDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API CalculatedAttributeDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action to segment with.</p>
     */
    inline AttributeDimensionType GetDimensionType() const { return m_dimensionType; }
    inline bool DimensionTypeHasBeenSet() const { return m_dimensionTypeHasBeenSet; }
    inline void SetDimensionType(AttributeDimensionType value) { m_dimensionTypeHasBeenSet = true; m_dimensionType = value; }
    inline CalculatedAttributeDimension& WithDimensionType(AttributeDimensionType value) { SetDimensionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values to apply the DimensionType with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    CalculatedAttributeDimension& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    CalculatedAttributeDimension& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Applies the given condition over the initial Calculated Attribute's
     * definition.</p>
     */
    inline const ConditionOverrides& GetConditionOverrides() const { return m_conditionOverrides; }
    inline bool ConditionOverridesHasBeenSet() const { return m_conditionOverridesHasBeenSet; }
    template<typename ConditionOverridesT = ConditionOverrides>
    void SetConditionOverrides(ConditionOverridesT&& value) { m_conditionOverridesHasBeenSet = true; m_conditionOverrides = std::forward<ConditionOverridesT>(value); }
    template<typename ConditionOverridesT = ConditionOverrides>
    CalculatedAttributeDimension& WithConditionOverrides(ConditionOverridesT&& value) { SetConditionOverrides(std::forward<ConditionOverridesT>(value)); return *this;}
    ///@}
  private:

    AttributeDimensionType m_dimensionType{AttributeDimensionType::NOT_SET};
    bool m_dimensionTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    ConditionOverrides m_conditionOverrides;
    bool m_conditionOverridesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
