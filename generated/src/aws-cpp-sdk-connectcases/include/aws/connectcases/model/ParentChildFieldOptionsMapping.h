/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
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
namespace ConnectCases {
namespace Model {

/**
 * <p>A mapping between a parent field option value and child field option
 * values.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ParentChildFieldOptionsMapping">AWS
 * API Reference</a></p>
 */
class ParentChildFieldOptionsMapping {
 public:
  AWS_CONNECTCASES_API ParentChildFieldOptionsMapping() = default;
  AWS_CONNECTCASES_API ParentChildFieldOptionsMapping(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API ParentChildFieldOptionsMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The value in the parent field.</p>
   */
  inline const Aws::String& GetParentFieldOptionValue() const { return m_parentFieldOptionValue; }
  inline bool ParentFieldOptionValueHasBeenSet() const { return m_parentFieldOptionValueHasBeenSet; }
  template <typename ParentFieldOptionValueT = Aws::String>
  void SetParentFieldOptionValue(ParentFieldOptionValueT&& value) {
    m_parentFieldOptionValueHasBeenSet = true;
    m_parentFieldOptionValue = std::forward<ParentFieldOptionValueT>(value);
  }
  template <typename ParentFieldOptionValueT = Aws::String>
  ParentChildFieldOptionsMapping& WithParentFieldOptionValue(ParentFieldOptionValueT&& value) {
    SetParentFieldOptionValue(std::forward<ParentFieldOptionValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of allowed values in the child field.</p>
   */
  inline const Aws::Vector<Aws::String>& GetChildFieldOptionValues() const { return m_childFieldOptionValues; }
  inline bool ChildFieldOptionValuesHasBeenSet() const { return m_childFieldOptionValuesHasBeenSet; }
  template <typename ChildFieldOptionValuesT = Aws::Vector<Aws::String>>
  void SetChildFieldOptionValues(ChildFieldOptionValuesT&& value) {
    m_childFieldOptionValuesHasBeenSet = true;
    m_childFieldOptionValues = std::forward<ChildFieldOptionValuesT>(value);
  }
  template <typename ChildFieldOptionValuesT = Aws::Vector<Aws::String>>
  ParentChildFieldOptionsMapping& WithChildFieldOptionValues(ChildFieldOptionValuesT&& value) {
    SetChildFieldOptionValues(std::forward<ChildFieldOptionValuesT>(value));
    return *this;
  }
  template <typename ChildFieldOptionValuesT = Aws::String>
  ParentChildFieldOptionsMapping& AddChildFieldOptionValues(ChildFieldOptionValuesT&& value) {
    m_childFieldOptionValuesHasBeenSet = true;
    m_childFieldOptionValues.emplace_back(std::forward<ChildFieldOptionValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_parentFieldOptionValue;

  Aws::Vector<Aws::String> m_childFieldOptionValues;
  bool m_parentFieldOptionValueHasBeenSet = false;
  bool m_childFieldOptionValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
