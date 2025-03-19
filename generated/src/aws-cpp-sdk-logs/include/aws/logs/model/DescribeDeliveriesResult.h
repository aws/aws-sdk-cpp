/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/Delivery.h>
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
  class DescribeDeliveriesResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeDeliveriesResult() = default;
    AWS_CLOUDWATCHLOGS_API DescribeDeliveriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeDeliveriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery in the account.</p>
     */
    inline const Aws::Vector<Delivery>& GetDeliveries() const { return m_deliveries; }
    template<typename DeliveriesT = Aws::Vector<Delivery>>
    void SetDeliveries(DeliveriesT&& value) { m_deliveriesHasBeenSet = true; m_deliveries = std::forward<DeliveriesT>(value); }
    template<typename DeliveriesT = Aws::Vector<Delivery>>
    DescribeDeliveriesResult& WithDeliveries(DeliveriesT&& value) { SetDeliveries(std::forward<DeliveriesT>(value)); return *this;}
    template<typename DeliveriesT = Delivery>
    DescribeDeliveriesResult& AddDeliveries(DeliveriesT&& value) { m_deliveriesHasBeenSet = true; m_deliveries.emplace_back(std::forward<DeliveriesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDeliveriesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDeliveriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Delivery> m_deliveries;
    bool m_deliveriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
