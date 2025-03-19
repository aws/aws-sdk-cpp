/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LocationService
{
namespace Model
{
  class ListTrackerConsumersResult
  {
  public:
    AWS_LOCATIONSERVICE_API ListTrackerConsumersResult() = default;
    AWS_LOCATIONSERVICE_API ListTrackerConsumersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API ListTrackerConsumersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains the list of geofence collection ARNs associated to the tracker
     * resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConsumerArns() const { return m_consumerArns; }
    template<typename ConsumerArnsT = Aws::Vector<Aws::String>>
    void SetConsumerArns(ConsumerArnsT&& value) { m_consumerArnsHasBeenSet = true; m_consumerArns = std::forward<ConsumerArnsT>(value); }
    template<typename ConsumerArnsT = Aws::Vector<Aws::String>>
    ListTrackerConsumersResult& WithConsumerArns(ConsumerArnsT&& value) { SetConsumerArns(std::forward<ConsumerArnsT>(value)); return *this;}
    template<typename ConsumerArnsT = Aws::String>
    ListTrackerConsumersResult& AddConsumerArns(ConsumerArnsT&& value) { m_consumerArnsHasBeenSet = true; m_consumerArns.emplace_back(std::forward<ConsumerArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTrackerConsumersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTrackerConsumersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_consumerArns;
    bool m_consumerArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
