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
 * <p>A data table value identifier.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DataTableValueIdentifier">AWS
 * API Reference</a></p>
 */
class DataTableValueIdentifier {
 public:
  AWS_CONNECT_API DataTableValueIdentifier() = default;
  AWS_CONNECT_API DataTableValueIdentifier(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API DataTableValueIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier's primary values.</p>
   */
  inline const Aws::Vector<PrimaryValue>& GetPrimaryValues() const { return m_primaryValues; }
  inline bool PrimaryValuesHasBeenSet() const { return m_primaryValuesHasBeenSet; }
  template <typename PrimaryValuesT = Aws::Vector<PrimaryValue>>
  void SetPrimaryValues(PrimaryValuesT&& value) {
    m_primaryValuesHasBeenSet = true;
    m_primaryValues = std::forward<PrimaryValuesT>(value);
  }
  template <typename PrimaryValuesT = Aws::Vector<PrimaryValue>>
  DataTableValueIdentifier& WithPrimaryValues(PrimaryValuesT&& value) {
    SetPrimaryValues(std::forward<PrimaryValuesT>(value));
    return *this;
  }
  template <typename PrimaryValuesT = PrimaryValue>
  DataTableValueIdentifier& AddPrimaryValues(PrimaryValuesT&& value) {
    m_primaryValuesHasBeenSet = true;
    m_primaryValues.emplace_back(std::forward<PrimaryValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier's attribute name.</p>
   */
  inline const Aws::String& GetAttributeName() const { return m_attributeName; }
  inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
  template <typename AttributeNameT = Aws::String>
  void SetAttributeName(AttributeNameT&& value) {
    m_attributeNameHasBeenSet = true;
    m_attributeName = std::forward<AttributeNameT>(value);
  }
  template <typename AttributeNameT = Aws::String>
  DataTableValueIdentifier& WithAttributeName(AttributeNameT&& value) {
    SetAttributeName(std::forward<AttributeNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PrimaryValue> m_primaryValues;
  bool m_primaryValuesHasBeenSet = false;

  Aws::String m_attributeName;
  bool m_attributeNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
