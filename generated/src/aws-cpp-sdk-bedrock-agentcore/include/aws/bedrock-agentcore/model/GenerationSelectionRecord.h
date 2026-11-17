/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/GenerationFilters.h>
#include <aws/bedrock-agentcore/model/GenerationIdentifierCounts.h>

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
 * <p>How a dataset generation was asked to choose sessions. Filters are returned
 * as submitted. Session and trace IDs are returned as counts, and the IDs
 * themselves are never returned.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GenerationSelectionRecord">AWS
 * API Reference</a></p>
 */
class GenerationSelectionRecord {
 public:
  AWS_BEDROCKAGENTCORE_API GenerationSelectionRecord() = default;
  AWS_BEDROCKAGENTCORE_API GenerationSelectionRecord(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API GenerationSelectionRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The filters the generation was started with.</p>
   */
  inline const GenerationFilters& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = GenerationFilters>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = GenerationFilters>
  GenerationSelectionRecord& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of session and trace IDs the generation was started with.</p>
   */
  inline const GenerationIdentifierCounts& GetIdentifiers() const { return m_identifiers; }
  inline bool IdentifiersHasBeenSet() const { return m_identifiersHasBeenSet; }
  template <typename IdentifiersT = GenerationIdentifierCounts>
  void SetIdentifiers(IdentifiersT&& value) {
    m_identifiersHasBeenSet = true;
    m_identifiers = std::forward<IdentifiersT>(value);
  }
  template <typename IdentifiersT = GenerationIdentifierCounts>
  GenerationSelectionRecord& WithIdentifiers(IdentifiersT&& value) {
    SetIdentifiers(std::forward<IdentifiersT>(value));
    return *this;
  }
  ///@}
 private:
  GenerationFilters m_filters;

  GenerationIdentifierCounts m_identifiers;
  bool m_filtersHasBeenSet = false;
  bool m_identifiersHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
