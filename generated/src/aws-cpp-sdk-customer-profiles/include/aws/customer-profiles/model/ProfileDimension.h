/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/StringDimensionType.h>
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
   * <p>Object to hold the dimensions of a profile's fields to segment
   * on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ProfileDimension">AWS
   * API Reference</a></p>
   */
  class ProfileDimension
  {
  public:
    AWS_CUSTOMERPROFILES_API ProfileDimension();
    AWS_CUSTOMERPROFILES_API ProfileDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ProfileDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action to segment on.</p>
     */
    inline const StringDimensionType& GetDimensionType() const{ return m_dimensionType; }
    inline bool DimensionTypeHasBeenSet() const { return m_dimensionTypeHasBeenSet; }
    inline void SetDimensionType(const StringDimensionType& value) { m_dimensionTypeHasBeenSet = true; m_dimensionType = value; }
    inline void SetDimensionType(StringDimensionType&& value) { m_dimensionTypeHasBeenSet = true; m_dimensionType = std::move(value); }
    inline ProfileDimension& WithDimensionType(const StringDimensionType& value) { SetDimensionType(value); return *this;}
    inline ProfileDimension& WithDimensionType(StringDimensionType&& value) { SetDimensionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values to apply the DimensionType on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline ProfileDimension& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline ProfileDimension& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline ProfileDimension& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline ProfileDimension& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline ProfileDimension& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    StringDimensionType m_dimensionType;
    bool m_dimensionTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
