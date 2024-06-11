﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/GatewayRouteData.h>
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
  class DescribeGatewayRouteResult
  {
  public:
    AWS_APPMESH_API DescribeGatewayRouteResult();
    AWS_APPMESH_API DescribeGatewayRouteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API DescribeGatewayRouteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The full description of your gateway route.</p>
     */
    inline const GatewayRouteData& GetGatewayRoute() const{ return m_gatewayRoute; }
    inline void SetGatewayRoute(const GatewayRouteData& value) { m_gatewayRoute = value; }
    inline void SetGatewayRoute(GatewayRouteData&& value) { m_gatewayRoute = std::move(value); }
    inline DescribeGatewayRouteResult& WithGatewayRoute(const GatewayRouteData& value) { SetGatewayRoute(value); return *this;}
    inline DescribeGatewayRouteResult& WithGatewayRoute(GatewayRouteData&& value) { SetGatewayRoute(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeGatewayRouteResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeGatewayRouteResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeGatewayRouteResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    GatewayRouteData m_gatewayRoute;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
