/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
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
namespace MachineLearning
{
namespace Model
{
  /**
   * <p> Represents the output of a <code>DeleteEvaluation</code> operation. The
   * output indicates that Amazon Machine Learning (Amazon ML) received the
   * request.</p> <p>You can use the <code>GetEvaluation</code> operation and check
   * the value of the <code>Status</code> parameter to see whether an
   * <code>Evaluation</code> is marked as <code>DELETED</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DeleteEvaluationOutput">AWS
   * API Reference</a></p>
   */
  class DeleteEvaluationResult
  {
  public:
    AWS_MACHINELEARNING_API DeleteEvaluationResult();
    AWS_MACHINELEARNING_API DeleteEvaluationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API DeleteEvaluationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code>. This
     * value should be identical to the value of the <code>EvaluationId</code> in the
     * request.</p>
     */
    inline const Aws::String& GetEvaluationId() const{ return m_evaluationId; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code>. This
     * value should be identical to the value of the <code>EvaluationId</code> in the
     * request.</p>
     */
    inline void SetEvaluationId(const Aws::String& value) { m_evaluationId = value; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code>. This
     * value should be identical to the value of the <code>EvaluationId</code> in the
     * request.</p>
     */
    inline void SetEvaluationId(Aws::String&& value) { m_evaluationId = std::move(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code>. This
     * value should be identical to the value of the <code>EvaluationId</code> in the
     * request.</p>
     */
    inline void SetEvaluationId(const char* value) { m_evaluationId.assign(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code>. This
     * value should be identical to the value of the <code>EvaluationId</code> in the
     * request.</p>
     */
    inline DeleteEvaluationResult& WithEvaluationId(const Aws::String& value) { SetEvaluationId(value); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code>. This
     * value should be identical to the value of the <code>EvaluationId</code> in the
     * request.</p>
     */
    inline DeleteEvaluationResult& WithEvaluationId(Aws::String&& value) { SetEvaluationId(std::move(value)); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>Evaluation</code>. This
     * value should be identical to the value of the <code>EvaluationId</code> in the
     * request.</p>
     */
    inline DeleteEvaluationResult& WithEvaluationId(const char* value) { SetEvaluationId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteEvaluationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteEvaluationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteEvaluationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_evaluationId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
