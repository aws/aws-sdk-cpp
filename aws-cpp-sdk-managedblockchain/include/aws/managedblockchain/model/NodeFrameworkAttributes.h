/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/NodeFabricAttributes.h>
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
   * <p>Attributes relevant to a peer node on a Managed Blockchain network for the
   * blockchain framework that the network uses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/NodeFrameworkAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_MANAGEDBLOCKCHAIN_API NodeFrameworkAttributes
  {
  public:
    NodeFrameworkAttributes();
    NodeFrameworkAttributes(Aws::Utils::Json::JsonView jsonValue);
    NodeFrameworkAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Attributes of Hyperledger Fabric for a peer node on a Managed Blockchain
     * network that uses Hyperledger Fabric.</p>
     */
    inline const NodeFabricAttributes& GetFabric() const{ return m_fabric; }

    /**
     * <p>Attributes of Hyperledger Fabric for a peer node on a Managed Blockchain
     * network that uses Hyperledger Fabric.</p>
     */
    inline bool FabricHasBeenSet() const { return m_fabricHasBeenSet; }

    /**
     * <p>Attributes of Hyperledger Fabric for a peer node on a Managed Blockchain
     * network that uses Hyperledger Fabric.</p>
     */
    inline void SetFabric(const NodeFabricAttributes& value) { m_fabricHasBeenSet = true; m_fabric = value; }

    /**
     * <p>Attributes of Hyperledger Fabric for a peer node on a Managed Blockchain
     * network that uses Hyperledger Fabric.</p>
     */
    inline void SetFabric(NodeFabricAttributes&& value) { m_fabricHasBeenSet = true; m_fabric = std::move(value); }

    /**
     * <p>Attributes of Hyperledger Fabric for a peer node on a Managed Blockchain
     * network that uses Hyperledger Fabric.</p>
     */
    inline NodeFrameworkAttributes& WithFabric(const NodeFabricAttributes& value) { SetFabric(value); return *this;}

    /**
     * <p>Attributes of Hyperledger Fabric for a peer node on a Managed Blockchain
     * network that uses Hyperledger Fabric.</p>
     */
    inline NodeFrameworkAttributes& WithFabric(NodeFabricAttributes&& value) { SetFabric(std::move(value)); return *this;}

  private:

    NodeFabricAttributes m_fabric;
    bool m_fabricHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
