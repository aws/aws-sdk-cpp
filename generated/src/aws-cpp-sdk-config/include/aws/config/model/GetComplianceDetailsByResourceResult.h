/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/EvaluationResult.h>
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
namespace ConfigService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceDetailsByResourceResponse">AWS
   * API Reference</a></p>
   */
  class GetComplianceDetailsByResourceResult
  {
  public:
    AWS_CONFIGSERVICE_API GetComplianceDetailsByResourceResult() = default;
    AWS_CONFIGSERVICE_API GetComplianceDetailsByResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetComplianceDetailsByResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates whether the specified Amazon Web Services resource complies each
     * Config rule.</p>
     */
    inline const Aws::Vector<EvaluationResult>& GetEvaluationResults() const { return m_evaluationResults; }
    template<typename EvaluationResultsT = Aws::Vector<EvaluationResult>>
    void SetEvaluationResults(EvaluationResultsT&& value) { m_evaluationResultsHasBeenSet = true; m_evaluationResults = std::forward<EvaluationResultsT>(value); }
    template<typename EvaluationResultsT = Aws::Vector<EvaluationResult>>
    GetComplianceDetailsByResourceResult& WithEvaluationResults(EvaluationResultsT&& value) { SetEvaluationResults(std::forward<EvaluationResultsT>(value)); return *this;}
    template<typename EvaluationResultsT = EvaluationResult>
    GetComplianceDetailsByResourceResult& AddEvaluationResults(EvaluationResultsT&& value) { m_evaluationResultsHasBeenSet = true; m_evaluationResults.emplace_back(std::forward<EvaluationResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetComplianceDetailsByResourceResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetComplianceDetailsByResourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EvaluationResult> m_evaluationResults;
    bool m_evaluationResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
