/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
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
namespace EVS
{
namespace Model
{

  /**
   * <p>An elastic network interface (ENI) that connects hosts to the VLAN subnets.
   * Amazon EVS provisions two identically configured ENIs in the VMkernel management
   * subnet during host creation. One ENI is active, and the other is in standby mode
   * for automatic switchover during a failure scenario.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/NetworkInterface">AWS
   * API Reference</a></p>
   */
  class NetworkInterface
  {
  public:
    AWS_EVS_API NetworkInterface() = default;
    AWS_EVS_API NetworkInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API NetworkInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the elastic network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    NetworkInterface& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
