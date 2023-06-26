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
  class CreateDirectConnectGatewayAssociationResult
  {
  public:
    AWS_DIRECTCONNECT_API CreateDirectConnectGatewayAssociationResult();
    AWS_DIRECTCONNECT_API CreateDirectConnectGatewayAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API CreateDirectConnectGatewayAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The association to be created.</p>
     */
    inline const DirectConnectGatewayAssociation& GetDirectConnectGatewayAssociation() const{ return m_directConnectGatewayAssociation; }

    /**
     * <p>The association to be created.</p>
     */
    inline void SetDirectConnectGatewayAssociation(const DirectConnectGatewayAssociation& value) { m_directConnectGatewayAssociation = value; }

    /**
     * <p>The association to be created.</p>
     */
    inline void SetDirectConnectGatewayAssociation(DirectConnectGatewayAssociation&& value) { m_directConnectGatewayAssociation = std::move(value); }

    /**
     * <p>The association to be created.</p>
     */
    inline CreateDirectConnectGatewayAssociationResult& WithDirectConnectGatewayAssociation(const DirectConnectGatewayAssociation& value) { SetDirectConnectGatewayAssociation(value); return *this;}

    /**
     * <p>The association to be created.</p>
     */
    inline CreateDirectConnectGatewayAssociationResult& WithDirectConnectGatewayAssociation(DirectConnectGatewayAssociation&& value) { SetDirectConnectGatewayAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateDirectConnectGatewayAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateDirectConnectGatewayAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateDirectConnectGatewayAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DirectConnectGatewayAssociation m_directConnectGatewayAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
