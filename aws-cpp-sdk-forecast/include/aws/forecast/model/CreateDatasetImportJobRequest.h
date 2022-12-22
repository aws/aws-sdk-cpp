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
    AWS_FORECASTSERVICE_API CreateDatasetImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDatasetImportJob"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the dataset import job. We recommend including the current
     * timestamp in the name, for example, <code>20190721DatasetImport</code>. This can
     * help you avoid getting a <code>ResourceAlreadyExistsException</code>
     * exception.</p>
     */
    inline const Aws::String& GetDatasetImportJobName() const{ return m_datasetImportJobName; }

    /**
     * <p>The name for the dataset import job. We recommend including the current
     * timestamp in the name, for example, <code>20190721DatasetImport</code>. This can
     * help you avoid getting a <code>ResourceAlreadyExistsException</code>
     * exception.</p>
     */
    inline bool DatasetImportJobNameHasBeenSet() const { return m_datasetImportJobNameHasBeenSet; }

    /**
     * <p>The name for the dataset import job. We recommend including the current
     * timestamp in the name, for example, <code>20190721DatasetImport</code>. This can
     * help you avoid getting a <code>ResourceAlreadyExistsException</code>
     * exception.</p>
     */
    inline void SetDatasetImportJobName(const Aws::String& value) { m_datasetImportJobNameHasBeenSet = true; m_datasetImportJobName = value; }

    /**
     * <p>The name for the dataset import job. We recommend including the current
     * timestamp in the name, for example, <code>20190721DatasetImport</code>. This can
     * help you avoid getting a <code>ResourceAlreadyExistsException</code>
     * exception.</p>
     */
    inline void SetDatasetImportJobName(Aws::String&& value) { m_datasetImportJobNameHasBeenSet = true; m_datasetImportJobName = std::move(value); }

    /**
     * <p>The name for the dataset import job. We recommend including the current
     * timestamp in the name, for example, <code>20190721DatasetImport</code>. This can
     * help you avoid getting a <code>ResourceAlreadyExistsException</code>
     * exception.</p>
     */
    inline void SetDatasetImportJobName(const char* value) { m_datasetImportJobNameHasBeenSet = true; m_datasetImportJobName.assign(value); }

    /**
     * <p>The name for the dataset import job. We recommend including the current
     * timestamp in the name, for example, <code>20190721DatasetImport</code>. This can
     * help you avoid getting a <code>ResourceAlreadyExistsException</code>
     * exception.</p>
     */
    inline CreateDatasetImportJobRequest& WithDatasetImportJobName(const Aws::String& value) { SetDatasetImportJobName(value); return *this;}

    /**
     * <p>The name for the dataset import job. We recommend including the current
     * timestamp in the name, for example, <code>20190721DatasetImport</code>. This can
     * help you avoid getting a <code>ResourceAlreadyExistsException</code>
     * exception.</p>
     */
    inline CreateDatasetImportJobRequest& WithDatasetImportJobName(Aws::String&& value) { SetDatasetImportJobName(std::move(value)); return *this;}

    /**
     * <p>The name for the dataset import job. We recommend including the current
     * timestamp in the name, for example, <code>20190721DatasetImport</code>. This can
     * help you avoid getting a <code>ResourceAlreadyExistsException</code>
     * exception.</p>
     */
    inline CreateDatasetImportJobRequest& WithDatasetImportJobName(const char* value) { SetDatasetImportJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Forecast dataset that you want
     * to import data to.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Forecast dataset that you want
     * to import data to.</p>
     */
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Forecast dataset that you want
     * to import data to.</p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Forecast dataset that you want
     * to import data to.</p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Forecast dataset that you want
     * to import data to.</p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Forecast dataset that you want
     * to import data to.</p>
     */
    inline CreateDatasetImportJobRequest& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Forecast dataset that you want
     * to import data to.</p>
     */
    inline CreateDatasetImportJobRequest& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Forecast dataset that you want
     * to import data to.</p>
     */
    inline CreateDatasetImportJobRequest& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>The location of the training data to import and an AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the data. The
     * training data must be stored in an Amazon S3 bucket.</p> <p>If encryption is
     * used, <code>DataSource</code> must include an AWS Key Management Service (KMS)
     * key and the IAM role must allow Amazon Forecast permission to access the key.
     * The KMS key and IAM role must match those specified in the
     * <code>EncryptionConfig</code> parameter of the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDataset.html">CreateDataset</a>
     * operation.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The location of the training data to import and an AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the data. The
     * training data must be stored in an Amazon S3 bucket.</p> <p>If encryption is
     * used, <code>DataSource</code> must include an AWS Key Management Service (KMS)
     * key and the IAM role must allow Amazon Forecast permission to access the key.
     * The KMS key and IAM role must match those specified in the
     * <code>EncryptionConfig</code> parameter of the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDataset.html">CreateDataset</a>
     * operation.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The location of the training data to import and an AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the data. The
     * training data must be stored in an Amazon S3 bucket.</p> <p>If encryption is
     * used, <code>DataSource</code> must include an AWS Key Management Service (KMS)
     * key and the IAM role must allow Amazon Forecast permission to access the key.
     * The KMS key and IAM role must match those specified in the
     * <code>EncryptionConfig</code> parameter of the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDataset.html">CreateDataset</a>
     * operation.</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The location of the training data to import and an AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the data. The
     * training data must be stored in an Amazon S3 bucket.</p> <p>If encryption is
     * used, <code>DataSource</code> must include an AWS Key Management Service (KMS)
     * key and the IAM role must allow Amazon Forecast permission to access the key.
     * The KMS key and IAM role must match those specified in the
     * <code>EncryptionConfig</code> parameter of the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDataset.html">CreateDataset</a>
     * operation.</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The location of the training data to import and an AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the data. The
     * training data must be stored in an Amazon S3 bucket.</p> <p>If encryption is
     * used, <code>DataSource</code> must include an AWS Key Management Service (KMS)
     * key and the IAM role must allow Amazon Forecast permission to access the key.
     * The KMS key and IAM role must match those specified in the
     * <code>EncryptionConfig</code> parameter of the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDataset.html">CreateDataset</a>
     * operation.</p>
     */
    inline CreateDatasetImportJobRequest& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The location of the training data to import and an AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the data. The
     * training data must be stored in an Amazon S3 bucket.</p> <p>If encryption is
     * used, <code>DataSource</code> must include an AWS Key Management Service (KMS)
     * key and the IAM role must allow Amazon Forecast permission to access the key.
     * The KMS key and IAM role must match those specified in the
     * <code>EncryptionConfig</code> parameter of the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDataset.html">CreateDataset</a>
     * operation.</p>
     */
    inline CreateDatasetImportJobRequest& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>The format of timestamps in the dataset. The format that you specify depends
     * on the <code>DataFrequency</code> specified when the dataset was created. The
     * following formats are supported</p> <ul> <li> <p>"yyyy-MM-dd"</p> <p>For the
     * following data frequencies: Y, M, W, and D</p> </li> <li> <p>"yyyy-MM-dd
     * HH:mm:ss"</p> <p>For the following data frequencies: H, 30min, 15min, and 1min;
     * and optionally, for: Y, M, W, and D</p> </li> </ul> <p>If the format isn't
     * specified, Amazon Forecast expects the format to be "yyyy-MM-dd HH:mm:ss".</p>
     */
    inline const Aws::String& GetTimestampFormat() const{ return m_timestampFormat; }

    /**
     * <p>The format of timestamps in the dataset. The format that you specify depends
     * on the <code>DataFrequency</code> specified when the dataset was created. The
     * following formats are supported</p> <ul> <li> <p>"yyyy-MM-dd"</p> <p>For the
     * following data frequencies: Y, M, W, and D</p> </li> <li> <p>"yyyy-MM-dd
     * HH:mm:ss"</p> <p>For the following data frequencies: H, 30min, 15min, and 1min;
     * and optionally, for: Y, M, W, and D</p> </li> </ul> <p>If the format isn't
     * specified, Amazon Forecast expects the format to be "yyyy-MM-dd HH:mm:ss".</p>
     */
    inline bool TimestampFormatHasBeenSet() const { return m_timestampFormatHasBeenSet; }

    /**
     * <p>The format of timestamps in the dataset. The format that you specify depends
     * on the <code>DataFrequency</code> specified when the dataset was created. The
     * following formats are supported</p> <ul> <li> <p>"yyyy-MM-dd"</p> <p>For the
     * following data frequencies: Y, M, W, and D</p> </li> <li> <p>"yyyy-MM-dd
     * HH:mm:ss"</p> <p>For the following data frequencies: H, 30min, 15min, and 1min;
     * and optionally, for: Y, M, W, and D</p> </li> </ul> <p>If the format isn't
     * specified, Amazon Forecast expects the format to be "yyyy-MM-dd HH:mm:ss".</p>
     */
    inline void SetTimestampFormat(const Aws::String& value) { m_timestampFormatHasBeenSet = true; m_timestampFormat = value; }

    /**
     * <p>The format of timestamps in the dataset. The format that you specify depends
     * on the <code>DataFrequency</code> specified when the dataset was created. The
     * following formats are supported</p> <ul> <li> <p>"yyyy-MM-dd"</p> <p>For the
     * following data frequencies: Y, M, W, and D</p> </li> <li> <p>"yyyy-MM-dd
     * HH:mm:ss"</p> <p>For the following data frequencies: H, 30min, 15min, and 1min;
     * and optionally, for: Y, M, W, and D</p> </li> </ul> <p>If the format isn't
     * specified, Amazon Forecast expects the format to be "yyyy-MM-dd HH:mm:ss".</p>
     */
    inline void SetTimestampFormat(Aws::String&& value) { m_timestampFormatHasBeenSet = true; m_timestampFormat = std::move(value); }

    /**
     * <p>The format of timestamps in the dataset. The format that you specify depends
     * on the <code>DataFrequency</code> specified when the dataset was created. The
     * following formats are supported</p> <ul> <li> <p>"yyyy-MM-dd"</p> <p>For the
     * following data frequencies: Y, M, W, and D</p> </li> <li> <p>"yyyy-MM-dd
     * HH:mm:ss"</p> <p>For the following data frequencies: H, 30min, 15min, and 1min;
     * and optionally, for: Y, M, W, and D</p> </li> </ul> <p>If the format isn't
     * specified, Amazon Forecast expects the format to be "yyyy-MM-dd HH:mm:ss".</p>
     */
    inline void SetTimestampFormat(const char* value) { m_timestampFormatHasBeenSet = true; m_timestampFormat.assign(value); }

    /**
     * <p>The format of timestamps in the dataset. The format that you specify depends
     * on the <code>DataFrequency</code> specified when the dataset was created. The
     * following formats are supported</p> <ul> <li> <p>"yyyy-MM-dd"</p> <p>For the
     * following data frequencies: Y, M, W, and D</p> </li> <li> <p>"yyyy-MM-dd
     * HH:mm:ss"</p> <p>For the following data frequencies: H, 30min, 15min, and 1min;
     * and optionally, for: Y, M, W, and D</p> </li> </ul> <p>If the format isn't
     * specified, Amazon Forecast expects the format to be "yyyy-MM-dd HH:mm:ss".</p>
     */
    inline CreateDatasetImportJobRequest& WithTimestampFormat(const Aws::String& value) { SetTimestampFormat(value); return *this;}

    /**
     * <p>The format of timestamps in the dataset. The format that you specify depends
     * on the <code>DataFrequency</code> specified when the dataset was created. The
     * following formats are supported</p> <ul> <li> <p>"yyyy-MM-dd"</p> <p>For the
     * following data frequencies: Y, M, W, and D</p> </li> <li> <p>"yyyy-MM-dd
     * HH:mm:ss"</p> <p>For the following data frequencies: H, 30min, 15min, and 1min;
     * and optionally, for: Y, M, W, and D</p> </li> </ul> <p>If the format isn't
     * specified, Amazon Forecast expects the format to be "yyyy-MM-dd HH:mm:ss".</p>
     */
    inline CreateDatasetImportJobRequest& WithTimestampFormat(Aws::String&& value) { SetTimestampFormat(std::move(value)); return *this;}

    /**
     * <p>The format of timestamps in the dataset. The format that you specify depends
     * on the <code>DataFrequency</code> specified when the dataset was created. The
     * following formats are supported</p> <ul> <li> <p>"yyyy-MM-dd"</p> <p>For the
     * following data frequencies: Y, M, W, and D</p> </li> <li> <p>"yyyy-MM-dd
     * HH:mm:ss"</p> <p>For the following data frequencies: H, 30min, 15min, and 1min;
     * and optionally, for: Y, M, W, and D</p> </li> </ul> <p>If the format isn't
     * specified, Amazon Forecast expects the format to be "yyyy-MM-dd HH:mm:ss".</p>
     */
    inline CreateDatasetImportJobRequest& WithTimestampFormat(const char* value) { SetTimestampFormat(value); return *this;}


    /**
     * <p>A single time zone for every item in your dataset. This option is ideal for
     * datasets with all timestamps within a single time zone, or if all timestamps are
     * normalized to a single time zone. </p> <p>Refer to the <a
     * href="http://joda-time.sourceforge.net/timezones.html">Joda-Time API</a> for a
     * complete list of valid time zone names.</p>
     */
    inline const Aws::String& GetTimeZone() const{ return m_timeZone; }

    /**
     * <p>A single time zone for every item in your dataset. This option is ideal for
     * datasets with all timestamps within a single time zone, or if all timestamps are
     * normalized to a single time zone. </p> <p>Refer to the <a
     * href="http://joda-time.sourceforge.net/timezones.html">Joda-Time API</a> for a
     * complete list of valid time zone names.</p>
     */
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }

    /**
     * <p>A single time zone for every item in your dataset. This option is ideal for
     * datasets with all timestamps within a single time zone, or if all timestamps are
     * normalized to a single time zone. </p> <p>Refer to the <a
     * href="http://joda-time.sourceforge.net/timezones.html">Joda-Time API</a> for a
     * complete list of valid time zone names.</p>
     */
    inline void SetTimeZone(const Aws::String& value) { m_timeZoneHasBeenSet = true; m_timeZone = value; }

    /**
     * <p>A single time zone for every item in your dataset. This option is ideal for
     * datasets with all timestamps within a single time zone, or if all timestamps are
     * normalized to a single time zone. </p> <p>Refer to the <a
     * href="http://joda-time.sourceforge.net/timezones.html">Joda-Time API</a> for a
     * complete list of valid time zone names.</p>
     */
    inline void SetTimeZone(Aws::String&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::move(value); }

    /**
     * <p>A single time zone for every item in your dataset. This option is ideal for
     * datasets with all timestamps within a single time zone, or if all timestamps are
     * normalized to a single time zone. </p> <p>Refer to the <a
     * href="http://joda-time.sourceforge.net/timezones.html">Joda-Time API</a> for a
     * complete list of valid time zone names.</p>
     */
    inline void SetTimeZone(const char* value) { m_timeZoneHasBeenSet = true; m_timeZone.assign(value); }

    /**
     * <p>A single time zone for every item in your dataset. This option is ideal for
     * datasets with all timestamps within a single time zone, or if all timestamps are
     * normalized to a single time zone. </p> <p>Refer to the <a
     * href="http://joda-time.sourceforge.net/timezones.html">Joda-Time API</a> for a
     * complete list of valid time zone names.</p>
     */
    inline CreateDatasetImportJobRequest& WithTimeZone(const Aws::String& value) { SetTimeZone(value); return *this;}

    /**
     * <p>A single time zone for every item in your dataset. This option is ideal for
     * datasets with all timestamps within a single time zone, or if all timestamps are
     * normalized to a single time zone. </p> <p>Refer to the <a
     * href="http://joda-time.sourceforge.net/timezones.html">Joda-Time API</a> for a
     * complete list of valid time zone names.</p>
     */
    inline CreateDatasetImportJobRequest& WithTimeZone(Aws::String&& value) { SetTimeZone(std::move(value)); return *this;}

    /**
     * <p>A single time zone for every item in your dataset. This option is ideal for
     * datasets with all timestamps within a single time zone, or if all timestamps are
     * normalized to a single time zone. </p> <p>Refer to the <a
     * href="http://joda-time.sourceforge.net/timezones.html">Joda-Time API</a> for a
     * complete list of valid time zone names.</p>
     */
    inline CreateDatasetImportJobRequest& WithTimeZone(const char* value) { SetTimeZone(value); return *this;}


    /**
     * <p>Automatically derive time zone information from the geolocation attribute.
     * This option is ideal for datasets that contain timestamps in multiple time zones
     * and those timestamps are expressed in local time.</p>
     */
    inline bool GetUseGeolocationForTimeZone() const{ return m_useGeolocationForTimeZone; }

    /**
     * <p>Automatically derive time zone information from the geolocation attribute.
     * This option is ideal for datasets that contain timestamps in multiple time zones
     * and those timestamps are expressed in local time.</p>
     */
    inline bool UseGeolocationForTimeZoneHasBeenSet() const { return m_useGeolocationForTimeZoneHasBeenSet; }

    /**
     * <p>Automatically derive time zone information from the geolocation attribute.
     * This option is ideal for datasets that contain timestamps in multiple time zones
     * and those timestamps are expressed in local time.</p>
     */
    inline void SetUseGeolocationForTimeZone(bool value) { m_useGeolocationForTimeZoneHasBeenSet = true; m_useGeolocationForTimeZone = value; }

    /**
     * <p>Automatically derive time zone information from the geolocation attribute.
     * This option is ideal for datasets that contain timestamps in multiple time zones
     * and those timestamps are expressed in local time.</p>
     */
    inline CreateDatasetImportJobRequest& WithUseGeolocationForTimeZone(bool value) { SetUseGeolocationForTimeZone(value); return *this;}


    /**
     * <p>The format of the geolocation attribute. The geolocation attribute can be
     * formatted in one of two ways:</p> <ul> <li> <p> <code>LAT_LONG</code> - the
     * latitude and longitude in decimal format (Example: 47.61_-122.33).</p> </li>
     * <li> <p> <code>CC_POSTALCODE</code> (US Only) - the country code (US), followed
     * by the 5-digit ZIP code (Example: US_98121).</p> </li> </ul>
     */
    inline const Aws::String& GetGeolocationFormat() const{ return m_geolocationFormat; }

    /**
     * <p>The format of the geolocation attribute. The geolocation attribute can be
     * formatted in one of two ways:</p> <ul> <li> <p> <code>LAT_LONG</code> - the
     * latitude and longitude in decimal format (Example: 47.61_-122.33).</p> </li>
     * <li> <p> <code>CC_POSTALCODE</code> (US Only) - the country code (US), followed
     * by the 5-digit ZIP code (Example: US_98121).</p> </li> </ul>
     */
    inline bool GeolocationFormatHasBeenSet() const { return m_geolocationFormatHasBeenSet; }

    /**
     * <p>The format of the geolocation attribute. The geolocation attribute can be
     * formatted in one of two ways:</p> <ul> <li> <p> <code>LAT_LONG</code> - the
     * latitude and longitude in decimal format (Example: 47.61_-122.33).</p> </li>
     * <li> <p> <code>CC_POSTALCODE</code> (US Only) - the country code (US), followed
     * by the 5-digit ZIP code (Example: US_98121).</p> </li> </ul>
     */
    inline void SetGeolocationFormat(const Aws::String& value) { m_geolocationFormatHasBeenSet = true; m_geolocationFormat = value; }

    /**
     * <p>The format of the geolocation attribute. The geolocation attribute can be
     * formatted in one of two ways:</p> <ul> <li> <p> <code>LAT_LONG</code> - the
     * latitude and longitude in decimal format (Example: 47.61_-122.33).</p> </li>
     * <li> <p> <code>CC_POSTALCODE</code> (US Only) - the country code (US), followed
     * by the 5-digit ZIP code (Example: US_98121).</p> </li> </ul>
     */
    inline void SetGeolocationFormat(Aws::String&& value) { m_geolocationFormatHasBeenSet = true; m_geolocationFormat = std::move(value); }

    /**
     * <p>The format of the geolocation attribute. The geolocation attribute can be
     * formatted in one of two ways:</p> <ul> <li> <p> <code>LAT_LONG</code> - the
     * latitude and longitude in decimal format (Example: 47.61_-122.33).</p> </li>
     * <li> <p> <code>CC_POSTALCODE</code> (US Only) - the country code (US), followed
     * by the 5-digit ZIP code (Example: US_98121).</p> </li> </ul>
     */
    inline void SetGeolocationFormat(const char* value) { m_geolocationFormatHasBeenSet = true; m_geolocationFormat.assign(value); }

    /**
     * <p>The format of the geolocation attribute. The geolocation attribute can be
     * formatted in one of two ways:</p> <ul> <li> <p> <code>LAT_LONG</code> - the
     * latitude and longitude in decimal format (Example: 47.61_-122.33).</p> </li>
     * <li> <p> <code>CC_POSTALCODE</code> (US Only) - the country code (US), followed
     * by the 5-digit ZIP code (Example: US_98121).</p> </li> </ul>
     */
    inline CreateDatasetImportJobRequest& WithGeolocationFormat(const Aws::String& value) { SetGeolocationFormat(value); return *this;}

    /**
     * <p>The format of the geolocation attribute. The geolocation attribute can be
     * formatted in one of two ways:</p> <ul> <li> <p> <code>LAT_LONG</code> - the
     * latitude and longitude in decimal format (Example: 47.61_-122.33).</p> </li>
     * <li> <p> <code>CC_POSTALCODE</code> (US Only) - the country code (US), followed
     * by the 5-digit ZIP code (Example: US_98121).</p> </li> </ul>
     */
    inline CreateDatasetImportJobRequest& WithGeolocationFormat(Aws::String&& value) { SetGeolocationFormat(std::move(value)); return *this;}

    /**
     * <p>The format of the geolocation attribute. The geolocation attribute can be
     * formatted in one of two ways:</p> <ul> <li> <p> <code>LAT_LONG</code> - the
     * latitude and longitude in decimal format (Example: 47.61_-122.33).</p> </li>
     * <li> <p> <code>CC_POSTALCODE</code> (US Only) - the country code (US), followed
     * by the 5-digit ZIP code (Example: US_98121).</p> </li> </ul>
     */
    inline CreateDatasetImportJobRequest& WithGeolocationFormat(const char* value) { SetGeolocationFormat(value); return *this;}


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
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

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
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

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
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

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
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

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
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline CreateDatasetImportJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

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
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline CreateDatasetImportJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

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
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline CreateDatasetImportJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

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
     * such as a prefix for keys as it is reserved for AWS use. You cannot edit or
     * delete tag keys with this prefix. Values can have this prefix. If a tag value
     * has <code>aws</code> as its prefix but the key does not, then Forecast considers
     * it to be a user tag and will count against the limit of 50 tags. Tags with only
     * the key prefix of <code>aws</code> do not count against your tags per resource
     * limit.</p> </li> </ul>
     */
    inline CreateDatasetImportJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The format of the imported data, CSV or PARQUET. The default value is
     * CSV.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the imported data, CSV or PARQUET. The default value is
     * CSV.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the imported data, CSV or PARQUET. The default value is
     * CSV.</p>
     */
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the imported data, CSV or PARQUET. The default value is
     * CSV.</p>
     */
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the imported data, CSV or PARQUET. The default value is
     * CSV.</p>
     */
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }

    /**
     * <p>The format of the imported data, CSV or PARQUET. The default value is
     * CSV.</p>
     */
    inline CreateDatasetImportJobRequest& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the imported data, CSV or PARQUET. The default value is
     * CSV.</p>
     */
    inline CreateDatasetImportJobRequest& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}

    /**
     * <p>The format of the imported data, CSV or PARQUET. The default value is
     * CSV.</p>
     */
    inline CreateDatasetImportJobRequest& WithFormat(const char* value) { SetFormat(value); return *this;}

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

    bool m_useGeolocationForTimeZone;
    bool m_useGeolocationForTimeZoneHasBeenSet = false;

    Aws::String m_geolocationFormat;
    bool m_geolocationFormatHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
