/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/TrafficSourceState.h>
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
namespace AutoScaling
{
namespace Model
{
  class DescribeTrafficSourcesResult
  {
  public:
    AWS_AUTOSCALING_API DescribeTrafficSourcesResult();
    AWS_AUTOSCALING_API DescribeTrafficSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeTrafficSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the traffic sources.</p>
     */
    inline const Aws::Vector<TrafficSourceState>& GetTrafficSources() const{ return m_trafficSources; }

    /**
     * <p>Information about the traffic sources.</p>
     */
    inline void SetTrafficSources(const Aws::Vector<TrafficSourceState>& value) { m_trafficSources = value; }

    /**
     * <p>Information about the traffic sources.</p>
     */
    inline void SetTrafficSources(Aws::Vector<TrafficSourceState>&& value) { m_trafficSources = std::move(value); }

    /**
     * <p>Information about the traffic sources.</p>
     */
    inline DescribeTrafficSourcesResult& WithTrafficSources(const Aws::Vector<TrafficSourceState>& value) { SetTrafficSources(value); return *this;}

    /**
     * <p>Information about the traffic sources.</p>
     */
    inline DescribeTrafficSourcesResult& WithTrafficSources(Aws::Vector<TrafficSourceState>&& value) { SetTrafficSources(std::move(value)); return *this;}

    /**
     * <p>Information about the traffic sources.</p>
     */
    inline DescribeTrafficSourcesResult& AddTrafficSources(const TrafficSourceState& value) { m_trafficSources.push_back(value); return *this; }

    /**
     * <p>Information about the traffic sources.</p>
     */
    inline DescribeTrafficSourcesResult& AddTrafficSources(TrafficSourceState&& value) { m_trafficSources.push_back(std::move(value)); return *this; }


    /**
     * <p>This string indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>This string indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>This string indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>This string indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>This string indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline DescribeTrafficSourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>This string indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline DescribeTrafficSourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>This string indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline DescribeTrafficSourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeTrafficSourcesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTrafficSourcesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TrafficSourceState> m_trafficSources;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
