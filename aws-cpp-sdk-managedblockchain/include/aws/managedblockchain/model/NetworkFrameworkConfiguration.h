/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/NetworkFabricConfiguration.h>
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
   * <p> Configuration properties relevant to the network for the blockchain
   * framework that the network uses. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/NetworkFrameworkConfiguration">AWS
   * API Reference</a></p>
   */
  class NetworkFrameworkConfiguration
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API NetworkFrameworkConfiguration();
    AWS_MANAGEDBLOCKCHAIN_API NetworkFrameworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API NetworkFrameworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Hyperledger Fabric configuration properties for a Managed Blockchain network
     * that uses Hyperledger Fabric. </p>
     */
    inline const NetworkFabricConfiguration& GetFabric() const{ return m_fabric; }

    /**
     * <p> Hyperledger Fabric configuration properties for a Managed Blockchain network
     * that uses Hyperledger Fabric. </p>
     */
    inline bool FabricHasBeenSet() const { return m_fabricHasBeenSet; }

    /**
     * <p> Hyperledger Fabric configuration properties for a Managed Blockchain network
     * that uses Hyperledger Fabric. </p>
     */
    inline void SetFabric(const NetworkFabricConfiguration& value) { m_fabricHasBeenSet = true; m_fabric = value; }

    /**
     * <p> Hyperledger Fabric configuration properties for a Managed Blockchain network
     * that uses Hyperledger Fabric. </p>
     */
    inline void SetFabric(NetworkFabricConfiguration&& value) { m_fabricHasBeenSet = true; m_fabric = std::move(value); }

    /**
     * <p> Hyperledger Fabric configuration properties for a Managed Blockchain network
     * that uses Hyperledger Fabric. </p>
     */
    inline NetworkFrameworkConfiguration& WithFabric(const NetworkFabricConfiguration& value) { SetFabric(value); return *this;}

    /**
     * <p> Hyperledger Fabric configuration properties for a Managed Blockchain network
     * that uses Hyperledger Fabric. </p>
     */
    inline NetworkFrameworkConfiguration& WithFabric(NetworkFabricConfiguration&& value) { SetFabric(std::move(value)); return *this;}

  private:

    NetworkFabricConfiguration m_fabric;
    bool m_fabricHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
