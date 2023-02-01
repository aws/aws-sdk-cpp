/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/VpcConnector.h>
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
  class ListVpcConnectorsResult
  {
  public:
    AWS_APPRUNNER_API ListVpcConnectorsResult();
    AWS_APPRUNNER_API ListVpcConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API ListVpcConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of information records for VPC connectors. In a paginated request, the
     * request returns up to <code>MaxResults</code> records for each call.</p>
     */
    inline const Aws::Vector<VpcConnector>& GetVpcConnectors() const{ return m_vpcConnectors; }

    /**
     * <p>A list of information records for VPC connectors. In a paginated request, the
     * request returns up to <code>MaxResults</code> records for each call.</p>
     */
    inline void SetVpcConnectors(const Aws::Vector<VpcConnector>& value) { m_vpcConnectors = value; }

    /**
     * <p>A list of information records for VPC connectors. In a paginated request, the
     * request returns up to <code>MaxResults</code> records for each call.</p>
     */
    inline void SetVpcConnectors(Aws::Vector<VpcConnector>&& value) { m_vpcConnectors = std::move(value); }

    /**
     * <p>A list of information records for VPC connectors. In a paginated request, the
     * request returns up to <code>MaxResults</code> records for each call.</p>
     */
    inline ListVpcConnectorsResult& WithVpcConnectors(const Aws::Vector<VpcConnector>& value) { SetVpcConnectors(value); return *this;}

    /**
     * <p>A list of information records for VPC connectors. In a paginated request, the
     * request returns up to <code>MaxResults</code> records for each call.</p>
     */
    inline ListVpcConnectorsResult& WithVpcConnectors(Aws::Vector<VpcConnector>&& value) { SetVpcConnectors(std::move(value)); return *this;}

    /**
     * <p>A list of information records for VPC connectors. In a paginated request, the
     * request returns up to <code>MaxResults</code> records for each call.</p>
     */
    inline ListVpcConnectorsResult& AddVpcConnectors(const VpcConnector& value) { m_vpcConnectors.push_back(value); return *this; }

    /**
     * <p>A list of information records for VPC connectors. In a paginated request, the
     * request returns up to <code>MaxResults</code> records for each call.</p>
     */
    inline ListVpcConnectorsResult& AddVpcConnectors(VpcConnector&& value) { m_vpcConnectors.push_back(std::move(value)); return *this; }


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
    inline ListVpcConnectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline ListVpcConnectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline ListVpcConnectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<VpcConnector> m_vpcConnectors;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
