/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The connectivity configuration for the environment. Amazon EVS requires that
   * you specify two route server peer IDs. During environment creation, the route
   * server endpoints peer with the NSX uplink VLAN for connectivity to the NSX
   * overlay network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/ConnectivityInfo">AWS
   * API Reference</a></p>
   */
  class ConnectivityInfo
  {
  public:
    AWS_EVS_API ConnectivityInfo() = default;
    AWS_EVS_API ConnectivityInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API ConnectivityInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique IDs for private route server peers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrivateRouteServerPeerings() const { return m_privateRouteServerPeerings; }
    inline bool PrivateRouteServerPeeringsHasBeenSet() const { return m_privateRouteServerPeeringsHasBeenSet; }
    template<typename PrivateRouteServerPeeringsT = Aws::Vector<Aws::String>>
    void SetPrivateRouteServerPeerings(PrivateRouteServerPeeringsT&& value) { m_privateRouteServerPeeringsHasBeenSet = true; m_privateRouteServerPeerings = std::forward<PrivateRouteServerPeeringsT>(value); }
    template<typename PrivateRouteServerPeeringsT = Aws::Vector<Aws::String>>
    ConnectivityInfo& WithPrivateRouteServerPeerings(PrivateRouteServerPeeringsT&& value) { SetPrivateRouteServerPeerings(std::forward<PrivateRouteServerPeeringsT>(value)); return *this;}
    template<typename PrivateRouteServerPeeringsT = Aws::String>
    ConnectivityInfo& AddPrivateRouteServerPeerings(PrivateRouteServerPeeringsT&& value) { m_privateRouteServerPeeringsHasBeenSet = true; m_privateRouteServerPeerings.emplace_back(std::forward<PrivateRouteServerPeeringsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_privateRouteServerPeerings;
    bool m_privateRouteServerPeeringsHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
