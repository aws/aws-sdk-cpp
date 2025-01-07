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
    AWS_CLOUDHSMV2_API Hsm();
    AWS_CLOUDHSMV2_API Hsm(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API Hsm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Availability Zone that contains the HSM.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline Hsm& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline Hsm& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline Hsm& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) of the cluster that contains the HSM.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline Hsm& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline Hsm& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline Hsm& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet that contains the HSM's elastic network interface (ENI).</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline Hsm& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline Hsm& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline Hsm& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) of the HSM's elastic network interface (ENI).</p>
     */
    inline const Aws::String& GetEniId() const{ return m_eniId; }
    inline bool EniIdHasBeenSet() const { return m_eniIdHasBeenSet; }
    inline void SetEniId(const Aws::String& value) { m_eniIdHasBeenSet = true; m_eniId = value; }
    inline void SetEniId(Aws::String&& value) { m_eniIdHasBeenSet = true; m_eniId = std::move(value); }
    inline void SetEniId(const char* value) { m_eniIdHasBeenSet = true; m_eniId.assign(value); }
    inline Hsm& WithEniId(const Aws::String& value) { SetEniId(value); return *this;}
    inline Hsm& WithEniId(Aws::String&& value) { SetEniId(std::move(value)); return *this;}
    inline Hsm& WithEniId(const char* value) { SetEniId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the HSM's elastic network interface (ENI).</p>
     */
    inline const Aws::String& GetEniIp() const{ return m_eniIp; }
    inline bool EniIpHasBeenSet() const { return m_eniIpHasBeenSet; }
    inline void SetEniIp(const Aws::String& value) { m_eniIpHasBeenSet = true; m_eniIp = value; }
    inline void SetEniIp(Aws::String&& value) { m_eniIpHasBeenSet = true; m_eniIp = std::move(value); }
    inline void SetEniIp(const char* value) { m_eniIpHasBeenSet = true; m_eniIp.assign(value); }
    inline Hsm& WithEniIp(const Aws::String& value) { SetEniIp(value); return *this;}
    inline Hsm& WithEniIp(Aws::String&& value) { SetEniIp(std::move(value)); return *this;}
    inline Hsm& WithEniIp(const char* value) { SetEniIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 address (if any) of the HSM's elastic network interface (ENI).</p>
     */
    inline const Aws::String& GetEniIpV6() const{ return m_eniIpV6; }
    inline bool EniIpV6HasBeenSet() const { return m_eniIpV6HasBeenSet; }
    inline void SetEniIpV6(const Aws::String& value) { m_eniIpV6HasBeenSet = true; m_eniIpV6 = value; }
    inline void SetEniIpV6(Aws::String&& value) { m_eniIpV6HasBeenSet = true; m_eniIpV6 = std::move(value); }
    inline void SetEniIpV6(const char* value) { m_eniIpV6HasBeenSet = true; m_eniIpV6.assign(value); }
    inline Hsm& WithEniIpV6(const Aws::String& value) { SetEniIpV6(value); return *this;}
    inline Hsm& WithEniIpV6(Aws::String&& value) { SetEniIpV6(std::move(value)); return *this;}
    inline Hsm& WithEniIpV6(const char* value) { SetEniIpV6(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HSM's identifier (ID).</p>
     */
    inline const Aws::String& GetHsmId() const{ return m_hsmId; }
    inline bool HsmIdHasBeenSet() const { return m_hsmIdHasBeenSet; }
    inline void SetHsmId(const Aws::String& value) { m_hsmIdHasBeenSet = true; m_hsmId = value; }
    inline void SetHsmId(Aws::String&& value) { m_hsmIdHasBeenSet = true; m_hsmId = std::move(value); }
    inline void SetHsmId(const char* value) { m_hsmIdHasBeenSet = true; m_hsmId.assign(value); }
    inline Hsm& WithHsmId(const Aws::String& value) { SetHsmId(value); return *this;}
    inline Hsm& WithHsmId(Aws::String&& value) { SetHsmId(std::move(value)); return *this;}
    inline Hsm& WithHsmId(const char* value) { SetHsmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of HSM.</p>
     */
    inline const Aws::String& GetHsmType() const{ return m_hsmType; }
    inline bool HsmTypeHasBeenSet() const { return m_hsmTypeHasBeenSet; }
    inline void SetHsmType(const Aws::String& value) { m_hsmTypeHasBeenSet = true; m_hsmType = value; }
    inline void SetHsmType(Aws::String&& value) { m_hsmTypeHasBeenSet = true; m_hsmType = std::move(value); }
    inline void SetHsmType(const char* value) { m_hsmTypeHasBeenSet = true; m_hsmType.assign(value); }
    inline Hsm& WithHsmType(const Aws::String& value) { SetHsmType(value); return *this;}
    inline Hsm& WithHsmType(Aws::String&& value) { SetHsmType(std::move(value)); return *this;}
    inline Hsm& WithHsmType(const char* value) { SetHsmType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HSM's state.</p>
     */
    inline const HsmState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const HsmState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(HsmState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Hsm& WithState(const HsmState& value) { SetState(value); return *this;}
    inline Hsm& WithState(HsmState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the HSM's state.</p>
     */
    inline const Aws::String& GetStateMessage() const{ return m_stateMessage; }
    inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }
    inline void SetStateMessage(const Aws::String& value) { m_stateMessageHasBeenSet = true; m_stateMessage = value; }
    inline void SetStateMessage(Aws::String&& value) { m_stateMessageHasBeenSet = true; m_stateMessage = std::move(value); }
    inline void SetStateMessage(const char* value) { m_stateMessageHasBeenSet = true; m_stateMessage.assign(value); }
    inline Hsm& WithStateMessage(const Aws::String& value) { SetStateMessage(value); return *this;}
    inline Hsm& WithStateMessage(Aws::String&& value) { SetStateMessage(std::move(value)); return *this;}
    inline Hsm& WithStateMessage(const char* value) { SetStateMessage(value); return *this;}
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

    HsmState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateMessage;
    bool m_stateMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
