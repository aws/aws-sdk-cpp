/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/BatchDeleteEvaluationJobError.h>
#include <aws/bedrock/model/BatchDeleteEvaluationJobItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Bedrock
{
namespace Model
{
  class BatchDeleteEvaluationJobResult
  {
  public:
    AWS_BEDROCK_API BatchDeleteEvaluationJobResult() = default;
    AWS_BEDROCK_API BatchDeleteEvaluationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API BatchDeleteEvaluationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A JSON object containing the HTTP status codes and the ARNs of evaluation
     * jobs that failed to be deleted.</p>
     */
    inline const Aws::Vector<BatchDeleteEvaluationJobError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchDeleteEvaluationJobError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchDeleteEvaluationJobError>>
    BatchDeleteEvaluationJobResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchDeleteEvaluationJobError>
    BatchDeleteEvaluationJobResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of evaluation jobs for deletion.</p>
     */
    inline const Aws::Vector<BatchDeleteEvaluationJobItem>& GetEvaluationJobs() const { return m_evaluationJobs; }
    template<typename EvaluationJobsT = Aws::Vector<BatchDeleteEvaluationJobItem>>
    void SetEvaluationJobs(EvaluationJobsT&& value) { m_evaluationJobsHasBeenSet = true; m_evaluationJobs = std::forward<EvaluationJobsT>(value); }
    template<typename EvaluationJobsT = Aws::Vector<BatchDeleteEvaluationJobItem>>
    BatchDeleteEvaluationJobResult& WithEvaluationJobs(EvaluationJobsT&& value) { SetEvaluationJobs(std::forward<EvaluationJobsT>(value)); return *this;}
    template<typename EvaluationJobsT = BatchDeleteEvaluationJobItem>
    BatchDeleteEvaluationJobResult& AddEvaluationJobs(EvaluationJobsT&& value) { m_evaluationJobsHasBeenSet = true; m_evaluationJobs.emplace_back(std::forward<EvaluationJobsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDeleteEvaluationJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchDeleteEvaluationJobError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::Vector<BatchDeleteEvaluationJobItem> m_evaluationJobs;
    bool m_evaluationJobsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
