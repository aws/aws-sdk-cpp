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
    AWS_BEDROCK_API BatchDeleteEvaluationJobResult();
    AWS_BEDROCK_API BatchDeleteEvaluationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API BatchDeleteEvaluationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A JSON object containing the HTTP status codes and the ARNs of evaluation
     * jobs that failed to be deleted.</p>
     */
    inline const Aws::Vector<BatchDeleteEvaluationJobError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchDeleteEvaluationJobError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchDeleteEvaluationJobError>&& value) { m_errors = std::move(value); }
    inline BatchDeleteEvaluationJobResult& WithErrors(const Aws::Vector<BatchDeleteEvaluationJobError>& value) { SetErrors(value); return *this;}
    inline BatchDeleteEvaluationJobResult& WithErrors(Aws::Vector<BatchDeleteEvaluationJobError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchDeleteEvaluationJobResult& AddErrors(const BatchDeleteEvaluationJobError& value) { m_errors.push_back(value); return *this; }
    inline BatchDeleteEvaluationJobResult& AddErrors(BatchDeleteEvaluationJobError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of evaluation jobs for deletion.</p>
     */
    inline const Aws::Vector<BatchDeleteEvaluationJobItem>& GetEvaluationJobs() const{ return m_evaluationJobs; }
    inline void SetEvaluationJobs(const Aws::Vector<BatchDeleteEvaluationJobItem>& value) { m_evaluationJobs = value; }
    inline void SetEvaluationJobs(Aws::Vector<BatchDeleteEvaluationJobItem>&& value) { m_evaluationJobs = std::move(value); }
    inline BatchDeleteEvaluationJobResult& WithEvaluationJobs(const Aws::Vector<BatchDeleteEvaluationJobItem>& value) { SetEvaluationJobs(value); return *this;}
    inline BatchDeleteEvaluationJobResult& WithEvaluationJobs(Aws::Vector<BatchDeleteEvaluationJobItem>&& value) { SetEvaluationJobs(std::move(value)); return *this;}
    inline BatchDeleteEvaluationJobResult& AddEvaluationJobs(const BatchDeleteEvaluationJobItem& value) { m_evaluationJobs.push_back(value); return *this; }
    inline BatchDeleteEvaluationJobResult& AddEvaluationJobs(BatchDeleteEvaluationJobItem&& value) { m_evaluationJobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteEvaluationJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteEvaluationJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteEvaluationJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchDeleteEvaluationJobError> m_errors;

    Aws::Vector<BatchDeleteEvaluationJobItem> m_evaluationJobs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
