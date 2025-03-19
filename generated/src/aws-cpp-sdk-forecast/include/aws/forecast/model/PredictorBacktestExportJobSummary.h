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
  class PredictorBacktestExportJobSummary
  {
  public:
    AWS_FORECASTSERVICE_API PredictorBacktestExportJobSummary() = default;
    AWS_FORECASTSERVICE_API PredictorBacktestExportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API PredictorBacktestExportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job.</p>
     */
    inline const Aws::String& GetPredictorBacktestExportJobArn() const { return m_predictorBacktestExportJobArn; }
    inline bool PredictorBacktestExportJobArnHasBeenSet() const { return m_predictorBacktestExportJobArnHasBeenSet; }
    template<typename PredictorBacktestExportJobArnT = Aws::String>
    void SetPredictorBacktestExportJobArn(PredictorBacktestExportJobArnT&& value) { m_predictorBacktestExportJobArnHasBeenSet = true; m_predictorBacktestExportJobArn = std::forward<PredictorBacktestExportJobArnT>(value); }
    template<typename PredictorBacktestExportJobArnT = Aws::String>
    PredictorBacktestExportJobSummary& WithPredictorBacktestExportJobArn(PredictorBacktestExportJobArnT&& value) { SetPredictorBacktestExportJobArn(std::forward<PredictorBacktestExportJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the predictor backtest export job.</p>
     */
    inline const Aws::String& GetPredictorBacktestExportJobName() const { return m_predictorBacktestExportJobName; }
    inline bool PredictorBacktestExportJobNameHasBeenSet() const { return m_predictorBacktestExportJobNameHasBeenSet; }
    template<typename PredictorBacktestExportJobNameT = Aws::String>
    void SetPredictorBacktestExportJobName(PredictorBacktestExportJobNameT&& value) { m_predictorBacktestExportJobNameHasBeenSet = true; m_predictorBacktestExportJobName = std::forward<PredictorBacktestExportJobNameT>(value); }
    template<typename PredictorBacktestExportJobNameT = Aws::String>
    PredictorBacktestExportJobSummary& WithPredictorBacktestExportJobName(PredictorBacktestExportJobNameT&& value) { SetPredictorBacktestExportJobName(std::forward<PredictorBacktestExportJobNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DataDestination& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = DataDestination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = DataDestination>
    PredictorBacktestExportJobSummary& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the predictor backtest export job. States include: </p> <ul>
     * <li> <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    PredictorBacktestExportJobSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about any errors that may have occurred during the backtest
     * export.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    PredictorBacktestExportJobSummary& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the predictor backtest export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    PredictorBacktestExportJobSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    inline const Aws::Utils::DateTime& GetLastModificationTime() const { return m_lastModificationTime; }
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    void SetLastModificationTime(LastModificationTimeT&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::forward<LastModificationTimeT>(value); }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    PredictorBacktestExportJobSummary& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_predictorBacktestExportJobArn;
    bool m_predictorBacktestExportJobArnHasBeenSet = false;

    Aws::String m_predictorBacktestExportJobName;
    bool m_predictorBacktestExportJobNameHasBeenSet = false;

    DataDestination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
