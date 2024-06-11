/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/DataSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/forecast/model/ImportMode.h>
#include <aws/forecast/model/Statistics.h>
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
  class DescribeDatasetImportJobResult
  {
  public:
    AWS_FORECASTSERVICE_API DescribeDatasetImportJobResult();
    AWS_FORECASTSERVICE_API DescribeDatasetImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeDatasetImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the dataset import job.</p>
     */
    inline const Aws::String& GetDatasetImportJobName() const{ return m_datasetImportJobName; }
    inline void SetDatasetImportJobName(const Aws::String& value) { m_datasetImportJobName = value; }
    inline void SetDatasetImportJobName(Aws::String&& value) { m_datasetImportJobName = std::move(value); }
    inline void SetDatasetImportJobName(const char* value) { m_datasetImportJobName.assign(value); }
    inline DescribeDatasetImportJobResult& WithDatasetImportJobName(const Aws::String& value) { SetDatasetImportJobName(value); return *this;}
    inline DescribeDatasetImportJobResult& WithDatasetImportJobName(Aws::String&& value) { SetDatasetImportJobName(std::move(value)); return *this;}
    inline DescribeDatasetImportJobResult& WithDatasetImportJobName(const char* value) { SetDatasetImportJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline const Aws::String& GetDatasetImportJobArn() const{ return m_datasetImportJobArn; }
    inline void SetDatasetImportJobArn(const Aws::String& value) { m_datasetImportJobArn = value; }
    inline void SetDatasetImportJobArn(Aws::String&& value) { m_datasetImportJobArn = std::move(value); }
    inline void SetDatasetImportJobArn(const char* value) { m_datasetImportJobArn.assign(value); }
    inline DescribeDatasetImportJobResult& WithDatasetImportJobArn(const Aws::String& value) { SetDatasetImportJobArn(value); return *this;}
    inline DescribeDatasetImportJobResult& WithDatasetImportJobArn(Aws::String&& value) { SetDatasetImportJobArn(std::move(value)); return *this;}
    inline DescribeDatasetImportJobResult& WithDatasetImportJobArn(const char* value) { SetDatasetImportJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that the training data was
     * imported to.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArn = value; }
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArn = std::move(value); }
    inline void SetDatasetArn(const char* value) { m_datasetArn.assign(value); }
    inline DescribeDatasetImportJobResult& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}
    inline DescribeDatasetImportJobResult& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}
    inline DescribeDatasetImportJobResult& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of timestamps in the dataset. The format that you specify depends
     * on the <code>DataFrequency</code> specified when the dataset was created. The
     * following formats are supported</p> <ul> <li> <p>"yyyy-MM-dd"</p> <p>For the
     * following data frequencies: Y, M, W, and D</p> </li> <li> <p>"yyyy-MM-dd
     * HH:mm:ss"</p> <p>For the following data frequencies: H, 30min, 15min, and 1min;
     * and optionally, for: Y, M, W, and D</p> </li> </ul>
     */
    inline const Aws::String& GetTimestampFormat() const{ return m_timestampFormat; }
    inline void SetTimestampFormat(const Aws::String& value) { m_timestampFormat = value; }
    inline void SetTimestampFormat(Aws::String&& value) { m_timestampFormat = std::move(value); }
    inline void SetTimestampFormat(const char* value) { m_timestampFormat.assign(value); }
    inline DescribeDatasetImportJobResult& WithTimestampFormat(const Aws::String& value) { SetTimestampFormat(value); return *this;}
    inline DescribeDatasetImportJobResult& WithTimestampFormat(Aws::String&& value) { SetTimestampFormat(std::move(value)); return *this;}
    inline DescribeDatasetImportJobResult& WithTimestampFormat(const char* value) { SetTimestampFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The single time zone applied to every item in the dataset</p>
     */
    inline const Aws::String& GetTimeZone() const{ return m_timeZone; }
    inline void SetTimeZone(const Aws::String& value) { m_timeZone = value; }
    inline void SetTimeZone(Aws::String&& value) { m_timeZone = std::move(value); }
    inline void SetTimeZone(const char* value) { m_timeZone.assign(value); }
    inline DescribeDatasetImportJobResult& WithTimeZone(const Aws::String& value) { SetTimeZone(value); return *this;}
    inline DescribeDatasetImportJobResult& WithTimeZone(Aws::String&& value) { SetTimeZone(std::move(value)); return *this;}
    inline DescribeDatasetImportJobResult& WithTimeZone(const char* value) { SetTimeZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether <code>TimeZone</code> is automatically derived from the geolocation
     * attribute.</p>
     */
    inline bool GetUseGeolocationForTimeZone() const{ return m_useGeolocationForTimeZone; }
    inline void SetUseGeolocationForTimeZone(bool value) { m_useGeolocationForTimeZone = value; }
    inline DescribeDatasetImportJobResult& WithUseGeolocationForTimeZone(bool value) { SetUseGeolocationForTimeZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the geolocation attribute. Valid Values:<code>"LAT_LONG"</code>
     * and <code>"CC_POSTALCODE"</code>.</p>
     */
    inline const Aws::String& GetGeolocationFormat() const{ return m_geolocationFormat; }
    inline void SetGeolocationFormat(const Aws::String& value) { m_geolocationFormat = value; }
    inline void SetGeolocationFormat(Aws::String&& value) { m_geolocationFormat = std::move(value); }
    inline void SetGeolocationFormat(const char* value) { m_geolocationFormat.assign(value); }
    inline DescribeDatasetImportJobResult& WithGeolocationFormat(const Aws::String& value) { SetGeolocationFormat(value); return *this;}
    inline DescribeDatasetImportJobResult& WithGeolocationFormat(Aws::String&& value) { SetGeolocationFormat(std::move(value)); return *this;}
    inline DescribeDatasetImportJobResult& WithGeolocationFormat(const char* value) { SetGeolocationFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the training data to import and an Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the data.</p>
     * <p>If encryption is used, <code>DataSource</code> includes an Key Management
     * Service (KMS) key.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }
    inline void SetDataSource(const DataSource& value) { m_dataSource = value; }
    inline void SetDataSource(DataSource&& value) { m_dataSource = std::move(value); }
    inline DescribeDatasetImportJobResult& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}
    inline DescribeDatasetImportJobResult& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated time remaining in minutes for the dataset import job to
     * complete.</p>
     */
    inline long long GetEstimatedTimeRemainingInMinutes() const{ return m_estimatedTimeRemainingInMinutes; }
    inline void SetEstimatedTimeRemainingInMinutes(long long value) { m_estimatedTimeRemainingInMinutes = value; }
    inline DescribeDatasetImportJobResult& WithEstimatedTimeRemainingInMinutes(long long value) { SetEstimatedTimeRemainingInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Statistical information about each field in the input data.</p>
     */
    inline const Aws::Map<Aws::String, Statistics>& GetFieldStatistics() const{ return m_fieldStatistics; }
    inline void SetFieldStatistics(const Aws::Map<Aws::String, Statistics>& value) { m_fieldStatistics = value; }
    inline void SetFieldStatistics(Aws::Map<Aws::String, Statistics>&& value) { m_fieldStatistics = std::move(value); }
    inline DescribeDatasetImportJobResult& WithFieldStatistics(const Aws::Map<Aws::String, Statistics>& value) { SetFieldStatistics(value); return *this;}
    inline DescribeDatasetImportJobResult& WithFieldStatistics(Aws::Map<Aws::String, Statistics>&& value) { SetFieldStatistics(std::move(value)); return *this;}
    inline DescribeDatasetImportJobResult& AddFieldStatistics(const Aws::String& key, const Statistics& value) { m_fieldStatistics.emplace(key, value); return *this; }
    inline DescribeDatasetImportJobResult& AddFieldStatistics(Aws::String&& key, const Statistics& value) { m_fieldStatistics.emplace(std::move(key), value); return *this; }
    inline DescribeDatasetImportJobResult& AddFieldStatistics(const Aws::String& key, Statistics&& value) { m_fieldStatistics.emplace(key, std::move(value)); return *this; }
    inline DescribeDatasetImportJobResult& AddFieldStatistics(Aws::String&& key, Statistics&& value) { m_fieldStatistics.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeDatasetImportJobResult& AddFieldStatistics(const char* key, Statistics&& value) { m_fieldStatistics.emplace(key, std::move(value)); return *this; }
    inline DescribeDatasetImportJobResult& AddFieldStatistics(const char* key, const Statistics& value) { m_fieldStatistics.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The size of the dataset in gigabytes (GB) after the import job has
     * finished.</p>
     */
    inline double GetDataSize() const{ return m_dataSize; }
    inline void SetDataSize(double value) { m_dataSize = value; }
    inline DescribeDatasetImportJobResult& WithDataSize(double value) { SetDataSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the dataset import job. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> <li> <p> <code>CREATE_STOPPING</code>,
     * <code>CREATE_STOPPED</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline DescribeDatasetImportJobResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DescribeDatasetImportJobResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DescribeDatasetImportJobResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline DescribeDatasetImportJobResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline DescribeDatasetImportJobResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline DescribeDatasetImportJobResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the dataset import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeDatasetImportJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeDatasetImportJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
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
    inline DescribeDatasetImportJobResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline DescribeDatasetImportJobResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the imported data, CSV or PARQUET.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }
    inline void SetFormat(const Aws::String& value) { m_format = value; }
    inline void SetFormat(Aws::String&& value) { m_format = std::move(value); }
    inline void SetFormat(const char* value) { m_format.assign(value); }
    inline DescribeDatasetImportJobResult& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}
    inline DescribeDatasetImportJobResult& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}
    inline DescribeDatasetImportJobResult& WithFormat(const char* value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The import mode of the dataset import job, FULL or INCREMENTAL.</p>
     */
    inline const ImportMode& GetImportMode() const{ return m_importMode; }
    inline void SetImportMode(const ImportMode& value) { m_importMode = value; }
    inline void SetImportMode(ImportMode&& value) { m_importMode = std::move(value); }
    inline DescribeDatasetImportJobResult& WithImportMode(const ImportMode& value) { SetImportMode(value); return *this;}
    inline DescribeDatasetImportJobResult& WithImportMode(ImportMode&& value) { SetImportMode(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDatasetImportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDatasetImportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDatasetImportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_datasetImportJobName;

    Aws::String m_datasetImportJobArn;

    Aws::String m_datasetArn;

    Aws::String m_timestampFormat;

    Aws::String m_timeZone;

    bool m_useGeolocationForTimeZone;

    Aws::String m_geolocationFormat;

    DataSource m_dataSource;

    long long m_estimatedTimeRemainingInMinutes;

    Aws::Map<Aws::String, Statistics> m_fieldStatistics;

    double m_dataSize;

    Aws::String m_status;

    Aws::String m_message;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;

    Aws::String m_format;

    ImportMode m_importMode;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
