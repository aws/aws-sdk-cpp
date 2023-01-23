/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/FirehoseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class PutRecordRequest : public FirehoseRequest
  {
  public:
    AWS_FIREHOSE_API PutRecordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRecord"; }

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
    inline PutRecordRequest& WithDeliveryStreamName(const Aws::String& value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline PutRecordRequest& WithDeliveryStreamName(Aws::String&& value) { SetDeliveryStreamName(std::move(value)); return *this;}

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
    inline bool RecordHasBeenSet() const { return m_recordHasBeenSet; }

    /**
     * <p>The record.</p>
     */
    inline void SetRecord(const Record& value) { m_recordHasBeenSet = true; m_record = value; }

    /**
     * <p>The record.</p>
     */
    inline void SetRecord(Record&& value) { m_recordHasBeenSet = true; m_record = std::move(value); }

    /**
     * <p>The record.</p>
     */
    inline PutRecordRequest& WithRecord(const Record& value) { SetRecord(value); return *this;}

    /**
     * <p>The record.</p>
     */
    inline PutRecordRequest& WithRecord(Record&& value) { SetRecord(std::move(value)); return *this;}

  private:

    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet = false;

    Record m_record;
    bool m_recordHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
