/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/AnalysisRule.h>
#include <aws/cleanrooms/model/BatchGetSchemaAnalysisRuleError.h>
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
namespace CleanRooms
{
namespace Model
{
  class BatchGetSchemaAnalysisRuleResult
  {
  public:
    AWS_CLEANROOMS_API BatchGetSchemaAnalysisRuleResult() = default;
    AWS_CLEANROOMS_API BatchGetSchemaAnalysisRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API BatchGetSchemaAnalysisRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The retrieved list of analysis rules.</p>
     */
    inline const Aws::Vector<AnalysisRule>& GetAnalysisRules() const { return m_analysisRules; }
    template<typename AnalysisRulesT = Aws::Vector<AnalysisRule>>
    void SetAnalysisRules(AnalysisRulesT&& value) { m_analysisRulesHasBeenSet = true; m_analysisRules = std::forward<AnalysisRulesT>(value); }
    template<typename AnalysisRulesT = Aws::Vector<AnalysisRule>>
    BatchGetSchemaAnalysisRuleResult& WithAnalysisRules(AnalysisRulesT&& value) { SetAnalysisRules(std::forward<AnalysisRulesT>(value)); return *this;}
    template<typename AnalysisRulesT = AnalysisRule>
    BatchGetSchemaAnalysisRuleResult& AddAnalysisRules(AnalysisRulesT&& value) { m_analysisRulesHasBeenSet = true; m_analysisRules.emplace_back(std::forward<AnalysisRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Error reasons for schemas that could not be retrieved. One error is returned
     * for every schema that could not be retrieved.</p>
     */
    inline const Aws::Vector<BatchGetSchemaAnalysisRuleError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchGetSchemaAnalysisRuleError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchGetSchemaAnalysisRuleError>>
    BatchGetSchemaAnalysisRuleResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchGetSchemaAnalysisRuleError>
    BatchGetSchemaAnalysisRuleResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetSchemaAnalysisRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnalysisRule> m_analysisRules;
    bool m_analysisRulesHasBeenSet = false;

    Aws::Vector<BatchGetSchemaAnalysisRuleError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
