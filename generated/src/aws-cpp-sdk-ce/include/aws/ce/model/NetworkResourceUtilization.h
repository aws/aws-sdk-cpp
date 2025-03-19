/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The network field that contains a list of network metrics that are associated
   * with the current instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/NetworkResourceUtilization">AWS
   * API Reference</a></p>
   */
  class NetworkResourceUtilization
  {
  public:
    AWS_COSTEXPLORER_API NetworkResourceUtilization() = default;
    AWS_COSTEXPLORER_API NetworkResourceUtilization(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API NetworkResourceUtilization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The network inbound throughput utilization measured in Bytes per second
     * (Bps). </p>
     */
    inline const Aws::String& GetNetworkInBytesPerSecond() const { return m_networkInBytesPerSecond; }
    inline bool NetworkInBytesPerSecondHasBeenSet() const { return m_networkInBytesPerSecondHasBeenSet; }
    template<typename NetworkInBytesPerSecondT = Aws::String>
    void SetNetworkInBytesPerSecond(NetworkInBytesPerSecondT&& value) { m_networkInBytesPerSecondHasBeenSet = true; m_networkInBytesPerSecond = std::forward<NetworkInBytesPerSecondT>(value); }
    template<typename NetworkInBytesPerSecondT = Aws::String>
    NetworkResourceUtilization& WithNetworkInBytesPerSecond(NetworkInBytesPerSecondT&& value) { SetNetworkInBytesPerSecond(std::forward<NetworkInBytesPerSecondT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network outbound throughput utilization measured in Bytes per second
     * (Bps). </p>
     */
    inline const Aws::String& GetNetworkOutBytesPerSecond() const { return m_networkOutBytesPerSecond; }
    inline bool NetworkOutBytesPerSecondHasBeenSet() const { return m_networkOutBytesPerSecondHasBeenSet; }
    template<typename NetworkOutBytesPerSecondT = Aws::String>
    void SetNetworkOutBytesPerSecond(NetworkOutBytesPerSecondT&& value) { m_networkOutBytesPerSecondHasBeenSet = true; m_networkOutBytesPerSecond = std::forward<NetworkOutBytesPerSecondT>(value); }
    template<typename NetworkOutBytesPerSecondT = Aws::String>
    NetworkResourceUtilization& WithNetworkOutBytesPerSecond(NetworkOutBytesPerSecondT&& value) { SetNetworkOutBytesPerSecond(std::forward<NetworkOutBytesPerSecondT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network inbound packets that are measured in packets per second. </p>
     */
    inline const Aws::String& GetNetworkPacketsInPerSecond() const { return m_networkPacketsInPerSecond; }
    inline bool NetworkPacketsInPerSecondHasBeenSet() const { return m_networkPacketsInPerSecondHasBeenSet; }
    template<typename NetworkPacketsInPerSecondT = Aws::String>
    void SetNetworkPacketsInPerSecond(NetworkPacketsInPerSecondT&& value) { m_networkPacketsInPerSecondHasBeenSet = true; m_networkPacketsInPerSecond = std::forward<NetworkPacketsInPerSecondT>(value); }
    template<typename NetworkPacketsInPerSecondT = Aws::String>
    NetworkResourceUtilization& WithNetworkPacketsInPerSecond(NetworkPacketsInPerSecondT&& value) { SetNetworkPacketsInPerSecond(std::forward<NetworkPacketsInPerSecondT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network outbound packets that are measured in packets per second. </p>
     */
    inline const Aws::String& GetNetworkPacketsOutPerSecond() const { return m_networkPacketsOutPerSecond; }
    inline bool NetworkPacketsOutPerSecondHasBeenSet() const { return m_networkPacketsOutPerSecondHasBeenSet; }
    template<typename NetworkPacketsOutPerSecondT = Aws::String>
    void SetNetworkPacketsOutPerSecond(NetworkPacketsOutPerSecondT&& value) { m_networkPacketsOutPerSecondHasBeenSet = true; m_networkPacketsOutPerSecond = std::forward<NetworkPacketsOutPerSecondT>(value); }
    template<typename NetworkPacketsOutPerSecondT = Aws::String>
    NetworkResourceUtilization& WithNetworkPacketsOutPerSecond(NetworkPacketsOutPerSecondT&& value) { SetNetworkPacketsOutPerSecond(std::forward<NetworkPacketsOutPerSecondT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_networkInBytesPerSecond;
    bool m_networkInBytesPerSecondHasBeenSet = false;

    Aws::String m_networkOutBytesPerSecond;
    bool m_networkOutBytesPerSecondHasBeenSet = false;

    Aws::String m_networkPacketsInPerSecond;
    bool m_networkPacketsInPerSecondHasBeenSet = false;

    Aws::String m_networkPacketsOutPerSecond;
    bool m_networkPacketsOutPerSecondHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
