/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
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
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>The domains to include in or exclude from the results. A root domain also
 * matches its subdomains. For example, <code>example.com</code> also matches
 * <code>docs.example.com</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/DomainFilter">AWS
 * API Reference</a></p>
 */
class DomainFilter {
 public:
  AWS_BEDROCKAGENTCORE_API DomainFilter() = default;
  AWS_BEDROCKAGENTCORE_API DomainFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API DomainFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The domains to return results from. Results from other domains are not
   * returned.</p>
   */
  inline const Aws::Vector<Aws::String>& GetInclude() const { return m_include; }
  inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
  template <typename IncludeT = Aws::Vector<Aws::String>>
  void SetInclude(IncludeT&& value) {
    m_includeHasBeenSet = true;
    m_include = std::forward<IncludeT>(value);
  }
  template <typename IncludeT = Aws::Vector<Aws::String>>
  DomainFilter& WithInclude(IncludeT&& value) {
    SetInclude(std::forward<IncludeT>(value));
    return *this;
  }
  template <typename IncludeT = Aws::String>
  DomainFilter& AddInclude(IncludeT&& value) {
    m_includeHasBeenSet = true;
    m_include.emplace_back(std::forward<IncludeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domains to never return results from.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExclude() const { return m_exclude; }
  inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }
  template <typename ExcludeT = Aws::Vector<Aws::String>>
  void SetExclude(ExcludeT&& value) {
    m_excludeHasBeenSet = true;
    m_exclude = std::forward<ExcludeT>(value);
  }
  template <typename ExcludeT = Aws::Vector<Aws::String>>
  DomainFilter& WithExclude(ExcludeT&& value) {
    SetExclude(std::forward<ExcludeT>(value));
    return *this;
  }
  template <typename ExcludeT = Aws::String>
  DomainFilter& AddExclude(ExcludeT&& value) {
    m_excludeHasBeenSet = true;
    m_exclude.emplace_back(std::forward<ExcludeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_include;

  Aws::Vector<Aws::String> m_exclude;
  bool m_includeHasBeenSet = false;
  bool m_excludeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
