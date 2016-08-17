/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/SpotFleetRequestConfig.h>

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
  /**
   * <p>Contains the output of DescribeSpotFleetRequests.</p>
   */
  class AWS_EC2_API DescribeSpotFleetRequestsResponse
  {
  public:
    DescribeSpotFleetRequestsResponse();
    DescribeSpotFleetRequestsResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeSpotFleetRequestsResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Information about the configuration of your Spot fleet.</p>
     */
    inline const Aws::Vector<SpotFleetRequestConfig>& GetSpotFleetRequestConfigs() const{ return m_spotFleetRequestConfigs; }

    /**
     * <p>Information about the configuration of your Spot fleet.</p>
     */
    inline void SetSpotFleetRequestConfigs(const Aws::Vector<SpotFleetRequestConfig>& value) { m_spotFleetRequestConfigs = value; }

    /**
     * <p>Information about the configuration of your Spot fleet.</p>
     */
    inline void SetSpotFleetRequestConfigs(Aws::Vector<SpotFleetRequestConfig>&& value) { m_spotFleetRequestConfigs = value; }

    /**
     * <p>Information about the configuration of your Spot fleet.</p>
     */
    inline DescribeSpotFleetRequestsResponse& WithSpotFleetRequestConfigs(const Aws::Vector<SpotFleetRequestConfig>& value) { SetSpotFleetRequestConfigs(value); return *this;}

    /**
     * <p>Information about the configuration of your Spot fleet.</p>
     */
    inline DescribeSpotFleetRequestsResponse& WithSpotFleetRequestConfigs(Aws::Vector<SpotFleetRequestConfig>&& value) { SetSpotFleetRequestConfigs(value); return *this;}

    /**
     * <p>Information about the configuration of your Spot fleet.</p>
     */
    inline DescribeSpotFleetRequestsResponse& AddSpotFleetRequestConfigs(const SpotFleetRequestConfig& value) { m_spotFleetRequestConfigs.push_back(value); return *this; }

    /**
     * <p>Information about the configuration of your Spot fleet.</p>
     */
    inline DescribeSpotFleetRequestsResponse& AddSpotFleetRequestConfigs(SpotFleetRequestConfig&& value) { m_spotFleetRequestConfigs.push_back(value); return *this; }

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeSpotFleetRequestsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeSpotFleetRequestsResponse& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeSpotFleetRequestsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeSpotFleetRequestsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeSpotFleetRequestsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<SpotFleetRequestConfig> m_spotFleetRequestConfigs;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws