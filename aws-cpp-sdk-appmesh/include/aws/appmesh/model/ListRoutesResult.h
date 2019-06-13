/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/RouteRef.h>
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
  /**
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListRoutesOutput">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API ListRoutesResult
  {
  public:
    ListRoutesResult();
    ListRoutesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRoutesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRoutes</code> request.
         When the results of a
     * <code>ListRoutes</code> request exceed <code>limit</code>, you can
         use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when
         there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRoutes</code> request.
         When the results of a
     * <code>ListRoutes</code> request exceed <code>limit</code>, you can
         use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when
         there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRoutes</code> request.
         When the results of a
     * <code>ListRoutes</code> request exceed <code>limit</code>, you can
         use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when
         there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRoutes</code> request.
         When the results of a
     * <code>ListRoutes</code> request exceed <code>limit</code>, you can
         use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when
         there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRoutes</code> request.
         When the results of a
     * <code>ListRoutes</code> request exceed <code>limit</code>, you can
         use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when
         there are no more results to return.</p>
     */
    inline ListRoutesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRoutes</code> request.
         When the results of a
     * <code>ListRoutes</code> request exceed <code>limit</code>, you can
         use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when
         there are no more results to return.</p>
     */
    inline ListRoutesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRoutes</code> request.
         When the results of a
     * <code>ListRoutes</code> request exceed <code>limit</code>, you can
         use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when
         there are no more results to return.</p>
     */
    inline ListRoutesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of existing routes for the specified service mesh and virtual
     * router.</p>
     */
    inline const Aws::Vector<RouteRef>& GetRoutes() const{ return m_routes; }

    /**
     * <p>The list of existing routes for the specified service mesh and virtual
     * router.</p>
     */
    inline void SetRoutes(const Aws::Vector<RouteRef>& value) { m_routes = value; }

    /**
     * <p>The list of existing routes for the specified service mesh and virtual
     * router.</p>
     */
    inline void SetRoutes(Aws::Vector<RouteRef>&& value) { m_routes = std::move(value); }

    /**
     * <p>The list of existing routes for the specified service mesh and virtual
     * router.</p>
     */
    inline ListRoutesResult& WithRoutes(const Aws::Vector<RouteRef>& value) { SetRoutes(value); return *this;}

    /**
     * <p>The list of existing routes for the specified service mesh and virtual
     * router.</p>
     */
    inline ListRoutesResult& WithRoutes(Aws::Vector<RouteRef>&& value) { SetRoutes(std::move(value)); return *this;}

    /**
     * <p>The list of existing routes for the specified service mesh and virtual
     * router.</p>
     */
    inline ListRoutesResult& AddRoutes(const RouteRef& value) { m_routes.push_back(value); return *this; }

    /**
     * <p>The list of existing routes for the specified service mesh and virtual
     * router.</p>
     */
    inline ListRoutesResult& AddRoutes(RouteRef&& value) { m_routes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<RouteRef> m_routes;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
