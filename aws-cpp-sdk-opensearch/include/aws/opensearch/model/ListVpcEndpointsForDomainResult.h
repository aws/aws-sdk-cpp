/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/VpcEndpointSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{
  class ListVpcEndpointsForDomainResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API ListVpcEndpointsForDomainResult();
    AWS_OPENSEARCHSERVICE_API ListVpcEndpointsForDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API ListVpcEndpointsForDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about each endpoint associated with the domain.</p>
     */
    inline const Aws::Vector<VpcEndpointSummary>& GetVpcEndpointSummaryList() const{ return m_vpcEndpointSummaryList; }

    /**
     * <p>Information about each endpoint associated with the domain.</p>
     */
    inline void SetVpcEndpointSummaryList(const Aws::Vector<VpcEndpointSummary>& value) { m_vpcEndpointSummaryList = value; }

    /**
     * <p>Information about each endpoint associated with the domain.</p>
     */
    inline void SetVpcEndpointSummaryList(Aws::Vector<VpcEndpointSummary>&& value) { m_vpcEndpointSummaryList = std::move(value); }

    /**
     * <p>Information about each endpoint associated with the domain.</p>
     */
    inline ListVpcEndpointsForDomainResult& WithVpcEndpointSummaryList(const Aws::Vector<VpcEndpointSummary>& value) { SetVpcEndpointSummaryList(value); return *this;}

    /**
     * <p>Information about each endpoint associated with the domain.</p>
     */
    inline ListVpcEndpointsForDomainResult& WithVpcEndpointSummaryList(Aws::Vector<VpcEndpointSummary>&& value) { SetVpcEndpointSummaryList(std::move(value)); return *this;}

    /**
     * <p>Information about each endpoint associated with the domain.</p>
     */
    inline ListVpcEndpointsForDomainResult& AddVpcEndpointSummaryList(const VpcEndpointSummary& value) { m_vpcEndpointSummaryList.push_back(value); return *this; }

    /**
     * <p>Information about each endpoint associated with the domain.</p>
     */
    inline ListVpcEndpointsForDomainResult& AddVpcEndpointSummaryList(VpcEndpointSummary&& value) { m_vpcEndpointSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListVpcEndpointsForDomainResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListVpcEndpointsForDomainResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListVpcEndpointsForDomainResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<VpcEndpointSummary> m_vpcEndpointSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
