/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/GroundTruthSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Metadata for a specific session in a batch evaluation, including ground truth
 * data and test scenario identifiers.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/SessionMetadataShape">AWS
 * API Reference</a></p>
 */
class SessionMetadataShape {
 public:
  AWS_BEDROCKAGENTCORE_API SessionMetadataShape() = default;
  AWS_BEDROCKAGENTCORE_API SessionMetadataShape(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API SessionMetadataShape& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the session this metadata applies to.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  SessionMetadataShape& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional test scenario identifier for categorizing and tracking evaluation
   * results.</p>
   */
  inline const Aws::String& GetTestScenarioId() const { return m_testScenarioId; }
  inline bool TestScenarioIdHasBeenSet() const { return m_testScenarioIdHasBeenSet; }
  template <typename TestScenarioIdT = Aws::String>
  void SetTestScenarioId(TestScenarioIdT&& value) {
    m_testScenarioIdHasBeenSet = true;
    m_testScenarioId = std::forward<TestScenarioIdT>(value);
  }
  template <typename TestScenarioIdT = Aws::String>
  SessionMetadataShape& WithTestScenarioId(TestScenarioIdT&& value) {
    SetTestScenarioId(std::forward<TestScenarioIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ground truth data for this session, including expected responses and
   * assertions.</p>
   */
  inline const GroundTruthSource& GetGroundTruth() const { return m_groundTruth; }
  inline bool GroundTruthHasBeenSet() const { return m_groundTruthHasBeenSet; }
  template <typename GroundTruthT = GroundTruthSource>
  void SetGroundTruth(GroundTruthT&& value) {
    m_groundTruthHasBeenSet = true;
    m_groundTruth = std::forward<GroundTruthT>(value);
  }
  template <typename GroundTruthT = GroundTruthSource>
  SessionMetadataShape& WithGroundTruth(GroundTruthT&& value) {
    SetGroundTruth(std::forward<GroundTruthT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional key-value metadata associated with this session.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  SessionMetadataShape& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  SessionMetadataShape& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sessionId;

  Aws::String m_testScenarioId;

  GroundTruthSource m_groundTruth;

  Aws::Map<Aws::String, Aws::String> m_metadata;
  bool m_sessionIdHasBeenSet = false;
  bool m_testScenarioIdHasBeenSet = false;
  bool m_groundTruthHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
