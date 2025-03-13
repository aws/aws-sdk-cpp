/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/DeliveryDestination.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{
  class PutDeliveryDestinationResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutDeliveryDestinationResult() = default;
    AWS_CLOUDWATCHLOGS_API PutDeliveryDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API PutDeliveryDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure containing information about the delivery destination that you
     * just created or updated.</p>
     */
    inline const DeliveryDestination& GetDeliveryDestination() const { return m_deliveryDestination; }
    template<typename DeliveryDestinationT = DeliveryDestination>
    void SetDeliveryDestination(DeliveryDestinationT&& value) { m_deliveryDestinationHasBeenSet = true; m_deliveryDestination = std::forward<DeliveryDestinationT>(value); }
    template<typename DeliveryDestinationT = DeliveryDestination>
    PutDeliveryDestinationResult& WithDeliveryDestination(DeliveryDestinationT&& value) { SetDeliveryDestination(std::forward<DeliveryDestinationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutDeliveryDestinationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DeliveryDestination m_deliveryDestination;
    bool m_deliveryDestinationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
