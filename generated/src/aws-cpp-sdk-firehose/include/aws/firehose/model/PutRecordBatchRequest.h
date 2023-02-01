/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/FirehoseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/firehose/model/Record.h>
#include <utility>

namespace Aws
{
namespace Firehose
{
namespace Model
{

  /**
   */
  class PutRecordBatchRequest : public FirehoseRequest
  {
  public:
    AWS_FIREHOSE_API PutRecordBatchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRecordBatch"; }

    AWS_FIREHOSE_API Aws::String SerializePayload() const override;

    AWS_FIREHOSE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the delivery stream.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const{ return m_deliveryStreamName; }

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline bool DeliveryStreamNameHasBeenSet() const { return m_deliveryStreamNameHasBeenSet; }

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline void SetDeliveryStreamName(const Aws::String& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline void SetDeliveryStreamName(Aws::String&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = std::move(value); }

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline void SetDeliveryStreamName(const char* value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName.assign(value); }

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline PutRecordBatchRequest& WithDeliveryStreamName(const Aws::String& value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline PutRecordBatchRequest& WithDeliveryStreamName(Aws::String&& value) { SetDeliveryStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline PutRecordBatchRequest& WithDeliveryStreamName(const char* value) { SetDeliveryStreamName(value); return *this;}


    /**
     * <p>One or more records.</p>
     */
    inline const Aws::Vector<Record>& GetRecords() const{ return m_records; }

    /**
     * <p>One or more records.</p>
     */
    inline bool RecordsHasBeenSet() const { return m_recordsHasBeenSet; }

    /**
     * <p>One or more records.</p>
     */
    inline void SetRecords(const Aws::Vector<Record>& value) { m_recordsHasBeenSet = true; m_records = value; }

    /**
     * <p>One or more records.</p>
     */
    inline void SetRecords(Aws::Vector<Record>&& value) { m_recordsHasBeenSet = true; m_records = std::move(value); }

    /**
     * <p>One or more records.</p>
     */
    inline PutRecordBatchRequest& WithRecords(const Aws::Vector<Record>& value) { SetRecords(value); return *this;}

    /**
     * <p>One or more records.</p>
     */
    inline PutRecordBatchRequest& WithRecords(Aws::Vector<Record>&& value) { SetRecords(std::move(value)); return *this;}

    /**
     * <p>One or more records.</p>
     */
    inline PutRecordBatchRequest& AddRecords(const Record& value) { m_recordsHasBeenSet = true; m_records.push_back(value); return *this; }

    /**
     * <p>One or more records.</p>
     */
    inline PutRecordBatchRequest& AddRecords(Record&& value) { m_recordsHasBeenSet = true; m_records.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet = false;

    Aws::Vector<Record> m_records;
    bool m_recordsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
