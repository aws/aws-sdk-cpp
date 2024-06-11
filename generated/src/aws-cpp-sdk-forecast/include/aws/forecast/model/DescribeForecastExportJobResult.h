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
  class DescribeForecastExportJobResult
  {
  public:
    AWS_FORECASTSERVICE_API DescribeForecastExportJobResult();
    AWS_FORECASTSERVICE_API DescribeForecastExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeForecastExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the forecast export job.</p>
     */
    inline const Aws::String& GetForecastExportJobArn() const{ return m_forecastExportJobArn; }
    inline void SetForecastExportJobArn(const Aws::String& value) { m_forecastExportJobArn = value; }
    inline void SetForecastExportJobArn(Aws::String&& value) { m_forecastExportJobArn = std::move(value); }
    inline void SetForecastExportJobArn(const char* value) { m_forecastExportJobArn.assign(value); }
    inline DescribeForecastExportJobResult& WithForecastExportJobArn(const Aws::String& value) { SetForecastExportJobArn(value); return *this;}
    inline DescribeForecastExportJobResult& WithForecastExportJobArn(Aws::String&& value) { SetForecastExportJobArn(std::move(value)); return *this;}
    inline DescribeForecastExportJobResult& WithForecastExportJobArn(const char* value) { SetForecastExportJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the forecast export job.</p>
     */
    inline const Aws::String& GetForecastExportJobName() const{ return m_forecastExportJobName; }
    inline void SetForecastExportJobName(const Aws::String& value) { m_forecastExportJobName = value; }
    inline void SetForecastExportJobName(Aws::String&& value) { m_forecastExportJobName = std::move(value); }
    inline void SetForecastExportJobName(const char* value) { m_forecastExportJobName.assign(value); }
    inline DescribeForecastExportJobResult& WithForecastExportJobName(const Aws::String& value) { SetForecastExportJobName(value); return *this;}
    inline DescribeForecastExportJobResult& WithForecastExportJobName(Aws::String&& value) { SetForecastExportJobName(std::move(value)); return *this;}
    inline DescribeForecastExportJobResult& WithForecastExportJobName(const char* value) { SetForecastExportJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the exported forecast.</p>
     */
    inline const Aws::String& GetForecastArn() const{ return m_forecastArn; }
    inline void SetForecastArn(const Aws::String& value) { m_forecastArn = value; }
    inline void SetForecastArn(Aws::String&& value) { m_forecastArn = std::move(value); }
    inline void SetForecastArn(const char* value) { m_forecastArn.assign(value); }
    inline DescribeForecastExportJobResult& WithForecastArn(const Aws::String& value) { SetForecastArn(value); return *this;}
    inline DescribeForecastExportJobResult& WithForecastArn(Aws::String&& value) { SetForecastArn(std::move(value)); return *this;}
    inline DescribeForecastExportJobResult& WithForecastArn(const char* value) { SetForecastArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the Amazon Simple Storage Service (Amazon S3) bucket where the
     * forecast is exported.</p>
     */
    inline const DataDestination& GetDestination() const{ return m_destination; }
    inline void SetDestination(const DataDestination& value) { m_destination = value; }
    inline void SetDestination(DataDestination&& value) { m_destination = std::move(value); }
    inline DescribeForecastExportJobResult& WithDestination(const DataDestination& value) { SetDestination(value); return *this;}
    inline DescribeForecastExportJobResult& WithDestination(DataDestination&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline DescribeForecastExportJobResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline DescribeForecastExportJobResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline DescribeForecastExportJobResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the forecast export job. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the forecast export job must be <code>ACTIVE</code> before you can access the
     * forecast in your S3 bucket.</p> 
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline DescribeForecastExportJobResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DescribeForecastExportJobResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DescribeForecastExportJobResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the forecast export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeForecastExportJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeForecastExportJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
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
    inline DescribeForecastExportJobResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline DescribeForecastExportJobResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }
    inline void SetFormat(const Aws::String& value) { m_format = value; }
    inline void SetFormat(Aws::String&& value) { m_format = std::move(value); }
    inline void SetFormat(const char* value) { m_format.assign(value); }
    inline DescribeForecastExportJobResult& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}
    inline DescribeForecastExportJobResult& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}
    inline DescribeForecastExportJobResult& WithFormat(const char* value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeForecastExportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeForecastExportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeForecastExportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_forecastExportJobArn;

    Aws::String m_forecastExportJobName;

    Aws::String m_forecastArn;

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
