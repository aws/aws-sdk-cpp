/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/NetworkFabricAttributes.h>
#include <aws/managedblockchain/model/NetworkEthereumAttributes.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>Attributes relevant to the network for the blockchain framework that the
   * network uses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/NetworkFrameworkAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_MANAGEDBLOCKCHAIN_API NetworkFrameworkAttributes
  {
  public:
    NetworkFrameworkAttributes();
    NetworkFrameworkAttributes(Aws::Utils::Json::JsonView jsonValue);
    NetworkFrameworkAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Attributes of Hyperledger Fabric for a Managed Blockchain network that uses
     * Hyperledger Fabric.</p>
     */
    inline const NetworkFabricAttributes& GetFabric() const{ return m_fabric; }

    /**
     * <p>Attributes of Hyperledger Fabric for a Managed Blockchain network that uses
     * Hyperledger Fabric.</p>
     */
    inline bool FabricHasBeenSet() const { return m_fabricHasBeenSet; }

    /**
     * <p>Attributes of Hyperledger Fabric for a Managed Blockchain network that uses
     * Hyperledger Fabric.</p>
     */
    inline void SetFabric(const NetworkFabricAttributes& value) { m_fabricHasBeenSet = true; m_fabric = value; }

    /**
     * <p>Attributes of Hyperledger Fabric for a Managed Blockchain network that uses
     * Hyperledger Fabric.</p>
     */
    inline void SetFabric(NetworkFabricAttributes&& value) { m_fabricHasBeenSet = true; m_fabric = std::move(value); }

    /**
     * <p>Attributes of Hyperledger Fabric for a Managed Blockchain network that uses
     * Hyperledger Fabric.</p>
     */
    inline NetworkFrameworkAttributes& WithFabric(const NetworkFabricAttributes& value) { SetFabric(value); return *this;}

    /**
     * <p>Attributes of Hyperledger Fabric for a Managed Blockchain network that uses
     * Hyperledger Fabric.</p>
     */
    inline NetworkFrameworkAttributes& WithFabric(NetworkFabricAttributes&& value) { SetFabric(std::move(value)); return *this;}


    /**
     * <p>Attributes of an Ethereum network for Managed Blockchain resources
     * participating in an Ethereum network. </p>
     */
    inline const NetworkEthereumAttributes& GetEthereum() const{ return m_ethereum; }

    /**
     * <p>Attributes of an Ethereum network for Managed Blockchain resources
     * participating in an Ethereum network. </p>
     */
    inline bool EthereumHasBeenSet() const { return m_ethereumHasBeenSet; }

    /**
     * <p>Attributes of an Ethereum network for Managed Blockchain resources
     * participating in an Ethereum network. </p>
     */
    inline void SetEthereum(const NetworkEthereumAttributes& value) { m_ethereumHasBeenSet = true; m_ethereum = value; }

    /**
     * <p>Attributes of an Ethereum network for Managed Blockchain resources
     * participating in an Ethereum network. </p>
     */
    inline void SetEthereum(NetworkEthereumAttributes&& value) { m_ethereumHasBeenSet = true; m_ethereum = std::move(value); }

    /**
     * <p>Attributes of an Ethereum network for Managed Blockchain resources
     * participating in an Ethereum network. </p>
     */
    inline NetworkFrameworkAttributes& WithEthereum(const NetworkEthereumAttributes& value) { SetEthereum(value); return *this;}

    /**
     * <p>Attributes of an Ethereum network for Managed Blockchain resources
     * participating in an Ethereum network. </p>
     */
    inline NetworkFrameworkAttributes& WithEthereum(NetworkEthereumAttributes&& value) { SetEthereum(std::move(value)); return *this;}

  private:

    NetworkFabricAttributes m_fabric;
    bool m_fabricHasBeenSet;

    NetworkEthereumAttributes m_ethereum;
    bool m_ethereumHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
