/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/DatasetGenerationStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {
class DeleteDatasetGenerationResult {
 public:
  AWS_BEDROCKAGENTCORE_API DeleteDatasetGenerationResult() = default;
  AWS_BEDROCKAGENTCORE_API DeleteDatasetGenerationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API DeleteDatasetGenerationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the dataset generation.</p>
   */
  inline const Aws::String& GetGenerationId() const { return m_generationId; }
  template <typename GenerationIdT = Aws::String>
  void SetGenerationId(GenerationIdT&& value) {
    m_generationIdHasBeenSet = true;
    m_generationId = std::forward<GenerationIdT>(value);
  }
  template <typename GenerationIdT = Aws::String>
  DeleteDatasetGenerationResult& WithGenerationId(GenerationIdT&& value) {
    SetGenerationId(std::forward<GenerationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the dataset generation.</p>
   */
  inline DatasetGenerationStatus GetStatus() const { return m_status; }
  inline void SetStatus(DatasetGenerationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeleteDatasetGenerationResult& WithStatus(DatasetGenerationStatus value) {
    SetStatus(value);
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
  DeleteDatasetGenerationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_generationId;

  DatasetGenerationStatus m_status{DatasetGenerationStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_generationIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
