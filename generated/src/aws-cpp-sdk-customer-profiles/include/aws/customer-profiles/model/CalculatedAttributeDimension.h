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
    AWS_CUSTOMERPROFILES_API CalculatedAttributeDimension();
    AWS_CUSTOMERPROFILES_API CalculatedAttributeDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API CalculatedAttributeDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action to segment with.</p>
     */
    inline const AttributeDimensionType& GetDimensionType() const{ return m_dimensionType; }
    inline bool DimensionTypeHasBeenSet() const { return m_dimensionTypeHasBeenSet; }
    inline void SetDimensionType(const AttributeDimensionType& value) { m_dimensionTypeHasBeenSet = true; m_dimensionType = value; }
    inline void SetDimensionType(AttributeDimensionType&& value) { m_dimensionTypeHasBeenSet = true; m_dimensionType = std::move(value); }
    inline CalculatedAttributeDimension& WithDimensionType(const AttributeDimensionType& value) { SetDimensionType(value); return *this;}
    inline CalculatedAttributeDimension& WithDimensionType(AttributeDimensionType&& value) { SetDimensionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values to apply the DimensionType with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline CalculatedAttributeDimension& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline CalculatedAttributeDimension& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline CalculatedAttributeDimension& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline CalculatedAttributeDimension& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline CalculatedAttributeDimension& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Applies the given condition over the initial Calculated Attribute's
     * definition.</p>
     */
    inline const ConditionOverrides& GetConditionOverrides() const{ return m_conditionOverrides; }
    inline bool ConditionOverridesHasBeenSet() const { return m_conditionOverridesHasBeenSet; }
    inline void SetConditionOverrides(const ConditionOverrides& value) { m_conditionOverridesHasBeenSet = true; m_conditionOverrides = value; }
    inline void SetConditionOverrides(ConditionOverrides&& value) { m_conditionOverridesHasBeenSet = true; m_conditionOverrides = std::move(value); }
    inline CalculatedAttributeDimension& WithConditionOverrides(const ConditionOverrides& value) { SetConditionOverrides(value); return *this;}
    inline CalculatedAttributeDimension& WithConditionOverrides(ConditionOverrides&& value) { SetConditionOverrides(std::move(value)); return *this;}
    ///@}
  private:

    AttributeDimensionType m_dimensionType;
    bool m_dimensionTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    ConditionOverrides m_conditionOverrides;
    bool m_conditionOverridesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
