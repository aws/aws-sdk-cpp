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
  class CreatePredictorBacktestExportJobResult
  {
  public:
    AWS_FORECASTSERVICE_API CreatePredictorBacktestExportJobResult() = default;
    AWS_FORECASTSERVICE_API CreatePredictorBacktestExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API CreatePredictorBacktestExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job that you
     * want to export.</p>
     */
    inline const Aws::String& GetPredictorBacktestExportJobArn() const { return m_predictorBacktestExportJobArn; }
    template<typename PredictorBacktestExportJobArnT = Aws::String>
    void SetPredictorBacktestExportJobArn(PredictorBacktestExportJobArnT&& value) { m_predictorBacktestExportJobArnHasBeenSet = true; m_predictorBacktestExportJobArn = std::forward<PredictorBacktestExportJobArnT>(value); }
    template<typename PredictorBacktestExportJobArnT = Aws::String>
    CreatePredictorBacktestExportJobResult& WithPredictorBacktestExportJobArn(PredictorBacktestExportJobArnT&& value) { SetPredictorBacktestExportJobArn(std::forward<PredictorBacktestExportJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePredictorBacktestExportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_predictorBacktestExportJobArn;
    bool m_predictorBacktestExportJobArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
