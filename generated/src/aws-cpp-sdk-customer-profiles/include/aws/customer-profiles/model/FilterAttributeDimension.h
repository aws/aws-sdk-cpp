﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/FilterDimensionType.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Object that defines how to filter the incoming objects for the calculated
   * attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/FilterAttributeDimension">AWS
   * API Reference</a></p>
   */
  class FilterAttributeDimension
  {
  public:
    AWS_CUSTOMERPROFILES_API FilterAttributeDimension() = default;
    AWS_CUSTOMERPROFILES_API FilterAttributeDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API FilterAttributeDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action to filter with.</p>
     */
    inline FilterDimensionType GetDimensionType() const { return m_dimensionType; }
    inline bool DimensionTypeHasBeenSet() const { return m_dimensionTypeHasBeenSet; }
    inline void SetDimensionType(FilterDimensionType value) { m_dimensionTypeHasBeenSet = true; m_dimensionType = value; }
    inline FilterAttributeDimension& WithDimensionType(FilterDimensionType value) { SetDimensionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values to apply the DimensionType on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    FilterAttributeDimension& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    FilterAttributeDimension& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    FilterDimensionType m_dimensionType{FilterDimensionType::NOT_SET};
    bool m_dimensionTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
