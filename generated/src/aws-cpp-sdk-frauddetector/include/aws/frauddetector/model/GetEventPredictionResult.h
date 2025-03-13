/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ModelScores.h>
#include <aws/frauddetector/model/RuleResult.h>
#include <aws/frauddetector/model/ExternalModelOutputs.h>
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
namespace FraudDetector
{
namespace Model
{
  class GetEventPredictionResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetEventPredictionResult() = default;
    AWS_FRAUDDETECTOR_API GetEventPredictionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetEventPredictionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The model scores. Amazon Fraud Detector generates model scores between 0 and
     * 1000, where 0 is low fraud risk and 1000 is high fraud risk. Model scores are
     * directly related to the false positive rate (FPR). For example, a score of 600
     * corresponds to an estimated 10% false positive rate whereas a score of 900
     * corresponds to an estimated 2% false positive rate.</p>
     */
    inline const Aws::Vector<ModelScores>& GetModelScores() const { return m_modelScores; }
    template<typename ModelScoresT = Aws::Vector<ModelScores>>
    void SetModelScores(ModelScoresT&& value) { m_modelScoresHasBeenSet = true; m_modelScores = std::forward<ModelScoresT>(value); }
    template<typename ModelScoresT = Aws::Vector<ModelScores>>
    GetEventPredictionResult& WithModelScores(ModelScoresT&& value) { SetModelScores(std::forward<ModelScoresT>(value)); return *this;}
    template<typename ModelScoresT = ModelScores>
    GetEventPredictionResult& AddModelScores(ModelScoresT&& value) { m_modelScoresHasBeenSet = true; m_modelScores.emplace_back(std::forward<ModelScoresT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The results from the rules.</p>
     */
    inline const Aws::Vector<RuleResult>& GetRuleResults() const { return m_ruleResults; }
    template<typename RuleResultsT = Aws::Vector<RuleResult>>
    void SetRuleResults(RuleResultsT&& value) { m_ruleResultsHasBeenSet = true; m_ruleResults = std::forward<RuleResultsT>(value); }
    template<typename RuleResultsT = Aws::Vector<RuleResult>>
    GetEventPredictionResult& WithRuleResults(RuleResultsT&& value) { SetRuleResults(std::forward<RuleResultsT>(value)); return *this;}
    template<typename RuleResultsT = RuleResult>
    GetEventPredictionResult& AddRuleResults(RuleResultsT&& value) { m_ruleResultsHasBeenSet = true; m_ruleResults.emplace_back(std::forward<RuleResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The model scores for Amazon SageMaker models.</p>
     */
    inline const Aws::Vector<ExternalModelOutputs>& GetExternalModelOutputs() const { return m_externalModelOutputs; }
    template<typename ExternalModelOutputsT = Aws::Vector<ExternalModelOutputs>>
    void SetExternalModelOutputs(ExternalModelOutputsT&& value) { m_externalModelOutputsHasBeenSet = true; m_externalModelOutputs = std::forward<ExternalModelOutputsT>(value); }
    template<typename ExternalModelOutputsT = Aws::Vector<ExternalModelOutputs>>
    GetEventPredictionResult& WithExternalModelOutputs(ExternalModelOutputsT&& value) { SetExternalModelOutputs(std::forward<ExternalModelOutputsT>(value)); return *this;}
    template<typename ExternalModelOutputsT = ExternalModelOutputs>
    GetEventPredictionResult& AddExternalModelOutputs(ExternalModelOutputsT&& value) { m_externalModelOutputsHasBeenSet = true; m_externalModelOutputs.emplace_back(std::forward<ExternalModelOutputsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEventPredictionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ModelScores> m_modelScores;
    bool m_modelScoresHasBeenSet = false;

    Aws::Vector<RuleResult> m_ruleResults;
    bool m_ruleResultsHasBeenSet = false;

    Aws::Vector<ExternalModelOutputs> m_externalModelOutputs;
    bool m_externalModelOutputsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
