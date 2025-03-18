/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudhsmv2/model/HsmState.h>
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
namespace CloudHSMV2
{
namespace Model
{

  /**
   * <p>Contains information about a hardware security module (HSM) in an CloudHSM
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/Hsm">AWS API
   * Reference</a></p>
   */
  class Hsm
  {
  public:
    AWS_CLOUDHSMV2_API Hsm() = default;
    AWS_CLOUDHSMV2_API Hsm(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API Hsm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Availability Zone that contains the HSM.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    Hsm& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) of the cluster that contains the HSM.</p>
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    Hsm& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet that contains the HSM's elastic network interface (ENI).</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    Hsm& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) of the HSM's elastic network interface (ENI).</p>
     */
    inline const Aws::String& GetEniId() const { return m_eniId; }
    inline bool EniIdHasBeenSet() const { return m_eniIdHasBeenSet; }
    template<typename EniIdT = Aws::String>
    void SetEniId(EniIdT&& value) { m_eniIdHasBeenSet = true; m_eniId = std::forward<EniIdT>(value); }
    template<typename EniIdT = Aws::String>
    Hsm& WithEniId(EniIdT&& value) { SetEniId(std::forward<EniIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the HSM's elastic network interface (ENI).</p>
     */
    inline const Aws::String& GetEniIp() const { return m_eniIp; }
    inline bool EniIpHasBeenSet() const { return m_eniIpHasBeenSet; }
    template<typename EniIpT = Aws::String>
    void SetEniIp(EniIpT&& value) { m_eniIpHasBeenSet = true; m_eniIp = std::forward<EniIpT>(value); }
    template<typename EniIpT = Aws::String>
    Hsm& WithEniIp(EniIpT&& value) { SetEniIp(std::forward<EniIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 address (if any) of the HSM's elastic network interface (ENI).</p>
     */
    inline const Aws::String& GetEniIpV6() const { return m_eniIpV6; }
    inline bool EniIpV6HasBeenSet() const { return m_eniIpV6HasBeenSet; }
    template<typename EniIpV6T = Aws::String>
    void SetEniIpV6(EniIpV6T&& value) { m_eniIpV6HasBeenSet = true; m_eniIpV6 = std::forward<EniIpV6T>(value); }
    template<typename EniIpV6T = Aws::String>
    Hsm& WithEniIpV6(EniIpV6T&& value) { SetEniIpV6(std::forward<EniIpV6T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HSM's identifier (ID).</p>
     */
    inline const Aws::String& GetHsmId() const { return m_hsmId; }
    inline bool HsmIdHasBeenSet() const { return m_hsmIdHasBeenSet; }
    template<typename HsmIdT = Aws::String>
    void SetHsmId(HsmIdT&& value) { m_hsmIdHasBeenSet = true; m_hsmId = std::forward<HsmIdT>(value); }
    template<typename HsmIdT = Aws::String>
    Hsm& WithHsmId(HsmIdT&& value) { SetHsmId(std::forward<HsmIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of HSM.</p>
     */
    inline const Aws::String& GetHsmType() const { return m_hsmType; }
    inline bool HsmTypeHasBeenSet() const { return m_hsmTypeHasBeenSet; }
    template<typename HsmTypeT = Aws::String>
    void SetHsmType(HsmTypeT&& value) { m_hsmTypeHasBeenSet = true; m_hsmType = std::forward<HsmTypeT>(value); }
    template<typename HsmTypeT = Aws::String>
    Hsm& WithHsmType(HsmTypeT&& value) { SetHsmType(std::forward<HsmTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HSM's state.</p>
     */
    inline HsmState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(HsmState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Hsm& WithState(HsmState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the HSM's state.</p>
     */
    inline const Aws::String& GetStateMessage() const { return m_stateMessage; }
    inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }
    template<typename StateMessageT = Aws::String>
    void SetStateMessage(StateMessageT&& value) { m_stateMessageHasBeenSet = true; m_stateMessage = std::forward<StateMessageT>(value); }
    template<typename StateMessageT = Aws::String>
    Hsm& WithStateMessage(StateMessageT&& value) { SetStateMessage(std::forward<StateMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_eniId;
    bool m_eniIdHasBeenSet = false;

    Aws::String m_eniIp;
    bool m_eniIpHasBeenSet = false;

    Aws::String m_eniIpV6;
    bool m_eniIpV6HasBeenSet = false;

    Aws::String m_hsmId;
    bool m_hsmIdHasBeenSet = false;

    Aws::String m_hsmType;
    bool m_hsmTypeHasBeenSet = false;

    HsmState m_state{HsmState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateMessage;
    bool m_stateMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
