/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/DirectConnectGatewayAssociation.h>
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
  class DeleteDirectConnectGatewayAssociationResult
  {
  public:
    AWS_DIRECTCONNECT_API DeleteDirectConnectGatewayAssociationResult();
    AWS_DIRECTCONNECT_API DeleteDirectConnectGatewayAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DeleteDirectConnectGatewayAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the deleted association.</p>
     */
    inline const DirectConnectGatewayAssociation& GetDirectConnectGatewayAssociation() const{ return m_directConnectGatewayAssociation; }

    /**
     * <p>Information about the deleted association.</p>
     */
    inline void SetDirectConnectGatewayAssociation(const DirectConnectGatewayAssociation& value) { m_directConnectGatewayAssociation = value; }

    /**
     * <p>Information about the deleted association.</p>
     */
    inline void SetDirectConnectGatewayAssociation(DirectConnectGatewayAssociation&& value) { m_directConnectGatewayAssociation = std::move(value); }

    /**
     * <p>Information about the deleted association.</p>
     */
    inline DeleteDirectConnectGatewayAssociationResult& WithDirectConnectGatewayAssociation(const DirectConnectGatewayAssociation& value) { SetDirectConnectGatewayAssociation(value); return *this;}

    /**
     * <p>Information about the deleted association.</p>
     */
    inline DeleteDirectConnectGatewayAssociationResult& WithDirectConnectGatewayAssociation(DirectConnectGatewayAssociation&& value) { SetDirectConnectGatewayAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteDirectConnectGatewayAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteDirectConnectGatewayAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteDirectConnectGatewayAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DirectConnectGatewayAssociation m_directConnectGatewayAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
