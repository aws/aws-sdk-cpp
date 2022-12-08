/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayData.h>
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
  class DescribeVirtualGatewayResult
  {
  public:
    AWS_APPMESH_API DescribeVirtualGatewayResult();
    AWS_APPMESH_API DescribeVirtualGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API DescribeVirtualGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of your virtual gateway.</p>
     */
    inline const VirtualGatewayData& GetVirtualGateway() const{ return m_virtualGateway; }

    /**
     * <p>The full description of your virtual gateway.</p>
     */
    inline void SetVirtualGateway(const VirtualGatewayData& value) { m_virtualGateway = value; }

    /**
     * <p>The full description of your virtual gateway.</p>
     */
    inline void SetVirtualGateway(VirtualGatewayData&& value) { m_virtualGateway = std::move(value); }

    /**
     * <p>The full description of your virtual gateway.</p>
     */
    inline DescribeVirtualGatewayResult& WithVirtualGateway(const VirtualGatewayData& value) { SetVirtualGateway(value); return *this;}

    /**
     * <p>The full description of your virtual gateway.</p>
     */
    inline DescribeVirtualGatewayResult& WithVirtualGateway(VirtualGatewayData&& value) { SetVirtualGateway(std::move(value)); return *this;}

  private:

    VirtualGatewayData m_virtualGateway;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
