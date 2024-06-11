﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/RouteData.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <zonbook></zonbook><xhtml></xhtml><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateRouteOutput">AWS
   * API Reference</a></p>
   */
  class CreateRouteResult
  {
  public:
    AWS_APPMESH_API CreateRouteResult();
    AWS_APPMESH_API CreateRouteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API CreateRouteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The full description of your mesh following the create call.</p>
     */
    inline const RouteData& GetRoute() const{ return m_route; }
    inline void SetRoute(const RouteData& value) { m_route = value; }
    inline void SetRoute(RouteData&& value) { m_route = std::move(value); }
    inline CreateRouteResult& WithRoute(const RouteData& value) { SetRoute(value); return *this;}
    inline CreateRouteResult& WithRoute(RouteData&& value) { SetRoute(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateRouteResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateRouteResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateRouteResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RouteData m_route;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
