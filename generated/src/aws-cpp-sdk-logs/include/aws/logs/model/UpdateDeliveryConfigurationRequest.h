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
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class UpdateDeliveryConfigurationRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API UpdateDeliveryConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDeliveryConfiguration"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the delivery to be updated by this request.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateDeliveryConfigurationRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
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
    UpdateDeliveryConfigurationRequest& WithRecordFields(RecordFieldsT&& value) { SetRecordFields(std::forward<RecordFieldsT>(value)); return *this;}
    template<typename RecordFieldsT = Aws::String>
    UpdateDeliveryConfigurationRequest& AddRecordFields(RecordFieldsT&& value) { m_recordFieldsHasBeenSet = true; m_recordFields.emplace_back(std::forward<RecordFieldsT>(value)); return *this; }
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
    UpdateDeliveryConfigurationRequest& WithFieldDelimiter(FieldDelimiterT&& value) { SetFieldDelimiter(std::forward<FieldDelimiterT>(value)); return *this;}
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
    UpdateDeliveryConfigurationRequest& WithS3DeliveryConfiguration(S3DeliveryConfigurationT&& value) { SetS3DeliveryConfiguration(std::forward<S3DeliveryConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

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
