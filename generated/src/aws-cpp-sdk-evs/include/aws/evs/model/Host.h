/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evs/model/InstanceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/evs/model/HostState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evs/model/NetworkInterface.h>
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
   * <p>An ESXi host that runs on an Amazon EC2 bare metal instance. Four hosts are
   * created in an Amazon EVS environment during environment creation. You can add
   * hosts to an environment using the <code>CreateEnvironmentHost</code> operation.
   * Amazon EVS supports 4-16 hosts per environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/Host">AWS API
   * Reference</a></p>
   */
  class Host
  {
  public:
    AWS_EVS_API Host() = default;
    AWS_EVS_API Host(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API Host& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DNS hostname of the host. DNS hostnames for hosts must be unique across
     * Amazon EVS environments and within VCF.</p>
     */
    inline const Aws::String& GetHostName() const { return m_hostName; }
    inline bool HostNameHasBeenSet() const { return m_hostNameHasBeenSet; }
    template<typename HostNameT = Aws::String>
    void SetHostName(HostNameT&& value) { m_hostNameHasBeenSet = true; m_hostName = std::forward<HostNameT>(value); }
    template<typename HostNameT = Aws::String>
    Host& WithHostName(HostNameT&& value) { SetHostName(std::forward<HostNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the host.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    Host& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SSH key that is used to access the host.</p>
     */
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    Host& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 instance type of the host.</p>  <p>EC2 instances created
     * through Amazon EVS do not support associating an IAM instance profile.</p>
     * 
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline Host& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the placement group where the host is placed.</p>
     */
    inline const Aws::String& GetPlacementGroupId() const { return m_placementGroupId; }
    inline bool PlacementGroupIdHasBeenSet() const { return m_placementGroupIdHasBeenSet; }
    template<typename PlacementGroupIdT = Aws::String>
    void SetPlacementGroupId(PlacementGroupIdT&& value) { m_placementGroupIdHasBeenSet = true; m_placementGroupId = std::forward<PlacementGroupIdT>(value); }
    template<typename PlacementGroupIdT = Aws::String>
    Host& WithPlacementGroupId(PlacementGroupIdT&& value) { SetPlacementGroupId(std::forward<PlacementGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the Amazon EC2 Dedicated Host.</p>
     */
    inline const Aws::String& GetDedicatedHostId() const { return m_dedicatedHostId; }
    inline bool DedicatedHostIdHasBeenSet() const { return m_dedicatedHostIdHasBeenSet; }
    template<typename DedicatedHostIdT = Aws::String>
    void SetDedicatedHostId(DedicatedHostIdT&& value) { m_dedicatedHostIdHasBeenSet = true; m_dedicatedHostId = std::forward<DedicatedHostIdT>(value); }
    template<typename DedicatedHostIdT = Aws::String>
    Host& WithDedicatedHostId(DedicatedHostIdT&& value) { SetDedicatedHostId(std::forward<DedicatedHostIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time that the host was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Host& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time that the host was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    Host& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The state of the host.</p>
     */
    inline HostState GetHostState() const { return m_hostState; }
    inline bool HostStateHasBeenSet() const { return m_hostStateHasBeenSet; }
    inline void SetHostState(HostState value) { m_hostStateHasBeenSet = true; m_hostState = value; }
    inline Host& WithHostState(HostState value) { SetHostState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A detailed description of the <code>hostState</code> of a host.</p>
     */
    inline const Aws::String& GetStateDetails() const { return m_stateDetails; }
    inline bool StateDetailsHasBeenSet() const { return m_stateDetailsHasBeenSet; }
    template<typename StateDetailsT = Aws::String>
    void SetStateDetails(StateDetailsT&& value) { m_stateDetailsHasBeenSet = true; m_stateDetails = std::forward<StateDetailsT>(value); }
    template<typename StateDetailsT = Aws::String>
    Host& WithStateDetails(StateDetailsT&& value) { SetStateDetails(std::forward<StateDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the EC2 instance that represents the host.</p>
     */
    inline const Aws::String& GetEc2InstanceId() const { return m_ec2InstanceId; }
    inline bool Ec2InstanceIdHasBeenSet() const { return m_ec2InstanceIdHasBeenSet; }
    template<typename Ec2InstanceIdT = Aws::String>
    void SetEc2InstanceId(Ec2InstanceIdT&& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = std::forward<Ec2InstanceIdT>(value); }
    template<typename Ec2InstanceIdT = Aws::String>
    Host& WithEc2InstanceId(Ec2InstanceIdT&& value) { SetEc2InstanceId(std::forward<Ec2InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The elastic network interfaces that are attached to the host.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const { return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    template<typename NetworkInterfacesT = Aws::Vector<NetworkInterface>>
    void SetNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::forward<NetworkInterfacesT>(value); }
    template<typename NetworkInterfacesT = Aws::Vector<NetworkInterface>>
    Host& WithNetworkInterfaces(NetworkInterfacesT&& value) { SetNetworkInterfaces(std::forward<NetworkInterfacesT>(value)); return *this;}
    template<typename NetworkInterfacesT = NetworkInterface>
    Host& AddNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.emplace_back(std::forward<NetworkInterfacesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_hostName;
    bool m_hostNameHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_placementGroupId;
    bool m_placementGroupIdHasBeenSet = false;

    Aws::String m_dedicatedHostId;
    bool m_dedicatedHostIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    HostState m_hostState{HostState::NOT_SET};
    bool m_hostStateHasBeenSet = false;

    Aws::String m_stateDetails;
    bool m_stateDetailsHasBeenSet = false;

    Aws::String m_ec2InstanceId;
    bool m_ec2InstanceIdHasBeenSet = false;

    Aws::Vector<NetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
