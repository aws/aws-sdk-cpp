/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/DirectConnectGatewayAssociation.h>
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

  private:

    DirectConnectGatewayAssociation m_directConnectGatewayAssociation;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
