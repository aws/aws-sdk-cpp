/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Provides a summary of the forecast properties used in the
   * <a>ListForecasts</a> operation. To get the complete set of properties, call the
   * <a>DescribeForecast</a> operation, and provide the <code>ForecastArn</code> that
   * is listed in the summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ForecastSummary">AWS
   * API Reference</a></p>
   */
  class ForecastSummary
  {
  public:
    AWS_FORECASTSERVICE_API ForecastSummary();
    AWS_FORECASTSERVICE_API ForecastSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API ForecastSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the forecast.</p>
     */
    inline const Aws::String& GetForecastArn() const{ return m_forecastArn; }
    inline bool ForecastArnHasBeenSet() const { return m_forecastArnHasBeenSet; }
    inline void SetForecastArn(const Aws::String& value) { m_forecastArnHasBeenSet = true; m_forecastArn = value; }
    inline void SetForecastArn(Aws::String&& value) { m_forecastArnHasBeenSet = true; m_forecastArn = std::move(value); }
    inline void SetForecastArn(const char* value) { m_forecastArnHasBeenSet = true; m_forecastArn.assign(value); }
    inline ForecastSummary& WithForecastArn(const Aws::String& value) { SetForecastArn(value); return *this;}
    inline ForecastSummary& WithForecastArn(Aws::String&& value) { SetForecastArn(std::move(value)); return *this;}
    inline ForecastSummary& WithForecastArn(const char* value) { SetForecastArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the forecast.</p>
     */
    inline const Aws::String& GetForecastName() const{ return m_forecastName; }
    inline bool ForecastNameHasBeenSet() const { return m_forecastNameHasBeenSet; }
    inline void SetForecastName(const Aws::String& value) { m_forecastNameHasBeenSet = true; m_forecastName = value; }
    inline void SetForecastName(Aws::String&& value) { m_forecastNameHasBeenSet = true; m_forecastName = std::move(value); }
    inline void SetForecastName(const char* value) { m_forecastNameHasBeenSet = true; m_forecastName.assign(value); }
    inline ForecastSummary& WithForecastName(const Aws::String& value) { SetForecastName(value); return *this;}
    inline ForecastSummary& WithForecastName(Aws::String&& value) { SetForecastName(std::move(value)); return *this;}
    inline ForecastSummary& WithForecastName(const char* value) { SetForecastName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the predictor used to generate the forecast.</p>
     */
    inline const Aws::String& GetPredictorArn() const{ return m_predictorArn; }
    inline bool PredictorArnHasBeenSet() const { return m_predictorArnHasBeenSet; }
    inline void SetPredictorArn(const Aws::String& value) { m_predictorArnHasBeenSet = true; m_predictorArn = value; }
    inline void SetPredictorArn(Aws::String&& value) { m_predictorArnHasBeenSet = true; m_predictorArn = std::move(value); }
    inline void SetPredictorArn(const char* value) { m_predictorArnHasBeenSet = true; m_predictorArn.assign(value); }
    inline ForecastSummary& WithPredictorArn(const Aws::String& value) { SetPredictorArn(value); return *this;}
    inline ForecastSummary& WithPredictorArn(Aws::String&& value) { SetPredictorArn(std::move(value)); return *this;}
    inline ForecastSummary& WithPredictorArn(const char* value) { SetPredictorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the Forecast was created from an AutoPredictor.</p>
     */
    inline bool GetCreatedUsingAutoPredictor() const{ return m_createdUsingAutoPredictor; }
    inline bool CreatedUsingAutoPredictorHasBeenSet() const { return m_createdUsingAutoPredictorHasBeenSet; }
    inline void SetCreatedUsingAutoPredictor(bool value) { m_createdUsingAutoPredictorHasBeenSet = true; m_createdUsingAutoPredictor = value; }
    inline ForecastSummary& WithCreatedUsingAutoPredictor(bool value) { SetCreatedUsingAutoPredictor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that provided the data
     * used to train the predictor.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }
    inline ForecastSummary& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}
    inline ForecastSummary& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}
    inline ForecastSummary& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the forecast. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the forecast must be <code>ACTIVE</code> before you can query or export the
     * forecast.</p> 
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline ForecastSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline ForecastSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline ForecastSummary& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ForecastSummary& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ForecastSummary& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ForecastSummary& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the forecast creation task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ForecastSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ForecastSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = value; }
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::move(value); }
    inline ForecastSummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline ForecastSummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_forecastArn;
    bool m_forecastArnHasBeenSet = false;

    Aws::String m_forecastName;
    bool m_forecastNameHasBeenSet = false;

    Aws::String m_predictorArn;
    bool m_predictorArnHasBeenSet = false;

    bool m_createdUsingAutoPredictor;
    bool m_createdUsingAutoPredictorHasBeenSet = false;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime;
    bool m_lastModificationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
