/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Contains information about a hardware security module (HSM) in an AWS
   * CloudHSM cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/Hsm">AWS API
   * Reference</a></p>
   */
  class AWS_CLOUDHSMV2_API Hsm
  {
  public:
    Hsm();
    Hsm(Aws::Utils::Json::JsonView jsonValue);
    Hsm& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Availability Zone that contains the HSM.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone that contains the HSM.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone that contains the HSM.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone that contains the HSM.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone that contains the HSM.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone that contains the HSM.</p>
     */
    inline Hsm& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone that contains the HSM.</p>
     */
    inline Hsm& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone that contains the HSM.</p>
     */
    inline Hsm& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The identifier (ID) of the cluster that contains the HSM.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The identifier (ID) of the cluster that contains the HSM.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The identifier (ID) of the cluster that contains the HSM.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The identifier (ID) of the cluster that contains the HSM.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The identifier (ID) of the cluster that contains the HSM.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The identifier (ID) of the cluster that contains the HSM.</p>
     */
    inline Hsm& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The identifier (ID) of the cluster that contains the HSM.</p>
     */
    inline Hsm& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the cluster that contains the HSM.</p>
     */
    inline Hsm& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>The subnet that contains the HSM's elastic network interface (ENI).</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The subnet that contains the HSM's elastic network interface (ENI).</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The subnet that contains the HSM's elastic network interface (ENI).</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The subnet that contains the HSM's elastic network interface (ENI).</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The subnet that contains the HSM's elastic network interface (ENI).</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The subnet that contains the HSM's elastic network interface (ENI).</p>
     */
    inline Hsm& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The subnet that contains the HSM's elastic network interface (ENI).</p>
     */
    inline Hsm& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The subnet that contains the HSM's elastic network interface (ENI).</p>
     */
    inline Hsm& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The identifier (ID) of the HSM's elastic network interface (ENI).</p>
     */
    inline const Aws::String& GetEniId() const{ return m_eniId; }

    /**
     * <p>The identifier (ID) of the HSM's elastic network interface (ENI).</p>
     */
    inline bool EniIdHasBeenSet() const { return m_eniIdHasBeenSet; }

    /**
     * <p>The identifier (ID) of the HSM's elastic network interface (ENI).</p>
     */
    inline void SetEniId(const Aws::String& value) { m_eniIdHasBeenSet = true; m_eniId = value; }

    /**
     * <p>The identifier (ID) of the HSM's elastic network interface (ENI).</p>
     */
    inline void SetEniId(Aws::String&& value) { m_eniIdHasBeenSet = true; m_eniId = std::move(value); }

    /**
     * <p>The identifier (ID) of the HSM's elastic network interface (ENI).</p>
     */
    inline void SetEniId(const char* value) { m_eniIdHasBeenSet = true; m_eniId.assign(value); }

    /**
     * <p>The identifier (ID) of the HSM's elastic network interface (ENI).</p>
     */
    inline Hsm& WithEniId(const Aws::String& value) { SetEniId(value); return *this;}

    /**
     * <p>The identifier (ID) of the HSM's elastic network interface (ENI).</p>
     */
    inline Hsm& WithEniId(Aws::String&& value) { SetEniId(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the HSM's elastic network interface (ENI).</p>
     */
    inline Hsm& WithEniId(const char* value) { SetEniId(value); return *this;}


    /**
     * <p>The IP address of the HSM's elastic network interface (ENI).</p>
     */
    inline const Aws::String& GetEniIp() const{ return m_eniIp; }

    /**
     * <p>The IP address of the HSM's elastic network interface (ENI).</p>
     */
    inline bool EniIpHasBeenSet() const { return m_eniIpHasBeenSet; }

    /**
     * <p>The IP address of the HSM's elastic network interface (ENI).</p>
     */
    inline void SetEniIp(const Aws::String& value) { m_eniIpHasBeenSet = true; m_eniIp = value; }

    /**
     * <p>The IP address of the HSM's elastic network interface (ENI).</p>
     */
    inline void SetEniIp(Aws::String&& value) { m_eniIpHasBeenSet = true; m_eniIp = std::move(value); }

    /**
     * <p>The IP address of the HSM's elastic network interface (ENI).</p>
     */
    inline void SetEniIp(const char* value) { m_eniIpHasBeenSet = true; m_eniIp.assign(value); }

    /**
     * <p>The IP address of the HSM's elastic network interface (ENI).</p>
     */
    inline Hsm& WithEniIp(const Aws::String& value) { SetEniIp(value); return *this;}

    /**
     * <p>The IP address of the HSM's elastic network interface (ENI).</p>
     */
    inline Hsm& WithEniIp(Aws::String&& value) { SetEniIp(std::move(value)); return *this;}

    /**
     * <p>The IP address of the HSM's elastic network interface (ENI).</p>
     */
    inline Hsm& WithEniIp(const char* value) { SetEniIp(value); return *this;}


    /**
     * <p>The HSM's identifier (ID).</p>
     */
    inline const Aws::String& GetHsmId() const{ return m_hsmId; }

    /**
     * <p>The HSM's identifier (ID).</p>
     */
    inline bool HsmIdHasBeenSet() const { return m_hsmIdHasBeenSet; }

    /**
     * <p>The HSM's identifier (ID).</p>
     */
    inline void SetHsmId(const Aws::String& value) { m_hsmIdHasBeenSet = true; m_hsmId = value; }

    /**
     * <p>The HSM's identifier (ID).</p>
     */
    inline void SetHsmId(Aws::String&& value) { m_hsmIdHasBeenSet = true; m_hsmId = std::move(value); }

    /**
     * <p>The HSM's identifier (ID).</p>
     */
    inline void SetHsmId(const char* value) { m_hsmIdHasBeenSet = true; m_hsmId.assign(value); }

    /**
     * <p>The HSM's identifier (ID).</p>
     */
    inline Hsm& WithHsmId(const Aws::String& value) { SetHsmId(value); return *this;}

    /**
     * <p>The HSM's identifier (ID).</p>
     */
    inline Hsm& WithHsmId(Aws::String&& value) { SetHsmId(std::move(value)); return *this;}

    /**
     * <p>The HSM's identifier (ID).</p>
     */
    inline Hsm& WithHsmId(const char* value) { SetHsmId(value); return *this;}


    /**
     * <p>The HSM's state.</p>
     */
    inline const HsmState& GetState() const{ return m_state; }

    /**
     * <p>The HSM's state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The HSM's state.</p>
     */
    inline void SetState(const HsmState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The HSM's state.</p>
     */
    inline void SetState(HsmState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The HSM's state.</p>
     */
    inline Hsm& WithState(const HsmState& value) { SetState(value); return *this;}

    /**
     * <p>The HSM's state.</p>
     */
    inline Hsm& WithState(HsmState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A description of the HSM's state.</p>
     */
    inline const Aws::String& GetStateMessage() const{ return m_stateMessage; }

    /**
     * <p>A description of the HSM's state.</p>
     */
    inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }

    /**
     * <p>A description of the HSM's state.</p>
     */
    inline void SetStateMessage(const Aws::String& value) { m_stateMessageHasBeenSet = true; m_stateMessage = value; }

    /**
     * <p>A description of the HSM's state.</p>
     */
    inline void SetStateMessage(Aws::String&& value) { m_stateMessageHasBeenSet = true; m_stateMessage = std::move(value); }

    /**
     * <p>A description of the HSM's state.</p>
     */
    inline void SetStateMessage(const char* value) { m_stateMessageHasBeenSet = true; m_stateMessage.assign(value); }

    /**
     * <p>A description of the HSM's state.</p>
     */
    inline Hsm& WithStateMessage(const Aws::String& value) { SetStateMessage(value); return *this;}

    /**
     * <p>A description of the HSM's state.</p>
     */
    inline Hsm& WithStateMessage(Aws::String&& value) { SetStateMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the HSM's state.</p>
     */
    inline Hsm& WithStateMessage(const char* value) { SetStateMessage(value); return *this;}

  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::String m_eniId;
    bool m_eniIdHasBeenSet;

    Aws::String m_eniIp;
    bool m_eniIpHasBeenSet;

    Aws::String m_hsmId;
    bool m_hsmIdHasBeenSet;

    HsmState m_state;
    bool m_stateHasBeenSet;

    Aws::String m_stateMessage;
    bool m_stateMessageHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
