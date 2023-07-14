﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <aws/elasticache/model/Event.h>
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
namespace ElastiCache
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>DescribeEvents</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/EventsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API DescribeEventsResult
  {
  public:
    DescribeEventsResult();
    DescribeEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeEventsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeEventsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeEventsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of events. Each element in the list contains detailed information
     * about one event.</p>
     */
    inline const Aws::Vector<Event>& GetEvents() const{ return m_events; }

    /**
     * <p>A list of events. Each element in the list contains detailed information
     * about one event.</p>
     */
    inline void SetEvents(const Aws::Vector<Event>& value) { m_events = value; }

    /**
     * <p>A list of events. Each element in the list contains detailed information
     * about one event.</p>
     */
    inline void SetEvents(Aws::Vector<Event>&& value) { m_events = std::move(value); }

    /**
     * <p>A list of events. Each element in the list contains detailed information
     * about one event.</p>
     */
    inline DescribeEventsResult& WithEvents(const Aws::Vector<Event>& value) { SetEvents(value); return *this;}

    /**
     * <p>A list of events. Each element in the list contains detailed information
     * about one event.</p>
     */
    inline DescribeEventsResult& WithEvents(Aws::Vector<Event>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>A list of events. Each element in the list contains detailed information
     * about one event.</p>
     */
    inline DescribeEventsResult& AddEvents(const Event& value) { m_events.push_back(value); return *this; }

    /**
     * <p>A list of events. Each element in the list contains detailed information
     * about one event.</p>
     */
    inline DescribeEventsResult& AddEvents(Event&& value) { m_events.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeEventsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeEventsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<Event> m_events;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
