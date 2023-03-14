/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/DirectConnectGateway.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateDirectConnectGatewayResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateDirectConnectGatewayResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateDirectConnectGatewayResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DirectConnectGateway m_directConnectGateway;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
