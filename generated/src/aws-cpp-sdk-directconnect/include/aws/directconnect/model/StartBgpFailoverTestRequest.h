/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class StartBgpFailoverTestRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API StartBgpFailoverTestRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartBgpFailoverTest"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the virtual interface you want to test.</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const { return m_virtualInterfaceId; }
    inline bool VirtualInterfaceIdHasBeenSet() const { return m_virtualInterfaceIdHasBeenSet; }
    template<typename VirtualInterfaceIdT = Aws::String>
    void SetVirtualInterfaceId(VirtualInterfaceIdT&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = std::forward<VirtualInterfaceIdT>(value); }
    template<typename VirtualInterfaceIdT = Aws::String>
    StartBgpFailoverTestRequest& WithVirtualInterfaceId(VirtualInterfaceIdT&& value) { SetVirtualInterfaceId(std::forward<VirtualInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The BGP peers to place in the DOWN state.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBgpPeers() const { return m_bgpPeers; }
    inline bool BgpPeersHasBeenSet() const { return m_bgpPeersHasBeenSet; }
    template<typename BgpPeersT = Aws::Vector<Aws::String>>
    void SetBgpPeers(BgpPeersT&& value) { m_bgpPeersHasBeenSet = true; m_bgpPeers = std::forward<BgpPeersT>(value); }
    template<typename BgpPeersT = Aws::Vector<Aws::String>>
    StartBgpFailoverTestRequest& WithBgpPeers(BgpPeersT&& value) { SetBgpPeers(std::forward<BgpPeersT>(value)); return *this;}
    template<typename BgpPeersT = Aws::String>
    StartBgpFailoverTestRequest& AddBgpPeers(BgpPeersT&& value) { m_bgpPeersHasBeenSet = true; m_bgpPeers.emplace_back(std::forward<BgpPeersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time in minutes that the virtual interface failover test will last.</p>
     * <p>Maximum value: 4,320 minutes (72 hours).</p> <p>Default: 180 minutes (3
     * hours).</p>
     */
    inline int GetTestDurationInMinutes() const { return m_testDurationInMinutes; }
    inline bool TestDurationInMinutesHasBeenSet() const { return m_testDurationInMinutesHasBeenSet; }
    inline void SetTestDurationInMinutes(int value) { m_testDurationInMinutesHasBeenSet = true; m_testDurationInMinutes = value; }
    inline StartBgpFailoverTestRequest& WithTestDurationInMinutes(int value) { SetTestDurationInMinutes(value); return *this;}
    ///@}
  private:

    Aws::String m_virtualInterfaceId;
    bool m_virtualInterfaceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_bgpPeers;
    bool m_bgpPeersHasBeenSet = false;

    int m_testDurationInMinutes{0};
    bool m_testDurationInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
