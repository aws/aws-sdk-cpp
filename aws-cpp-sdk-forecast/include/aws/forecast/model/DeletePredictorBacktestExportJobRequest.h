/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class DeletePredictorBacktestExportJobRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API DeletePredictorBacktestExportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePredictorBacktestExportJob"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job to
     * delete.</p>
     */
    inline const Aws::String& GetPredictorBacktestExportJobArn() const{ return m_predictorBacktestExportJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job to
     * delete.</p>
     */
    inline bool PredictorBacktestExportJobArnHasBeenSet() const { return m_predictorBacktestExportJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job to
     * delete.</p>
     */
    inline void SetPredictorBacktestExportJobArn(const Aws::String& value) { m_predictorBacktestExportJobArnHasBeenSet = true; m_predictorBacktestExportJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job to
     * delete.</p>
     */
    inline void SetPredictorBacktestExportJobArn(Aws::String&& value) { m_predictorBacktestExportJobArnHasBeenSet = true; m_predictorBacktestExportJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job to
     * delete.</p>
     */
    inline void SetPredictorBacktestExportJobArn(const char* value) { m_predictorBacktestExportJobArnHasBeenSet = true; m_predictorBacktestExportJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job to
     * delete.</p>
     */
    inline DeletePredictorBacktestExportJobRequest& WithPredictorBacktestExportJobArn(const Aws::String& value) { SetPredictorBacktestExportJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job to
     * delete.</p>
     */
    inline DeletePredictorBacktestExportJobRequest& WithPredictorBacktestExportJobArn(Aws::String&& value) { SetPredictorBacktestExportJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job to
     * delete.</p>
     */
    inline DeletePredictorBacktestExportJobRequest& WithPredictorBacktestExportJobArn(const char* value) { SetPredictorBacktestExportJobArn(value); return *this;}

  private:

    Aws::String m_predictorBacktestExportJobArn;
    bool m_predictorBacktestExportJobArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
