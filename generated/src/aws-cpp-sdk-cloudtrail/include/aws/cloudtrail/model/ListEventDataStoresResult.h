/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/EventDataStore.h>
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
namespace CloudTrail
{
namespace Model
{
  class ListEventDataStoresResult
  {
  public:
    AWS_CLOUDTRAIL_API ListEventDataStoresResult() = default;
    AWS_CLOUDTRAIL_API ListEventDataStoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API ListEventDataStoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains information about event data stores in the account, in the current
     * Region.</p>
     */
    inline const Aws::Vector<EventDataStore>& GetEventDataStores() const { return m_eventDataStores; }
    template<typename EventDataStoresT = Aws::Vector<EventDataStore>>
    void SetEventDataStores(EventDataStoresT&& value) { m_eventDataStoresHasBeenSet = true; m_eventDataStores = std::forward<EventDataStoresT>(value); }
    template<typename EventDataStoresT = Aws::Vector<EventDataStore>>
    ListEventDataStoresResult& WithEventDataStores(EventDataStoresT&& value) { SetEventDataStores(std::forward<EventDataStoresT>(value)); return *this;}
    template<typename EventDataStoresT = EventDataStore>
    ListEventDataStoresResult& AddEventDataStores(EventDataStoresT&& value) { m_eventDataStoresHasBeenSet = true; m_eventDataStores.emplace_back(std::forward<EventDataStoresT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token you can use to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEventDataStoresResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEventDataStoresResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventDataStore> m_eventDataStores;
    bool m_eventDataStoresHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
