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
#include <aws/managedblockchain/model/Edition.h>
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
   * <p>Hyperledger Fabric configuration properties for the network.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/NetworkFabricConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MANAGEDBLOCKCHAIN_API NetworkFabricConfiguration
  {
  public:
    NetworkFabricConfiguration();
    NetworkFabricConfiguration(Aws::Utils::Json::JsonView jsonValue);
    NetworkFabricConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The edition of Amazon Managed Blockchain that the network uses. For more
     * information, see <a
     * href="https://aws.amazon.com/managed-blockchain/pricing/">Amazon Managed
     * Blockchain Pricing</a>.</p>
     */
    inline const Edition& GetEdition() const{ return m_edition; }

    /**
     * <p>The edition of Amazon Managed Blockchain that the network uses. For more
     * information, see <a
     * href="https://aws.amazon.com/managed-blockchain/pricing/">Amazon Managed
     * Blockchain Pricing</a>.</p>
     */
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }

    /**
     * <p>The edition of Amazon Managed Blockchain that the network uses. For more
     * information, see <a
     * href="https://aws.amazon.com/managed-blockchain/pricing/">Amazon Managed
     * Blockchain Pricing</a>.</p>
     */
    inline void SetEdition(const Edition& value) { m_editionHasBeenSet = true; m_edition = value; }

    /**
     * <p>The edition of Amazon Managed Blockchain that the network uses. For more
     * information, see <a
     * href="https://aws.amazon.com/managed-blockchain/pricing/">Amazon Managed
     * Blockchain Pricing</a>.</p>
     */
    inline void SetEdition(Edition&& value) { m_editionHasBeenSet = true; m_edition = std::move(value); }

    /**
     * <p>The edition of Amazon Managed Blockchain that the network uses. For more
     * information, see <a
     * href="https://aws.amazon.com/managed-blockchain/pricing/">Amazon Managed
     * Blockchain Pricing</a>.</p>
     */
    inline NetworkFabricConfiguration& WithEdition(const Edition& value) { SetEdition(value); return *this;}

    /**
     * <p>The edition of Amazon Managed Blockchain that the network uses. For more
     * information, see <a
     * href="https://aws.amazon.com/managed-blockchain/pricing/">Amazon Managed
     * Blockchain Pricing</a>.</p>
     */
    inline NetworkFabricConfiguration& WithEdition(Edition&& value) { SetEdition(std::move(value)); return *this;}

  private:

    Edition m_edition;
    bool m_editionHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
