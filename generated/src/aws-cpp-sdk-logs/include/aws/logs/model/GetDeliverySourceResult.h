/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/DeliverySource.h>
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
  class GetDeliverySourceResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API GetDeliverySourceResult() = default;
    AWS_CLOUDWATCHLOGS_API GetDeliverySourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API GetDeliverySourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure containing information about the delivery source.</p>
     */
    inline const DeliverySource& GetDeliverySource() const { return m_deliverySource; }
    template<typename DeliverySourceT = DeliverySource>
    void SetDeliverySource(DeliverySourceT&& value) { m_deliverySourceHasBeenSet = true; m_deliverySource = std::forward<DeliverySourceT>(value); }
    template<typename DeliverySourceT = DeliverySource>
    GetDeliverySourceResult& WithDeliverySource(DeliverySourceT&& value) { SetDeliverySource(std::forward<DeliverySourceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDeliverySourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DeliverySource m_deliverySource;
    bool m_deliverySourceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
