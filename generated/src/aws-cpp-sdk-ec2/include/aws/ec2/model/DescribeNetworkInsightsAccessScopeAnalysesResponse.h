/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/NetworkInsightsAccessScopeAnalysis.h>
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
  class DescribeNetworkInsightsAccessScopeAnalysesResponse
  {
  public:
    AWS_EC2_API DescribeNetworkInsightsAccessScopeAnalysesResponse();
    AWS_EC2_API DescribeNetworkInsightsAccessScopeAnalysesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeNetworkInsightsAccessScopeAnalysesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Network Access Scope analyses.</p>
     */
    inline const Aws::Vector<NetworkInsightsAccessScopeAnalysis>& GetNetworkInsightsAccessScopeAnalyses() const{ return m_networkInsightsAccessScopeAnalyses; }

    /**
     * <p>The Network Access Scope analyses.</p>
     */
    inline void SetNetworkInsightsAccessScopeAnalyses(const Aws::Vector<NetworkInsightsAccessScopeAnalysis>& value) { m_networkInsightsAccessScopeAnalyses = value; }

    /**
     * <p>The Network Access Scope analyses.</p>
     */
    inline void SetNetworkInsightsAccessScopeAnalyses(Aws::Vector<NetworkInsightsAccessScopeAnalysis>&& value) { m_networkInsightsAccessScopeAnalyses = std::move(value); }

    /**
     * <p>The Network Access Scope analyses.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesResponse& WithNetworkInsightsAccessScopeAnalyses(const Aws::Vector<NetworkInsightsAccessScopeAnalysis>& value) { SetNetworkInsightsAccessScopeAnalyses(value); return *this;}

    /**
     * <p>The Network Access Scope analyses.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesResponse& WithNetworkInsightsAccessScopeAnalyses(Aws::Vector<NetworkInsightsAccessScopeAnalysis>&& value) { SetNetworkInsightsAccessScopeAnalyses(std::move(value)); return *this;}

    /**
     * <p>The Network Access Scope analyses.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesResponse& AddNetworkInsightsAccessScopeAnalyses(const NetworkInsightsAccessScopeAnalysis& value) { m_networkInsightsAccessScopeAnalyses.push_back(value); return *this; }

    /**
     * <p>The Network Access Scope analyses.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesResponse& AddNetworkInsightsAccessScopeAnalyses(NetworkInsightsAccessScopeAnalysis&& value) { m_networkInsightsAccessScopeAnalyses.push_back(std::move(value)); return *this; }


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
    inline DescribeNetworkInsightsAccessScopeAnalysesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeNetworkInsightsAccessScopeAnalysesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeNetworkInsightsAccessScopeAnalysesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeNetworkInsightsAccessScopeAnalysesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<NetworkInsightsAccessScopeAnalysis> m_networkInsightsAccessScopeAnalyses;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
