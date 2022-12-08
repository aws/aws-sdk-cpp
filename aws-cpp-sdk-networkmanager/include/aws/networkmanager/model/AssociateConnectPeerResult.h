/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ConnectPeerAssociation.h>
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
namespace NetworkManager
{
namespace Model
{
  class AssociateConnectPeerResult
  {
  public:
    AWS_NETWORKMANAGER_API AssociateConnectPeerResult();
    AWS_NETWORKMANAGER_API AssociateConnectPeerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API AssociateConnectPeerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The response to the Connect peer request.</p>
     */
    inline const ConnectPeerAssociation& GetConnectPeerAssociation() const{ return m_connectPeerAssociation; }

    /**
     * <p>The response to the Connect peer request.</p>
     */
    inline void SetConnectPeerAssociation(const ConnectPeerAssociation& value) { m_connectPeerAssociation = value; }

    /**
     * <p>The response to the Connect peer request.</p>
     */
    inline void SetConnectPeerAssociation(ConnectPeerAssociation&& value) { m_connectPeerAssociation = std::move(value); }

    /**
     * <p>The response to the Connect peer request.</p>
     */
    inline AssociateConnectPeerResult& WithConnectPeerAssociation(const ConnectPeerAssociation& value) { SetConnectPeerAssociation(value); return *this;}

    /**
     * <p>The response to the Connect peer request.</p>
     */
    inline AssociateConnectPeerResult& WithConnectPeerAssociation(ConnectPeerAssociation&& value) { SetConnectPeerAssociation(std::move(value)); return *this;}

  private:

    ConnectPeerAssociation m_connectPeerAssociation;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
