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
  class UpdateDirectConnectGatewayResult
  {
  public:
    AWS_DIRECTCONNECT_API UpdateDirectConnectGatewayResult();
    AWS_DIRECTCONNECT_API UpdateDirectConnectGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API UpdateDirectConnectGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const DirectConnectGateway& GetDirectConnectGateway() const{ return m_directConnectGateway; }

    
    inline void SetDirectConnectGateway(const DirectConnectGateway& value) { m_directConnectGateway = value; }

    
    inline void SetDirectConnectGateway(DirectConnectGateway&& value) { m_directConnectGateway = std::move(value); }

    
    inline UpdateDirectConnectGatewayResult& WithDirectConnectGateway(const DirectConnectGateway& value) { SetDirectConnectGateway(value); return *this;}

    
    inline UpdateDirectConnectGatewayResult& WithDirectConnectGateway(DirectConnectGateway&& value) { SetDirectConnectGateway(std::move(value)); return *this;}

  private:

    DirectConnectGateway m_directConnectGateway;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
