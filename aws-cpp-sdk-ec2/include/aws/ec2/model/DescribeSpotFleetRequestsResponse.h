/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SpotFleetRequestConfig.h>
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
  /**
   * <p>Contains the output of DescribeSpotFleetRequests.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotFleetRequestsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeSpotFleetRequestsResponse
  {
  public:
    AWS_EC2_API DescribeSpotFleetRequestsResponse();
    AWS_EC2_API DescribeSpotFleetRequestsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeSpotFleetRequestsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

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
    inline DescribeSpotFleetRequestsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeSpotFleetRequestsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about the configuration of your Spot Fleet.</p>
     */
    inline const Aws::Vector<SpotFleetRequestConfig>& GetSpotFleetRequestConfigs() const{ return m_spotFleetRequestConfigs; }

    /**
     * <p>Information about the configuration of your Spot Fleet.</p>
     */
    inline void SetSpotFleetRequestConfigs(const Aws::Vector<SpotFleetRequestConfig>& value) { m_spotFleetRequestConfigs = value; }

    /**
     * <p>Information about the configuration of your Spot Fleet.</p>
     */
    inline void SetSpotFleetRequestConfigs(Aws::Vector<SpotFleetRequestConfig>&& value) { m_spotFleetRequestConfigs = std::move(value); }

    /**
     * <p>Information about the configuration of your Spot Fleet.</p>
     */
    inline DescribeSpotFleetRequestsResponse& WithSpotFleetRequestConfigs(const Aws::Vector<SpotFleetRequestConfig>& value) { SetSpotFleetRequestConfigs(value); return *this;}

    /**
     * <p>Information about the configuration of your Spot Fleet.</p>
     */
    inline DescribeSpotFleetRequestsResponse& WithSpotFleetRequestConfigs(Aws::Vector<SpotFleetRequestConfig>&& value) { SetSpotFleetRequestConfigs(std::move(value)); return *this;}

    /**
     * <p>Information about the configuration of your Spot Fleet.</p>
     */
    inline DescribeSpotFleetRequestsResponse& AddSpotFleetRequestConfigs(const SpotFleetRequestConfig& value) { m_spotFleetRequestConfigs.push_back(value); return *this; }

    /**
     * <p>Information about the configuration of your Spot Fleet.</p>
     */
    inline DescribeSpotFleetRequestsResponse& AddSpotFleetRequestConfigs(SpotFleetRequestConfig&& value) { m_spotFleetRequestConfigs.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeSpotFleetRequestsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeSpotFleetRequestsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<SpotFleetRequestConfig> m_spotFleetRequestConfigs;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
