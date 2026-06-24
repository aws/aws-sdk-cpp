/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>Metadata about a retrieval source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveSourceMetadata">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveSourceMetadata {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveSourceMetadata() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveSourceMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveSourceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the retrieval source.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  AgenticRetrieveSourceMetadata& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of retrieval source.</p>
   */
  inline AgenticRetrieveType GetRetrievalType() const { return m_retrievalType; }
  inline bool RetrievalTypeHasBeenSet() const { return m_retrievalTypeHasBeenSet; }
  inline void SetRetrievalType(AgenticRetrieveType value) {
    m_retrievalTypeHasBeenSet = true;
    m_retrievalType = value;
  }
  inline AgenticRetrieveSourceMetadata& WithRetrievalType(AgenticRetrieveType value) {
    SetRetrievalType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;

  AgenticRetrieveType m_retrievalType{AgenticRetrieveType::NOT_SET};
  bool m_identifierHasBeenSet = false;
  bool m_retrievalTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
