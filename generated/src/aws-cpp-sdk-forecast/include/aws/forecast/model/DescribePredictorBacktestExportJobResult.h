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
  class DescribePredictorBacktestExportJobResult
  {
  public:
    AWS_FORECASTSERVICE_API DescribePredictorBacktestExportJobResult() = default;
    AWS_FORECASTSERVICE_API DescribePredictorBacktestExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribePredictorBacktestExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job.</p>
     */
    inline const Aws::String& GetPredictorBacktestExportJobArn() const { return m_predictorBacktestExportJobArn; }
    template<typename PredictorBacktestExportJobArnT = Aws::String>
    void SetPredictorBacktestExportJobArn(PredictorBacktestExportJobArnT&& value) { m_predictorBacktestExportJobArnHasBeenSet = true; m_predictorBacktestExportJobArn = std::forward<PredictorBacktestExportJobArnT>(value); }
    template<typename PredictorBacktestExportJobArnT = Aws::String>
    DescribePredictorBacktestExportJobResult& WithPredictorBacktestExportJobArn(PredictorBacktestExportJobArnT&& value) { SetPredictorBacktestExportJobArn(std::forward<PredictorBacktestExportJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the predictor backtest export job.</p>
     */
    inline const Aws::String& GetPredictorBacktestExportJobName() const { return m_predictorBacktestExportJobName; }
    template<typename PredictorBacktestExportJobNameT = Aws::String>
    void SetPredictorBacktestExportJobName(PredictorBacktestExportJobNameT&& value) { m_predictorBacktestExportJobNameHasBeenSet = true; m_predictorBacktestExportJobName = std::forward<PredictorBacktestExportJobNameT>(value); }
    template<typename PredictorBacktestExportJobNameT = Aws::String>
    DescribePredictorBacktestExportJobResult& WithPredictorBacktestExportJobName(PredictorBacktestExportJobNameT&& value) { SetPredictorBacktestExportJobName(std::forward<PredictorBacktestExportJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the predictor.</p>
     */
    inline const Aws::String& GetPredictorArn() const { return m_predictorArn; }
    template<typename PredictorArnT = Aws::String>
    void SetPredictorArn(PredictorArnT&& value) { m_predictorArnHasBeenSet = true; m_predictorArn = std::forward<PredictorArnT>(value); }
    template<typename PredictorArnT = Aws::String>
    DescribePredictorBacktestExportJobResult& WithPredictorArn(PredictorArnT&& value) { SetPredictorArn(std::forward<PredictorArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DataDestination& GetDestination() const { return m_destination; }
    template<typename DestinationT = DataDestination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = DataDestination>
    DescribePredictorBacktestExportJobResult& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about any errors that may have occurred during the backtest
     * export.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DescribePredictorBacktestExportJobResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
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
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DescribePredictorBacktestExportJobResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the predictor backtest export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribePredictorBacktestExportJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    void SetLastModificationTime(LastModificationTimeT&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::forward<LastModificationTimeT>(value); }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    DescribePredictorBacktestExportJobResult& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline const Aws::String& GetFormat() const { return m_format; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    DescribePredictorBacktestExportJobResult& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePredictorBacktestExportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_predictorBacktestExportJobArn;
    bool m_predictorBacktestExportJobArnHasBeenSet = false;

    Aws::String m_predictorBacktestExportJobName;
    bool m_predictorBacktestExportJobNameHasBeenSet = false;

    Aws::String m_predictorArn;
    bool m_predictorArnHasBeenSet = false;

    DataDestination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
