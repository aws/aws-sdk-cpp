/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/BatchDeleteAdvancedPromptOptimizationJobError.h>
#include <aws/bedrock/model/BatchDeleteAdvancedPromptOptimizationJobItem.h>
#include <aws/core/http/HttpResponse.h>
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
namespace Bedrock {
namespace Model {
/**
 * <p>Batch Delete Advanced Prompt Optimization Jobs Response</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/BatchDeleteAdvancedPromptOptimizationJobResponse">AWS
 * API Reference</a></p>
 */
class BatchDeleteAdvancedPromptOptimizationJobResult {
 public:
  AWS_BEDROCK_API BatchDeleteAdvancedPromptOptimizationJobResult() = default;
  AWS_BEDROCK_API BatchDeleteAdvancedPromptOptimizationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCK_API BatchDeleteAdvancedPromptOptimizationJobResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of errors encountered during batch deletion.</p>
   */
  inline const Aws::Vector<BatchDeleteAdvancedPromptOptimizationJobError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchDeleteAdvancedPromptOptimizationJobError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchDeleteAdvancedPromptOptimizationJobError>>
  BatchDeleteAdvancedPromptOptimizationJobResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchDeleteAdvancedPromptOptimizationJobError>
  BatchDeleteAdvancedPromptOptimizationJobResult& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of successfully deleted advanced prompt optimization jobs.</p>
   */
  inline const Aws::Vector<BatchDeleteAdvancedPromptOptimizationJobItem>& GetAdvancedPromptOptimizationJobs() const {
    return m_advancedPromptOptimizationJobs;
  }
  template <typename AdvancedPromptOptimizationJobsT = Aws::Vector<BatchDeleteAdvancedPromptOptimizationJobItem>>
  void SetAdvancedPromptOptimizationJobs(AdvancedPromptOptimizationJobsT&& value) {
    m_advancedPromptOptimizationJobsHasBeenSet = true;
    m_advancedPromptOptimizationJobs = std::forward<AdvancedPromptOptimizationJobsT>(value);
  }
  template <typename AdvancedPromptOptimizationJobsT = Aws::Vector<BatchDeleteAdvancedPromptOptimizationJobItem>>
  BatchDeleteAdvancedPromptOptimizationJobResult& WithAdvancedPromptOptimizationJobs(AdvancedPromptOptimizationJobsT&& value) {
    SetAdvancedPromptOptimizationJobs(std::forward<AdvancedPromptOptimizationJobsT>(value));
    return *this;
  }
  template <typename AdvancedPromptOptimizationJobsT = BatchDeleteAdvancedPromptOptimizationJobItem>
  BatchDeleteAdvancedPromptOptimizationJobResult& AddAdvancedPromptOptimizationJobs(AdvancedPromptOptimizationJobsT&& value) {
    m_advancedPromptOptimizationJobsHasBeenSet = true;
    m_advancedPromptOptimizationJobs.emplace_back(std::forward<AdvancedPromptOptimizationJobsT>(value));
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
  BatchDeleteAdvancedPromptOptimizationJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<BatchDeleteAdvancedPromptOptimizationJobError> m_errors;

  Aws::Vector<BatchDeleteAdvancedPromptOptimizationJobItem> m_advancedPromptOptimizationJobs;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_errorsHasBeenSet = false;
  bool m_advancedPromptOptimizationJobsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
