/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/VpcEndpointSummary.h>
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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p>Container for response parameters to the
   * <code><a>ListVpcEndpointsForDomain</a></code> operation. Returns a list
   * containing summarized details of the VPC endpoints.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListVpcEndpointsForDomainResponse">AWS
   * API Reference</a></p>
   */
  class ListVpcEndpointsForDomainResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ListVpcEndpointsForDomainResult();
    AWS_ELASTICSEARCHSERVICE_API ListVpcEndpointsForDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API ListVpcEndpointsForDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides list of <code>VpcEndpointSummary</code> summarizing details of the
     * VPC endpoints.</p>
     */
    inline const Aws::Vector<VpcEndpointSummary>& GetVpcEndpointSummaryList() const{ return m_vpcEndpointSummaryList; }

    /**
     * <p>Provides list of <code>VpcEndpointSummary</code> summarizing details of the
     * VPC endpoints.</p>
     */
    inline void SetVpcEndpointSummaryList(const Aws::Vector<VpcEndpointSummary>& value) { m_vpcEndpointSummaryList = value; }

    /**
     * <p>Provides list of <code>VpcEndpointSummary</code> summarizing details of the
     * VPC endpoints.</p>
     */
    inline void SetVpcEndpointSummaryList(Aws::Vector<VpcEndpointSummary>&& value) { m_vpcEndpointSummaryList = std::move(value); }

    /**
     * <p>Provides list of <code>VpcEndpointSummary</code> summarizing details of the
     * VPC endpoints.</p>
     */
    inline ListVpcEndpointsForDomainResult& WithVpcEndpointSummaryList(const Aws::Vector<VpcEndpointSummary>& value) { SetVpcEndpointSummaryList(value); return *this;}

    /**
     * <p>Provides list of <code>VpcEndpointSummary</code> summarizing details of the
     * VPC endpoints.</p>
     */
    inline ListVpcEndpointsForDomainResult& WithVpcEndpointSummaryList(Aws::Vector<VpcEndpointSummary>&& value) { SetVpcEndpointSummaryList(std::move(value)); return *this;}

    /**
     * <p>Provides list of <code>VpcEndpointSummary</code> summarizing details of the
     * VPC endpoints.</p>
     */
    inline ListVpcEndpointsForDomainResult& AddVpcEndpointSummaryList(const VpcEndpointSummary& value) { m_vpcEndpointSummaryList.push_back(value); return *this; }

    /**
     * <p>Provides list of <code>VpcEndpointSummary</code> summarizing details of the
     * VPC endpoints.</p>
     */
    inline ListVpcEndpointsForDomainResult& AddVpcEndpointSummaryList(VpcEndpointSummary&& value) { m_vpcEndpointSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about each endpoint associated with the domain.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Information about each endpoint associated with the domain.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Information about each endpoint associated with the domain.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Information about each endpoint associated with the domain.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Information about each endpoint associated with the domain.</p>
     */
    inline ListVpcEndpointsForDomainResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Information about each endpoint associated with the domain.</p>
     */
    inline ListVpcEndpointsForDomainResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Information about each endpoint associated with the domain.</p>
     */
    inline ListVpcEndpointsForDomainResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<VpcEndpointSummary> m_vpcEndpointSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
