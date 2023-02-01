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
    AWS_DIRECTCONNECT_API StartBgpFailoverTestRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartBgpFailoverTest"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the virtual interface you want to test.</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const{ return m_virtualInterfaceId; }

    /**
     * <p>The ID of the virtual interface you want to test.</p>
     */
    inline bool VirtualInterfaceIdHasBeenSet() const { return m_virtualInterfaceIdHasBeenSet; }

    /**
     * <p>The ID of the virtual interface you want to test.</p>
     */
    inline void SetVirtualInterfaceId(const Aws::String& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = value; }

    /**
     * <p>The ID of the virtual interface you want to test.</p>
     */
    inline void SetVirtualInterfaceId(Aws::String&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = std::move(value); }

    /**
     * <p>The ID of the virtual interface you want to test.</p>
     */
    inline void SetVirtualInterfaceId(const char* value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId.assign(value); }

    /**
     * <p>The ID of the virtual interface you want to test.</p>
     */
    inline StartBgpFailoverTestRequest& WithVirtualInterfaceId(const Aws::String& value) { SetVirtualInterfaceId(value); return *this;}

    /**
     * <p>The ID of the virtual interface you want to test.</p>
     */
    inline StartBgpFailoverTestRequest& WithVirtualInterfaceId(Aws::String&& value) { SetVirtualInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual interface you want to test.</p>
     */
    inline StartBgpFailoverTestRequest& WithVirtualInterfaceId(const char* value) { SetVirtualInterfaceId(value); return *this;}


    /**
     * <p>The BGP peers to place in the DOWN state.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBgpPeers() const{ return m_bgpPeers; }

    /**
     * <p>The BGP peers to place in the DOWN state.</p>
     */
    inline bool BgpPeersHasBeenSet() const { return m_bgpPeersHasBeenSet; }

    /**
     * <p>The BGP peers to place in the DOWN state.</p>
     */
    inline void SetBgpPeers(const Aws::Vector<Aws::String>& value) { m_bgpPeersHasBeenSet = true; m_bgpPeers = value; }

    /**
     * <p>The BGP peers to place in the DOWN state.</p>
     */
    inline void SetBgpPeers(Aws::Vector<Aws::String>&& value) { m_bgpPeersHasBeenSet = true; m_bgpPeers = std::move(value); }

    /**
     * <p>The BGP peers to place in the DOWN state.</p>
     */
    inline StartBgpFailoverTestRequest& WithBgpPeers(const Aws::Vector<Aws::String>& value) { SetBgpPeers(value); return *this;}

    /**
     * <p>The BGP peers to place in the DOWN state.</p>
     */
    inline StartBgpFailoverTestRequest& WithBgpPeers(Aws::Vector<Aws::String>&& value) { SetBgpPeers(std::move(value)); return *this;}

    /**
     * <p>The BGP peers to place in the DOWN state.</p>
     */
    inline StartBgpFailoverTestRequest& AddBgpPeers(const Aws::String& value) { m_bgpPeersHasBeenSet = true; m_bgpPeers.push_back(value); return *this; }

    /**
     * <p>The BGP peers to place in the DOWN state.</p>
     */
    inline StartBgpFailoverTestRequest& AddBgpPeers(Aws::String&& value) { m_bgpPeersHasBeenSet = true; m_bgpPeers.push_back(std::move(value)); return *this; }

    /**
     * <p>The BGP peers to place in the DOWN state.</p>
     */
    inline StartBgpFailoverTestRequest& AddBgpPeers(const char* value) { m_bgpPeersHasBeenSet = true; m_bgpPeers.push_back(value); return *this; }


    /**
     * <p>The time in minutes that the virtual interface failover test will last.</p>
     * <p>Maximum value: 180 minutes (3 hours).</p> <p>Default: 180 minutes (3
     * hours).</p>
     */
    inline int GetTestDurationInMinutes() const{ return m_testDurationInMinutes; }

    /**
     * <p>The time in minutes that the virtual interface failover test will last.</p>
     * <p>Maximum value: 180 minutes (3 hours).</p> <p>Default: 180 minutes (3
     * hours).</p>
     */
    inline bool TestDurationInMinutesHasBeenSet() const { return m_testDurationInMinutesHasBeenSet; }

    /**
     * <p>The time in minutes that the virtual interface failover test will last.</p>
     * <p>Maximum value: 180 minutes (3 hours).</p> <p>Default: 180 minutes (3
     * hours).</p>
     */
    inline void SetTestDurationInMinutes(int value) { m_testDurationInMinutesHasBeenSet = true; m_testDurationInMinutes = value; }

    /**
     * <p>The time in minutes that the virtual interface failover test will last.</p>
     * <p>Maximum value: 180 minutes (3 hours).</p> <p>Default: 180 minutes (3
     * hours).</p>
     */
    inline StartBgpFailoverTestRequest& WithTestDurationInMinutes(int value) { SetTestDurationInMinutes(value); return *this;}

  private:

    Aws::String m_virtualInterfaceId;
    bool m_virtualInterfaceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_bgpPeers;
    bool m_bgpPeersHasBeenSet = false;

    int m_testDurationInMinutes;
    bool m_testDurationInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
