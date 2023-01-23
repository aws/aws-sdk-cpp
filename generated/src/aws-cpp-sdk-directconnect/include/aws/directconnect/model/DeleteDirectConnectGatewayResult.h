/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/DirectConnectGateway.h>
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
namespace DirectConnect
{
namespace Model
{
  class DeleteDirectConnectGatewayResult
  {
  public:
    AWS_DIRECTCONNECT_API DeleteDirectConnectGatewayResult();
    AWS_DIRECTCONNECT_API DeleteDirectConnectGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DeleteDirectConnectGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Direct Connect gateway.</p>
     */
    inline const DirectConnectGateway& GetDirectConnectGateway() const{ return m_directConnectGateway; }

    /**
     * <p>The Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGateway(const DirectConnectGateway& value) { m_directConnectGateway = value; }

    /**
     * <p>The Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGateway(DirectConnectGateway&& value) { m_directConnectGateway = std::move(value); }

    /**
     * <p>The Direct Connect gateway.</p>
     */
    inline DeleteDirectConnectGatewayResult& WithDirectConnectGateway(const DirectConnectGateway& value) { SetDirectConnectGateway(value); return *this;}

    /**
     * <p>The Direct Connect gateway.</p>
     */
    inline DeleteDirectConnectGatewayResult& WithDirectConnectGateway(DirectConnectGateway&& value) { SetDirectConnectGateway(std::move(value)); return *this;}

  private:

    DirectConnectGateway m_directConnectGateway;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
