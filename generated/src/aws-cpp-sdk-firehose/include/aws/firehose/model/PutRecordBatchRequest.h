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
    AWS_FIREHOSE_API PutRecordBatchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRecordBatch"; }

    AWS_FIREHOSE_API Aws::String SerializePayload() const override;

    AWS_FIREHOSE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Firehose stream.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const { return m_deliveryStreamName; }
    inline bool DeliveryStreamNameHasBeenSet() const { return m_deliveryStreamNameHasBeenSet; }
    template<typename DeliveryStreamNameT = Aws::String>
    void SetDeliveryStreamName(DeliveryStreamNameT&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = std::forward<DeliveryStreamNameT>(value); }
    template<typename DeliveryStreamNameT = Aws::String>
    PutRecordBatchRequest& WithDeliveryStreamName(DeliveryStreamNameT&& value) { SetDeliveryStreamName(std::forward<DeliveryStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more records.</p>
     */
    inline const Aws::Vector<Record>& GetRecords() const { return m_records; }
    inline bool RecordsHasBeenSet() const { return m_recordsHasBeenSet; }
    template<typename RecordsT = Aws::Vector<Record>>
    void SetRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records = std::forward<RecordsT>(value); }
    template<typename RecordsT = Aws::Vector<Record>>
    PutRecordBatchRequest& WithRecords(RecordsT&& value) { SetRecords(std::forward<RecordsT>(value)); return *this;}
    template<typename RecordsT = Record>
    PutRecordBatchRequest& AddRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records.emplace_back(std::forward<RecordsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet = false;

    Aws::Vector<Record> m_records;
    bool m_recordsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
