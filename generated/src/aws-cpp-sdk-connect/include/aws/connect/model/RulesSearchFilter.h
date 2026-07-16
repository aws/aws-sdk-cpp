/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/RuleAttributeFilter.h>

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
 * <p>Filters to be applied to search results.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RulesSearchFilter">AWS
 * API Reference</a></p>
 */
class RulesSearchFilter {
 public:
  AWS_CONNECT_API RulesSearchFilter() = default;
  AWS_CONNECT_API RulesSearchFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API RulesSearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An object that can be used to specify tag conditions inside the
   * <code>SearchFilter</code>.</p>
   */
  inline const RuleAttributeFilter& GetAttributeFilter() const { return m_attributeFilter; }
  inline bool AttributeFilterHasBeenSet() const { return m_attributeFilterHasBeenSet; }
  template <typename AttributeFilterT = RuleAttributeFilter>
  void SetAttributeFilter(AttributeFilterT&& value) {
    m_attributeFilterHasBeenSet = true;
    m_attributeFilter = std::forward<AttributeFilterT>(value);
  }
  template <typename AttributeFilterT = RuleAttributeFilter>
  RulesSearchFilter& WithAttributeFilter(AttributeFilterT&& value) {
    SetAttributeFilter(std::forward<AttributeFilterT>(value));
    return *this;
  }
  ///@}
 private:
  RuleAttributeFilter m_attributeFilter;
  bool m_attributeFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
