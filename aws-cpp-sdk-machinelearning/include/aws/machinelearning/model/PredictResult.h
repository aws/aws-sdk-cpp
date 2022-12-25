/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/model/Prediction.h>
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
  class PredictResult
  {
  public:
    AWS_MACHINELEARNING_API PredictResult();
    AWS_MACHINELEARNING_API PredictResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API PredictResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Prediction& GetPrediction() const{ return m_prediction; }

    
    inline void SetPrediction(const Prediction& value) { m_prediction = value; }

    
    inline void SetPrediction(Prediction&& value) { m_prediction = std::move(value); }

    
    inline PredictResult& WithPrediction(const Prediction& value) { SetPrediction(value); return *this;}

    
    inline PredictResult& WithPrediction(Prediction&& value) { SetPrediction(std::move(value)); return *this;}

  private:

    Prediction m_prediction;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
