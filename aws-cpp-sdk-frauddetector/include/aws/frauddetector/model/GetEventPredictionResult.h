/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/ModelScores.h>
#include <aws/frauddetector/model/RuleResult.h>
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
  class AWS_FRAUDDETECTOR_API GetEventPredictionResult
  {
  public:
    GetEventPredictionResult();
    GetEventPredictionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetEventPredictionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The model scores. Amazon Fraud Detector generates model scores between 0 and
     * 1000, where 0 is low fraud risk and 1000 is high fraud risk. Model scores are
     * directly related to the false positive rate (FPR). For example, a score of 600
     * corresponds to an estimated 10% false positive rate whereas a score of 900
     * corresponds to an estimated 2% false positive rate.</p>
     */
    inline const Aws::Vector<ModelScores>& GetModelScores() const{ return m_modelScores; }

    /**
     * <p>The model scores. Amazon Fraud Detector generates model scores between 0 and
     * 1000, where 0 is low fraud risk and 1000 is high fraud risk. Model scores are
     * directly related to the false positive rate (FPR). For example, a score of 600
     * corresponds to an estimated 10% false positive rate whereas a score of 900
     * corresponds to an estimated 2% false positive rate.</p>
     */
    inline void SetModelScores(const Aws::Vector<ModelScores>& value) { m_modelScores = value; }

    /**
     * <p>The model scores. Amazon Fraud Detector generates model scores between 0 and
     * 1000, where 0 is low fraud risk and 1000 is high fraud risk. Model scores are
     * directly related to the false positive rate (FPR). For example, a score of 600
     * corresponds to an estimated 10% false positive rate whereas a score of 900
     * corresponds to an estimated 2% false positive rate.</p>
     */
    inline void SetModelScores(Aws::Vector<ModelScores>&& value) { m_modelScores = std::move(value); }

    /**
     * <p>The model scores. Amazon Fraud Detector generates model scores between 0 and
     * 1000, where 0 is low fraud risk and 1000 is high fraud risk. Model scores are
     * directly related to the false positive rate (FPR). For example, a score of 600
     * corresponds to an estimated 10% false positive rate whereas a score of 900
     * corresponds to an estimated 2% false positive rate.</p>
     */
    inline GetEventPredictionResult& WithModelScores(const Aws::Vector<ModelScores>& value) { SetModelScores(value); return *this;}

    /**
     * <p>The model scores. Amazon Fraud Detector generates model scores between 0 and
     * 1000, where 0 is low fraud risk and 1000 is high fraud risk. Model scores are
     * directly related to the false positive rate (FPR). For example, a score of 600
     * corresponds to an estimated 10% false positive rate whereas a score of 900
     * corresponds to an estimated 2% false positive rate.</p>
     */
    inline GetEventPredictionResult& WithModelScores(Aws::Vector<ModelScores>&& value) { SetModelScores(std::move(value)); return *this;}

    /**
     * <p>The model scores. Amazon Fraud Detector generates model scores between 0 and
     * 1000, where 0 is low fraud risk and 1000 is high fraud risk. Model scores are
     * directly related to the false positive rate (FPR). For example, a score of 600
     * corresponds to an estimated 10% false positive rate whereas a score of 900
     * corresponds to an estimated 2% false positive rate.</p>
     */
    inline GetEventPredictionResult& AddModelScores(const ModelScores& value) { m_modelScores.push_back(value); return *this; }

    /**
     * <p>The model scores. Amazon Fraud Detector generates model scores between 0 and
     * 1000, where 0 is low fraud risk and 1000 is high fraud risk. Model scores are
     * directly related to the false positive rate (FPR). For example, a score of 600
     * corresponds to an estimated 10% false positive rate whereas a score of 900
     * corresponds to an estimated 2% false positive rate.</p>
     */
    inline GetEventPredictionResult& AddModelScores(ModelScores&& value) { m_modelScores.push_back(std::move(value)); return *this; }


    /**
     * <p>The results.</p>
     */
    inline const Aws::Vector<RuleResult>& GetRuleResults() const{ return m_ruleResults; }

    /**
     * <p>The results.</p>
     */
    inline void SetRuleResults(const Aws::Vector<RuleResult>& value) { m_ruleResults = value; }

    /**
     * <p>The results.</p>
     */
    inline void SetRuleResults(Aws::Vector<RuleResult>&& value) { m_ruleResults = std::move(value); }

    /**
     * <p>The results.</p>
     */
    inline GetEventPredictionResult& WithRuleResults(const Aws::Vector<RuleResult>& value) { SetRuleResults(value); return *this;}

    /**
     * <p>The results.</p>
     */
    inline GetEventPredictionResult& WithRuleResults(Aws::Vector<RuleResult>&& value) { SetRuleResults(std::move(value)); return *this;}

    /**
     * <p>The results.</p>
     */
    inline GetEventPredictionResult& AddRuleResults(const RuleResult& value) { m_ruleResults.push_back(value); return *this; }

    /**
     * <p>The results.</p>
     */
    inline GetEventPredictionResult& AddRuleResults(RuleResult&& value) { m_ruleResults.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ModelScores> m_modelScores;

    Aws::Vector<RuleResult> m_ruleResults;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
