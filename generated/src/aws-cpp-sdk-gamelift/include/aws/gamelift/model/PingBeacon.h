/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/UDPEndpoint.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>Information about a UDP ping beacon that can be used to measure network
   * latency between a player device and an Amazon GameLift Servers hosting
   * location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PingBeacon">AWS
   * API Reference</a></p>
   */
  class PingBeacon
  {
  public:
    AWS_GAMELIFT_API PingBeacon() = default;
    AWS_GAMELIFT_API PingBeacon(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API PingBeacon& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain name and port of the UDP ping beacon. </p>
     */
    inline const UDPEndpoint& GetUDPEndpoint() const { return m_uDPEndpoint; }
    inline bool UDPEndpointHasBeenSet() const { return m_uDPEndpointHasBeenSet; }
    template<typename UDPEndpointT = UDPEndpoint>
    void SetUDPEndpoint(UDPEndpointT&& value) { m_uDPEndpointHasBeenSet = true; m_uDPEndpoint = std::forward<UDPEndpointT>(value); }
    template<typename UDPEndpointT = UDPEndpoint>
    PingBeacon& WithUDPEndpoint(UDPEndpointT&& value) { SetUDPEndpoint(std::forward<UDPEndpointT>(value)); return *this;}
    ///@}
  private:

    UDPEndpoint m_uDPEndpoint;
    bool m_uDPEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
