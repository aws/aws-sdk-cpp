/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/MatchOption.h>
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
namespace Budgets {
namespace Model {

/**
 * <p>The product attribute values used for filtering the costs by key and value
 * pairs. Product attributes are supported for Amazon Bedrock only.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/ProductAttributeValues">AWS
 * API Reference</a></p>
 */
class ProductAttributeValues {
 public:
  AWS_BUDGETS_API ProductAttributeValues() = default;
  AWS_BUDGETS_API ProductAttributeValues(Aws::Utils::Json::JsonView jsonValue);
  AWS_BUDGETS_API ProductAttributeValues& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the product attribute to filter on. Valid values are the
   * following:</p> <ul> <li> <p> <code>feature</code> – The feature that was used,
   * such as <code>On-demand Inference</code>.</p> </li> <li> <p>
   * <code>inferenceType</code> – The type of inference usage, such as <code>Input
   * tokens</code> or <code>Output tokens</code>.</p> </li> <li> <p>
   * <code>model</code> – The model, such as <code>Claude Sonnet 5</code> or
   * <code>Claude Haiku 4.5</code>.</p> </li> <li> <p> <code>provider</code> – The
   * model provider, such as <code>Anthropic</code>, <code>Cohere</code>, or
   * <code>Amazon</code>.</p> </li> </ul> <p>Keys are case-sensitive.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  ProductAttributeValues& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific values of the product attribute, such as <code>Claude Sonnet
   * 5</code> for the <code>model</code> key. Values are matched exactly.</p> <p>
   * <code>Values</code> is required unless <code>MatchOptions</code> is
   * <code>ABSENT</code>. To match costs that have no value for the key, set
   * <code>MatchOptions</code> to <code>ABSENT</code> and omit
   * <code>Values</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  ProductAttributeValues& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  ProductAttributeValues& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The match options for the <code>ProductAttributes</code> filter. Valid
   * values:</p> <ul> <li> <p> <code>ABSENT</code> – Matches costs that have no value
   * for the attribute.</p> </li> <li> <p> <code>CASE_SENSITIVE</code> – Requires an
   * exact case match.</p> </li> <li> <p> <code>EQUALS</code> – Matches costs where
   * the attribute equals the specified value.</p> </li> </ul> <p>Specify either
   * <code>EQUALS</code> or <code>ABSENT</code>. You can add
   * <code>CASE_SENSITIVE</code> to <code>EQUALS</code>, but you can't use it by
   * itself or with <code>ABSENT</code>.</p>
   */
  inline const Aws::Vector<MatchOption>& GetMatchOptions() const { return m_matchOptions; }
  inline bool MatchOptionsHasBeenSet() const { return m_matchOptionsHasBeenSet; }
  template <typename MatchOptionsT = Aws::Vector<MatchOption>>
  void SetMatchOptions(MatchOptionsT&& value) {
    m_matchOptionsHasBeenSet = true;
    m_matchOptions = std::forward<MatchOptionsT>(value);
  }
  template <typename MatchOptionsT = Aws::Vector<MatchOption>>
  ProductAttributeValues& WithMatchOptions(MatchOptionsT&& value) {
    SetMatchOptions(std::forward<MatchOptionsT>(value));
    return *this;
  }
  inline ProductAttributeValues& AddMatchOptions(MatchOption value) {
    m_matchOptionsHasBeenSet = true;
    m_matchOptions.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_key;

  Aws::Vector<Aws::String> m_values;

  Aws::Vector<MatchOption> m_matchOptions;
  bool m_keyHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
  bool m_matchOptionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Budgets
}  // namespace Aws
