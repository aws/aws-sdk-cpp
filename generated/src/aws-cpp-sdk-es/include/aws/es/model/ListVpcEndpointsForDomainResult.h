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
    AWS_ELASTICSEARCHSERVICE_API ListVpcEndpointsForDomainResult() = default;
    AWS_ELASTICSEARCHSERVICE_API ListVpcEndpointsForDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API ListVpcEndpointsForDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides list of <code>VpcEndpointSummary</code> summarizing details of the
     * VPC endpoints.</p>
     */
    inline const Aws::Vector<VpcEndpointSummary>& GetVpcEndpointSummaryList() const { return m_vpcEndpointSummaryList; }
    template<typename VpcEndpointSummaryListT = Aws::Vector<VpcEndpointSummary>>
    void SetVpcEndpointSummaryList(VpcEndpointSummaryListT&& value) { m_vpcEndpointSummaryListHasBeenSet = true; m_vpcEndpointSummaryList = std::forward<VpcEndpointSummaryListT>(value); }
    template<typename VpcEndpointSummaryListT = Aws::Vector<VpcEndpointSummary>>
    ListVpcEndpointsForDomainResult& WithVpcEndpointSummaryList(VpcEndpointSummaryListT&& value) { SetVpcEndpointSummaryList(std::forward<VpcEndpointSummaryListT>(value)); return *this;}
    template<typename VpcEndpointSummaryListT = VpcEndpointSummary>
    ListVpcEndpointsForDomainResult& AddVpcEndpointSummaryList(VpcEndpointSummaryListT&& value) { m_vpcEndpointSummaryListHasBeenSet = true; m_vpcEndpointSummaryList.emplace_back(std::forward<VpcEndpointSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about each endpoint associated with the domain.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVpcEndpointsForDomainResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVpcEndpointsForDomainResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VpcEndpointSummary> m_vpcEndpointSummaryList;
    bool m_vpcEndpointSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
