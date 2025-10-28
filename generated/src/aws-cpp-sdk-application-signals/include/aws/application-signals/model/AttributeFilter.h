/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>Represents a filter for service attributes. Used to narrow down results based
 * on specific attribute names and values.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/AttributeFilter">AWS
 * API Reference</a></p>
 */
class AttributeFilter {
 public:
  AWS_APPLICATIONSIGNALS_API AttributeFilter() = default;
  AWS_APPLICATIONSIGNALS_API AttributeFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API AttributeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the attribute to filter on. This corresponds to service metadata
   * attributes such as environment, team, or custom tags.</p>
   */
  inline const Aws::String& GetAttributeFilterName() const { return m_attributeFilterName; }
  inline bool AttributeFilterNameHasBeenSet() const { return m_attributeFilterNameHasBeenSet; }
  template <typename AttributeFilterNameT = Aws::String>
  void SetAttributeFilterName(AttributeFilterNameT&& value) {
    m_attributeFilterNameHasBeenSet = true;
    m_attributeFilterName = std::forward<AttributeFilterNameT>(value);
  }
  template <typename AttributeFilterNameT = Aws::String>
  AttributeFilter& WithAttributeFilterName(AttributeFilterNameT&& value) {
    SetAttributeFilterName(std::forward<AttributeFilterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of values to match against the specified attribute. Services with
   * attribute values matching any of these values will be included in the
   * results.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAttributeFilterValues() const { return m_attributeFilterValues; }
  inline bool AttributeFilterValuesHasBeenSet() const { return m_attributeFilterValuesHasBeenSet; }
  template <typename AttributeFilterValuesT = Aws::Vector<Aws::String>>
  void SetAttributeFilterValues(AttributeFilterValuesT&& value) {
    m_attributeFilterValuesHasBeenSet = true;
    m_attributeFilterValues = std::forward<AttributeFilterValuesT>(value);
  }
  template <typename AttributeFilterValuesT = Aws::Vector<Aws::String>>
  AttributeFilter& WithAttributeFilterValues(AttributeFilterValuesT&& value) {
    SetAttributeFilterValues(std::forward<AttributeFilterValuesT>(value));
    return *this;
  }
  template <typename AttributeFilterValuesT = Aws::String>
  AttributeFilter& AddAttributeFilterValues(AttributeFilterValuesT&& value) {
    m_attributeFilterValuesHasBeenSet = true;
    m_attributeFilterValues.emplace_back(std::forward<AttributeFilterValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_attributeFilterName;
  bool m_attributeFilterNameHasBeenSet = false;

  Aws::Vector<Aws::String> m_attributeFilterValues;
  bool m_attributeFilterValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
