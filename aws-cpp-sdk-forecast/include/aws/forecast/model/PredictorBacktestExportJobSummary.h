/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/DataDestination.h>
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
   * <p>Provides a summary of the predictor backtest export job properties used in
   * the <a>ListPredictorBacktestExportJobs</a> operation. To get a complete set of
   * properties, call the <a>DescribePredictorBacktestExportJob</a> operation, and
   * provide the listed <code>PredictorBacktestExportJobArn</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/PredictorBacktestExportJobSummary">AWS
   * API Reference</a></p>
   */
  class AWS_FORECASTSERVICE_API PredictorBacktestExportJobSummary
  {
  public:
    PredictorBacktestExportJobSummary();
    PredictorBacktestExportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    PredictorBacktestExportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job.</p>
     */
    inline const Aws::String& GetPredictorBacktestExportJobArn() const{ return m_predictorBacktestExportJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job.</p>
     */
    inline bool PredictorBacktestExportJobArnHasBeenSet() const { return m_predictorBacktestExportJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job.</p>
     */
    inline void SetPredictorBacktestExportJobArn(const Aws::String& value) { m_predictorBacktestExportJobArnHasBeenSet = true; m_predictorBacktestExportJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job.</p>
     */
    inline void SetPredictorBacktestExportJobArn(Aws::String&& value) { m_predictorBacktestExportJobArnHasBeenSet = true; m_predictorBacktestExportJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job.</p>
     */
    inline void SetPredictorBacktestExportJobArn(const char* value) { m_predictorBacktestExportJobArnHasBeenSet = true; m_predictorBacktestExportJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job.</p>
     */
    inline PredictorBacktestExportJobSummary& WithPredictorBacktestExportJobArn(const Aws::String& value) { SetPredictorBacktestExportJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job.</p>
     */
    inline PredictorBacktestExportJobSummary& WithPredictorBacktestExportJobArn(Aws::String&& value) { SetPredictorBacktestExportJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job.</p>
     */
    inline PredictorBacktestExportJobSummary& WithPredictorBacktestExportJobArn(const char* value) { SetPredictorBacktestExportJobArn(value); return *this;}


    /**
     * <p>The name of the predictor backtest export job.</p>
     */
    inline const Aws::String& GetPredictorBacktestExportJobName() const{ return m_predictorBacktestExportJobName; }

    /**
     * <p>The name of the predictor backtest export job.</p>
     */
    inline bool PredictorBacktestExportJobNameHasBeenSet() const { return m_predictorBacktestExportJobNameHasBeenSet; }

    /**
     * <p>The name of the predictor backtest export job.</p>
     */
    inline void SetPredictorBacktestExportJobName(const Aws::String& value) { m_predictorBacktestExportJobNameHasBeenSet = true; m_predictorBacktestExportJobName = value; }

    /**
     * <p>The name of the predictor backtest export job.</p>
     */
    inline void SetPredictorBacktestExportJobName(Aws::String&& value) { m_predictorBacktestExportJobNameHasBeenSet = true; m_predictorBacktestExportJobName = std::move(value); }

    /**
     * <p>The name of the predictor backtest export job.</p>
     */
    inline void SetPredictorBacktestExportJobName(const char* value) { m_predictorBacktestExportJobNameHasBeenSet = true; m_predictorBacktestExportJobName.assign(value); }

    /**
     * <p>The name of the predictor backtest export job.</p>
     */
    inline PredictorBacktestExportJobSummary& WithPredictorBacktestExportJobName(const Aws::String& value) { SetPredictorBacktestExportJobName(value); return *this;}

    /**
     * <p>The name of the predictor backtest export job.</p>
     */
    inline PredictorBacktestExportJobSummary& WithPredictorBacktestExportJobName(Aws::String&& value) { SetPredictorBacktestExportJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the predictor backtest export job.</p>
     */
    inline PredictorBacktestExportJobSummary& WithPredictorBacktestExportJobName(const char* value) { SetPredictorBacktestExportJobName(value); return *this;}


    
    inline const DataDestination& GetDestination() const{ return m_destination; }

    
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    
    inline void SetDestination(const DataDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    
    inline void SetDestination(DataDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    
    inline PredictorBacktestExportJobSummary& WithDestination(const DataDestination& value) { SetDestination(value); return *this;}

    
    inline PredictorBacktestExportJobSummary& WithDestination(DataDestination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>The status of the predictor backtest export job. States include: </p> <ul>
     * <li> <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the predictor backtest export job. States include: </p> <ul>
     * <li> <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the predictor backtest export job. States include: </p> <ul>
     * <li> <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the predictor backtest export job. States include: </p> <ul>
     * <li> <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the predictor backtest export job. States include: </p> <ul>
     * <li> <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the predictor backtest export job. States include: </p> <ul>
     * <li> <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline PredictorBacktestExportJobSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the predictor backtest export job. States include: </p> <ul>
     * <li> <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline PredictorBacktestExportJobSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the predictor backtest export job. States include: </p> <ul>
     * <li> <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline PredictorBacktestExportJobSummary& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Information about any errors that may have occurred during the backtest
     * export.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Information about any errors that may have occurred during the backtest
     * export.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Information about any errors that may have occurred during the backtest
     * export.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Information about any errors that may have occurred during the backtest
     * export.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Information about any errors that may have occurred during the backtest
     * export.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Information about any errors that may have occurred during the backtest
     * export.</p>
     */
    inline PredictorBacktestExportJobSummary& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Information about any errors that may have occurred during the backtest
     * export.</p>
     */
    inline PredictorBacktestExportJobSummary& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Information about any errors that may have occurred during the backtest
     * export.</p>
     */
    inline PredictorBacktestExportJobSummary& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>When the predictor backtest export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the predictor backtest export job was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the predictor backtest export job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the predictor backtest export job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the predictor backtest export job was created.</p>
     */
    inline PredictorBacktestExportJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the predictor backtest export job was created.</p>
     */
    inline PredictorBacktestExportJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = value; }

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::move(value); }

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline PredictorBacktestExportJobSummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline PredictorBacktestExportJobSummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

  private:

    Aws::String m_predictorBacktestExportJobArn;
    bool m_predictorBacktestExportJobArnHasBeenSet;

    Aws::String m_predictorBacktestExportJobName;
    bool m_predictorBacktestExportJobNameHasBeenSet;

    DataDestination m_destination;
    bool m_destinationHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastModificationTime;
    bool m_lastModificationTimeHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
