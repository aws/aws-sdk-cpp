/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/DeliveryDestinationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/S3DeliveryConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>This structure contains information about one <i>delivery</i> in your
   * account. </p> <p>A delivery is a connection between a logical <i>delivery
   * source</i> and a logical <i>delivery destination</i>.</p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_CreateDelivery.html">CreateDelivery</a>.</p>
   * <p>To update an existing delivery configuration, use <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateDeliveryConfiguration.html">UpdateDeliveryConfiguration</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/Delivery">AWS API
   * Reference</a></p>
   */
  class Delivery
  {
  public:
    AWS_CLOUDWATCHLOGS_API Delivery() = default;
    AWS_CLOUDWATCHLOGS_API Delivery(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Delivery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID that identifies this delivery in your account.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Delivery& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies this delivery.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Delivery& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the delivery source that is associated with this delivery.</p>
     */
    inline const Aws::String& GetDeliverySourceName() const { return m_deliverySourceName; }
    inline bool DeliverySourceNameHasBeenSet() const { return m_deliverySourceNameHasBeenSet; }
    template<typename DeliverySourceNameT = Aws::String>
    void SetDeliverySourceName(DeliverySourceNameT&& value) { m_deliverySourceNameHasBeenSet = true; m_deliverySourceName = std::forward<DeliverySourceNameT>(value); }
    template<typename DeliverySourceNameT = Aws::String>
    Delivery& WithDeliverySourceName(DeliverySourceNameT&& value) { SetDeliverySourceName(std::forward<DeliverySourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the delivery destination that is associated with this
     * delivery.</p>
     */
    inline const Aws::String& GetDeliveryDestinationArn() const { return m_deliveryDestinationArn; }
    inline bool DeliveryDestinationArnHasBeenSet() const { return m_deliveryDestinationArnHasBeenSet; }
    template<typename DeliveryDestinationArnT = Aws::String>
    void SetDeliveryDestinationArn(DeliveryDestinationArnT&& value) { m_deliveryDestinationArnHasBeenSet = true; m_deliveryDestinationArn = std::forward<DeliveryDestinationArnT>(value); }
    template<typename DeliveryDestinationArnT = Aws::String>
    Delivery& WithDeliveryDestinationArn(DeliveryDestinationArnT&& value) { SetDeliveryDestinationArn(std::forward<DeliveryDestinationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays whether the delivery destination associated with this delivery is
     * CloudWatch Logs, Amazon S3, Firehose, or X-Ray.</p>
     */
    inline DeliveryDestinationType GetDeliveryDestinationType() const { return m_deliveryDestinationType; }
    inline bool DeliveryDestinationTypeHasBeenSet() const { return m_deliveryDestinationTypeHasBeenSet; }
    inline void SetDeliveryDestinationType(DeliveryDestinationType value) { m_deliveryDestinationTypeHasBeenSet = true; m_deliveryDestinationType = value; }
    inline Delivery& WithDeliveryDestinationType(DeliveryDestinationType value) { SetDeliveryDestinationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The record fields used in this delivery.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecordFields() const { return m_recordFields; }
    inline bool RecordFieldsHasBeenSet() const { return m_recordFieldsHasBeenSet; }
    template<typename RecordFieldsT = Aws::Vector<Aws::String>>
    void SetRecordFields(RecordFieldsT&& value) { m_recordFieldsHasBeenSet = true; m_recordFields = std::forward<RecordFieldsT>(value); }
    template<typename RecordFieldsT = Aws::Vector<Aws::String>>
    Delivery& WithRecordFields(RecordFieldsT&& value) { SetRecordFields(std::forward<RecordFieldsT>(value)); return *this;}
    template<typename RecordFieldsT = Aws::String>
    Delivery& AddRecordFields(RecordFieldsT&& value) { m_recordFieldsHasBeenSet = true; m_recordFields.emplace_back(std::forward<RecordFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The field delimiter that is used between record fields when the final output
     * format of a delivery is in <code>Plain</code>, <code>W3C</code>, or
     * <code>Raw</code> format.</p>
     */
    inline const Aws::String& GetFieldDelimiter() const { return m_fieldDelimiter; }
    inline bool FieldDelimiterHasBeenSet() const { return m_fieldDelimiterHasBeenSet; }
    template<typename FieldDelimiterT = Aws::String>
    void SetFieldDelimiter(FieldDelimiterT&& value) { m_fieldDelimiterHasBeenSet = true; m_fieldDelimiter = std::forward<FieldDelimiterT>(value); }
    template<typename FieldDelimiterT = Aws::String>
    Delivery& WithFieldDelimiter(FieldDelimiterT&& value) { SetFieldDelimiter(std::forward<FieldDelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains delivery configurations that apply only when the
     * delivery destination resource is an S3 bucket.</p>
     */
    inline const S3DeliveryConfiguration& GetS3DeliveryConfiguration() const { return m_s3DeliveryConfiguration; }
    inline bool S3DeliveryConfigurationHasBeenSet() const { return m_s3DeliveryConfigurationHasBeenSet; }
    template<typename S3DeliveryConfigurationT = S3DeliveryConfiguration>
    void SetS3DeliveryConfiguration(S3DeliveryConfigurationT&& value) { m_s3DeliveryConfigurationHasBeenSet = true; m_s3DeliveryConfiguration = std::forward<S3DeliveryConfigurationT>(value); }
    template<typename S3DeliveryConfigurationT = S3DeliveryConfiguration>
    Delivery& WithS3DeliveryConfiguration(S3DeliveryConfigurationT&& value) { SetS3DeliveryConfiguration(std::forward<S3DeliveryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that have been assigned to this delivery.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Delivery& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Delivery& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_deliverySourceName;
    bool m_deliverySourceNameHasBeenSet = false;

    Aws::String m_deliveryDestinationArn;
    bool m_deliveryDestinationArnHasBeenSet = false;

    DeliveryDestinationType m_deliveryDestinationType{DeliveryDestinationType::NOT_SET};
    bool m_deliveryDestinationTypeHasBeenSet = false;

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
