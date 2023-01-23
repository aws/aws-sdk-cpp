/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/VirtualGatewayRef.h>
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
namespace AppMesh
{
namespace Model
{
  class ListVirtualGatewaysResult
  {
  public:
    AWS_APPMESH_API ListVirtualGatewaysResult();
    AWS_APPMESH_API ListVirtualGatewaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API ListVirtualGatewaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualGateways</code> request. When the results of a
     * <code>ListVirtualGateways</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualGateways</code> request. When the results of a
     * <code>ListVirtualGateways</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualGateways</code> request. When the results of a
     * <code>ListVirtualGateways</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualGateways</code> request. When the results of a
     * <code>ListVirtualGateways</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualGateways</code> request. When the results of a
     * <code>ListVirtualGateways</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListVirtualGatewaysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualGateways</code> request. When the results of a
     * <code>ListVirtualGateways</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListVirtualGatewaysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualGateways</code> request. When the results of a
     * <code>ListVirtualGateways</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListVirtualGatewaysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of existing virtual gateways for the specified service mesh.</p>
     */
    inline const Aws::Vector<VirtualGatewayRef>& GetVirtualGateways() const{ return m_virtualGateways; }

    /**
     * <p>The list of existing virtual gateways for the specified service mesh.</p>
     */
    inline void SetVirtualGateways(const Aws::Vector<VirtualGatewayRef>& value) { m_virtualGateways = value; }

    /**
     * <p>The list of existing virtual gateways for the specified service mesh.</p>
     */
    inline void SetVirtualGateways(Aws::Vector<VirtualGatewayRef>&& value) { m_virtualGateways = std::move(value); }

    /**
     * <p>The list of existing virtual gateways for the specified service mesh.</p>
     */
    inline ListVirtualGatewaysResult& WithVirtualGateways(const Aws::Vector<VirtualGatewayRef>& value) { SetVirtualGateways(value); return *this;}

    /**
     * <p>The list of existing virtual gateways for the specified service mesh.</p>
     */
    inline ListVirtualGatewaysResult& WithVirtualGateways(Aws::Vector<VirtualGatewayRef>&& value) { SetVirtualGateways(std::move(value)); return *this;}

    /**
     * <p>The list of existing virtual gateways for the specified service mesh.</p>
     */
    inline ListVirtualGatewaysResult& AddVirtualGateways(const VirtualGatewayRef& value) { m_virtualGateways.push_back(value); return *this; }

    /**
     * <p>The list of existing virtual gateways for the specified service mesh.</p>
     */
    inline ListVirtualGatewaysResult& AddVirtualGateways(VirtualGatewayRef&& value) { m_virtualGateways.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<VirtualGatewayRef> m_virtualGateways;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
