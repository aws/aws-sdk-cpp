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
    AWS_FORECASTSERVICE_API MonitorDataSource() = default;
    AWS_FORECASTSERVICE_API MonitorDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API MonitorDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job used to import the
     * data that initiated the monitor evaluation.</p>
     */
    inline const Aws::String& GetDatasetImportJobArn() const { return m_datasetImportJobArn; }
    inline bool DatasetImportJobArnHasBeenSet() const { return m_datasetImportJobArnHasBeenSet; }
    template<typename DatasetImportJobArnT = Aws::String>
    void SetDatasetImportJobArn(DatasetImportJobArnT&& value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn = std::forward<DatasetImportJobArnT>(value); }
    template<typename DatasetImportJobArnT = Aws::String>
    MonitorDataSource& WithDatasetImportJobArn(DatasetImportJobArnT&& value) { SetDatasetImportJobArn(std::forward<DatasetImportJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the forecast the monitor used during the
     * evaluation.</p>
     */
    inline const Aws::String& GetForecastArn() const { return m_forecastArn; }
    inline bool ForecastArnHasBeenSet() const { return m_forecastArnHasBeenSet; }
    template<typename ForecastArnT = Aws::String>
    void SetForecastArn(ForecastArnT&& value) { m_forecastArnHasBeenSet = true; m_forecastArn = std::forward<ForecastArnT>(value); }
    template<typename ForecastArnT = Aws::String>
    MonitorDataSource& WithForecastArn(ForecastArnT&& value) { SetForecastArn(std::forward<ForecastArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the predictor resource you are
     * monitoring.</p>
     */
    inline const Aws::String& GetPredictorArn() const { return m_predictorArn; }
    inline bool PredictorArnHasBeenSet() const { return m_predictorArnHasBeenSet; }
    template<typename PredictorArnT = Aws::String>
    void SetPredictorArn(PredictorArnT&& value) { m_predictorArnHasBeenSet = true; m_predictorArn = std::forward<PredictorArnT>(value); }
    template<typename PredictorArnT = Aws::String>
    MonitorDataSource& WithPredictorArn(PredictorArnT&& value) { SetPredictorArn(std::forward<PredictorArnT>(value)); return *this;}
    ///@}
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
