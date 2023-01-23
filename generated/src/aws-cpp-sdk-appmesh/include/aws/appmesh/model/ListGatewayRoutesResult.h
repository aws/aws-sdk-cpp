/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/GatewayRouteRef.h>
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
  class ListGatewayRoutesResult
  {
  public:
    AWS_APPMESH_API ListGatewayRoutesResult();
    AWS_APPMESH_API ListGatewayRoutesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API ListGatewayRoutesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of existing gateway routes for the specified service mesh and
     * virtual gateway.</p>
     */
    inline const Aws::Vector<GatewayRouteRef>& GetGatewayRoutes() const{ return m_gatewayRoutes; }

    /**
     * <p>The list of existing gateway routes for the specified service mesh and
     * virtual gateway.</p>
     */
    inline void SetGatewayRoutes(const Aws::Vector<GatewayRouteRef>& value) { m_gatewayRoutes = value; }

    /**
     * <p>The list of existing gateway routes for the specified service mesh and
     * virtual gateway.</p>
     */
    inline void SetGatewayRoutes(Aws::Vector<GatewayRouteRef>&& value) { m_gatewayRoutes = std::move(value); }

    /**
     * <p>The list of existing gateway routes for the specified service mesh and
     * virtual gateway.</p>
     */
    inline ListGatewayRoutesResult& WithGatewayRoutes(const Aws::Vector<GatewayRouteRef>& value) { SetGatewayRoutes(value); return *this;}

    /**
     * <p>The list of existing gateway routes for the specified service mesh and
     * virtual gateway.</p>
     */
    inline ListGatewayRoutesResult& WithGatewayRoutes(Aws::Vector<GatewayRouteRef>&& value) { SetGatewayRoutes(std::move(value)); return *this;}

    /**
     * <p>The list of existing gateway routes for the specified service mesh and
     * virtual gateway.</p>
     */
    inline ListGatewayRoutesResult& AddGatewayRoutes(const GatewayRouteRef& value) { m_gatewayRoutes.push_back(value); return *this; }

    /**
     * <p>The list of existing gateway routes for the specified service mesh and
     * virtual gateway.</p>
     */
    inline ListGatewayRoutesResult& AddGatewayRoutes(GatewayRouteRef&& value) { m_gatewayRoutes.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListGatewayRoutes</code> request. When the results of a
     * <code>ListGatewayRoutes</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListGatewayRoutes</code> request. When the results of a
     * <code>ListGatewayRoutes</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListGatewayRoutes</code> request. When the results of a
     * <code>ListGatewayRoutes</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListGatewayRoutes</code> request. When the results of a
     * <code>ListGatewayRoutes</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListGatewayRoutes</code> request. When the results of a
     * <code>ListGatewayRoutes</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListGatewayRoutesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListGatewayRoutes</code> request. When the results of a
     * <code>ListGatewayRoutes</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListGatewayRoutesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListGatewayRoutes</code> request. When the results of a
     * <code>ListGatewayRoutes</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListGatewayRoutesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GatewayRouteRef> m_gatewayRoutes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
