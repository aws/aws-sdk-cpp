﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/NetworkInsightsAnalysis.h>
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
  class AWS_EC2_API DescribeNetworkInsightsAnalysesResponse
  {
  public:
    DescribeNetworkInsightsAnalysesResponse();
    DescribeNetworkInsightsAnalysesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeNetworkInsightsAnalysesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the network insights analyses.</p>
     */
    inline const Aws::Vector<NetworkInsightsAnalysis>& GetNetworkInsightsAnalyses() const{ return m_networkInsightsAnalyses; }

    /**
     * <p>Information about the network insights analyses.</p>
     */
    inline void SetNetworkInsightsAnalyses(const Aws::Vector<NetworkInsightsAnalysis>& value) { m_networkInsightsAnalyses = value; }

    /**
     * <p>Information about the network insights analyses.</p>
     */
    inline void SetNetworkInsightsAnalyses(Aws::Vector<NetworkInsightsAnalysis>&& value) { m_networkInsightsAnalyses = std::move(value); }

    /**
     * <p>Information about the network insights analyses.</p>
     */
    inline DescribeNetworkInsightsAnalysesResponse& WithNetworkInsightsAnalyses(const Aws::Vector<NetworkInsightsAnalysis>& value) { SetNetworkInsightsAnalyses(value); return *this;}

    /**
     * <p>Information about the network insights analyses.</p>
     */
    inline DescribeNetworkInsightsAnalysesResponse& WithNetworkInsightsAnalyses(Aws::Vector<NetworkInsightsAnalysis>&& value) { SetNetworkInsightsAnalyses(std::move(value)); return *this;}

    /**
     * <p>Information about the network insights analyses.</p>
     */
    inline DescribeNetworkInsightsAnalysesResponse& AddNetworkInsightsAnalyses(const NetworkInsightsAnalysis& value) { m_networkInsightsAnalyses.push_back(value); return *this; }

    /**
     * <p>Information about the network insights analyses.</p>
     */
    inline DescribeNetworkInsightsAnalysesResponse& AddNetworkInsightsAnalyses(NetworkInsightsAnalysis&& value) { m_networkInsightsAnalyses.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeNetworkInsightsAnalysesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeNetworkInsightsAnalysesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeNetworkInsightsAnalysesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeNetworkInsightsAnalysesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeNetworkInsightsAnalysesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<NetworkInsightsAnalysis> m_networkInsightsAnalyses;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
