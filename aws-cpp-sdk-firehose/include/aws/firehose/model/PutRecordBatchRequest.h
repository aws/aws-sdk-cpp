/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/FirehoseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/firehose/model/Record.h>

namespace Aws
{
namespace Firehose
{
namespace Model
{

  /**
   * <p>Contains the parameters for <a>PutRecordBatch</a>.</p>
   */
  class AWS_FIREHOSE_API PutRecordBatchRequest : public FirehoseRequest
  {
  public:
    PutRecordBatchRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const{ return m_deliveryStreamName; }

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline void SetDeliveryStreamName(const Aws::String& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline void SetDeliveryStreamName(Aws::String&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }

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
    inline PutRecordBatchRequest& WithDeliveryStreamName(Aws::String&& value) { SetDeliveryStreamName(value); return *this;}

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
    inline void SetRecords(const Aws::Vector<Record>& value) { m_recordsHasBeenSet = true; m_records = value; }

    /**
     * <p>One or more records.</p>
     */
    inline void SetRecords(Aws::Vector<Record>&& value) { m_recordsHasBeenSet = true; m_records = value; }

    /**
     * <p>One or more records.</p>
     */
    inline PutRecordBatchRequest& WithRecords(const Aws::Vector<Record>& value) { SetRecords(value); return *this;}

    /**
     * <p>One or more records.</p>
     */
    inline PutRecordBatchRequest& WithRecords(Aws::Vector<Record>&& value) { SetRecords(value); return *this;}

    /**
     * <p>One or more records.</p>
     */
    inline PutRecordBatchRequest& AddRecords(const Record& value) { m_recordsHasBeenSet = true; m_records.push_back(value); return *this; }

    /**
     * <p>One or more records.</p>
     */
    inline PutRecordBatchRequest& AddRecords(Record&& value) { m_recordsHasBeenSet = true; m_records.push_back(value); return *this; }

  private:
    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet;
    Aws::Vector<Record> m_records;
    bool m_recordsHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
