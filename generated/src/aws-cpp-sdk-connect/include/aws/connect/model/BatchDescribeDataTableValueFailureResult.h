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
 * <p>A batch describe data table value failure result.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/BatchDescribeDataTableValueFailureResult">AWS
 * API Reference</a></p>
 */
class BatchDescribeDataTableValueFailureResult {
 public:
  AWS_CONNECT_API BatchDescribeDataTableValueFailureResult() = default;
  AWS_CONNECT_API BatchDescribeDataTableValueFailureResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API BatchDescribeDataTableValueFailureResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The result's primary values.</p>
   */
  inline const Aws::Vector<PrimaryValue>& GetPrimaryValues() const { return m_primaryValues; }
  inline bool PrimaryValuesHasBeenSet() const { return m_primaryValuesHasBeenSet; }
  template <typename PrimaryValuesT = Aws::Vector<PrimaryValue>>
  void SetPrimaryValues(PrimaryValuesT&& value) {
    m_primaryValuesHasBeenSet = true;
    m_primaryValues = std::forward<PrimaryValuesT>(value);
  }
  template <typename PrimaryValuesT = Aws::Vector<PrimaryValue>>
  BatchDescribeDataTableValueFailureResult& WithPrimaryValues(PrimaryValuesT&& value) {
    SetPrimaryValues(std::forward<PrimaryValuesT>(value));
    return *this;
  }
  template <typename PrimaryValuesT = PrimaryValue>
  BatchDescribeDataTableValueFailureResult& AddPrimaryValues(PrimaryValuesT&& value) {
    m_primaryValuesHasBeenSet = true;
    m_primaryValues.emplace_back(std::forward<PrimaryValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result's attribute name.</p>
   */
  inline const Aws::String& GetAttributeName() const { return m_attributeName; }
  inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
  template <typename AttributeNameT = Aws::String>
  void SetAttributeName(AttributeNameT&& value) {
    m_attributeNameHasBeenSet = true;
    m_attributeName = std::forward<AttributeNameT>(value);
  }
  template <typename AttributeNameT = Aws::String>
  BatchDescribeDataTableValueFailureResult& WithAttributeName(AttributeNameT&& value) {
    SetAttributeName(std::forward<AttributeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result's message.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BatchDescribeDataTableValueFailureResult& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PrimaryValue> m_primaryValues;
  bool m_primaryValuesHasBeenSet = false;

  Aws::String m_attributeName;
  bool m_attributeNameHasBeenSet = false;

  Aws::String m_message;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
