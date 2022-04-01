﻿/**
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   */
  class AWS_MANAGEDBLOCKCHAIN_API GetNetworkRequest : public ManagedBlockchainRequest
  {
  public:
    GetNetworkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetNetwork"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the network to get information about.</p>
     */
    inline const Aws::String& GetNetworkId() const{ return m_networkId; }

    /**
     * <p>The unique identifier of the network to get information about.</p>
     */
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }

    /**
     * <p>The unique identifier of the network to get information about.</p>
     */
    inline void SetNetworkId(const Aws::String& value) { m_networkIdHasBeenSet = true; m_networkId = value; }

    /**
     * <p>The unique identifier of the network to get information about.</p>
     */
    inline void SetNetworkId(Aws::String&& value) { m_networkIdHasBeenSet = true; m_networkId = std::move(value); }

    /**
     * <p>The unique identifier of the network to get information about.</p>
     */
    inline void SetNetworkId(const char* value) { m_networkIdHasBeenSet = true; m_networkId.assign(value); }

    /**
     * <p>The unique identifier of the network to get information about.</p>
     */
    inline GetNetworkRequest& WithNetworkId(const Aws::String& value) { SetNetworkId(value); return *this;}

    /**
     * <p>The unique identifier of the network to get information about.</p>
     */
    inline GetNetworkRequest& WithNetworkId(Aws::String&& value) { SetNetworkId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the network to get information about.</p>
     */
    inline GetNetworkRequest& WithNetworkId(const char* value) { SetNetworkId(value); return *this;}

  private:

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
