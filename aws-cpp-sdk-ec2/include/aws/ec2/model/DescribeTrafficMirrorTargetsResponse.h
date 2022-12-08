/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TrafficMirrorTarget.h>
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
  class DescribeTrafficMirrorTargetsResponse
  {
  public:
    AWS_EC2_API DescribeTrafficMirrorTargetsResponse();
    AWS_EC2_API DescribeTrafficMirrorTargetsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeTrafficMirrorTargetsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about one or more Traffic Mirror targets.</p>
     */
    inline const Aws::Vector<TrafficMirrorTarget>& GetTrafficMirrorTargets() const{ return m_trafficMirrorTargets; }

    /**
     * <p>Information about one or more Traffic Mirror targets.</p>
     */
    inline void SetTrafficMirrorTargets(const Aws::Vector<TrafficMirrorTarget>& value) { m_trafficMirrorTargets = value; }

    /**
     * <p>Information about one or more Traffic Mirror targets.</p>
     */
    inline void SetTrafficMirrorTargets(Aws::Vector<TrafficMirrorTarget>&& value) { m_trafficMirrorTargets = std::move(value); }

    /**
     * <p>Information about one or more Traffic Mirror targets.</p>
     */
    inline DescribeTrafficMirrorTargetsResponse& WithTrafficMirrorTargets(const Aws::Vector<TrafficMirrorTarget>& value) { SetTrafficMirrorTargets(value); return *this;}

    /**
     * <p>Information about one or more Traffic Mirror targets.</p>
     */
    inline DescribeTrafficMirrorTargetsResponse& WithTrafficMirrorTargets(Aws::Vector<TrafficMirrorTarget>&& value) { SetTrafficMirrorTargets(std::move(value)); return *this;}

    /**
     * <p>Information about one or more Traffic Mirror targets.</p>
     */
    inline DescribeTrafficMirrorTargetsResponse& AddTrafficMirrorTargets(const TrafficMirrorTarget& value) { m_trafficMirrorTargets.push_back(value); return *this; }

    /**
     * <p>Information about one or more Traffic Mirror targets.</p>
     */
    inline DescribeTrafficMirrorTargetsResponse& AddTrafficMirrorTargets(TrafficMirrorTarget&& value) { m_trafficMirrorTargets.push_back(std::move(value)); return *this; }


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
    inline DescribeTrafficMirrorTargetsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeTrafficMirrorTargetsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeTrafficMirrorTargetsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeTrafficMirrorTargetsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTrafficMirrorTargetsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TrafficMirrorTarget> m_trafficMirrorTargets;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
