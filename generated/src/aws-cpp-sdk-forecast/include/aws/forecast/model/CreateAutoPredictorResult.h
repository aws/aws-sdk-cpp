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
    AWS_FORECASTSERVICE_API CreateAutoPredictorResult() = default;
    AWS_FORECASTSERVICE_API CreateAutoPredictorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API CreateAutoPredictorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the predictor.</p>
     */
    inline const Aws::String& GetPredictorArn() const { return m_predictorArn; }
    template<typename PredictorArnT = Aws::String>
    void SetPredictorArn(PredictorArnT&& value) { m_predictorArnHasBeenSet = true; m_predictorArn = std::forward<PredictorArnT>(value); }
    template<typename PredictorArnT = Aws::String>
    CreateAutoPredictorResult& WithPredictorArn(PredictorArnT&& value) { SetPredictorArn(std::forward<PredictorArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAutoPredictorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_predictorArn;
    bool m_predictorArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
