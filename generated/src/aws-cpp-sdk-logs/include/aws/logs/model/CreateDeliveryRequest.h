/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/S3DeliveryConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class CreateDeliveryRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API CreateDeliveryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDelivery"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the delivery source to use for this delivery.</p>
     */
    inline const Aws::String& GetDeliverySourceName() const{ return m_deliverySourceName; }
    inline bool DeliverySourceNameHasBeenSet() const { return m_deliverySourceNameHasBeenSet; }
    inline void SetDeliverySourceName(const Aws::String& value) { m_deliverySourceNameHasBeenSet = true; m_deliverySourceName = value; }
    inline void SetDeliverySourceName(Aws::String&& value) { m_deliverySourceNameHasBeenSet = true; m_deliverySourceName = std::move(value); }
    inline void SetDeliverySourceName(const char* value) { m_deliverySourceNameHasBeenSet = true; m_deliverySourceName.assign(value); }
    inline CreateDeliveryRequest& WithDeliverySourceName(const Aws::String& value) { SetDeliverySourceName(value); return *this;}
    inline CreateDeliveryRequest& WithDeliverySourceName(Aws::String&& value) { SetDeliverySourceName(std::move(value)); return *this;}
    inline CreateDeliveryRequest& WithDeliverySourceName(const char* value) { SetDeliverySourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the delivery destination to use for this delivery.</p>
     */
    inline const Aws::String& GetDeliveryDestinationArn() const{ return m_deliveryDestinationArn; }
    inline bool DeliveryDestinationArnHasBeenSet() const { return m_deliveryDestinationArnHasBeenSet; }
    inline void SetDeliveryDestinationArn(const Aws::String& value) { m_deliveryDestinationArnHasBeenSet = true; m_deliveryDestinationArn = value; }
    inline void SetDeliveryDestinationArn(Aws::String&& value) { m_deliveryDestinationArnHasBeenSet = true; m_deliveryDestinationArn = std::move(value); }
    inline void SetDeliveryDestinationArn(const char* value) { m_deliveryDestinationArnHasBeenSet = true; m_deliveryDestinationArn.assign(value); }
    inline CreateDeliveryRequest& WithDeliveryDestinationArn(const Aws::String& value) { SetDeliveryDestinationArn(value); return *this;}
    inline CreateDeliveryRequest& WithDeliveryDestinationArn(Aws::String&& value) { SetDeliveryDestinationArn(std::move(value)); return *this;}
    inline CreateDeliveryRequest& WithDeliveryDestinationArn(const char* value) { SetDeliveryDestinationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of record fields to be delivered to the destination, in order. If
     * the delivery's log source has mandatory fields, they must be included in this
     * list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecordFields() const{ return m_recordFields; }
    inline bool RecordFieldsHasBeenSet() const { return m_recordFieldsHasBeenSet; }
    inline void SetRecordFields(const Aws::Vector<Aws::String>& value) { m_recordFieldsHasBeenSet = true; m_recordFields = value; }
    inline void SetRecordFields(Aws::Vector<Aws::String>&& value) { m_recordFieldsHasBeenSet = true; m_recordFields = std::move(value); }
    inline CreateDeliveryRequest& WithRecordFields(const Aws::Vector<Aws::String>& value) { SetRecordFields(value); return *this;}
    inline CreateDeliveryRequest& WithRecordFields(Aws::Vector<Aws::String>&& value) { SetRecordFields(std::move(value)); return *this;}
    inline CreateDeliveryRequest& AddRecordFields(const Aws::String& value) { m_recordFieldsHasBeenSet = true; m_recordFields.push_back(value); return *this; }
    inline CreateDeliveryRequest& AddRecordFields(Aws::String&& value) { m_recordFieldsHasBeenSet = true; m_recordFields.push_back(std::move(value)); return *this; }
    inline CreateDeliveryRequest& AddRecordFields(const char* value) { m_recordFieldsHasBeenSet = true; m_recordFields.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The field delimiter to use between record fields when the final output format
     * of a delivery is in <code>Plain</code>, <code>W3C</code>, or <code>Raw</code>
     * format.</p>
     */
    inline const Aws::String& GetFieldDelimiter() const{ return m_fieldDelimiter; }
    inline bool FieldDelimiterHasBeenSet() const { return m_fieldDelimiterHasBeenSet; }
    inline void SetFieldDelimiter(const Aws::String& value) { m_fieldDelimiterHasBeenSet = true; m_fieldDelimiter = value; }
    inline void SetFieldDelimiter(Aws::String&& value) { m_fieldDelimiterHasBeenSet = true; m_fieldDelimiter = std::move(value); }
    inline void SetFieldDelimiter(const char* value) { m_fieldDelimiterHasBeenSet = true; m_fieldDelimiter.assign(value); }
    inline CreateDeliveryRequest& WithFieldDelimiter(const Aws::String& value) { SetFieldDelimiter(value); return *this;}
    inline CreateDeliveryRequest& WithFieldDelimiter(Aws::String&& value) { SetFieldDelimiter(std::move(value)); return *this;}
    inline CreateDeliveryRequest& WithFieldDelimiter(const char* value) { SetFieldDelimiter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains parameters that are valid only when the delivery's
     * delivery destination is an S3 bucket.</p>
     */
    inline const S3DeliveryConfiguration& GetS3DeliveryConfiguration() const{ return m_s3DeliveryConfiguration; }
    inline bool S3DeliveryConfigurationHasBeenSet() const { return m_s3DeliveryConfigurationHasBeenSet; }
    inline void SetS3DeliveryConfiguration(const S3DeliveryConfiguration& value) { m_s3DeliveryConfigurationHasBeenSet = true; m_s3DeliveryConfiguration = value; }
    inline void SetS3DeliveryConfiguration(S3DeliveryConfiguration&& value) { m_s3DeliveryConfigurationHasBeenSet = true; m_s3DeliveryConfiguration = std::move(value); }
    inline CreateDeliveryRequest& WithS3DeliveryConfiguration(const S3DeliveryConfiguration& value) { SetS3DeliveryConfiguration(value); return *this;}
    inline CreateDeliveryRequest& WithS3DeliveryConfiguration(S3DeliveryConfiguration&& value) { SetS3DeliveryConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDeliveryRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateDeliveryRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDeliveryRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateDeliveryRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateDeliveryRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateDeliveryRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateDeliveryRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateDeliveryRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateDeliveryRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_deliverySourceName;
    bool m_deliverySourceNameHasBeenSet = false;

    Aws::String m_deliveryDestinationArn;
    bool m_deliveryDestinationArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_recordFields;
    bool m_recordFieldsHasBeenSet = false;

    Aws::String m_fieldDelimiter;
    bool m_fieldDelimiterHasBeenSet = false;

    S3DeliveryConfiguration m_s3DeliveryConfiguration;
    bool m_s3DeliveryConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
