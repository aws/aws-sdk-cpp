/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/FirehoseRequest.h>
#include <aws/firehose/model/DeliveryStreamType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Firehose
{
namespace Model
{

  /**
   */
  class ListDeliveryStreamsRequest : public FirehoseRequest
  {
  public:
    AWS_FIREHOSE_API ListDeliveryStreamsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDeliveryStreams"; }

    AWS_FIREHOSE_API Aws::String SerializePayload() const override;

    AWS_FIREHOSE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The maximum number of Firehose streams to list. The default value is 10.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListDeliveryStreamsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Firehose stream type. This can be one of the following values:</p> <ul>
     * <li> <p> <code>DirectPut</code>: Provider applications access the Firehose
     * stream directly.</p> </li> <li> <p> <code>KinesisStreamAsSource</code>: The
     * Firehose stream uses a Kinesis data stream as a source.</p> </li> </ul> <p>This
     * parameter is optional. If this parameter is omitted, Firehose streams of all
     * types are returned.</p>
     */
    inline DeliveryStreamType GetDeliveryStreamType() const { return m_deliveryStreamType; }
    inline bool DeliveryStreamTypeHasBeenSet() const { return m_deliveryStreamTypeHasBeenSet; }
    inline void SetDeliveryStreamType(DeliveryStreamType value) { m_deliveryStreamTypeHasBeenSet = true; m_deliveryStreamType = value; }
    inline ListDeliveryStreamsRequest& WithDeliveryStreamType(DeliveryStreamType value) { SetDeliveryStreamType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Firehose streams returned by this call to
     * <code>ListDeliveryStreams</code> will start with the Firehose stream whose name
     * comes alphabetically immediately after the name you specify in
     * <code>ExclusiveStartDeliveryStreamName</code>.</p>
     */
    inline const Aws::String& GetExclusiveStartDeliveryStreamName() const { return m_exclusiveStartDeliveryStreamName; }
    inline bool ExclusiveStartDeliveryStreamNameHasBeenSet() const { return m_exclusiveStartDeliveryStreamNameHasBeenSet; }
    template<typename ExclusiveStartDeliveryStreamNameT = Aws::String>
    void SetExclusiveStartDeliveryStreamName(ExclusiveStartDeliveryStreamNameT&& value) { m_exclusiveStartDeliveryStreamNameHasBeenSet = true; m_exclusiveStartDeliveryStreamName = std::forward<ExclusiveStartDeliveryStreamNameT>(value); }
    template<typename ExclusiveStartDeliveryStreamNameT = Aws::String>
    ListDeliveryStreamsRequest& WithExclusiveStartDeliveryStreamName(ExclusiveStartDeliveryStreamNameT&& value) { SetExclusiveStartDeliveryStreamName(std::forward<ExclusiveStartDeliveryStreamNameT>(value)); return *this;}
    ///@}
  private:

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    DeliveryStreamType m_deliveryStreamType{DeliveryStreamType::NOT_SET};
    bool m_deliveryStreamTypeHasBeenSet = false;

    Aws::String m_exclusiveStartDeliveryStreamName;
    bool m_exclusiveStartDeliveryStreamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
