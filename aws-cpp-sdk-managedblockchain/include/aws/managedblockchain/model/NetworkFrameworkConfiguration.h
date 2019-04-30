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
  class AWS_MANAGEDBLOCKCHAIN_API NetworkFrameworkConfiguration
  {
  public:
    NetworkFrameworkConfiguration();
    NetworkFrameworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    NetworkFrameworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_fabricHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
