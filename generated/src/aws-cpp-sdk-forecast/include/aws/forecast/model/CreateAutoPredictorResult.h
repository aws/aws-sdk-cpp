/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
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
namespace ForecastService
{
namespace Model
{
  class CreateAutoPredictorResult
  {
  public:
    AWS_FORECASTSERVICE_API CreateAutoPredictorResult();
    AWS_FORECASTSERVICE_API CreateAutoPredictorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API CreateAutoPredictorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the predictor.</p>
     */
    inline const Aws::String& GetPredictorArn() const{ return m_predictorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor.</p>
     */
    inline void SetPredictorArn(const Aws::String& value) { m_predictorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor.</p>
     */
    inline void SetPredictorArn(Aws::String&& value) { m_predictorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor.</p>
     */
    inline void SetPredictorArn(const char* value) { m_predictorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor.</p>
     */
    inline CreateAutoPredictorResult& WithPredictorArn(const Aws::String& value) { SetPredictorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor.</p>
     */
    inline CreateAutoPredictorResult& WithPredictorArn(Aws::String&& value) { SetPredictorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor.</p>
     */
    inline CreateAutoPredictorResult& WithPredictorArn(const char* value) { SetPredictorArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAutoPredictorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAutoPredictorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAutoPredictorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_predictorArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
