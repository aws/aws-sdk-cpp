/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/Type.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/FilterDimension.h>
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
   * <p>Object that holds the dimensions to filter on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/FilterGroup">AWS
   * API Reference</a></p>
   */
  class FilterGroup
  {
  public:
    AWS_CUSTOMERPROFILES_API FilterGroup();
    AWS_CUSTOMERPROFILES_API FilterGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API FilterGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of logical relationship between the dimensions of the Filter
     * group.</p>
     */
    inline const Type& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline FilterGroup& WithType(const Type& value) { SetType(value); return *this;}
    inline FilterGroup& WithType(Type&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object that holds the attributes to filter on.</p>
     */
    inline const Aws::Vector<FilterDimension>& GetDimensions() const{ return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    inline void SetDimensions(const Aws::Vector<FilterDimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }
    inline void SetDimensions(Aws::Vector<FilterDimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }
    inline FilterGroup& WithDimensions(const Aws::Vector<FilterDimension>& value) { SetDimensions(value); return *this;}
    inline FilterGroup& WithDimensions(Aws::Vector<FilterDimension>&& value) { SetDimensions(std::move(value)); return *this;}
    inline FilterGroup& AddDimensions(const FilterDimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }
    inline FilterGroup& AddDimensions(FilterDimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Type m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<FilterDimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
