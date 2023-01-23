/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeWhatIfForecastExportResult
  {
  public:
    AWS_FORECASTSERVICE_API DescribeWhatIfForecastExportResult();
    AWS_FORECASTSERVICE_API DescribeWhatIfForecastExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeWhatIfForecastExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export.</p>
     */
    inline const Aws::String& GetWhatIfForecastExportArn() const{ return m_whatIfForecastExportArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export.</p>
     */
    inline void SetWhatIfForecastExportArn(const Aws::String& value) { m_whatIfForecastExportArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export.</p>
     */
    inline void SetWhatIfForecastExportArn(Aws::String&& value) { m_whatIfForecastExportArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export.</p>
     */
    inline void SetWhatIfForecastExportArn(const char* value) { m_whatIfForecastExportArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export.</p>
     */
    inline DescribeWhatIfForecastExportResult& WithWhatIfForecastExportArn(const Aws::String& value) { SetWhatIfForecastExportArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export.</p>
     */
    inline DescribeWhatIfForecastExportResult& WithWhatIfForecastExportArn(Aws::String&& value) { SetWhatIfForecastExportArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export.</p>
     */
    inline DescribeWhatIfForecastExportResult& WithWhatIfForecastExportArn(const char* value) { SetWhatIfForecastExportArn(value); return *this;}


    /**
     * <p>The name of the what-if forecast export.</p>
     */
    inline const Aws::String& GetWhatIfForecastExportName() const{ return m_whatIfForecastExportName; }

    /**
     * <p>The name of the what-if forecast export.</p>
     */
    inline void SetWhatIfForecastExportName(const Aws::String& value) { m_whatIfForecastExportName = value; }

    /**
     * <p>The name of the what-if forecast export.</p>
     */
    inline void SetWhatIfForecastExportName(Aws::String&& value) { m_whatIfForecastExportName = std::move(value); }

    /**
     * <p>The name of the what-if forecast export.</p>
     */
    inline void SetWhatIfForecastExportName(const char* value) { m_whatIfForecastExportName.assign(value); }

    /**
     * <p>The name of the what-if forecast export.</p>
     */
    inline DescribeWhatIfForecastExportResult& WithWhatIfForecastExportName(const Aws::String& value) { SetWhatIfForecastExportName(value); return *this;}

    /**
     * <p>The name of the what-if forecast export.</p>
     */
    inline DescribeWhatIfForecastExportResult& WithWhatIfForecastExportName(Aws::String&& value) { SetWhatIfForecastExportName(std::move(value)); return *this;}

    /**
     * <p>The name of the what-if forecast export.</p>
     */
    inline DescribeWhatIfForecastExportResult& WithWhatIfForecastExportName(const char* value) { SetWhatIfForecastExportName(value); return *this;}


    /**
     * <p>An array of Amazon Resource Names (ARNs) that represent all of the what-if
     * forecasts exported in this resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWhatIfForecastArns() const{ return m_whatIfForecastArns; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) that represent all of the what-if
     * forecasts exported in this resource.</p>
     */
    inline void SetWhatIfForecastArns(const Aws::Vector<Aws::String>& value) { m_whatIfForecastArns = value; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) that represent all of the what-if
     * forecasts exported in this resource.</p>
     */
    inline void SetWhatIfForecastArns(Aws::Vector<Aws::String>&& value) { m_whatIfForecastArns = std::move(value); }

    /**
     * <p>An array of Amazon Resource Names (ARNs) that represent all of the what-if
     * forecasts exported in this resource.</p>
     */
    inline DescribeWhatIfForecastExportResult& WithWhatIfForecastArns(const Aws::Vector<Aws::String>& value) { SetWhatIfForecastArns(value); return *this;}

    /**
     * <p>An array of Amazon Resource Names (ARNs) that represent all of the what-if
     * forecasts exported in this resource.</p>
     */
    inline DescribeWhatIfForecastExportResult& WithWhatIfForecastArns(Aws::Vector<Aws::String>&& value) { SetWhatIfForecastArns(std::move(value)); return *this;}

    /**
     * <p>An array of Amazon Resource Names (ARNs) that represent all of the what-if
     * forecasts exported in this resource.</p>
     */
    inline DescribeWhatIfForecastExportResult& AddWhatIfForecastArns(const Aws::String& value) { m_whatIfForecastArns.push_back(value); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) that represent all of the what-if
     * forecasts exported in this resource.</p>
     */
    inline DescribeWhatIfForecastExportResult& AddWhatIfForecastArns(Aws::String&& value) { m_whatIfForecastArns.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) that represent all of the what-if
     * forecasts exported in this resource.</p>
     */
    inline DescribeWhatIfForecastExportResult& AddWhatIfForecastArns(const char* value) { m_whatIfForecastArns.push_back(value); return *this; }


    
    inline const DataDestination& GetDestination() const{ return m_destination; }

    
    inline void SetDestination(const DataDestination& value) { m_destination = value; }

    
    inline void SetDestination(DataDestination&& value) { m_destination = std::move(value); }

    
    inline DescribeWhatIfForecastExportResult& WithDestination(const DataDestination& value) { SetDestination(value); return *this;}

    
    inline DescribeWhatIfForecastExportResult& WithDestination(DataDestination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline DescribeWhatIfForecastExportResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline DescribeWhatIfForecastExportResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline DescribeWhatIfForecastExportResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The status of the what-if forecast. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the what-if forecast export must be <code>ACTIVE</code> before you can access
     * the forecast export.</p> 
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the what-if forecast. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the what-if forecast export must be <code>ACTIVE</code> before you can access
     * the forecast export.</p> 
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The status of the what-if forecast. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the what-if forecast export must be <code>ACTIVE</code> before you can access
     * the forecast export.</p> 
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the what-if forecast. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the what-if forecast export must be <code>ACTIVE</code> before you can access
     * the forecast export.</p> 
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The status of the what-if forecast. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the what-if forecast export must be <code>ACTIVE</code> before you can access
     * the forecast export.</p> 
     */
    inline DescribeWhatIfForecastExportResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the what-if forecast. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the what-if forecast export must be <code>ACTIVE</code> before you can access
     * the forecast export.</p> 
     */
    inline DescribeWhatIfForecastExportResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the what-if forecast. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the what-if forecast export must be <code>ACTIVE</code> before you can access
     * the forecast export.</p> 
     */
    inline DescribeWhatIfForecastExportResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>When the what-if forecast export was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the what-if forecast export was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the what-if forecast export was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the what-if forecast export was created.</p>
     */
    inline DescribeWhatIfForecastExportResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the what-if forecast export was created.</p>
     */
    inline DescribeWhatIfForecastExportResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The approximate time remaining to complete the what-if forecast export, in
     * minutes.</p>
     */
    inline long long GetEstimatedTimeRemainingInMinutes() const{ return m_estimatedTimeRemainingInMinutes; }

    /**
     * <p>The approximate time remaining to complete the what-if forecast export, in
     * minutes.</p>
     */
    inline void SetEstimatedTimeRemainingInMinutes(long long value) { m_estimatedTimeRemainingInMinutes = value; }

    /**
     * <p>The approximate time remaining to complete the what-if forecast export, in
     * minutes.</p>
     */
    inline DescribeWhatIfForecastExportResult& WithEstimatedTimeRemainingInMinutes(long long value) { SetEstimatedTimeRemainingInMinutes(value); return *this;}


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
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline DescribeWhatIfForecastExportResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline DescribeWhatIfForecastExportResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}


    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline void SetFormat(const Aws::String& value) { m_format = value; }

    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline void SetFormat(Aws::String&& value) { m_format = std::move(value); }

    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline void SetFormat(const char* value) { m_format.assign(value); }

    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline DescribeWhatIfForecastExportResult& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline DescribeWhatIfForecastExportResult& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}

    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline DescribeWhatIfForecastExportResult& WithFormat(const char* value) { SetFormat(value); return *this;}

  private:

    Aws::String m_whatIfForecastExportArn;

    Aws::String m_whatIfForecastExportName;

    Aws::Vector<Aws::String> m_whatIfForecastArns;

    DataDestination m_destination;

    Aws::String m_message;

    Aws::String m_status;

    Aws::Utils::DateTime m_creationTime;

    long long m_estimatedTimeRemainingInMinutes;

    Aws::Utils::DateTime m_lastModificationTime;

    Aws::String m_format;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
