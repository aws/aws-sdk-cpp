/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/NodeFabricLogPublishingConfiguration.h>
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
   * <p>Configuration properties for logging events associated with a peer node on a
   * Hyperledger Fabric network on Managed Blockchain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/NodeLogPublishingConfiguration">AWS
   * API Reference</a></p>
   */
  class NodeLogPublishingConfiguration
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API NodeLogPublishingConfiguration();
    AWS_MANAGEDBLOCKCHAIN_API NodeLogPublishingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API NodeLogPublishingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration properties for logging events associated with a node that is
     * owned by a member of a Managed Blockchain network using the Hyperledger Fabric
     * framework.</p>
     */
    inline const NodeFabricLogPublishingConfiguration& GetFabric() const{ return m_fabric; }

    /**
     * <p>Configuration properties for logging events associated with a node that is
     * owned by a member of a Managed Blockchain network using the Hyperledger Fabric
     * framework.</p>
     */
    inline bool FabricHasBeenSet() const { return m_fabricHasBeenSet; }

    /**
     * <p>Configuration properties for logging events associated with a node that is
     * owned by a member of a Managed Blockchain network using the Hyperledger Fabric
     * framework.</p>
     */
    inline void SetFabric(const NodeFabricLogPublishingConfiguration& value) { m_fabricHasBeenSet = true; m_fabric = value; }

    /**
     * <p>Configuration properties for logging events associated with a node that is
     * owned by a member of a Managed Blockchain network using the Hyperledger Fabric
     * framework.</p>
     */
    inline void SetFabric(NodeFabricLogPublishingConfiguration&& value) { m_fabricHasBeenSet = true; m_fabric = std::move(value); }

    /**
     * <p>Configuration properties for logging events associated with a node that is
     * owned by a member of a Managed Blockchain network using the Hyperledger Fabric
     * framework.</p>
     */
    inline NodeLogPublishingConfiguration& WithFabric(const NodeFabricLogPublishingConfiguration& value) { SetFabric(value); return *this;}

    /**
     * <p>Configuration properties for logging events associated with a node that is
     * owned by a member of a Managed Blockchain network using the Hyperledger Fabric
     * framework.</p>
     */
    inline NodeLogPublishingConfiguration& WithFabric(NodeFabricLogPublishingConfiguration&& value) { SetFabric(std::move(value)); return *this;}

  private:

    NodeFabricLogPublishingConfiguration m_fabric;
    bool m_fabricHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
