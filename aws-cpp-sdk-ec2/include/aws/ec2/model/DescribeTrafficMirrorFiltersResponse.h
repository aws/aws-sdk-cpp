/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TrafficMirrorFilter.h>
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
namespace EC2
{
namespace Model
{
  class AWS_EC2_API DescribeTrafficMirrorFiltersResponse
  {
  public:
    DescribeTrafficMirrorFiltersResponse();
    DescribeTrafficMirrorFiltersResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeTrafficMirrorFiltersResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about one or more Traffic Mirror filters.</p>
     */
    inline const Aws::Vector<TrafficMirrorFilter>& GetTrafficMirrorFilters() const{ return m_trafficMirrorFilters; }

    /**
     * <p>Information about one or more Traffic Mirror filters.</p>
     */
    inline void SetTrafficMirrorFilters(const Aws::Vector<TrafficMirrorFilter>& value) { m_trafficMirrorFilters = value; }

    /**
     * <p>Information about one or more Traffic Mirror filters.</p>
     */
    inline void SetTrafficMirrorFilters(Aws::Vector<TrafficMirrorFilter>&& value) { m_trafficMirrorFilters = std::move(value); }

    /**
     * <p>Information about one or more Traffic Mirror filters.</p>
     */
    inline DescribeTrafficMirrorFiltersResponse& WithTrafficMirrorFilters(const Aws::Vector<TrafficMirrorFilter>& value) { SetTrafficMirrorFilters(value); return *this;}

    /**
     * <p>Information about one or more Traffic Mirror filters.</p>
     */
    inline DescribeTrafficMirrorFiltersResponse& WithTrafficMirrorFilters(Aws::Vector<TrafficMirrorFilter>&& value) { SetTrafficMirrorFilters(std::move(value)); return *this;}

    /**
     * <p>Information about one or more Traffic Mirror filters.</p>
     */
    inline DescribeTrafficMirrorFiltersResponse& AddTrafficMirrorFilters(const TrafficMirrorFilter& value) { m_trafficMirrorFilters.push_back(value); return *this; }

    /**
     * <p>Information about one or more Traffic Mirror filters.</p>
     */
    inline DescribeTrafficMirrorFiltersResponse& AddTrafficMirrorFilters(TrafficMirrorFilter&& value) { m_trafficMirrorFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeTrafficMirrorFiltersResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeTrafficMirrorFiltersResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeTrafficMirrorFiltersResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeTrafficMirrorFiltersResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTrafficMirrorFiltersResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TrafficMirrorFilter> m_trafficMirrorFilters;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
