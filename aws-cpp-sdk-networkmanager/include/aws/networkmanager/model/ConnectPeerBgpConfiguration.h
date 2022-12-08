/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a core network BGP configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ConnectPeerBgpConfiguration">AWS
   * API Reference</a></p>
   */
  class ConnectPeerBgpConfiguration
  {
  public:
    AWS_NETWORKMANAGER_API ConnectPeerBgpConfiguration();
    AWS_NETWORKMANAGER_API ConnectPeerBgpConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API ConnectPeerBgpConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ASN of the Coret Network.</p>
     */
    inline long long GetCoreNetworkAsn() const{ return m_coreNetworkAsn; }

    /**
     * <p>The ASN of the Coret Network.</p>
     */
    inline bool CoreNetworkAsnHasBeenSet() const { return m_coreNetworkAsnHasBeenSet; }

    /**
     * <p>The ASN of the Coret Network.</p>
     */
    inline void SetCoreNetworkAsn(long long value) { m_coreNetworkAsnHasBeenSet = true; m_coreNetworkAsn = value; }

    /**
     * <p>The ASN of the Coret Network.</p>
     */
    inline ConnectPeerBgpConfiguration& WithCoreNetworkAsn(long long value) { SetCoreNetworkAsn(value); return *this;}


    /**
     * <p>The ASN of the Connect peer.</p>
     */
    inline long long GetPeerAsn() const{ return m_peerAsn; }

    /**
     * <p>The ASN of the Connect peer.</p>
     */
    inline bool PeerAsnHasBeenSet() const { return m_peerAsnHasBeenSet; }

    /**
     * <p>The ASN of the Connect peer.</p>
     */
    inline void SetPeerAsn(long long value) { m_peerAsnHasBeenSet = true; m_peerAsn = value; }

    /**
     * <p>The ASN of the Connect peer.</p>
     */
    inline ConnectPeerBgpConfiguration& WithPeerAsn(long long value) { SetPeerAsn(value); return *this;}


    /**
     * <p>The address of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkAddress() const{ return m_coreNetworkAddress; }

    /**
     * <p>The address of a core network.</p>
     */
    inline bool CoreNetworkAddressHasBeenSet() const { return m_coreNetworkAddressHasBeenSet; }

    /**
     * <p>The address of a core network.</p>
     */
    inline void SetCoreNetworkAddress(const Aws::String& value) { m_coreNetworkAddressHasBeenSet = true; m_coreNetworkAddress = value; }

    /**
     * <p>The address of a core network.</p>
     */
    inline void SetCoreNetworkAddress(Aws::String&& value) { m_coreNetworkAddressHasBeenSet = true; m_coreNetworkAddress = std::move(value); }

    /**
     * <p>The address of a core network.</p>
     */
    inline void SetCoreNetworkAddress(const char* value) { m_coreNetworkAddressHasBeenSet = true; m_coreNetworkAddress.assign(value); }

    /**
     * <p>The address of a core network.</p>
     */
    inline ConnectPeerBgpConfiguration& WithCoreNetworkAddress(const Aws::String& value) { SetCoreNetworkAddress(value); return *this;}

    /**
     * <p>The address of a core network.</p>
     */
    inline ConnectPeerBgpConfiguration& WithCoreNetworkAddress(Aws::String&& value) { SetCoreNetworkAddress(std::move(value)); return *this;}

    /**
     * <p>The address of a core network.</p>
     */
    inline ConnectPeerBgpConfiguration& WithCoreNetworkAddress(const char* value) { SetCoreNetworkAddress(value); return *this;}


    /**
     * <p>The address of a core network Connect peer.</p>
     */
    inline const Aws::String& GetPeerAddress() const{ return m_peerAddress; }

    /**
     * <p>The address of a core network Connect peer.</p>
     */
    inline bool PeerAddressHasBeenSet() const { return m_peerAddressHasBeenSet; }

    /**
     * <p>The address of a core network Connect peer.</p>
     */
    inline void SetPeerAddress(const Aws::String& value) { m_peerAddressHasBeenSet = true; m_peerAddress = value; }

    /**
     * <p>The address of a core network Connect peer.</p>
     */
    inline void SetPeerAddress(Aws::String&& value) { m_peerAddressHasBeenSet = true; m_peerAddress = std::move(value); }

    /**
     * <p>The address of a core network Connect peer.</p>
     */
    inline void SetPeerAddress(const char* value) { m_peerAddressHasBeenSet = true; m_peerAddress.assign(value); }

    /**
     * <p>The address of a core network Connect peer.</p>
     */
    inline ConnectPeerBgpConfiguration& WithPeerAddress(const Aws::String& value) { SetPeerAddress(value); return *this;}

    /**
     * <p>The address of a core network Connect peer.</p>
     */
    inline ConnectPeerBgpConfiguration& WithPeerAddress(Aws::String&& value) { SetPeerAddress(std::move(value)); return *this;}

    /**
     * <p>The address of a core network Connect peer.</p>
     */
    inline ConnectPeerBgpConfiguration& WithPeerAddress(const char* value) { SetPeerAddress(value); return *this;}

  private:

    long long m_coreNetworkAsn;
    bool m_coreNetworkAsnHasBeenSet = false;

    long long m_peerAsn;
    bool m_peerAsnHasBeenSet = false;

    Aws::String m_coreNetworkAddress;
    bool m_coreNetworkAddressHasBeenSet = false;

    Aws::String m_peerAddress;
    bool m_peerAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
