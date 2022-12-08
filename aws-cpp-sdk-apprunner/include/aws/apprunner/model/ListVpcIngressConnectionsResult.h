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
    AWS_APPRUNNER_API ListVpcIngressConnectionsResult();
    AWS_APPRUNNER_API ListVpcIngressConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API ListVpcIngressConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of summary information records for VPC Ingress Connections. In a
     * paginated request, the request returns up to <code>MaxResults</code> records for
     * each call.</p>
     */
    inline const Aws::Vector<VpcIngressConnectionSummary>& GetVpcIngressConnectionSummaryList() const{ return m_vpcIngressConnectionSummaryList; }

    /**
     * <p>A list of summary information records for VPC Ingress Connections. In a
     * paginated request, the request returns up to <code>MaxResults</code> records for
     * each call.</p>
     */
    inline void SetVpcIngressConnectionSummaryList(const Aws::Vector<VpcIngressConnectionSummary>& value) { m_vpcIngressConnectionSummaryList = value; }

    /**
     * <p>A list of summary information records for VPC Ingress Connections. In a
     * paginated request, the request returns up to <code>MaxResults</code> records for
     * each call.</p>
     */
    inline void SetVpcIngressConnectionSummaryList(Aws::Vector<VpcIngressConnectionSummary>&& value) { m_vpcIngressConnectionSummaryList = std::move(value); }

    /**
     * <p>A list of summary information records for VPC Ingress Connections. In a
     * paginated request, the request returns up to <code>MaxResults</code> records for
     * each call.</p>
     */
    inline ListVpcIngressConnectionsResult& WithVpcIngressConnectionSummaryList(const Aws::Vector<VpcIngressConnectionSummary>& value) { SetVpcIngressConnectionSummaryList(value); return *this;}

    /**
     * <p>A list of summary information records for VPC Ingress Connections. In a
     * paginated request, the request returns up to <code>MaxResults</code> records for
     * each call.</p>
     */
    inline ListVpcIngressConnectionsResult& WithVpcIngressConnectionSummaryList(Aws::Vector<VpcIngressConnectionSummary>&& value) { SetVpcIngressConnectionSummaryList(std::move(value)); return *this;}

    /**
     * <p>A list of summary information records for VPC Ingress Connections. In a
     * paginated request, the request returns up to <code>MaxResults</code> records for
     * each call.</p>
     */
    inline ListVpcIngressConnectionsResult& AddVpcIngressConnectionSummaryList(const VpcIngressConnectionSummary& value) { m_vpcIngressConnectionSummaryList.push_back(value); return *this; }

    /**
     * <p>A list of summary information records for VPC Ingress Connections. In a
     * paginated request, the request returns up to <code>MaxResults</code> records for
     * each call.</p>
     */
    inline ListVpcIngressConnectionsResult& AddVpcIngressConnectionSummaryList(VpcIngressConnectionSummary&& value) { m_vpcIngressConnectionSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline ListVpcIngressConnectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline ListVpcIngressConnectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline ListVpcIngressConnectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<VpcIngressConnectionSummary> m_vpcIngressConnectionSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
