/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/RangedSocketAddress.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Ingress address of AgentEndpoint with a port range and an optional
   * mtu.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/RangedConnectionDetails">AWS
   * API Reference</a></p>
   */
  class RangedConnectionDetails
  {
  public:
    AWS_GROUNDSTATION_API RangedConnectionDetails() = default;
    AWS_GROUNDSTATION_API RangedConnectionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API RangedConnectionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Maximum transmission unit (MTU) size in bytes of a dataflow endpoint.</p>
     */
    inline int GetMtu() const { return m_mtu; }
    inline bool MtuHasBeenSet() const { return m_mtuHasBeenSet; }
    inline void SetMtu(int value) { m_mtuHasBeenSet = true; m_mtu = value; }
    inline RangedConnectionDetails& WithMtu(int value) { SetMtu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A ranged socket address.</p>
     */
    inline const RangedSocketAddress& GetSocketAddress() const { return m_socketAddress; }
    inline bool SocketAddressHasBeenSet() const { return m_socketAddressHasBeenSet; }
    template<typename SocketAddressT = RangedSocketAddress>
    void SetSocketAddress(SocketAddressT&& value) { m_socketAddressHasBeenSet = true; m_socketAddress = std::forward<SocketAddressT>(value); }
    template<typename SocketAddressT = RangedSocketAddress>
    RangedConnectionDetails& WithSocketAddress(SocketAddressT&& value) { SetSocketAddress(std::forward<SocketAddressT>(value)); return *this;}
    ///@}
  private:

    int m_mtu{0};
    bool m_mtuHasBeenSet = false;

    RangedSocketAddress m_socketAddress;
    bool m_socketAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
