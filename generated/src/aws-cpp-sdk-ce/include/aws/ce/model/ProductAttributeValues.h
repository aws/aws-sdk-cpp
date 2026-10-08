/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/MatchOption.h>
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
namespace CostExplorer {
namespace Model {

/**
 * <p>The product attribute values that you can use to filter the costs of
 * supported services. Currently, Amazon Bedrock is the only supported service.</p>
 * <p>The following product attribute keys are available for each supported
 * service:</p> <ul> <li> <p>Amazon Bedrock</p> <ul> <li> <p> <code>provider</code>
 * - The model provider, such as <code>Anthropic</code>, <code>Cohere</code>, or
 * <code>OpenAI</code>.</p> </li> <li> <p> <code>model</code> - The model, such as
 * <code>Claude Sonnet 5</code> or <code>Claude Haiku 4.5</code>.</p> </li> <li>
 * <p> <code>inferenceType</code> - The type of inference usage, such as
 * <code>Input tokens</code> or <code>Output tokens</code>.</p> </li> <li> <p>
 * <code>feature</code> - The feature that was used, such as <code>On-demand
 * Inference</code> or <code>Reranker</code>.</p> </li> </ul> </li> </ul> <p>The
 * following operations support product attributes: <code>GetCostAndUsage</code>,
 * <code>GetCostAndUsageWithResources</code>, <code>GetDimensionValues</code> (in
 * the <code>COST_AND_USAGE</code> context), <code>GetTags</code>, and
 * <code>GetCostCategories</code>.</p> <p>Product attribute data is available for
 * time periods that start on or after September 1, 2026. Requests for earlier time
 * periods that use product attributes fail with a
 * <code>DataUnavailableException</code>.</p> <p>The <code>SERVICE</code> filter
 * rules for product attributes depend on the operation:</p> <ul> <li> <p>
 * <code>GetCostAndUsage</code> and <code>GetCostAndUsageWithResources</code> -
 * Optional.</p> </li> <li> <p> <code>GetDimensionValues</code> - Required when the
 * filter includes <code>ProductAttributes</code>, for any <code>Dimension</code>.
 * Otherwise, optional.</p> </li> <li> <p> <code>GetTags</code> and
 * <code>GetCostCategories</code> - Required when the filter includes
 * <code>ProductAttributes</code>.</p> </li> </ul> <p>A <code>SERVICE</code> filter
 * must contain only supported services, or the request fails with a
 * <code>ValidationException</code>. Service names are matched exactly. To list
 * them, use <code>GetDimensionValues</code> with <code>Dimension</code> set to
 * <code>SERVICE</code> and the same <code>TimePeriod</code>, for example with
 * <code>SearchString</code> set to <code>Bedrock</code>.</p> <p>The costs of a
 * supported service can appear under multiple service names. When the
 * <code>SERVICE</code> filter is optional, omit it so that your results include
 * all of those costs.</p> <p>For example, the following <code>Expression</code>
 * filters for the costs of one model: <code>{ "ProductAttributes": { "Key":
 * "model", "Values": [ "Claude Sonnet 5" ], "MatchOptions": [ "EQUALS" ] }
 * }</code> </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ProductAttributeValues">AWS
 * API Reference</a></p>
 */
class ProductAttributeValues {
 public:
  AWS_COSTEXPLORER_API ProductAttributeValues() = default;
  AWS_COSTEXPLORER_API ProductAttributeValues(Aws::Utils::Json::JsonView jsonValue);
  AWS_COSTEXPLORER_API ProductAttributeValues& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the product attribute, such as <code>model</code>. The keys that
   * are available depend on the service. For the keys of each supported service, see
   * <a
   * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_ProductAttributeValues.html">
   * <code>ProductAttributeValues</code> </a>.</p> <p>Keys are case-sensitive. A key
   * that doesn't exist doesn't return an error: <code>EQUALS</code> matches no
   * costs, and <code>ABSENT</code> matches all costs of supported services.</p>
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
   * 5</code> for the <code>model</code> key. Values are matched exactly, including
   * case. To list the values of a key, use <code>GetDimensionValues</code> with
   * <code>Dimension</code> set to <code>PRODUCT_ATTRIBUTE</code> and
   * <code>DimensionKey</code> set to the key.</p> <p>To match costs that have no
   * value for the key, set <code>MatchOptions</code> to <code>ABSENT</code> and omit
   * <code>Values</code>. Otherwise, <code>Values</code> is required.</p>
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
   * <p>The match options that you can use to filter your results. Valid values:</p>
   * <ul> <li> <p> <code>EQUALS</code> - Matches the values that you specify.</p>
   * </li> <li> <p> <code>ABSENT</code> - Matches costs that have no value for the
   * key. Omit <code>Values</code>.</p> </li> <li> <p> <code>CASE_SENSITIVE</code> -
   * Use only with <code>EQUALS</code>. Values are always matched
   * case-sensitively.</p> </li> </ul> <p>Default values are <code>EQUALS</code> and
   * <code>CASE_SENSITIVE</code>.</p>
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
}  // namespace CostExplorer
}  // namespace Aws
