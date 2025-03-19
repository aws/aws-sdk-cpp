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
   * <p> Represents the output of a <code>CreateEvaluation</code> operation, and is
   * an acknowledgement that Amazon ML received the request.</p> <p>
   * <code>CreateEvaluation</code> operation is asynchronous. You can poll for status
   * updates by using the <code>GetEvcaluation</code> operation and checking the
   * <code>Status</code> parameter. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/CreateEvaluationOutput">AWS
   * API Reference</a></p>
   */
  class CreateEvaluationResult
  {
  public:
    AWS_MACHINELEARNING_API CreateEvaluationResult() = default;
    AWS_MACHINELEARNING_API CreateEvaluationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API CreateEvaluationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The user-supplied ID that uniquely identifies the <code>Evaluation</code>.
     * This value should be identical to the value of the <code>EvaluationId</code> in
     * the request.</p>
     */
    inline const Aws::String& GetEvaluationId() const { return m_evaluationId; }
    template<typename EvaluationIdT = Aws::String>
    void SetEvaluationId(EvaluationIdT&& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = std::forward<EvaluationIdT>(value); }
    template<typename EvaluationIdT = Aws::String>
    CreateEvaluationResult& WithEvaluationId(EvaluationIdT&& value) { SetEvaluationId(std::forward<EvaluationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateEvaluationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_evaluationId;
    bool m_evaluationIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
