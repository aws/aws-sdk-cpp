﻿/**
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
    AWS_FORECASTSERVICE_API DescribePredictorBacktestExportJobResult();
    AWS_FORECASTSERVICE_API DescribePredictorBacktestExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribePredictorBacktestExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the predictor backtest export job.</p>
     */
    inline const Aws::String& GetPredictorBacktestExportJobArn() const{ return m_predictorBacktestExportJobArn; }
    inline void SetPredictorBacktestExportJobArn(const Aws::String& value) { m_predictorBacktestExportJobArn = value; }
    inline void SetPredictorBacktestExportJobArn(Aws::String&& value) { m_predictorBacktestExportJobArn = std::move(value); }
    inline void SetPredictorBacktestExportJobArn(const char* value) { m_predictorBacktestExportJobArn.assign(value); }
    inline DescribePredictorBacktestExportJobResult& WithPredictorBacktestExportJobArn(const Aws::String& value) { SetPredictorBacktestExportJobArn(value); return *this;}
    inline DescribePredictorBacktestExportJobResult& WithPredictorBacktestExportJobArn(Aws::String&& value) { SetPredictorBacktestExportJobArn(std::move(value)); return *this;}
    inline DescribePredictorBacktestExportJobResult& WithPredictorBacktestExportJobArn(const char* value) { SetPredictorBacktestExportJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the predictor backtest export job.</p>
     */
    inline const Aws::String& GetPredictorBacktestExportJobName() const{ return m_predictorBacktestExportJobName; }
    inline void SetPredictorBacktestExportJobName(const Aws::String& value) { m_predictorBacktestExportJobName = value; }
    inline void SetPredictorBacktestExportJobName(Aws::String&& value) { m_predictorBacktestExportJobName = std::move(value); }
    inline void SetPredictorBacktestExportJobName(const char* value) { m_predictorBacktestExportJobName.assign(value); }
    inline DescribePredictorBacktestExportJobResult& WithPredictorBacktestExportJobName(const Aws::String& value) { SetPredictorBacktestExportJobName(value); return *this;}
    inline DescribePredictorBacktestExportJobResult& WithPredictorBacktestExportJobName(Aws::String&& value) { SetPredictorBacktestExportJobName(std::move(value)); return *this;}
    inline DescribePredictorBacktestExportJobResult& WithPredictorBacktestExportJobName(const char* value) { SetPredictorBacktestExportJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the predictor.</p>
     */
    inline const Aws::String& GetPredictorArn() const{ return m_predictorArn; }
    inline void SetPredictorArn(const Aws::String& value) { m_predictorArn = value; }
    inline void SetPredictorArn(Aws::String&& value) { m_predictorArn = std::move(value); }
    inline void SetPredictorArn(const char* value) { m_predictorArn.assign(value); }
    inline DescribePredictorBacktestExportJobResult& WithPredictorArn(const Aws::String& value) { SetPredictorArn(value); return *this;}
    inline DescribePredictorBacktestExportJobResult& WithPredictorArn(Aws::String&& value) { SetPredictorArn(std::move(value)); return *this;}
    inline DescribePredictorBacktestExportJobResult& WithPredictorArn(const char* value) { SetPredictorArn(value); return *this;}
    ///@}

    ///@{
    
    inline const DataDestination& GetDestination() const{ return m_destination; }
    inline void SetDestination(const DataDestination& value) { m_destination = value; }
    inline void SetDestination(DataDestination&& value) { m_destination = std::move(value); }
    inline DescribePredictorBacktestExportJobResult& WithDestination(const DataDestination& value) { SetDestination(value); return *this;}
    inline DescribePredictorBacktestExportJobResult& WithDestination(DataDestination&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about any errors that may have occurred during the backtest
     * export.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline DescribePredictorBacktestExportJobResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline DescribePredictorBacktestExportJobResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline DescribePredictorBacktestExportJobResult& WithMessage(const char* value) { SetMessage(value); return *this;}
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
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline DescribePredictorBacktestExportJobResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DescribePredictorBacktestExportJobResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DescribePredictorBacktestExportJobResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the predictor backtest export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribePredictorBacktestExportJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribePredictorBacktestExportJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
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
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }
    inline DescribePredictorBacktestExportJobResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline DescribePredictorBacktestExportJobResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }
    inline void SetFormat(const Aws::String& value) { m_format = value; }
    inline void SetFormat(Aws::String&& value) { m_format = std::move(value); }
    inline void SetFormat(const char* value) { m_format.assign(value); }
    inline DescribePredictorBacktestExportJobResult& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}
    inline DescribePredictorBacktestExportJobResult& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}
    inline DescribePredictorBacktestExportJobResult& WithFormat(const char* value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribePredictorBacktestExportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribePredictorBacktestExportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribePredictorBacktestExportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_predictorBacktestExportJobArn;

    Aws::String m_predictorBacktestExportJobName;

    Aws::String m_predictorArn;

    DataDestination m_destination;

    Aws::String m_message;

    Aws::String m_status;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;

    Aws::String m_format;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
