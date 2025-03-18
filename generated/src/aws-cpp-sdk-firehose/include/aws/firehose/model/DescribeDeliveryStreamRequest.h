/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/FirehoseRequest.h>
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
  class DescribeDeliveryStreamRequest : public FirehoseRequest
  {
  public:
    AWS_FIREHOSE_API DescribeDeliveryStreamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDeliveryStream"; }

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
    DescribeDeliveryStreamRequest& WithDeliveryStreamName(DeliveryStreamNameT&& value) { SetDeliveryStreamName(std::forward<DeliveryStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The limit on the number of destinations to return. You can have one
     * destination per Firehose stream.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeDeliveryStreamRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the destination to start returning the destination information.
     * Firehose supports one destination per Firehose stream.</p>
     */
    inline const Aws::String& GetExclusiveStartDestinationId() const { return m_exclusiveStartDestinationId; }
    inline bool ExclusiveStartDestinationIdHasBeenSet() const { return m_exclusiveStartDestinationIdHasBeenSet; }
    template<typename ExclusiveStartDestinationIdT = Aws::String>
    void SetExclusiveStartDestinationId(ExclusiveStartDestinationIdT&& value) { m_exclusiveStartDestinationIdHasBeenSet = true; m_exclusiveStartDestinationId = std::forward<ExclusiveStartDestinationIdT>(value); }
    template<typename ExclusiveStartDestinationIdT = Aws::String>
    DescribeDeliveryStreamRequest& WithExclusiveStartDestinationId(ExclusiveStartDestinationIdT&& value) { SetExclusiveStartDestinationId(std::forward<ExclusiveStartDestinationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_exclusiveStartDestinationId;
    bool m_exclusiveStartDestinationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
