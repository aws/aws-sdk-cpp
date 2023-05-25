/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/model/Prediction.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PredictResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PredictResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PredictResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Prediction m_prediction;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
