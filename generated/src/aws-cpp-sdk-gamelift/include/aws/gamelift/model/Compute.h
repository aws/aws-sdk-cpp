/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ComputeStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gamelift/model/OperatingSystem.h>
#include <aws/gamelift/model/EC2InstanceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ContainerAttribute.h>
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
   * <p>An Amazon GameLift Servers compute resource for hosting your game servers.
   * Computes in an Amazon GameLift Servers fleet differs depending on the fleet's
   * compute type property as follows: </p> <ul> <li> <p>For managed EC2 fleets, a
   * compute is an EC2 instance.</p> </li> <li> <p>For Anywhere fleets, a compute is
   * a computing resource that you provide and is registered to the fleet.</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/Compute">AWS
   * API Reference</a></p>
   */
  class Compute
  {
  public:
    AWS_GAMELIFT_API Compute() = default;
    AWS_GAMELIFT_API Compute(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Compute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the fleet that the compute belongs to.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    Compute& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the fleet that the compute belongs to.</p>
     */
    inline const Aws::String& GetFleetArn() const { return m_fleetArn; }
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }
    template<typename FleetArnT = Aws::String>
    void SetFleetArn(FleetArnT&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::forward<FleetArnT>(value); }
    template<typename FleetArnT = Aws::String>
    Compute& WithFleetArn(FleetArnT&& value) { SetFleetArn(std::forward<FleetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label for the compute resource. For instances in a managed EC2
     * fleet, the compute name is the same value as the <code>InstanceId</code> ID.</p>
     */
    inline const Aws::String& GetComputeName() const { return m_computeName; }
    inline bool ComputeNameHasBeenSet() const { return m_computeNameHasBeenSet; }
    template<typename ComputeNameT = Aws::String>
    void SetComputeName(ComputeNameT&& value) { m_computeNameHasBeenSet = true; m_computeName = std::forward<ComputeNameT>(value); }
    template<typename ComputeNameT = Aws::String>
    Compute& WithComputeName(ComputeNameT&& value) { SetComputeName(std::forward<ComputeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN that is assigned to a compute resource and uniquely identifies it.
     * ARNs are unique across locations. Instances in managed EC2 fleets are not
     * assigned a Compute ARN.</p>
     */
    inline const Aws::String& GetComputeArn() const { return m_computeArn; }
    inline bool ComputeArnHasBeenSet() const { return m_computeArnHasBeenSet; }
    template<typename ComputeArnT = Aws::String>
    void SetComputeArn(ComputeArnT&& value) { m_computeArnHasBeenSet = true; m_computeArn = std::forward<ComputeArnT>(value); }
    template<typename ComputeArnT = Aws::String>
    Compute& WithComputeArn(ComputeArnT&& value) { SetComputeArn(std::forward<ComputeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of a compute resource. Amazon GameLift Servers requires a DNS
     * name or IP address for a compute.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    Compute& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of a compute resource. Amazon GameLift Servers requires a DNS
     * name or IP address for a compute.</p>
     */
    inline const Aws::String& GetDnsName() const { return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    template<typename DnsNameT = Aws::String>
    void SetDnsName(DnsNameT&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::forward<DnsNameT>(value); }
    template<typename DnsNameT = Aws::String>
    Compute& WithDnsName(DnsNameT&& value) { SetDnsName(std::forward<DnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the compute. A compute must have an <code>ACTIVE</code>
     * status to host game sessions.</p>
     */
    inline ComputeStatus GetComputeStatus() const { return m_computeStatus; }
    inline bool ComputeStatusHasBeenSet() const { return m_computeStatusHasBeenSet; }
    inline void SetComputeStatus(ComputeStatus value) { m_computeStatusHasBeenSet = true; m_computeStatus = value; }
    inline Compute& WithComputeStatus(ComputeStatus value) { SetComputeStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom location you added to the fleet that this compute
     * resource resides in.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    Compute& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Compute& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of operating system on the compute resource.</p>  <p>Amazon
     * Linux 2 (AL2) will reach end of support on 6/30/2025. See more details in the <a
     * href="http://aws.amazon.com/aws.amazon.com/amazon-linux-2/faqs/">Amazon Linux 2
     * FAQs</a>. For game servers that are hosted on AL2 and use server SDK version 4.x
     * for Amazon GameLift Servers, first update the game server build to server SDK
     * 5.x, and then deploy to AL2023 instances. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-serversdk5-migration.html">
     * Migrate to server SDK version 5.</a> </p> 
     */
    inline OperatingSystem GetOperatingSystem() const { return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(OperatingSystem value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline Compute& WithOperatingSystem(OperatingSystem value) { SetOperatingSystem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance type that the fleet uses. For registered computes in
     * an Amazon GameLift Servers Anywhere fleet, this property is empty. </p>
     */
    inline EC2InstanceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EC2InstanceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Compute& WithType(EC2InstanceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon GameLift Servers SDK endpoint connection for a registered compute
     * resource in an Anywhere fleet. The game servers on the compute use this endpoint
     * to connect to the Amazon GameLift Servers service.</p>
     */
    inline const Aws::String& GetGameLiftServiceSdkEndpoint() const { return m_gameLiftServiceSdkEndpoint; }
    inline bool GameLiftServiceSdkEndpointHasBeenSet() const { return m_gameLiftServiceSdkEndpointHasBeenSet; }
    template<typename GameLiftServiceSdkEndpointT = Aws::String>
    void SetGameLiftServiceSdkEndpoint(GameLiftServiceSdkEndpointT&& value) { m_gameLiftServiceSdkEndpointHasBeenSet = true; m_gameLiftServiceSdkEndpoint = std::forward<GameLiftServiceSdkEndpointT>(value); }
    template<typename GameLiftServiceSdkEndpointT = Aws::String>
    Compute& WithGameLiftServiceSdkEndpoint(GameLiftServiceSdkEndpointT&& value) { SetGameLiftServiceSdkEndpoint(std::forward<GameLiftServiceSdkEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The endpoint of the Amazon GameLift Servers Agent. </p>
     */
    inline const Aws::String& GetGameLiftAgentEndpoint() const { return m_gameLiftAgentEndpoint; }
    inline bool GameLiftAgentEndpointHasBeenSet() const { return m_gameLiftAgentEndpointHasBeenSet; }
    template<typename GameLiftAgentEndpointT = Aws::String>
    void SetGameLiftAgentEndpoint(GameLiftAgentEndpointT&& value) { m_gameLiftAgentEndpointHasBeenSet = true; m_gameLiftAgentEndpoint = std::forward<GameLiftAgentEndpointT>(value); }
    template<typename GameLiftAgentEndpointT = Aws::String>
    Compute& WithGameLiftAgentEndpoint(GameLiftAgentEndpointT&& value) { SetGameLiftAgentEndpoint(std::forward<GameLiftAgentEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <code>InstanceID</code> of the EC2 instance that is hosting the compute.
     * </p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    Compute& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of attributes for each container in the compute. </p>
     */
    inline const Aws::Vector<ContainerAttribute>& GetContainerAttributes() const { return m_containerAttributes; }
    inline bool ContainerAttributesHasBeenSet() const { return m_containerAttributesHasBeenSet; }
    template<typename ContainerAttributesT = Aws::Vector<ContainerAttribute>>
    void SetContainerAttributes(ContainerAttributesT&& value) { m_containerAttributesHasBeenSet = true; m_containerAttributes = std::forward<ContainerAttributesT>(value); }
    template<typename ContainerAttributesT = Aws::Vector<ContainerAttribute>>
    Compute& WithContainerAttributes(ContainerAttributesT&& value) { SetContainerAttributes(std::forward<ContainerAttributesT>(value)); return *this;}
    template<typename ContainerAttributesT = ContainerAttribute>
    Compute& AddContainerAttributes(ContainerAttributesT&& value) { m_containerAttributesHasBeenSet = true; m_containerAttributes.emplace_back(std::forward<ContainerAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The game server container group definition for the compute.</p>
     */
    inline const Aws::String& GetGameServerContainerGroupDefinitionArn() const { return m_gameServerContainerGroupDefinitionArn; }
    inline bool GameServerContainerGroupDefinitionArnHasBeenSet() const { return m_gameServerContainerGroupDefinitionArnHasBeenSet; }
    template<typename GameServerContainerGroupDefinitionArnT = Aws::String>
    void SetGameServerContainerGroupDefinitionArn(GameServerContainerGroupDefinitionArnT&& value) { m_gameServerContainerGroupDefinitionArnHasBeenSet = true; m_gameServerContainerGroupDefinitionArn = std::forward<GameServerContainerGroupDefinitionArnT>(value); }
    template<typename GameServerContainerGroupDefinitionArnT = Aws::String>
    Compute& WithGameServerContainerGroupDefinitionArn(GameServerContainerGroupDefinitionArnT&& value) { SetGameServerContainerGroupDefinitionArn(std::forward<GameServerContainerGroupDefinitionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet = false;

    Aws::String m_computeName;
    bool m_computeNameHasBeenSet = false;

    Aws::String m_computeArn;
    bool m_computeArnHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    ComputeStatus m_computeStatus{ComputeStatus::NOT_SET};
    bool m_computeStatusHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    OperatingSystem m_operatingSystem{OperatingSystem::NOT_SET};
    bool m_operatingSystemHasBeenSet = false;

    EC2InstanceType m_type{EC2InstanceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_gameLiftServiceSdkEndpoint;
    bool m_gameLiftServiceSdkEndpointHasBeenSet = false;

    Aws::String m_gameLiftAgentEndpoint;
    bool m_gameLiftAgentEndpointHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Vector<ContainerAttribute> m_containerAttributes;
    bool m_containerAttributesHasBeenSet = false;

    Aws::String m_gameServerContainerGroupDefinitionArn;
    bool m_gameServerContainerGroupDefinitionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
