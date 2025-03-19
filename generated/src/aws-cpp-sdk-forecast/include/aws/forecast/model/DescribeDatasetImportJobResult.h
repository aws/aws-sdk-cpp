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
    AWS_FORECASTSERVICE_API DescribeDatasetImportJobResult() = default;
    AWS_FORECASTSERVICE_API DescribeDatasetImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeDatasetImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the dataset import job.</p>
     */
    inline const Aws::String& GetDatasetImportJobName() const { return m_datasetImportJobName; }
    template<typename DatasetImportJobNameT = Aws::String>
    void SetDatasetImportJobName(DatasetImportJobNameT&& value) { m_datasetImportJobNameHasBeenSet = true; m_datasetImportJobName = std::forward<DatasetImportJobNameT>(value); }
    template<typename DatasetImportJobNameT = Aws::String>
    DescribeDatasetImportJobResult& WithDatasetImportJobName(DatasetImportJobNameT&& value) { SetDatasetImportJobName(std::forward<DatasetImportJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the dataset import job.</p>
     */
    inline const Aws::String& GetDatasetImportJobArn() const { return m_datasetImportJobArn; }
    template<typename DatasetImportJobArnT = Aws::String>
    void SetDatasetImportJobArn(DatasetImportJobArnT&& value) { m_datasetImportJobArnHasBeenSet = true; m_datasetImportJobArn = std::forward<DatasetImportJobArnT>(value); }
    template<typename DatasetImportJobArnT = Aws::String>
    DescribeDatasetImportJobResult& WithDatasetImportJobArn(DatasetImportJobArnT&& value) { SetDatasetImportJobArn(std::forward<DatasetImportJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that the training data was
     * imported to.</p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    DescribeDatasetImportJobResult& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
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
    inline const Aws::String& GetTimestampFormat() const { return m_timestampFormat; }
    template<typename TimestampFormatT = Aws::String>
    void SetTimestampFormat(TimestampFormatT&& value) { m_timestampFormatHasBeenSet = true; m_timestampFormat = std::forward<TimestampFormatT>(value); }
    template<typename TimestampFormatT = Aws::String>
    DescribeDatasetImportJobResult& WithTimestampFormat(TimestampFormatT&& value) { SetTimestampFormat(std::forward<TimestampFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The single time zone applied to every item in the dataset</p>
     */
    inline const Aws::String& GetTimeZone() const { return m_timeZone; }
    template<typename TimeZoneT = Aws::String>
    void SetTimeZone(TimeZoneT&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::forward<TimeZoneT>(value); }
    template<typename TimeZoneT = Aws::String>
    DescribeDatasetImportJobResult& WithTimeZone(TimeZoneT&& value) { SetTimeZone(std::forward<TimeZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether <code>TimeZone</code> is automatically derived from the geolocation
     * attribute.</p>
     */
    inline bool GetUseGeolocationForTimeZone() const { return m_useGeolocationForTimeZone; }
    inline void SetUseGeolocationForTimeZone(bool value) { m_useGeolocationForTimeZoneHasBeenSet = true; m_useGeolocationForTimeZone = value; }
    inline DescribeDatasetImportJobResult& WithUseGeolocationForTimeZone(bool value) { SetUseGeolocationForTimeZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the geolocation attribute. Valid Values:<code>"LAT_LONG"</code>
     * and <code>"CC_POSTALCODE"</code>.</p>
     */
    inline const Aws::String& GetGeolocationFormat() const { return m_geolocationFormat; }
    template<typename GeolocationFormatT = Aws::String>
    void SetGeolocationFormat(GeolocationFormatT&& value) { m_geolocationFormatHasBeenSet = true; m_geolocationFormat = std::forward<GeolocationFormatT>(value); }
    template<typename GeolocationFormatT = Aws::String>
    DescribeDatasetImportJobResult& WithGeolocationFormat(GeolocationFormatT&& value) { SetGeolocationFormat(std::forward<GeolocationFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the training data to import and an Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the data.</p>
     * <p>If encryption is used, <code>DataSource</code> includes an Key Management
     * Service (KMS) key.</p>
     */
    inline const DataSource& GetDataSource() const { return m_dataSource; }
    template<typename DataSourceT = DataSource>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = DataSource>
    DescribeDatasetImportJobResult& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated time remaining in minutes for the dataset import job to
     * complete.</p>
     */
    inline long long GetEstimatedTimeRemainingInMinutes() const { return m_estimatedTimeRemainingInMinutes; }
    inline void SetEstimatedTimeRemainingInMinutes(long long value) { m_estimatedTimeRemainingInMinutesHasBeenSet = true; m_estimatedTimeRemainingInMinutes = value; }
    inline DescribeDatasetImportJobResult& WithEstimatedTimeRemainingInMinutes(long long value) { SetEstimatedTimeRemainingInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Statistical information about each field in the input data.</p>
     */
    inline const Aws::Map<Aws::String, Statistics>& GetFieldStatistics() const { return m_fieldStatistics; }
    template<typename FieldStatisticsT = Aws::Map<Aws::String, Statistics>>
    void SetFieldStatistics(FieldStatisticsT&& value) { m_fieldStatisticsHasBeenSet = true; m_fieldStatistics = std::forward<FieldStatisticsT>(value); }
    template<typename FieldStatisticsT = Aws::Map<Aws::String, Statistics>>
    DescribeDatasetImportJobResult& WithFieldStatistics(FieldStatisticsT&& value) { SetFieldStatistics(std::forward<FieldStatisticsT>(value)); return *this;}
    template<typename FieldStatisticsKeyT = Aws::String, typename FieldStatisticsValueT = Statistics>
    DescribeDatasetImportJobResult& AddFieldStatistics(FieldStatisticsKeyT&& key, FieldStatisticsValueT&& value) {
      m_fieldStatisticsHasBeenSet = true; m_fieldStatistics.emplace(std::forward<FieldStatisticsKeyT>(key), std::forward<FieldStatisticsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The size of the dataset in gigabytes (GB) after the import job has
     * finished.</p>
     */
    inline double GetDataSize() const { return m_dataSize; }
    inline void SetDataSize(double value) { m_dataSizeHasBeenSet = true; m_dataSize = value; }
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
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DescribeDatasetImportJobResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DescribeDatasetImportJobResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the dataset import job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeDatasetImportJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    DescribeDatasetImportJobResult& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the imported data, CSV or PARQUET.</p>
     */
    inline const Aws::String& GetFormat() const { return m_format; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    DescribeDatasetImportJobResult& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The import mode of the dataset import job, FULL or INCREMENTAL.</p>
     */
    inline ImportMode GetImportMode() const { return m_importMode; }
    inline void SetImportMode(ImportMode value) { m_importModeHasBeenSet = true; m_importMode = value; }
    inline DescribeDatasetImportJobResult& WithImportMode(ImportMode value) { SetImportMode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDatasetImportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datasetImportJobName;
    bool m_datasetImportJobNameHasBeenSet = false;

    Aws::String m_datasetImportJobArn;
    bool m_datasetImportJobArnHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    Aws::String m_timestampFormat;
    bool m_timestampFormatHasBeenSet = false;

    Aws::String m_timeZone;
    bool m_timeZoneHasBeenSet = false;

    bool m_useGeolocationForTimeZone{false};
    bool m_useGeolocationForTimeZoneHasBeenSet = false;

    Aws::String m_geolocationFormat;
    bool m_geolocationFormatHasBeenSet = false;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    long long m_estimatedTimeRemainingInMinutes{0};
    bool m_estimatedTimeRemainingInMinutesHasBeenSet = false;

    Aws::Map<Aws::String, Statistics> m_fieldStatistics;
    bool m_fieldStatisticsHasBeenSet = false;

    double m_dataSize{0.0};
    bool m_dataSizeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    ImportMode m_importMode{ImportMode::NOT_SET};
    bool m_importModeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
