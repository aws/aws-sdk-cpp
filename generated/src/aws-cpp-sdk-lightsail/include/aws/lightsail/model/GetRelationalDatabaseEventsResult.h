/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/RelationalDatabaseEvent.h>
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
namespace Lightsail
{
namespace Model
{
  class GetRelationalDatabaseEventsResult
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabaseEventsResult() = default;
    AWS_LIGHTSAIL_API GetRelationalDatabaseEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetRelationalDatabaseEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object describing the result of your get relational database events
     * request.</p>
     */
    inline const Aws::Vector<RelationalDatabaseEvent>& GetRelationalDatabaseEvents() const { return m_relationalDatabaseEvents; }
    template<typename RelationalDatabaseEventsT = Aws::Vector<RelationalDatabaseEvent>>
    void SetRelationalDatabaseEvents(RelationalDatabaseEventsT&& value) { m_relationalDatabaseEventsHasBeenSet = true; m_relationalDatabaseEvents = std::forward<RelationalDatabaseEventsT>(value); }
    template<typename RelationalDatabaseEventsT = Aws::Vector<RelationalDatabaseEvent>>
    GetRelationalDatabaseEventsResult& WithRelationalDatabaseEvents(RelationalDatabaseEventsT&& value) { SetRelationalDatabaseEvents(std::forward<RelationalDatabaseEventsT>(value)); return *this;}
    template<typename RelationalDatabaseEventsT = RelationalDatabaseEvent>
    GetRelationalDatabaseEventsResult& AddRelationalDatabaseEvents(RelationalDatabaseEventsT&& value) { m_relationalDatabaseEventsHasBeenSet = true; m_relationalDatabaseEvents.emplace_back(std::forward<RelationalDatabaseEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetRelationalDatabaseEvents</code> request and specify the next page token
     * using the <code>pageToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetRelationalDatabaseEventsResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRelationalDatabaseEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RelationalDatabaseEvent> m_relationalDatabaseEvents;
    bool m_relationalDatabaseEventsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
