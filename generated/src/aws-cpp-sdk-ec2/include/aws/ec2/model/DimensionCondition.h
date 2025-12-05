/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/Comparison.h>
#include <aws/ec2/model/FilterByDimension.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p> Specifies a condition for filtering capacity data based on dimension values.
 * Used to create precise filters for metric queries and dimension lookups.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DimensionCondition">AWS
 * API Reference</a></p>
 */
class DimensionCondition {
 public:
  AWS_EC2_API DimensionCondition() = default;
  AWS_EC2_API DimensionCondition(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API DimensionCondition& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p> The name of the dimension to filter by. </p>
   */
  inline FilterByDimension GetDimension() const { return m_dimension; }
  inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }
  inline void SetDimension(FilterByDimension value) {
    m_dimensionHasBeenSet = true;
    m_dimension = value;
  }
  inline DimensionCondition& WithDimension(FilterByDimension value) {
    SetDimension(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The comparison operator to use for the filter. </p>
   */
  inline Comparison GetComparison() const { return m_comparison; }
  inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
  inline void SetComparison(Comparison value) {
    m_comparisonHasBeenSet = true;
    m_comparison = value;
  }
  inline DimensionCondition& WithComparison(Comparison value) {
    SetComparison(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The list of values to match against the specified dimension. For 'equals'
   * comparison, only the first value is used. For 'in' comparison, any matching
   * value will satisfy the condition. </p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  DimensionCondition& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  DimensionCondition& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  FilterByDimension m_dimension{FilterByDimension::NOT_SET};

  Comparison m_comparison{Comparison::NOT_SET};

  Aws::Vector<Aws::String> m_values;
  bool m_dimensionHasBeenSet = false;
  bool m_comparisonHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
