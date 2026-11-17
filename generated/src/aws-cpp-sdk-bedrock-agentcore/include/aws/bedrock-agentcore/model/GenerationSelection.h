/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/GenerationFilters.h>
#include <aws/bedrock-agentcore/model/GenerationIdentifiers.h>

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
 * <p>How a dataset generation chooses sessions. Specify exactly one: filters, to
 * have AgentCore find matching sessions, or identifiers, to name the sessions and
 * traces yourself. Sessions and traces you name aren't filtered
 * further.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GenerationSelection">AWS
 * API Reference</a></p>
 */
class GenerationSelection {
 public:
  AWS_BEDROCKAGENTCORE_API GenerationSelection() = default;
  AWS_BEDROCKAGENTCORE_API GenerationSelection(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API GenerationSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Conditions that a session must meet to be selected.</p>
   */
  inline const GenerationFilters& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = GenerationFilters>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = GenerationFilters>
  GenerationSelection& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sessions and traces to use.</p>
   */
  inline const GenerationIdentifiers& GetIdentifiers() const { return m_identifiers; }
  inline bool IdentifiersHasBeenSet() const { return m_identifiersHasBeenSet; }
  template <typename IdentifiersT = GenerationIdentifiers>
  void SetIdentifiers(IdentifiersT&& value) {
    m_identifiersHasBeenSet = true;
    m_identifiers = std::forward<IdentifiersT>(value);
  }
  template <typename IdentifiersT = GenerationIdentifiers>
  GenerationSelection& WithIdentifiers(IdentifiersT&& value) {
    SetIdentifiers(std::forward<IdentifiersT>(value));
    return *this;
  }
  ///@}
 private:
  GenerationFilters m_filters;

  GenerationIdentifiers m_identifiers;
  bool m_filtersHasBeenSet = false;
  bool m_identifiersHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
