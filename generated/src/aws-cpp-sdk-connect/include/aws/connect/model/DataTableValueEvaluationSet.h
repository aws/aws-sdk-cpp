/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/PrimaryValue.h>
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
namespace Connect {
namespace Model {

/**
 * <p>A data table value evaluation set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DataTableValueEvaluationSet">AWS
 * API Reference</a></p>
 */
class DataTableValueEvaluationSet {
 public:
  AWS_CONNECT_API DataTableValueEvaluationSet() = default;
  AWS_CONNECT_API DataTableValueEvaluationSet(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API DataTableValueEvaluationSet& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The set's primary values.</p>
   */
  inline const Aws::Vector<PrimaryValue>& GetPrimaryValues() const { return m_primaryValues; }
  inline bool PrimaryValuesHasBeenSet() const { return m_primaryValuesHasBeenSet; }
  template <typename PrimaryValuesT = Aws::Vector<PrimaryValue>>
  void SetPrimaryValues(PrimaryValuesT&& value) {
    m_primaryValuesHasBeenSet = true;
    m_primaryValues = std::forward<PrimaryValuesT>(value);
  }
  template <typename PrimaryValuesT = Aws::Vector<PrimaryValue>>
  DataTableValueEvaluationSet& WithPrimaryValues(PrimaryValuesT&& value) {
    SetPrimaryValues(std::forward<PrimaryValuesT>(value));
    return *this;
  }
  template <typename PrimaryValuesT = PrimaryValue>
  DataTableValueEvaluationSet& AddPrimaryValues(PrimaryValuesT&& value) {
    m_primaryValuesHasBeenSet = true;
    m_primaryValues.emplace_back(std::forward<PrimaryValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The set's attribute names.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAttributeNames() const { return m_attributeNames; }
  inline bool AttributeNamesHasBeenSet() const { return m_attributeNamesHasBeenSet; }
  template <typename AttributeNamesT = Aws::Vector<Aws::String>>
  void SetAttributeNames(AttributeNamesT&& value) {
    m_attributeNamesHasBeenSet = true;
    m_attributeNames = std::forward<AttributeNamesT>(value);
  }
  template <typename AttributeNamesT = Aws::Vector<Aws::String>>
  DataTableValueEvaluationSet& WithAttributeNames(AttributeNamesT&& value) {
    SetAttributeNames(std::forward<AttributeNamesT>(value));
    return *this;
  }
  template <typename AttributeNamesT = Aws::String>
  DataTableValueEvaluationSet& AddAttributeNames(AttributeNamesT&& value) {
    m_attributeNamesHasBeenSet = true;
    m_attributeNames.emplace_back(std::forward<AttributeNamesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PrimaryValue> m_primaryValues;
  bool m_primaryValuesHasBeenSet = false;

  Aws::Vector<Aws::String> m_attributeNames;
  bool m_attributeNamesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
