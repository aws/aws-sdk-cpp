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
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Attributes of Hyperledger Fabric for a network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/NetworkFabricAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_MANAGEDBLOCKCHAIN_API NetworkFabricAttributes
  {
  public:
    NetworkFabricAttributes();
    NetworkFabricAttributes(Aws::Utils::Json::JsonView jsonValue);
    NetworkFabricAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The endpoint of the ordering service for the network.</p>
     */
    inline const Aws::String& GetOrderingServiceEndpoint() const{ return m_orderingServiceEndpoint; }

    /**
     * <p>The endpoint of the ordering service for the network.</p>
     */
    inline bool OrderingServiceEndpointHasBeenSet() const { return m_orderingServiceEndpointHasBeenSet; }

    /**
     * <p>The endpoint of the ordering service for the network.</p>
     */
    inline void SetOrderingServiceEndpoint(const Aws::String& value) { m_orderingServiceEndpointHasBeenSet = true; m_orderingServiceEndpoint = value; }

    /**
     * <p>The endpoint of the ordering service for the network.</p>
     */
    inline void SetOrderingServiceEndpoint(Aws::String&& value) { m_orderingServiceEndpointHasBeenSet = true; m_orderingServiceEndpoint = std::move(value); }

    /**
     * <p>The endpoint of the ordering service for the network.</p>
     */
    inline void SetOrderingServiceEndpoint(const char* value) { m_orderingServiceEndpointHasBeenSet = true; m_orderingServiceEndpoint.assign(value); }

    /**
     * <p>The endpoint of the ordering service for the network.</p>
     */
    inline NetworkFabricAttributes& WithOrderingServiceEndpoint(const Aws::String& value) { SetOrderingServiceEndpoint(value); return *this;}

    /**
     * <p>The endpoint of the ordering service for the network.</p>
     */
    inline NetworkFabricAttributes& WithOrderingServiceEndpoint(Aws::String&& value) { SetOrderingServiceEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint of the ordering service for the network.</p>
     */
    inline NetworkFabricAttributes& WithOrderingServiceEndpoint(const char* value) { SetOrderingServiceEndpoint(value); return *this;}


    /**
     * <p>The edition of Amazon Managed Blockchain that Hyperledger Fabric uses. For
     * more information, see <a
     * href="https://aws.amazon.com/managed-blockchain/pricing/">Amazon Managed
     * Blockchain Pricing</a>.</p>
     */
    inline const Edition& GetEdition() const{ return m_edition; }

    /**
     * <p>The edition of Amazon Managed Blockchain that Hyperledger Fabric uses. For
     * more information, see <a
     * href="https://aws.amazon.com/managed-blockchain/pricing/">Amazon Managed
     * Blockchain Pricing</a>.</p>
     */
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }

    /**
     * <p>The edition of Amazon Managed Blockchain that Hyperledger Fabric uses. For
     * more information, see <a
     * href="https://aws.amazon.com/managed-blockchain/pricing/">Amazon Managed
     * Blockchain Pricing</a>.</p>
     */
    inline void SetEdition(const Edition& value) { m_editionHasBeenSet = true; m_edition = value; }

    /**
     * <p>The edition of Amazon Managed Blockchain that Hyperledger Fabric uses. For
     * more information, see <a
     * href="https://aws.amazon.com/managed-blockchain/pricing/">Amazon Managed
     * Blockchain Pricing</a>.</p>
     */
    inline void SetEdition(Edition&& value) { m_editionHasBeenSet = true; m_edition = std::move(value); }

    /**
     * <p>The edition of Amazon Managed Blockchain that Hyperledger Fabric uses. For
     * more information, see <a
     * href="https://aws.amazon.com/managed-blockchain/pricing/">Amazon Managed
     * Blockchain Pricing</a>.</p>
     */
    inline NetworkFabricAttributes& WithEdition(const Edition& value) { SetEdition(value); return *this;}

    /**
     * <p>The edition of Amazon Managed Blockchain that Hyperledger Fabric uses. For
     * more information, see <a
     * href="https://aws.amazon.com/managed-blockchain/pricing/">Amazon Managed
     * Blockchain Pricing</a>.</p>
     */
    inline NetworkFabricAttributes& WithEdition(Edition&& value) { SetEdition(std::move(value)); return *this;}

  private:

    Aws::String m_orderingServiceEndpoint;
    bool m_orderingServiceEndpointHasBeenSet;

    Edition m_edition;
    bool m_editionHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
