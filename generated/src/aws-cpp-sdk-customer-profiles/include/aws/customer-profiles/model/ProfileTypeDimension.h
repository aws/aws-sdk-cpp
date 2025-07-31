/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/ProfileTypeDimensionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/ProfileType.h>
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
   * <p>Object to hold the dimension of a profile type field to segment
   * on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ProfileTypeDimension">AWS
   * API Reference</a></p>
   */
  class ProfileTypeDimension
  {
  public:
    AWS_CUSTOMERPROFILES_API ProfileTypeDimension() = default;
    AWS_CUSTOMERPROFILES_API ProfileTypeDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ProfileTypeDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action to segment on.</p>
     */
    inline ProfileTypeDimensionType GetDimensionType() const { return m_dimensionType; }
    inline bool DimensionTypeHasBeenSet() const { return m_dimensionTypeHasBeenSet; }
    inline void SetDimensionType(ProfileTypeDimensionType value) { m_dimensionTypeHasBeenSet = true; m_dimensionType = value; }
    inline ProfileTypeDimension& WithDimensionType(ProfileTypeDimensionType value) { SetDimensionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values to apply the DimensionType on.</p>
     */
    inline const Aws::Vector<ProfileType>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<ProfileType>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<ProfileType>>
    ProfileTypeDimension& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    inline ProfileTypeDimension& AddValues(ProfileType value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    ProfileTypeDimensionType m_dimensionType{ProfileTypeDimensionType::NOT_SET};
    bool m_dimensionTypeHasBeenSet = false;

    Aws::Vector<ProfileType> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
