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
    AWS_CONNECT_API DescribeContactEvaluationResult() = default;
    AWS_CONNECT_API DescribeContactEvaluationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeContactEvaluationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the evaluation form completed for a specific contact.</p>
     */
    inline const Evaluation& GetEvaluation() const { return m_evaluation; }
    template<typename EvaluationT = Evaluation>
    void SetEvaluation(EvaluationT&& value) { m_evaluationHasBeenSet = true; m_evaluation = std::forward<EvaluationT>(value); }
    template<typename EvaluationT = Evaluation>
    DescribeContactEvaluationResult& WithEvaluation(EvaluationT&& value) { SetEvaluation(std::forward<EvaluationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the evaluation form.</p>
     */
    inline const EvaluationFormContent& GetEvaluationForm() const { return m_evaluationForm; }
    template<typename EvaluationFormT = EvaluationFormContent>
    void SetEvaluationForm(EvaluationFormT&& value) { m_evaluationFormHasBeenSet = true; m_evaluationForm = std::forward<EvaluationFormT>(value); }
    template<typename EvaluationFormT = EvaluationFormContent>
    DescribeContactEvaluationResult& WithEvaluationForm(EvaluationFormT&& value) { SetEvaluationForm(std::forward<EvaluationFormT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeContactEvaluationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Evaluation m_evaluation;
    bool m_evaluationHasBeenSet = false;

    EvaluationFormContent m_evaluationForm;
    bool m_evaluationFormHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
