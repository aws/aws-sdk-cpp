/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/DeliveryDestination.h>
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
  class DescribeDeliveryDestinationsResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeDeliveryDestinationsResult() = default;
    AWS_CLOUDWATCHLOGS_API DescribeDeliveryDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeDeliveryDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures. Each structure contains information about one
     * delivery destination in the account.</p>
     */
    inline const Aws::Vector<DeliveryDestination>& GetDeliveryDestinations() const { return m_deliveryDestinations; }
    template<typename DeliveryDestinationsT = Aws::Vector<DeliveryDestination>>
    void SetDeliveryDestinations(DeliveryDestinationsT&& value) { m_deliveryDestinationsHasBeenSet = true; m_deliveryDestinations = std::forward<DeliveryDestinationsT>(value); }
    template<typename DeliveryDestinationsT = Aws::Vector<DeliveryDestination>>
    DescribeDeliveryDestinationsResult& WithDeliveryDestinations(DeliveryDestinationsT&& value) { SetDeliveryDestinations(std::forward<DeliveryDestinationsT>(value)); return *this;}
    template<typename DeliveryDestinationsT = DeliveryDestination>
    DescribeDeliveryDestinationsResult& AddDeliveryDestinations(DeliveryDestinationsT&& value) { m_deliveryDestinationsHasBeenSet = true; m_deliveryDestinations.emplace_back(std::forward<DeliveryDestinationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDeliveryDestinationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDeliveryDestinationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeliveryDestination> m_deliveryDestinations;
    bool m_deliveryDestinationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
