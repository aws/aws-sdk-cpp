/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/VpcIngressConnectionSummary.h>
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
namespace AppRunner
{
namespace Model
{
  class ListVpcIngressConnectionsResult
  {
  public:
    AWS_APPRUNNER_API ListVpcIngressConnectionsResult() = default;
    AWS_APPRUNNER_API ListVpcIngressConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API ListVpcIngressConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of summary information records for VPC Ingress Connections. In a
     * paginated request, the request returns up to <code>MaxResults</code> records for
     * each call.</p>
     */
    inline const Aws::Vector<VpcIngressConnectionSummary>& GetVpcIngressConnectionSummaryList() const { return m_vpcIngressConnectionSummaryList; }
    template<typename VpcIngressConnectionSummaryListT = Aws::Vector<VpcIngressConnectionSummary>>
    void SetVpcIngressConnectionSummaryList(VpcIngressConnectionSummaryListT&& value) { m_vpcIngressConnectionSummaryListHasBeenSet = true; m_vpcIngressConnectionSummaryList = std::forward<VpcIngressConnectionSummaryListT>(value); }
    template<typename VpcIngressConnectionSummaryListT = Aws::Vector<VpcIngressConnectionSummary>>
    ListVpcIngressConnectionsResult& WithVpcIngressConnectionSummaryList(VpcIngressConnectionSummaryListT&& value) { SetVpcIngressConnectionSummaryList(std::forward<VpcIngressConnectionSummaryListT>(value)); return *this;}
    template<typename VpcIngressConnectionSummaryListT = VpcIngressConnectionSummary>
    ListVpcIngressConnectionsResult& AddVpcIngressConnectionSummaryList(VpcIngressConnectionSummaryListT&& value) { m_vpcIngressConnectionSummaryListHasBeenSet = true; m_vpcIngressConnectionSummaryList.emplace_back(std::forward<VpcIngressConnectionSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVpcIngressConnectionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVpcIngressConnectionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VpcIngressConnectionSummary> m_vpcIngressConnectionSummaryList;
    bool m_vpcIngressConnectionSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
