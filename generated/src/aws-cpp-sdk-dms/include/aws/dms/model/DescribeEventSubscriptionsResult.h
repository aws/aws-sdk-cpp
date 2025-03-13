/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/EventSubscription.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEventSubscriptionsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeEventSubscriptionsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEventSubscriptionsResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEventSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEventSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeEventSubscriptionsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of event subscriptions.</p>
     */
    inline const Aws::Vector<EventSubscription>& GetEventSubscriptionsList() const { return m_eventSubscriptionsList; }
    template<typename EventSubscriptionsListT = Aws::Vector<EventSubscription>>
    void SetEventSubscriptionsList(EventSubscriptionsListT&& value) { m_eventSubscriptionsListHasBeenSet = true; m_eventSubscriptionsList = std::forward<EventSubscriptionsListT>(value); }
    template<typename EventSubscriptionsListT = Aws::Vector<EventSubscription>>
    DescribeEventSubscriptionsResult& WithEventSubscriptionsList(EventSubscriptionsListT&& value) { SetEventSubscriptionsList(std::forward<EventSubscriptionsListT>(value)); return *this;}
    template<typename EventSubscriptionsListT = EventSubscription>
    DescribeEventSubscriptionsResult& AddEventSubscriptionsList(EventSubscriptionsListT&& value) { m_eventSubscriptionsListHasBeenSet = true; m_eventSubscriptionsList.emplace_back(std::forward<EventSubscriptionsListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEventSubscriptionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<EventSubscription> m_eventSubscriptionsList;
    bool m_eventSubscriptionsListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
