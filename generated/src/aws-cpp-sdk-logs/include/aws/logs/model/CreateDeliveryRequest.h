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
    AWS_CLOUDWATCHLOGS_API CreateDeliveryRequest() = default;

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
    inline const Aws::String& GetDeliverySourceName() const { return m_deliverySourceName; }
    inline bool DeliverySourceNameHasBeenSet() const { return m_deliverySourceNameHasBeenSet; }
    template<typename DeliverySourceNameT = Aws::String>
    void SetDeliverySourceName(DeliverySourceNameT&& value) { m_deliverySourceNameHasBeenSet = true; m_deliverySourceName = std::forward<DeliverySourceNameT>(value); }
    template<typename DeliverySourceNameT = Aws::String>
    CreateDeliveryRequest& WithDeliverySourceName(DeliverySourceNameT&& value) { SetDeliverySourceName(std::forward<DeliverySourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the delivery destination to use for this delivery.</p>
     */
    inline const Aws::String& GetDeliveryDestinationArn() const { return m_deliveryDestinationArn; }
    inline bool DeliveryDestinationArnHasBeenSet() const { return m_deliveryDestinationArnHasBeenSet; }
    template<typename DeliveryDestinationArnT = Aws::String>
    void SetDeliveryDestinationArn(DeliveryDestinationArnT&& value) { m_deliveryDestinationArnHasBeenSet = true; m_deliveryDestinationArn = std::forward<DeliveryDestinationArnT>(value); }
    template<typename DeliveryDestinationArnT = Aws::String>
    CreateDeliveryRequest& WithDeliveryDestinationArn(DeliveryDestinationArnT&& value) { SetDeliveryDestinationArn(std::forward<DeliveryDestinationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of record fields to be delivered to the destination, in order. If
     * the delivery's log source has mandatory fields, they must be included in this
     * list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecordFields() const { return m_recordFields; }
    inline bool RecordFieldsHasBeenSet() const { return m_recordFieldsHasBeenSet; }
    template<typename RecordFieldsT = Aws::Vector<Aws::String>>
    void SetRecordFields(RecordFieldsT&& value) { m_recordFieldsHasBeenSet = true; m_recordFields = std::forward<RecordFieldsT>(value); }
    template<typename RecordFieldsT = Aws::Vector<Aws::String>>
    CreateDeliveryRequest& WithRecordFields(RecordFieldsT&& value) { SetRecordFields(std::forward<RecordFieldsT>(value)); return *this;}
    template<typename RecordFieldsT = Aws::String>
    CreateDeliveryRequest& AddRecordFields(RecordFieldsT&& value) { m_recordFieldsHasBeenSet = true; m_recordFields.emplace_back(std::forward<RecordFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The field delimiter to use between record fields when the final output format
     * of a delivery is in <code>Plain</code>, <code>W3C</code>, or <code>Raw</code>
     * format.</p>
     */
    inline const Aws::String& GetFieldDelimiter() const { return m_fieldDelimiter; }
    inline bool FieldDelimiterHasBeenSet() const { return m_fieldDelimiterHasBeenSet; }
    template<typename FieldDelimiterT = Aws::String>
    void SetFieldDelimiter(FieldDelimiterT&& value) { m_fieldDelimiterHasBeenSet = true; m_fieldDelimiter = std::forward<FieldDelimiterT>(value); }
    template<typename FieldDelimiterT = Aws::String>
    CreateDeliveryRequest& WithFieldDelimiter(FieldDelimiterT&& value) { SetFieldDelimiter(std::forward<FieldDelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains parameters that are valid only when the delivery's
     * delivery destination is an S3 bucket.</p>
     */
    inline const S3DeliveryConfiguration& GetS3DeliveryConfiguration() const { return m_s3DeliveryConfiguration; }
    inline bool S3DeliveryConfigurationHasBeenSet() const { return m_s3DeliveryConfigurationHasBeenSet; }
    template<typename S3DeliveryConfigurationT = S3DeliveryConfiguration>
    void SetS3DeliveryConfiguration(S3DeliveryConfigurationT&& value) { m_s3DeliveryConfigurationHasBeenSet = true; m_s3DeliveryConfiguration = std::forward<S3DeliveryConfigurationT>(value); }
    template<typename S3DeliveryConfigurationT = S3DeliveryConfiguration>
    CreateDeliveryRequest& WithS3DeliveryConfiguration(S3DeliveryConfigurationT&& value) { SetS3DeliveryConfiguration(std::forward<S3DeliveryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional list of key-value pairs to associate with the resource.</p>
     * <p>For more information about tagging, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateDeliveryRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateDeliveryRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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
