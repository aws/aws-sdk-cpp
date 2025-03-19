/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/ResponseMetadata.h>
#include <aws/docdb/model/EventSubscription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace DocDB
{
namespace Model
{
  /**
   * <p>Represents the output of <a>DescribeEventSubscriptions</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/EventSubscriptionsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeEventSubscriptionsResult
  {
  public:
    AWS_DOCDB_API DescribeEventSubscriptionsResult() = default;
    AWS_DOCDB_API DescribeEventSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_DOCDB_API DescribeEventSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
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
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeEventSubscriptionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<EventSubscription> m_eventSubscriptionsList;
    bool m_eventSubscriptionsListHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
