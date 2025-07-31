/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/PortRange.h>
#include <aws/inspector2/model/NetworkProtocol.h>
#include <aws/inspector2/model/NetworkPath.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Contains the details of a network reachability finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/NetworkReachabilityDetails">AWS
   * API Reference</a></p>
   */
  class NetworkReachabilityDetails
  {
  public:
    AWS_INSPECTOR2_API NetworkReachabilityDetails() = default;
    AWS_INSPECTOR2_API NetworkReachabilityDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API NetworkReachabilityDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains details about the open port range associated with a
     * finding.</p>
     */
    inline const PortRange& GetOpenPortRange() const { return m_openPortRange; }
    inline bool OpenPortRangeHasBeenSet() const { return m_openPortRangeHasBeenSet; }
    template<typename OpenPortRangeT = PortRange>
    void SetOpenPortRange(OpenPortRangeT&& value) { m_openPortRangeHasBeenSet = true; m_openPortRange = std::forward<OpenPortRangeT>(value); }
    template<typename OpenPortRangeT = PortRange>
    NetworkReachabilityDetails& WithOpenPortRange(OpenPortRangeT&& value) { SetOpenPortRange(std::forward<OpenPortRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol associated with a finding.</p>
     */
    inline NetworkProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(NetworkProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline NetworkReachabilityDetails& WithProtocol(NetworkProtocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about a network path associated with a
     * finding.</p>
     */
    inline const NetworkPath& GetNetworkPath() const { return m_networkPath; }
    inline bool NetworkPathHasBeenSet() const { return m_networkPathHasBeenSet; }
    template<typename NetworkPathT = NetworkPath>
    void SetNetworkPath(NetworkPathT&& value) { m_networkPathHasBeenSet = true; m_networkPath = std::forward<NetworkPathT>(value); }
    template<typename NetworkPathT = NetworkPath>
    NetworkReachabilityDetails& WithNetworkPath(NetworkPathT&& value) { SetNetworkPath(std::forward<NetworkPathT>(value)); return *this;}
    ///@}
  private:

    PortRange m_openPortRange;
    bool m_openPortRangeHasBeenSet = false;

    NetworkProtocol m_protocol{NetworkProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    NetworkPath m_networkPath;
    bool m_networkPathHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
