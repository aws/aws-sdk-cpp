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
    AWS_CLOUDWATCHLOGS_API UpdateDeliveryConfigurationRequest();

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
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateDeliveryConfigurationRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateDeliveryConfigurationRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateDeliveryConfigurationRequest& WithId(const char* value) { SetId(value); return *this;}
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
    inline UpdateDeliveryConfigurationRequest& WithRecordFields(const Aws::Vector<Aws::String>& value) { SetRecordFields(value); return *this;}
    inline UpdateDeliveryConfigurationRequest& WithRecordFields(Aws::Vector<Aws::String>&& value) { SetRecordFields(std::move(value)); return *this;}
    inline UpdateDeliveryConfigurationRequest& AddRecordFields(const Aws::String& value) { m_recordFieldsHasBeenSet = true; m_recordFields.push_back(value); return *this; }
    inline UpdateDeliveryConfigurationRequest& AddRecordFields(Aws::String&& value) { m_recordFieldsHasBeenSet = true; m_recordFields.push_back(std::move(value)); return *this; }
    inline UpdateDeliveryConfigurationRequest& AddRecordFields(const char* value) { m_recordFieldsHasBeenSet = true; m_recordFields.push_back(value); return *this; }
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
    inline UpdateDeliveryConfigurationRequest& WithFieldDelimiter(const Aws::String& value) { SetFieldDelimiter(value); return *this;}
    inline UpdateDeliveryConfigurationRequest& WithFieldDelimiter(Aws::String&& value) { SetFieldDelimiter(std::move(value)); return *this;}
    inline UpdateDeliveryConfigurationRequest& WithFieldDelimiter(const char* value) { SetFieldDelimiter(value); return *this;}
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
    inline UpdateDeliveryConfigurationRequest& WithS3DeliveryConfiguration(const S3DeliveryConfiguration& value) { SetS3DeliveryConfiguration(value); return *this;}
    inline UpdateDeliveryConfigurationRequest& WithS3DeliveryConfiguration(S3DeliveryConfiguration&& value) { SetS3DeliveryConfiguration(std::move(value)); return *this;}
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
