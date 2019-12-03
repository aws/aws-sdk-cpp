/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ModelScores.h>
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
  class AWS_FRAUDDETECTOR_API GetPredictionResult
  {
  public:
    GetPredictionResult();
    GetPredictionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPredictionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The prediction outcomes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOutcomes() const{ return m_outcomes; }

    /**
     * <p>The prediction outcomes.</p>
     */
    inline void SetOutcomes(const Aws::Vector<Aws::String>& value) { m_outcomes = value; }

    /**
     * <p>The prediction outcomes.</p>
     */
    inline void SetOutcomes(Aws::Vector<Aws::String>&& value) { m_outcomes = std::move(value); }

    /**
     * <p>The prediction outcomes.</p>
     */
    inline GetPredictionResult& WithOutcomes(const Aws::Vector<Aws::String>& value) { SetOutcomes(value); return *this;}

    /**
     * <p>The prediction outcomes.</p>
     */
    inline GetPredictionResult& WithOutcomes(Aws::Vector<Aws::String>&& value) { SetOutcomes(std::move(value)); return *this;}

    /**
     * <p>The prediction outcomes.</p>
     */
    inline GetPredictionResult& AddOutcomes(const Aws::String& value) { m_outcomes.push_back(value); return *this; }

    /**
     * <p>The prediction outcomes.</p>
     */
    inline GetPredictionResult& AddOutcomes(Aws::String&& value) { m_outcomes.push_back(std::move(value)); return *this; }

    /**
     * <p>The prediction outcomes.</p>
     */
    inline GetPredictionResult& AddOutcomes(const char* value) { m_outcomes.push_back(value); return *this; }


    /**
     * <p>The model scores for models used in the detector version.</p>
     */
    inline const Aws::Vector<ModelScores>& GetModelScores() const{ return m_modelScores; }

    /**
     * <p>The model scores for models used in the detector version.</p>
     */
    inline void SetModelScores(const Aws::Vector<ModelScores>& value) { m_modelScores = value; }

    /**
     * <p>The model scores for models used in the detector version.</p>
     */
    inline void SetModelScores(Aws::Vector<ModelScores>&& value) { m_modelScores = std::move(value); }

    /**
     * <p>The model scores for models used in the detector version.</p>
     */
    inline GetPredictionResult& WithModelScores(const Aws::Vector<ModelScores>& value) { SetModelScores(value); return *this;}

    /**
     * <p>The model scores for models used in the detector version.</p>
     */
    inline GetPredictionResult& WithModelScores(Aws::Vector<ModelScores>&& value) { SetModelScores(std::move(value)); return *this;}

    /**
     * <p>The model scores for models used in the detector version.</p>
     */
    inline GetPredictionResult& AddModelScores(const ModelScores& value) { m_modelScores.push_back(value); return *this; }

    /**
     * <p>The model scores for models used in the detector version.</p>
     */
    inline GetPredictionResult& AddModelScores(ModelScores&& value) { m_modelScores.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_outcomes;

    Aws::Vector<ModelScores> m_modelScores;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
