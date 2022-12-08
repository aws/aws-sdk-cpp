/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ManagedBlockchain
{
namespace Model
{

  /**
   */
  class DeleteNodeRequest : public ManagedBlockchainRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API DeleteNodeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteNode"; }

    AWS_MANAGEDBLOCKCHAIN_API Aws::String SerializePayload() const override;

    AWS_MANAGEDBLOCKCHAIN_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique identifier of the network that the node is on.</p> <p>Ethereum
     * public networks have the following <code>NetworkId</code>s:</p> <ul> <li> <p>
     * <code>n-ethereum-mainnet</code> </p> </li> <li> <p>
     * <code>n-ethereum-goerli</code> </p> </li> <li> <p>
     * <code>n-ethereum-rinkeby</code> </p> </li> <li> <p>
     * <code>n-ethereum-ropsten</code> </p> </li> </ul>
     */
    inline const Aws::String& GetNetworkId() const{ return m_networkId; }

    /**
     * <p>The unique identifier of the network that the node is on.</p> <p>Ethereum
     * public networks have the following <code>NetworkId</code>s:</p> <ul> <li> <p>
     * <code>n-ethereum-mainnet</code> </p> </li> <li> <p>
     * <code>n-ethereum-goerli</code> </p> </li> <li> <p>
     * <code>n-ethereum-rinkeby</code> </p> </li> <li> <p>
     * <code>n-ethereum-ropsten</code> </p> </li> </ul>
     */
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }

    /**
     * <p>The unique identifier of the network that the node is on.</p> <p>Ethereum
     * public networks have the following <code>NetworkId</code>s:</p> <ul> <li> <p>
     * <code>n-ethereum-mainnet</code> </p> </li> <li> <p>
     * <code>n-ethereum-goerli</code> </p> </li> <li> <p>
     * <code>n-ethereum-rinkeby</code> </p> </li> <li> <p>
     * <code>n-ethereum-ropsten</code> </p> </li> </ul>
     */
    inline void SetNetworkId(const Aws::String& value) { m_networkIdHasBeenSet = true; m_networkId = value; }

    /**
     * <p>The unique identifier of the network that the node is on.</p> <p>Ethereum
     * public networks have the following <code>NetworkId</code>s:</p> <ul> <li> <p>
     * <code>n-ethereum-mainnet</code> </p> </li> <li> <p>
     * <code>n-ethereum-goerli</code> </p> </li> <li> <p>
     * <code>n-ethereum-rinkeby</code> </p> </li> <li> <p>
     * <code>n-ethereum-ropsten</code> </p> </li> </ul>
     */
    inline void SetNetworkId(Aws::String&& value) { m_networkIdHasBeenSet = true; m_networkId = std::move(value); }

    /**
     * <p>The unique identifier of the network that the node is on.</p> <p>Ethereum
     * public networks have the following <code>NetworkId</code>s:</p> <ul> <li> <p>
     * <code>n-ethereum-mainnet</code> </p> </li> <li> <p>
     * <code>n-ethereum-goerli</code> </p> </li> <li> <p>
     * <code>n-ethereum-rinkeby</code> </p> </li> <li> <p>
     * <code>n-ethereum-ropsten</code> </p> </li> </ul>
     */
    inline void SetNetworkId(const char* value) { m_networkIdHasBeenSet = true; m_networkId.assign(value); }

    /**
     * <p>The unique identifier of the network that the node is on.</p> <p>Ethereum
     * public networks have the following <code>NetworkId</code>s:</p> <ul> <li> <p>
     * <code>n-ethereum-mainnet</code> </p> </li> <li> <p>
     * <code>n-ethereum-goerli</code> </p> </li> <li> <p>
     * <code>n-ethereum-rinkeby</code> </p> </li> <li> <p>
     * <code>n-ethereum-ropsten</code> </p> </li> </ul>
     */
    inline DeleteNodeRequest& WithNetworkId(const Aws::String& value) { SetNetworkId(value); return *this;}

    /**
     * <p>The unique identifier of the network that the node is on.</p> <p>Ethereum
     * public networks have the following <code>NetworkId</code>s:</p> <ul> <li> <p>
     * <code>n-ethereum-mainnet</code> </p> </li> <li> <p>
     * <code>n-ethereum-goerli</code> </p> </li> <li> <p>
     * <code>n-ethereum-rinkeby</code> </p> </li> <li> <p>
     * <code>n-ethereum-ropsten</code> </p> </li> </ul>
     */
    inline DeleteNodeRequest& WithNetworkId(Aws::String&& value) { SetNetworkId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the network that the node is on.</p> <p>Ethereum
     * public networks have the following <code>NetworkId</code>s:</p> <ul> <li> <p>
     * <code>n-ethereum-mainnet</code> </p> </li> <li> <p>
     * <code>n-ethereum-goerli</code> </p> </li> <li> <p>
     * <code>n-ethereum-rinkeby</code> </p> </li> <li> <p>
     * <code>n-ethereum-ropsten</code> </p> </li> </ul>
     */
    inline DeleteNodeRequest& WithNetworkId(const char* value) { SetNetworkId(value); return *this;}


    /**
     * <p>The unique identifier of the member that owns this node.</p> <p>Applies only
     * to Hyperledger Fabric and is required for Hyperledger Fabric.</p>
     */
    inline const Aws::String& GetMemberId() const{ return m_memberId; }

    /**
     * <p>The unique identifier of the member that owns this node.</p> <p>Applies only
     * to Hyperledger Fabric and is required for Hyperledger Fabric.</p>
     */
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }

    /**
     * <p>The unique identifier of the member that owns this node.</p> <p>Applies only
     * to Hyperledger Fabric and is required for Hyperledger Fabric.</p>
     */
    inline void SetMemberId(const Aws::String& value) { m_memberIdHasBeenSet = true; m_memberId = value; }

    /**
     * <p>The unique identifier of the member that owns this node.</p> <p>Applies only
     * to Hyperledger Fabric and is required for Hyperledger Fabric.</p>
     */
    inline void SetMemberId(Aws::String&& value) { m_memberIdHasBeenSet = true; m_memberId = std::move(value); }

    /**
     * <p>The unique identifier of the member that owns this node.</p> <p>Applies only
     * to Hyperledger Fabric and is required for Hyperledger Fabric.</p>
     */
    inline void SetMemberId(const char* value) { m_memberIdHasBeenSet = true; m_memberId.assign(value); }

    /**
     * <p>The unique identifier of the member that owns this node.</p> <p>Applies only
     * to Hyperledger Fabric and is required for Hyperledger Fabric.</p>
     */
    inline DeleteNodeRequest& WithMemberId(const Aws::String& value) { SetMemberId(value); return *this;}

    /**
     * <p>The unique identifier of the member that owns this node.</p> <p>Applies only
     * to Hyperledger Fabric and is required for Hyperledger Fabric.</p>
     */
    inline DeleteNodeRequest& WithMemberId(Aws::String&& value) { SetMemberId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the member that owns this node.</p> <p>Applies only
     * to Hyperledger Fabric and is required for Hyperledger Fabric.</p>
     */
    inline DeleteNodeRequest& WithMemberId(const char* value) { SetMemberId(value); return *this;}


    /**
     * <p>The unique identifier of the node.</p>
     */
    inline const Aws::String& GetNodeId() const{ return m_nodeId; }

    /**
     * <p>The unique identifier of the node.</p>
     */
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }

    /**
     * <p>The unique identifier of the node.</p>
     */
    inline void SetNodeId(const Aws::String& value) { m_nodeIdHasBeenSet = true; m_nodeId = value; }

    /**
     * <p>The unique identifier of the node.</p>
     */
    inline void SetNodeId(Aws::String&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::move(value); }

    /**
     * <p>The unique identifier of the node.</p>
     */
    inline void SetNodeId(const char* value) { m_nodeIdHasBeenSet = true; m_nodeId.assign(value); }

    /**
     * <p>The unique identifier of the node.</p>
     */
    inline DeleteNodeRequest& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}

    /**
     * <p>The unique identifier of the node.</p>
     */
    inline DeleteNodeRequest& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the node.</p>
     */
    inline DeleteNodeRequest& WithNodeId(const char* value) { SetNodeId(value); return *this;}

  private:

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet = false;

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet = false;

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
