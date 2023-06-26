/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Information about the virtual interface failover test.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/VirtualInterfaceTestHistory">AWS
   * API Reference</a></p>
   */
  class VirtualInterfaceTestHistory
  {
  public:
    AWS_DIRECTCONNECT_API VirtualInterfaceTestHistory();
    AWS_DIRECTCONNECT_API VirtualInterfaceTestHistory(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API VirtualInterfaceTestHistory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the virtual interface failover test.</p>
     */
    inline const Aws::String& GetTestId() const{ return m_testId; }

    /**
     * <p>The ID of the virtual interface failover test.</p>
     */
    inline bool TestIdHasBeenSet() const { return m_testIdHasBeenSet; }

    /**
     * <p>The ID of the virtual interface failover test.</p>
     */
    inline void SetTestId(const Aws::String& value) { m_testIdHasBeenSet = true; m_testId = value; }

    /**
     * <p>The ID of the virtual interface failover test.</p>
     */
    inline void SetTestId(Aws::String&& value) { m_testIdHasBeenSet = true; m_testId = std::move(value); }

    /**
     * <p>The ID of the virtual interface failover test.</p>
     */
    inline void SetTestId(const char* value) { m_testIdHasBeenSet = true; m_testId.assign(value); }

    /**
     * <p>The ID of the virtual interface failover test.</p>
     */
    inline VirtualInterfaceTestHistory& WithTestId(const Aws::String& value) { SetTestId(value); return *this;}

    /**
     * <p>The ID of the virtual interface failover test.</p>
     */
    inline VirtualInterfaceTestHistory& WithTestId(Aws::String&& value) { SetTestId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual interface failover test.</p>
     */
    inline VirtualInterfaceTestHistory& WithTestId(const char* value) { SetTestId(value); return *this;}


    /**
     * <p>The ID of the tested virtual interface.</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const{ return m_virtualInterfaceId; }

    /**
     * <p>The ID of the tested virtual interface.</p>
     */
    inline bool VirtualInterfaceIdHasBeenSet() const { return m_virtualInterfaceIdHasBeenSet; }

    /**
     * <p>The ID of the tested virtual interface.</p>
     */
    inline void SetVirtualInterfaceId(const Aws::String& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = value; }

    /**
     * <p>The ID of the tested virtual interface.</p>
     */
    inline void SetVirtualInterfaceId(Aws::String&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = std::move(value); }

    /**
     * <p>The ID of the tested virtual interface.</p>
     */
    inline void SetVirtualInterfaceId(const char* value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId.assign(value); }

    /**
     * <p>The ID of the tested virtual interface.</p>
     */
    inline VirtualInterfaceTestHistory& WithVirtualInterfaceId(const Aws::String& value) { SetVirtualInterfaceId(value); return *this;}

    /**
     * <p>The ID of the tested virtual interface.</p>
     */
    inline VirtualInterfaceTestHistory& WithVirtualInterfaceId(Aws::String&& value) { SetVirtualInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the tested virtual interface.</p>
     */
    inline VirtualInterfaceTestHistory& WithVirtualInterfaceId(const char* value) { SetVirtualInterfaceId(value); return *this;}


    /**
     * <p>The BGP peers that were put in the DOWN state as part of the virtual
     * interface failover test.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBgpPeers() const{ return m_bgpPeers; }

    /**
     * <p>The BGP peers that were put in the DOWN state as part of the virtual
     * interface failover test.</p>
     */
    inline bool BgpPeersHasBeenSet() const { return m_bgpPeersHasBeenSet; }

    /**
     * <p>The BGP peers that were put in the DOWN state as part of the virtual
     * interface failover test.</p>
     */
    inline void SetBgpPeers(const Aws::Vector<Aws::String>& value) { m_bgpPeersHasBeenSet = true; m_bgpPeers = value; }

    /**
     * <p>The BGP peers that were put in the DOWN state as part of the virtual
     * interface failover test.</p>
     */
    inline void SetBgpPeers(Aws::Vector<Aws::String>&& value) { m_bgpPeersHasBeenSet = true; m_bgpPeers = std::move(value); }

    /**
     * <p>The BGP peers that were put in the DOWN state as part of the virtual
     * interface failover test.</p>
     */
    inline VirtualInterfaceTestHistory& WithBgpPeers(const Aws::Vector<Aws::String>& value) { SetBgpPeers(value); return *this;}

    /**
     * <p>The BGP peers that were put in the DOWN state as part of the virtual
     * interface failover test.</p>
     */
    inline VirtualInterfaceTestHistory& WithBgpPeers(Aws::Vector<Aws::String>&& value) { SetBgpPeers(std::move(value)); return *this;}

    /**
     * <p>The BGP peers that were put in the DOWN state as part of the virtual
     * interface failover test.</p>
     */
    inline VirtualInterfaceTestHistory& AddBgpPeers(const Aws::String& value) { m_bgpPeersHasBeenSet = true; m_bgpPeers.push_back(value); return *this; }

    /**
     * <p>The BGP peers that were put in the DOWN state as part of the virtual
     * interface failover test.</p>
     */
    inline VirtualInterfaceTestHistory& AddBgpPeers(Aws::String&& value) { m_bgpPeersHasBeenSet = true; m_bgpPeers.push_back(std::move(value)); return *this; }

    /**
     * <p>The BGP peers that were put in the DOWN state as part of the virtual
     * interface failover test.</p>
     */
    inline VirtualInterfaceTestHistory& AddBgpPeers(const char* value) { m_bgpPeersHasBeenSet = true; m_bgpPeers.push_back(value); return *this; }


    /**
     * <p>The status of the virtual interface failover test.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the virtual interface failover test.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the virtual interface failover test.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the virtual interface failover test.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the virtual interface failover test.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the virtual interface failover test.</p>
     */
    inline VirtualInterfaceTestHistory& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the virtual interface failover test.</p>
     */
    inline VirtualInterfaceTestHistory& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the virtual interface failover test.</p>
     */
    inline VirtualInterfaceTestHistory& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The owner ID of the tested virtual interface.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The owner ID of the tested virtual interface.</p>
     */
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }

    /**
     * <p>The owner ID of the tested virtual interface.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The owner ID of the tested virtual interface.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }

    /**
     * <p>The owner ID of the tested virtual interface.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }

    /**
     * <p>The owner ID of the tested virtual interface.</p>
     */
    inline VirtualInterfaceTestHistory& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The owner ID of the tested virtual interface.</p>
     */
    inline VirtualInterfaceTestHistory& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The owner ID of the tested virtual interface.</p>
     */
    inline VirtualInterfaceTestHistory& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}


    /**
     * <p>The time that the virtual interface failover test ran in minutes.</p>
     */
    inline int GetTestDurationInMinutes() const{ return m_testDurationInMinutes; }

    /**
     * <p>The time that the virtual interface failover test ran in minutes.</p>
     */
    inline bool TestDurationInMinutesHasBeenSet() const { return m_testDurationInMinutesHasBeenSet; }

    /**
     * <p>The time that the virtual interface failover test ran in minutes.</p>
     */
    inline void SetTestDurationInMinutes(int value) { m_testDurationInMinutesHasBeenSet = true; m_testDurationInMinutes = value; }

    /**
     * <p>The time that the virtual interface failover test ran in minutes.</p>
     */
    inline VirtualInterfaceTestHistory& WithTestDurationInMinutes(int value) { SetTestDurationInMinutes(value); return *this;}


    /**
     * <p>The time that the virtual interface moves to the DOWN state.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time that the virtual interface moves to the DOWN state.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time that the virtual interface moves to the DOWN state.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time that the virtual interface moves to the DOWN state.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time that the virtual interface moves to the DOWN state.</p>
     */
    inline VirtualInterfaceTestHistory& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time that the virtual interface moves to the DOWN state.</p>
     */
    inline VirtualInterfaceTestHistory& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time that the virtual interface moves out of the DOWN state.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time that the virtual interface moves out of the DOWN state.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time that the virtual interface moves out of the DOWN state.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time that the virtual interface moves out of the DOWN state.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time that the virtual interface moves out of the DOWN state.</p>
     */
    inline VirtualInterfaceTestHistory& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time that the virtual interface moves out of the DOWN state.</p>
     */
    inline VirtualInterfaceTestHistory& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_testId;
    bool m_testIdHasBeenSet = false;

    Aws::String m_virtualInterfaceId;
    bool m_virtualInterfaceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_bgpPeers;
    bool m_bgpPeersHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    int m_testDurationInMinutes;
    bool m_testDurationInMinutesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
