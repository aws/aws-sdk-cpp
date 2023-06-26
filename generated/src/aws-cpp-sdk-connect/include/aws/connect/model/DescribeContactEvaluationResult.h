/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Evaluation.h>
#include <aws/connect/model/EvaluationFormContent.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Connect
{
namespace Model
{
  class DescribeContactEvaluationResult
  {
  public:
    AWS_CONNECT_API DescribeContactEvaluationResult();
    AWS_CONNECT_API DescribeContactEvaluationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeContactEvaluationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the evaluation form completed for a specific contact.</p>
     */
    inline const Evaluation& GetEvaluation() const{ return m_evaluation; }

    /**
     * <p>Information about the evaluation form completed for a specific contact.</p>
     */
    inline void SetEvaluation(const Evaluation& value) { m_evaluation = value; }

    /**
     * <p>Information about the evaluation form completed for a specific contact.</p>
     */
    inline void SetEvaluation(Evaluation&& value) { m_evaluation = std::move(value); }

    /**
     * <p>Information about the evaluation form completed for a specific contact.</p>
     */
    inline DescribeContactEvaluationResult& WithEvaluation(const Evaluation& value) { SetEvaluation(value); return *this;}

    /**
     * <p>Information about the evaluation form completed for a specific contact.</p>
     */
    inline DescribeContactEvaluationResult& WithEvaluation(Evaluation&& value) { SetEvaluation(std::move(value)); return *this;}


    /**
     * <p>Information about the evaluation form.</p>
     */
    inline const EvaluationFormContent& GetEvaluationForm() const{ return m_evaluationForm; }

    /**
     * <p>Information about the evaluation form.</p>
     */
    inline void SetEvaluationForm(const EvaluationFormContent& value) { m_evaluationForm = value; }

    /**
     * <p>Information about the evaluation form.</p>
     */
    inline void SetEvaluationForm(EvaluationFormContent&& value) { m_evaluationForm = std::move(value); }

    /**
     * <p>Information about the evaluation form.</p>
     */
    inline DescribeContactEvaluationResult& WithEvaluationForm(const EvaluationFormContent& value) { SetEvaluationForm(value); return *this;}

    /**
     * <p>Information about the evaluation form.</p>
     */
    inline DescribeContactEvaluationResult& WithEvaluationForm(EvaluationFormContent&& value) { SetEvaluationForm(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeContactEvaluationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeContactEvaluationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeContactEvaluationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Evaluation m_evaluation;

    EvaluationFormContent m_evaluationForm;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
