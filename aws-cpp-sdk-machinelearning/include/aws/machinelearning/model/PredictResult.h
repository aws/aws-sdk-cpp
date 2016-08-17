/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/model/Prediction.h>

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
  class AWS_MACHINELEARNING_API PredictResult
  {
  public:
    PredictResult();
    PredictResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PredictResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Prediction& GetPrediction() const{ return m_prediction; }

    
    inline void SetPrediction(const Prediction& value) { m_prediction = value; }

    
    inline void SetPrediction(Prediction&& value) { m_prediction = value; }

    
    inline PredictResult& WithPrediction(const Prediction& value) { SetPrediction(value); return *this;}

    
    inline PredictResult& WithPrediction(Prediction&& value) { SetPrediction(value); return *this;}

  private:
    Prediction m_prediction;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
