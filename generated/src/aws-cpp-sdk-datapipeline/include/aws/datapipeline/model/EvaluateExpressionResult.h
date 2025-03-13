/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
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
namespace DataPipeline
{
namespace Model
{
  /**
   * <p>Contains the output of EvaluateExpression.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/EvaluateExpressionOutput">AWS
   * API Reference</a></p>
   */
  class EvaluateExpressionResult
  {
  public:
    AWS_DATAPIPELINE_API EvaluateExpressionResult() = default;
    AWS_DATAPIPELINE_API EvaluateExpressionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAPIPELINE_API EvaluateExpressionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The evaluated expression.</p>
     */
    inline const Aws::String& GetEvaluatedExpression() const { return m_evaluatedExpression; }
    template<typename EvaluatedExpressionT = Aws::String>
    void SetEvaluatedExpression(EvaluatedExpressionT&& value) { m_evaluatedExpressionHasBeenSet = true; m_evaluatedExpression = std::forward<EvaluatedExpressionT>(value); }
    template<typename EvaluatedExpressionT = Aws::String>
    EvaluateExpressionResult& WithEvaluatedExpression(EvaluatedExpressionT&& value) { SetEvaluatedExpression(std::forward<EvaluatedExpressionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    EvaluateExpressionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_evaluatedExpression;
    bool m_evaluatedExpressionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
