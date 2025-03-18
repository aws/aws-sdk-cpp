/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/DeliverySource.h>
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
  class DescribeDeliverySourcesResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeDeliverySourcesResult() = default;
    AWS_CLOUDWATCHLOGS_API DescribeDeliverySourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeDeliverySourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery source in the account.</p>
     */
    inline const Aws::Vector<DeliverySource>& GetDeliverySources() const { return m_deliverySources; }
    template<typename DeliverySourcesT = Aws::Vector<DeliverySource>>
    void SetDeliverySources(DeliverySourcesT&& value) { m_deliverySourcesHasBeenSet = true; m_deliverySources = std::forward<DeliverySourcesT>(value); }
    template<typename DeliverySourcesT = Aws::Vector<DeliverySource>>
    DescribeDeliverySourcesResult& WithDeliverySources(DeliverySourcesT&& value) { SetDeliverySources(std::forward<DeliverySourcesT>(value)); return *this;}
    template<typename DeliverySourcesT = DeliverySource>
    DescribeDeliverySourcesResult& AddDeliverySources(DeliverySourcesT&& value) { m_deliverySourcesHasBeenSet = true; m_deliverySources.emplace_back(std::forward<DeliverySourcesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDeliverySourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDeliverySourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeliverySource> m_deliverySources;
    bool m_deliverySourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
