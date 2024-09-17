/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/S3DeliveryConfiguration.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This structure contains the default values that are used for each
   * configuration parameter when you use <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_CreateDelivery.html">CreateDelivery</a>
   * to create a deliver under the current service type, resource type, and log
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ConfigurationTemplateDeliveryConfigValues">AWS
   * API Reference</a></p>
   */
  class ConfigurationTemplateDeliveryConfigValues
  {
  public:
    AWS_CLOUDWATCHLOGS_API ConfigurationTemplateDeliveryConfigValues();
    AWS_CLOUDWATCHLOGS_API ConfigurationTemplateDeliveryConfigValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API ConfigurationTemplateDeliveryConfigValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default record fields that will be delivered when a list of record fields
     * is not provided in a <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_CreateDelivery.html">CreateDelivery</a>
     * operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecordFields() const{ return m_recordFields; }
    inline bool RecordFieldsHasBeenSet() const { return m_recordFieldsHasBeenSet; }
    inline void SetRecordFields(const Aws::Vector<Aws::String>& value) { m_recordFieldsHasBeenSet = true; m_recordFields = value; }
    inline void SetRecordFields(Aws::Vector<Aws::String>&& value) { m_recordFieldsHasBeenSet = true; m_recordFields = std::move(value); }
    inline ConfigurationTemplateDeliveryConfigValues& WithRecordFields(const Aws::Vector<Aws::String>& value) { SetRecordFields(value); return *this;}
    inline ConfigurationTemplateDeliveryConfigValues& WithRecordFields(Aws::Vector<Aws::String>&& value) { SetRecordFields(std::move(value)); return *this;}
    inline ConfigurationTemplateDeliveryConfigValues& AddRecordFields(const Aws::String& value) { m_recordFieldsHasBeenSet = true; m_recordFields.push_back(value); return *this; }
    inline ConfigurationTemplateDeliveryConfigValues& AddRecordFields(Aws::String&& value) { m_recordFieldsHasBeenSet = true; m_recordFields.push_back(std::move(value)); return *this; }
    inline ConfigurationTemplateDeliveryConfigValues& AddRecordFields(const char* value) { m_recordFieldsHasBeenSet = true; m_recordFields.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The default field delimiter that is used in a <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_CreateDelivery.html">CreateDelivery</a>
     * operation when the field delimiter is not specified in that operation. The field
     * delimiter is used only when the final output delivery is in <code>Plain</code>,
     * <code>W3C</code>, or <code>Raw</code> format.</p>
     */
    inline const Aws::String& GetFieldDelimiter() const{ return m_fieldDelimiter; }
    inline bool FieldDelimiterHasBeenSet() const { return m_fieldDelimiterHasBeenSet; }
    inline void SetFieldDelimiter(const Aws::String& value) { m_fieldDelimiterHasBeenSet = true; m_fieldDelimiter = value; }
    inline void SetFieldDelimiter(Aws::String&& value) { m_fieldDelimiterHasBeenSet = true; m_fieldDelimiter = std::move(value); }
    inline void SetFieldDelimiter(const char* value) { m_fieldDelimiterHasBeenSet = true; m_fieldDelimiter.assign(value); }
    inline ConfigurationTemplateDeliveryConfigValues& WithFieldDelimiter(const Aws::String& value) { SetFieldDelimiter(value); return *this;}
    inline ConfigurationTemplateDeliveryConfigValues& WithFieldDelimiter(Aws::String&& value) { SetFieldDelimiter(std::move(value)); return *this;}
    inline ConfigurationTemplateDeliveryConfigValues& WithFieldDelimiter(const char* value) { SetFieldDelimiter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The delivery parameters that are used when you create a delivery to a
     * delivery destination that is an S3 Bucket.</p>
     */
    inline const S3DeliveryConfiguration& GetS3DeliveryConfiguration() const{ return m_s3DeliveryConfiguration; }
    inline bool S3DeliveryConfigurationHasBeenSet() const { return m_s3DeliveryConfigurationHasBeenSet; }
    inline void SetS3DeliveryConfiguration(const S3DeliveryConfiguration& value) { m_s3DeliveryConfigurationHasBeenSet = true; m_s3DeliveryConfiguration = value; }
    inline void SetS3DeliveryConfiguration(S3DeliveryConfiguration&& value) { m_s3DeliveryConfigurationHasBeenSet = true; m_s3DeliveryConfiguration = std::move(value); }
    inline ConfigurationTemplateDeliveryConfigValues& WithS3DeliveryConfiguration(const S3DeliveryConfiguration& value) { SetS3DeliveryConfiguration(value); return *this;}
    inline ConfigurationTemplateDeliveryConfigValues& WithS3DeliveryConfiguration(S3DeliveryConfiguration&& value) { SetS3DeliveryConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_recordFields;
    bool m_recordFieldsHasBeenSet = false;

    Aws::String m_fieldDelimiter;
    bool m_fieldDelimiterHasBeenSet = false;

    S3DeliveryConfiguration m_s3DeliveryConfiguration;
    bool m_s3DeliveryConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
