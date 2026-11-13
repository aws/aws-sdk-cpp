/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/DomainFilter.h>
#include <aws/bedrock-agentcore/model/PublishedDateFilter.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>The filters to apply to a web search.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/WebSearchFilters">AWS
 * API Reference</a></p>
 */
class WebSearchFilters {
 public:
  AWS_BEDROCKAGENTCORE_API WebSearchFilters() = default;
  AWS_BEDROCKAGENTCORE_API WebSearchFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API WebSearchFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The domains to include in or exclude from the results.</p>
   */
  inline const DomainFilter& GetDomainFilter() const { return m_domainFilter; }
  inline bool DomainFilterHasBeenSet() const { return m_domainFilterHasBeenSet; }
  template <typename DomainFilterT = DomainFilter>
  void SetDomainFilter(DomainFilterT&& value) {
    m_domainFilterHasBeenSet = true;
    m_domainFilter = std::forward<DomainFilterT>(value);
  }
  template <typename DomainFilterT = DomainFilter>
  WebSearchFilters& WithDomainFilter(DomainFilterT&& value) {
    SetDomainFilter(std::forward<DomainFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The publication time range of the results.</p>
   */
  inline const PublishedDateFilter& GetPublishedDateFilter() const { return m_publishedDateFilter; }
  inline bool PublishedDateFilterHasBeenSet() const { return m_publishedDateFilterHasBeenSet; }
  template <typename PublishedDateFilterT = PublishedDateFilter>
  void SetPublishedDateFilter(PublishedDateFilterT&& value) {
    m_publishedDateFilterHasBeenSet = true;
    m_publishedDateFilter = std::forward<PublishedDateFilterT>(value);
  }
  template <typename PublishedDateFilterT = PublishedDateFilter>
  WebSearchFilters& WithPublishedDateFilter(PublishedDateFilterT&& value) {
    SetPublishedDateFilter(std::forward<PublishedDateFilterT>(value));
    return *this;
  }
  ///@}
 private:
  DomainFilter m_domainFilter;

  PublishedDateFilter m_publishedDateFilter;
  bool m_domainFilterHasBeenSet = false;
  bool m_publishedDateFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
