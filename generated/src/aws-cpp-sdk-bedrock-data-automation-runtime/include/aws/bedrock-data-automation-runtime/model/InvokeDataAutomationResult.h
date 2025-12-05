/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/bedrock-data-automation-runtime/model/OutputSegment.h>
#include <aws/bedrock-data-automation-runtime/model/SemanticModality.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockDataAutomationRuntime {
namespace Model {
/**
 * <p>Invoke Data Automation Response</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/InvokeDataAutomationResponse">AWS
 * API Reference</a></p>
 */
class InvokeDataAutomationResult {
 public:
  AWS_BEDROCKDATAAUTOMATIONRUNTIME_API InvokeDataAutomationResult() = default;
  AWS_BEDROCKDATAAUTOMATIONRUNTIME_API InvokeDataAutomationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKDATAAUTOMATIONRUNTIME_API InvokeDataAutomationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Detected semantic modality</p>
   */
  inline SemanticModality GetSemanticModality() const { return m_semanticModality; }
  inline void SetSemanticModality(SemanticModality value) {
    m_semanticModalityHasBeenSet = true;
    m_semanticModality = value;
  }
  inline InvokeDataAutomationResult& WithSemanticModality(SemanticModality value) {
    SetSemanticModality(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of outputs for each logical sub-doc</p>
   */
  inline const Aws::Vector<OutputSegment>& GetOutputSegments() const { return m_outputSegments; }
  template <typename OutputSegmentsT = Aws::Vector<OutputSegment>>
  void SetOutputSegments(OutputSegmentsT&& value) {
    m_outputSegmentsHasBeenSet = true;
    m_outputSegments = std::forward<OutputSegmentsT>(value);
  }
  template <typename OutputSegmentsT = Aws::Vector<OutputSegment>>
  InvokeDataAutomationResult& WithOutputSegments(OutputSegmentsT&& value) {
    SetOutputSegments(std::forward<OutputSegmentsT>(value));
    return *this;
  }
  template <typename OutputSegmentsT = OutputSegment>
  InvokeDataAutomationResult& AddOutputSegments(OutputSegmentsT&& value) {
    m_outputSegmentsHasBeenSet = true;
    m_outputSegments.emplace_back(std::forward<OutputSegmentsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  InvokeDataAutomationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  SemanticModality m_semanticModality{SemanticModality::NOT_SET};

  Aws::Vector<OutputSegment> m_outputSegments;

  Aws::String m_requestId;
  bool m_semanticModalityHasBeenSet = false;
  bool m_outputSegmentsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomationRuntime
}  // namespace Aws
