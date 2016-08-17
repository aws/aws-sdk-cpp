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
#include <aws/firehose/model/Record.h>

namespace Aws
{
namespace Firehose
{
namespace Model
{

  /**
   * <p>Contains the parameters for <a>PutRecord</a>.</p>
   */
  class AWS_FIREHOSE_API PutRecordRequest : public FirehoseRequest
  {
  public:
    PutRecordRequest();
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
    inline PutRecordRequest& WithDeliveryStreamName(const Aws::String& value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline PutRecordRequest& WithDeliveryStreamName(Aws::String&& value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline PutRecordRequest& WithDeliveryStreamName(const char* value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The record.</p>
     */
    inline const Record& GetRecord() const{ return m_record; }

    /**
     * <p>The record.</p>
     */
    inline void SetRecord(const Record& value) { m_recordHasBeenSet = true; m_record = value; }

    /**
     * <p>The record.</p>
     */
    inline void SetRecord(Record&& value) { m_recordHasBeenSet = true; m_record = value; }

    /**
     * <p>The record.</p>
     */
    inline PutRecordRequest& WithRecord(const Record& value) { SetRecord(value); return *this;}

    /**
     * <p>The record.</p>
     */
    inline PutRecordRequest& WithRecord(Record&& value) { SetRecord(value); return *this;}

  private:
    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet;
    Record m_record;
    bool m_recordHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
