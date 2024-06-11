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
  class DescribeExplainabilityExportResult
  {
  public:
    AWS_FORECASTSERVICE_API DescribeExplainabilityExportResult();
    AWS_FORECASTSERVICE_API DescribeExplainabilityExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeExplainabilityExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability export.</p>
     */
    inline const Aws::String& GetExplainabilityExportArn() const{ return m_explainabilityExportArn; }
    inline void SetExplainabilityExportArn(const Aws::String& value) { m_explainabilityExportArn = value; }
    inline void SetExplainabilityExportArn(Aws::String&& value) { m_explainabilityExportArn = std::move(value); }
    inline void SetExplainabilityExportArn(const char* value) { m_explainabilityExportArn.assign(value); }
    inline DescribeExplainabilityExportResult& WithExplainabilityExportArn(const Aws::String& value) { SetExplainabilityExportArn(value); return *this;}
    inline DescribeExplainabilityExportResult& WithExplainabilityExportArn(Aws::String&& value) { SetExplainabilityExportArn(std::move(value)); return *this;}
    inline DescribeExplainabilityExportResult& WithExplainabilityExportArn(const char* value) { SetExplainabilityExportArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Explainability export.</p>
     */
    inline const Aws::String& GetExplainabilityExportName() const{ return m_explainabilityExportName; }
    inline void SetExplainabilityExportName(const Aws::String& value) { m_explainabilityExportName = value; }
    inline void SetExplainabilityExportName(Aws::String&& value) { m_explainabilityExportName = std::move(value); }
    inline void SetExplainabilityExportName(const char* value) { m_explainabilityExportName.assign(value); }
    inline DescribeExplainabilityExportResult& WithExplainabilityExportName(const Aws::String& value) { SetExplainabilityExportName(value); return *this;}
    inline DescribeExplainabilityExportResult& WithExplainabilityExportName(Aws::String&& value) { SetExplainabilityExportName(std::move(value)); return *this;}
    inline DescribeExplainabilityExportResult& WithExplainabilityExportName(const char* value) { SetExplainabilityExportName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability export.</p>
     */
    inline const Aws::String& GetExplainabilityArn() const{ return m_explainabilityArn; }
    inline void SetExplainabilityArn(const Aws::String& value) { m_explainabilityArn = value; }
    inline void SetExplainabilityArn(Aws::String&& value) { m_explainabilityArn = std::move(value); }
    inline void SetExplainabilityArn(const char* value) { m_explainabilityArn.assign(value); }
    inline DescribeExplainabilityExportResult& WithExplainabilityArn(const Aws::String& value) { SetExplainabilityArn(value); return *this;}
    inline DescribeExplainabilityExportResult& WithExplainabilityArn(Aws::String&& value) { SetExplainabilityArn(std::move(value)); return *this;}
    inline DescribeExplainabilityExportResult& WithExplainabilityArn(const char* value) { SetExplainabilityArn(value); return *this;}
    ///@}

    ///@{
    
    inline const DataDestination& GetDestination() const{ return m_destination; }
    inline void SetDestination(const DataDestination& value) { m_destination = value; }
    inline void SetDestination(DataDestination&& value) { m_destination = std::move(value); }
    inline DescribeExplainabilityExportResult& WithDestination(const DataDestination& value) { SetDestination(value); return *this;}
    inline DescribeExplainabilityExportResult& WithDestination(DataDestination&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about any errors that occurred during the export.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline DescribeExplainabilityExportResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline DescribeExplainabilityExportResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline DescribeExplainabilityExportResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Explainability export. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline DescribeExplainabilityExportResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DescribeExplainabilityExportResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DescribeExplainabilityExportResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the Explainability export was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeExplainabilityExportResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeExplainabilityExportResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
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
    inline DescribeExplainabilityExportResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline DescribeExplainabilityExportResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }
    inline void SetFormat(const Aws::String& value) { m_format = value; }
    inline void SetFormat(Aws::String&& value) { m_format = std::move(value); }
    inline void SetFormat(const char* value) { m_format.assign(value); }
    inline DescribeExplainabilityExportResult& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}
    inline DescribeExplainabilityExportResult& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}
    inline DescribeExplainabilityExportResult& WithFormat(const char* value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeExplainabilityExportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeExplainabilityExportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeExplainabilityExportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_explainabilityExportArn;

    Aws::String m_explainabilityExportName;

    Aws::String m_explainabilityArn;

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
