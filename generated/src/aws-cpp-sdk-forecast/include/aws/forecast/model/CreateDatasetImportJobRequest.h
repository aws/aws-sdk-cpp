/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/DataSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/ImportMode.h>
#include <aws/forecast/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class CreateDatasetImportJobRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API CreateDatasetImportJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDatasetImportJob"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for the dataset import job. We recommend including the current
     * timestamp in the name, for example, <code>20190721DatasetImport</code>. This can
     * help you avoid getting a <code>ResourceAlreadyExistsException</code>
     * exception.</p>
     */
    inline const Aws::String& GetDatasetImportJobName() const { return m_datasetImportJobName; }
    inline bool DatasetImportJobNameHasBeenSet() const { return m_datasetImportJobNameHasBeenSet; }
    template<typename DatasetImportJobNameT = Aws::String>
    void SetDatasetImportJobName(DatasetImportJobNameT&& value) { m_datasetImportJobNameHasBeenSet = true; m_datasetImportJobName = std::forward<DatasetImportJobNameT>(value); }
    template<typename DatasetImportJobNameT = Aws::String>
    CreateDatasetImportJobRequest& WithDatasetImportJobName(DatasetImportJobNameT&& value) { SetDatasetImportJobName(std::forward<DatasetImportJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Forecast dataset that you want
     * to import data to.</p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    CreateDatasetImportJobRequest& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the training data to import and an Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the data. The
     * training data must be stored in an Amazon S3 bucket.</p> <p>If encryption is
     * used, <code>DataSource</code> must include an Key Management Service (KMS) key
     * and the IAM role must allow Amazon Forecast permission to access the key. The
     * KMS key and IAM role must match those specified in the
     * <code>EncryptionConfig</code> parameter of the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDataset.html">CreateDataset</a>
     * operation.</p>
     */
    inline const DataSource& GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    template<typename DataSourceT = DataSource>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = DataSource>
    CreateDatasetImportJobRequest& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of timestamps in the dataset. The format that you specify depends
     * on the <code>DataFrequency</code> specified when the dataset was created. The
     * following formats are supported</p> <ul> <li> <p>"yyyy-MM-dd"</p> <p>For the
     * following data frequencies: Y, M, W, and D</p> </li> <li> <p>"yyyy-MM-dd
     * HH:mm:ss"</p> <p>For the following data frequencies: H, 30min, 15min, and 1min;
     * and optionally, for: Y, M, W, and D</p> </li> </ul> <p>If the format isn't
     * specified, Amazon Forecast expects the format to be "yyyy-MM-dd HH:mm:ss".</p>
     */
    inline const Aws::String& GetTimestampFormat() const { return m_timestampFormat; }
    inline bool TimestampFormatHasBeenSet() const { return m_timestampFormatHasBeenSet; }
    template<typename TimestampFormatT = Aws::String>
    void SetTimestampFormat(TimestampFormatT&& value) { m_timestampFormatHasBeenSet = true; m_timestampFormat = std::forward<TimestampFormatT>(value); }
    template<typename TimestampFormatT = Aws::String>
    CreateDatasetImportJobRequest& WithTimestampFormat(TimestampFormatT&& value) { SetTimestampFormat(std::forward<TimestampFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A single time zone for every item in your dataset. This option is ideal for
     * datasets with all timestamps within a single time zone, or if all timestamps are
     * normalized to a single time zone. </p> <p>Refer to the <a
     * href="http://joda-time.sourceforge.net/timezones.html">Joda-Time API</a> for a
     * complete list of valid time zone names.</p>
     */
    inline const Aws::String& GetTimeZone() const { return m_timeZone; }
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
    template<typename TimeZoneT = Aws::String>
    void SetTimeZone(TimeZoneT&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::forward<TimeZoneT>(value); }
    template<typename TimeZoneT = Aws::String>
    CreateDatasetImportJobRequest& WithTimeZone(TimeZoneT&& value) { SetTimeZone(std::forward<TimeZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Automatically derive time zone information from the geolocation attribute.
     * This option is ideal for datasets that contain timestamps in multiple time zones
     * and those timestamps are expressed in local time.</p>
     */
    inline bool GetUseGeolocationForTimeZone() const { return m_useGeolocationForTimeZone; }
    inline bool UseGeolocationForTimeZoneHasBeenSet() const { return m_useGeolocationForTimeZoneHasBeenSet; }
    inline void SetUseGeolocationForTimeZone(bool value) { m_useGeolocationForTimeZoneHasBeenSet = true; m_useGeolocationForTimeZone = value; }
    inline CreateDatasetImportJobRequest& WithUseGeolocationForTimeZone(bool value) { SetUseGeolocationForTimeZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the geolocation attribute. The geolocation attribute can be
     * formatted in one of two ways:</p> <ul> <li> <p> <code>LAT_LONG</code> - the
     * latitude and longitude in decimal format (Example: 47.61_-122.33).</p> </li>
     * <li> <p> <code>CC_POSTALCODE</code> (US Only) - the country code (US), followed
     * by the 5-digit ZIP code (Example: US_98121).</p> </li> </ul>
     */
    inline const Aws::String& GetGeolocationFormat() const { return m_geolocationFormat; }
    inline bool GeolocationFormatHasBeenSet() const { return m_geolocationFormatHasBeenSet; }
    template<typename GeolocationFormatT = Aws::String>
    void SetGeolocationFormat(GeolocationFormatT&& value) { m_geolocationFormatHasBeenSet = true; m_geolocationFormat = std::forward<GeolocationFormatT>(value); }
    template<typename GeolocationFormatT = Aws::String>
    CreateDatasetImportJobRequest& WithGeolocationFormat(GeolocationFormatT&& value) { SetGeolocationFormat(std::forward<GeolocationFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional metadata that you apply to the dataset import job to help you
     * categorize and organize them. Each tag consists of a key and an optional value,
     * both of which you define.</p> <p>The following basic restrictions apply to
     * tags:</p> <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li>
     * <p>For each resource, each tag key must be unique, and each tag key can have
     * only one value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for keys as it is reserved for Amazon Web Services use. You
     * cannot edit or delete tag keys with this prefix. Values can have this prefix. If
     * a tag value has <code>aws</code> as its prefix but the key does not, then
     * Forecast considers it to be a user tag and will count against the limit of 50
     * tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDatasetImportJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDatasetImportJobRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The format of the imported data, CSV or PARQUET. The default value is
     * CSV.</p>
     */
    inline const Aws::String& GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    CreateDatasetImportJobRequest& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the dataset import job is a <code>FULL</code> or
     * <code>INCREMENTAL</code> import. A <code>FULL</code> dataset import replaces all
     * of the existing data with the newly imported data. An <code>INCREMENTAL</code>
     * import appends the imported data to the existing data.</p>
     */
    inline ImportMode GetImportMode() const { return m_importMode; }
    inline bool ImportModeHasBeenSet() const { return m_importModeHasBeenSet; }
    inline void SetImportMode(ImportMode value) { m_importModeHasBeenSet = true; m_importMode = value; }
    inline CreateDatasetImportJobRequest& WithImportMode(ImportMode value) { SetImportMode(value); return *this;}
    ///@}
  private:

    Aws::String m_datasetImportJobName;
    bool m_datasetImportJobNameHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_timestampFormat;
    bool m_timestampFormatHasBeenSet = false;

    Aws::String m_timeZone;
    bool m_timeZoneHasBeenSet = false;

    bool m_useGeolocationForTimeZone{false};
    bool m_useGeolocationForTimeZoneHasBeenSet = false;

    Aws::String m_geolocationFormat;
    bool m_geolocationFormatHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    ImportMode m_importMode{ImportMode::NOT_SET};
    bool m_importModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
