﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/EventDescription.h>
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
namespace ElasticBeanstalk
{
namespace Model
{
  /**
   * <p>Result message wrapping a list of event descriptions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/EventDescriptionsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API DescribeEventsResult
  {
  public:
    DescribeEventsResult();
    DescribeEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p> A list of <a>EventDescription</a>. </p>
     */
    inline const Aws::Vector<EventDescription>& GetEvents() const{ return m_events; }

    /**
     * <p> A list of <a>EventDescription</a>. </p>
     */
    inline void SetEvents(const Aws::Vector<EventDescription>& value) { m_events = value; }

    /**
     * <p> A list of <a>EventDescription</a>. </p>
     */
    inline void SetEvents(Aws::Vector<EventDescription>&& value) { m_events = std::move(value); }

    /**
     * <p> A list of <a>EventDescription</a>. </p>
     */
    inline DescribeEventsResult& WithEvents(const Aws::Vector<EventDescription>& value) { SetEvents(value); return *this;}

    /**
     * <p> A list of <a>EventDescription</a>. </p>
     */
    inline DescribeEventsResult& WithEvents(Aws::Vector<EventDescription>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p> A list of <a>EventDescription</a>. </p>
     */
    inline DescribeEventsResult& AddEvents(const EventDescription& value) { m_events.push_back(value); return *this; }

    /**
     * <p> A list of <a>EventDescription</a>. </p>
     */
    inline DescribeEventsResult& AddEvents(EventDescription&& value) { m_events.push_back(std::move(value)); return *this; }


    /**
     * <p> If returned, this indicates that there are more results to obtain. Use this
     * token in the next <a>DescribeEvents</a> call to get the next batch of events.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> If returned, this indicates that there are more results to obtain. Use this
     * token in the next <a>DescribeEvents</a> call to get the next batch of events.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> If returned, this indicates that there are more results to obtain. Use this
     * token in the next <a>DescribeEvents</a> call to get the next batch of events.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> If returned, this indicates that there are more results to obtain. Use this
     * token in the next <a>DescribeEvents</a> call to get the next batch of events.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> If returned, this indicates that there are more results to obtain. Use this
     * token in the next <a>DescribeEvents</a> call to get the next batch of events.
     * </p>
     */
    inline DescribeEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> If returned, this indicates that there are more results to obtain. Use this
     * token in the next <a>DescribeEvents</a> call to get the next batch of events.
     * </p>
     */
    inline DescribeEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> If returned, this indicates that there are more results to obtain. Use this
     * token in the next <a>DescribeEvents</a> call to get the next batch of events.
     * </p>
     */
    inline DescribeEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeEventsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeEventsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<EventDescription> m_events;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
