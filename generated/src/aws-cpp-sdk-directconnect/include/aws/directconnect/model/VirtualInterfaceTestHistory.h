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
    AWS_DIRECTCONNECT_API VirtualInterfaceTestHistory() = default;
    AWS_DIRECTCONNECT_API VirtualInterfaceTestHistory(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API VirtualInterfaceTestHistory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the virtual interface failover test.</p>
     */
    inline const Aws::String& GetTestId() const { return m_testId; }
    inline bool TestIdHasBeenSet() const { return m_testIdHasBeenSet; }
    template<typename TestIdT = Aws::String>
    void SetTestId(TestIdT&& value) { m_testIdHasBeenSet = true; m_testId = std::forward<TestIdT>(value); }
    template<typename TestIdT = Aws::String>
    VirtualInterfaceTestHistory& WithTestId(TestIdT&& value) { SetTestId(std::forward<TestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the tested virtual interface.</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const { return m_virtualInterfaceId; }
    inline bool VirtualInterfaceIdHasBeenSet() const { return m_virtualInterfaceIdHasBeenSet; }
    template<typename VirtualInterfaceIdT = Aws::String>
    void SetVirtualInterfaceId(VirtualInterfaceIdT&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = std::forward<VirtualInterfaceIdT>(value); }
    template<typename VirtualInterfaceIdT = Aws::String>
    VirtualInterfaceTestHistory& WithVirtualInterfaceId(VirtualInterfaceIdT&& value) { SetVirtualInterfaceId(std::forward<VirtualInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The BGP peers that were put in the DOWN state as part of the virtual
     * interface failover test.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBgpPeers() const { return m_bgpPeers; }
    inline bool BgpPeersHasBeenSet() const { return m_bgpPeersHasBeenSet; }
    template<typename BgpPeersT = Aws::Vector<Aws::String>>
    void SetBgpPeers(BgpPeersT&& value) { m_bgpPeersHasBeenSet = true; m_bgpPeers = std::forward<BgpPeersT>(value); }
    template<typename BgpPeersT = Aws::Vector<Aws::String>>
    VirtualInterfaceTestHistory& WithBgpPeers(BgpPeersT&& value) { SetBgpPeers(std::forward<BgpPeersT>(value)); return *this;}
    template<typename BgpPeersT = Aws::String>
    VirtualInterfaceTestHistory& AddBgpPeers(BgpPeersT&& value) { m_bgpPeersHasBeenSet = true; m_bgpPeers.emplace_back(std::forward<BgpPeersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the virtual interface failover test.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    VirtualInterfaceTestHistory& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner ID of the tested virtual interface.</p>
     */
    inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    template<typename OwnerAccountT = Aws::String>
    void SetOwnerAccount(OwnerAccountT&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::forward<OwnerAccountT>(value); }
    template<typename OwnerAccountT = Aws::String>
    VirtualInterfaceTestHistory& WithOwnerAccount(OwnerAccountT&& value) { SetOwnerAccount(std::forward<OwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the virtual interface failover test ran in minutes.</p>
     */
    inline int GetTestDurationInMinutes() const { return m_testDurationInMinutes; }
    inline bool TestDurationInMinutesHasBeenSet() const { return m_testDurationInMinutesHasBeenSet; }
    inline void SetTestDurationInMinutes(int value) { m_testDurationInMinutesHasBeenSet = true; m_testDurationInMinutes = value; }
    inline VirtualInterfaceTestHistory& WithTestDurationInMinutes(int value) { SetTestDurationInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the virtual interface moves to the DOWN state.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    VirtualInterfaceTestHistory& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the virtual interface moves out of the DOWN state.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    VirtualInterfaceTestHistory& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}
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

    int m_testDurationInMinutes{0};
    bool m_testDurationInMinutesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
