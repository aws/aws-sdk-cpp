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
    AWS_FORECASTSERVICE_API CreatePredictorBacktestExportJobResult();
    AWS_FORECASTSERVICE_API CreatePredictorBacktestExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API CreatePredictorBacktestExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job that you
     * want to export.</p>
     */
    inline const Aws::String& GetPredictorBacktestExportJobArn() const{ return m_predictorBacktestExportJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job that you
     * want to export.</p>
     */
    inline void SetPredictorBacktestExportJobArn(const Aws::String& value) { m_predictorBacktestExportJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job that you
     * want to export.</p>
     */
    inline void SetPredictorBacktestExportJobArn(Aws::String&& value) { m_predictorBacktestExportJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job that you
     * want to export.</p>
     */
    inline void SetPredictorBacktestExportJobArn(const char* value) { m_predictorBacktestExportJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job that you
     * want to export.</p>
     */
    inline CreatePredictorBacktestExportJobResult& WithPredictorBacktestExportJobArn(const Aws::String& value) { SetPredictorBacktestExportJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job that you
     * want to export.</p>
     */
    inline CreatePredictorBacktestExportJobResult& WithPredictorBacktestExportJobArn(Aws::String&& value) { SetPredictorBacktestExportJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job that you
     * want to export.</p>
     */
    inline CreatePredictorBacktestExportJobResult& WithPredictorBacktestExportJobArn(const char* value) { SetPredictorBacktestExportJobArn(value); return *this;}

  private:

    Aws::String m_predictorBacktestExportJobArn;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
