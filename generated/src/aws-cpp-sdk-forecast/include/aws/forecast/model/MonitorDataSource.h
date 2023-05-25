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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ForecastService
{
namespace Model
{

  /**
   * <p>The source of the data the monitor used during the evaluation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/MonitorDataSource">AWS
   * API Reference</a></p>
   */
  class MonitorDataSource
  {
  public:
    AWS_FORECASTSERVICE_API MonitorDataSource();
    AWS_FORECASTSERVICE_API MonitorDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API MonitorDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job used to import the
     * data that initiated the monitor evaluation.</p>
     */
    inline const Aws::String& GetDatasetImportJobArn() const{ return m_datasetImportJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job used to import the
     * data that initiated the monitor evaluation.</p>
     */
    inline bool DatasetImportJobArnHasBeenSet() const { return m_datasetImportJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job used to import the
     * data that initiated the monitor evaluation.</p>
     */
    inline void SetDatasetImportJobArn(const Aws::String& value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job used to import the
     * data that initiated the monitor evaluation.</p>
     */
    inline void SetDatasetImportJobArn(Aws::String&& value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job used to import the
     * data that initiated the monitor evaluation.</p>
     */
    inline void SetDatasetImportJobArn(const char* value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job used to import the
     * data that initiated the monitor evaluation.</p>
     */
    inline MonitorDataSource& WithDatasetImportJobArn(const Aws::String& value) { SetDatasetImportJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job used to import the
     * data that initiated the monitor evaluation.</p>
     */
    inline MonitorDataSource& WithDatasetImportJobArn(Aws::String&& value) { SetDatasetImportJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job used to import the
     * data that initiated the monitor evaluation.</p>
     */
    inline MonitorDataSource& WithDatasetImportJobArn(const char* value) { SetDatasetImportJobArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the forecast the monitor used during the
     * evaluation.</p>
     */
    inline const Aws::String& GetForecastArn() const{ return m_forecastArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast the monitor used during the
     * evaluation.</p>
     */
    inline bool ForecastArnHasBeenSet() const { return m_forecastArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast the monitor used during the
     * evaluation.</p>
     */
    inline void SetForecastArn(const Aws::String& value) { m_forecastArnHasBeenSet = true; m_forecastArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast the monitor used during the
     * evaluation.</p>
     */
    inline void SetForecastArn(Aws::String&& value) { m_forecastArnHasBeenSet = true; m_forecastArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast the monitor used during the
     * evaluation.</p>
     */
    inline void SetForecastArn(const char* value) { m_forecastArnHasBeenSet = true; m_forecastArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast the monitor used during the
     * evaluation.</p>
     */
    inline MonitorDataSource& WithForecastArn(const Aws::String& value) { SetForecastArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast the monitor used during the
     * evaluation.</p>
     */
    inline MonitorDataSource& WithForecastArn(Aws::String&& value) { SetForecastArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast the monitor used during the
     * evaluation.</p>
     */
    inline MonitorDataSource& WithForecastArn(const char* value) { SetForecastArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the predictor resource you are
     * monitoring.</p>
     */
    inline const Aws::String& GetPredictorArn() const{ return m_predictorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor resource you are
     * monitoring.</p>
     */
    inline bool PredictorArnHasBeenSet() const { return m_predictorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor resource you are
     * monitoring.</p>
     */
    inline void SetPredictorArn(const Aws::String& value) { m_predictorArnHasBeenSet = true; m_predictorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor resource you are
     * monitoring.</p>
     */
    inline void SetPredictorArn(Aws::String&& value) { m_predictorArnHasBeenSet = true; m_predictorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor resource you are
     * monitoring.</p>
     */
    inline void SetPredictorArn(const char* value) { m_predictorArnHasBeenSet = true; m_predictorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor resource you are
     * monitoring.</p>
     */
    inline MonitorDataSource& WithPredictorArn(const Aws::String& value) { SetPredictorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor resource you are
     * monitoring.</p>
     */
    inline MonitorDataSource& WithPredictorArn(Aws::String&& value) { SetPredictorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor resource you are
     * monitoring.</p>
     */
    inline MonitorDataSource& WithPredictorArn(const char* value) { SetPredictorArn(value); return *this;}

  private:

    Aws::String m_datasetImportJobArn;
    bool m_datasetImportJobArnHasBeenSet = false;

    Aws::String m_forecastArn;
    bool m_forecastArnHasBeenSet = false;

    Aws::String m_predictorArn;
    bool m_predictorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
