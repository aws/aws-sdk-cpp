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
   * <p>An Amazon GameLift compute resource for hosting your game servers. Computes
   * in an Amazon GameLift fleet differs depending on the fleet's compute type
   * property as follows: </p> <ul> <li> <p>For managed EC2 fleets, a compute is an
   * EC2 instance.</p> </li> <li> <p>For Anywhere fleets, a compute is a computing
   * resource that you provide and is registered to the fleet.</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/Compute">AWS
   * API Reference</a></p>
   */
  class Compute
  {
  public:
    AWS_GAMELIFT_API Compute();
    AWS_GAMELIFT_API Compute(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Compute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the fleet that the compute belongs to.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }
    inline Compute& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline Compute& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline Compute& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the fleet that the compute belongs to.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }
    inline Compute& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}
    inline Compute& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}
    inline Compute& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label for the compute resource. For instances in a managed EC2
     * fleet, the compute name is the same value as the <code>InstanceId</code> ID.</p>
     */
    inline const Aws::String& GetComputeName() const{ return m_computeName; }
    inline bool ComputeNameHasBeenSet() const { return m_computeNameHasBeenSet; }
    inline void SetComputeName(const Aws::String& value) { m_computeNameHasBeenSet = true; m_computeName = value; }
    inline void SetComputeName(Aws::String&& value) { m_computeNameHasBeenSet = true; m_computeName = std::move(value); }
    inline void SetComputeName(const char* value) { m_computeNameHasBeenSet = true; m_computeName.assign(value); }
    inline Compute& WithComputeName(const Aws::String& value) { SetComputeName(value); return *this;}
    inline Compute& WithComputeName(Aws::String&& value) { SetComputeName(std::move(value)); return *this;}
    inline Compute& WithComputeName(const char* value) { SetComputeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN that is assigned to a compute resource and uniquely identifies it.
     * ARNs are unique across locations. Instances in managed EC2 fleets are not
     * assigned a Compute ARN.</p>
     */
    inline const Aws::String& GetComputeArn() const{ return m_computeArn; }
    inline bool ComputeArnHasBeenSet() const { return m_computeArnHasBeenSet; }
    inline void SetComputeArn(const Aws::String& value) { m_computeArnHasBeenSet = true; m_computeArn = value; }
    inline void SetComputeArn(Aws::String&& value) { m_computeArnHasBeenSet = true; m_computeArn = std::move(value); }
    inline void SetComputeArn(const char* value) { m_computeArnHasBeenSet = true; m_computeArn.assign(value); }
    inline Compute& WithComputeArn(const Aws::String& value) { SetComputeArn(value); return *this;}
    inline Compute& WithComputeArn(Aws::String&& value) { SetComputeArn(std::move(value)); return *this;}
    inline Compute& WithComputeArn(const char* value) { SetComputeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of a compute resource. Amazon GameLift requires a DNS name or
     * IP address for a compute.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline Compute& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline Compute& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline Compute& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of a compute resource. Amazon GameLift requires a DNS name or IP
     * address for a compute.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    inline void SetDnsName(const Aws::String& value) { m_dnsNameHasBeenSet = true; m_dnsName = value; }
    inline void SetDnsName(Aws::String&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::move(value); }
    inline void SetDnsName(const char* value) { m_dnsNameHasBeenSet = true; m_dnsName.assign(value); }
    inline Compute& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}
    inline Compute& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}
    inline Compute& WithDnsName(const char* value) { SetDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the compute. A compute must have an <code>ACTIVE</code>
     * status to host game sessions.</p>
     */
    inline const ComputeStatus& GetComputeStatus() const{ return m_computeStatus; }
    inline bool ComputeStatusHasBeenSet() const { return m_computeStatusHasBeenSet; }
    inline void SetComputeStatus(const ComputeStatus& value) { m_computeStatusHasBeenSet = true; m_computeStatus = value; }
    inline void SetComputeStatus(ComputeStatus&& value) { m_computeStatusHasBeenSet = true; m_computeStatus = std::move(value); }
    inline Compute& WithComputeStatus(const ComputeStatus& value) { SetComputeStatus(value); return *this;}
    inline Compute& WithComputeStatus(ComputeStatus&& value) { SetComputeStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom location you added to the fleet that this compute
     * resource resides in.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline Compute& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline Compute& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline Compute& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline Compute& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline Compute& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of operating system on the compute resource.</p>  <p>Amazon
     * Linux 2 (AL2) will reach end of support on 6/30/2025. See more details in the <a
     * href="https://aws.amazon.com/amazon-linux-2/faqs/">Amazon Linux 2 FAQs</a>. For
     * game servers that are hosted on AL2 and use Amazon GameLift server SDK 4.x.,
     * first update the game server build to server SDK 5.x, and then deploy to AL2023
     * instances. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-serversdk5-migration.html">
     * Migrate to Amazon GameLift server SDK version 5.</a> </p> 
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }
    inline Compute& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}
    inline Compute& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance type that the fleet uses. For registered computes in
     * an Amazon GameLift Anywhere fleet, this property is empty. </p>
     */
    inline const EC2InstanceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const EC2InstanceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(EC2InstanceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Compute& WithType(const EC2InstanceType& value) { SetType(value); return *this;}
    inline Compute& WithType(EC2InstanceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon GameLift SDK endpoint connection for a registered compute resource
     * in an Anywhere fleet. The game servers on the compute use this endpoint to
     * connect to the Amazon GameLift service.</p>
     */
    inline const Aws::String& GetGameLiftServiceSdkEndpoint() const{ return m_gameLiftServiceSdkEndpoint; }
    inline bool GameLiftServiceSdkEndpointHasBeenSet() const { return m_gameLiftServiceSdkEndpointHasBeenSet; }
    inline void SetGameLiftServiceSdkEndpoint(const Aws::String& value) { m_gameLiftServiceSdkEndpointHasBeenSet = true; m_gameLiftServiceSdkEndpoint = value; }
    inline void SetGameLiftServiceSdkEndpoint(Aws::String&& value) { m_gameLiftServiceSdkEndpointHasBeenSet = true; m_gameLiftServiceSdkEndpoint = std::move(value); }
    inline void SetGameLiftServiceSdkEndpoint(const char* value) { m_gameLiftServiceSdkEndpointHasBeenSet = true; m_gameLiftServiceSdkEndpoint.assign(value); }
    inline Compute& WithGameLiftServiceSdkEndpoint(const Aws::String& value) { SetGameLiftServiceSdkEndpoint(value); return *this;}
    inline Compute& WithGameLiftServiceSdkEndpoint(Aws::String&& value) { SetGameLiftServiceSdkEndpoint(std::move(value)); return *this;}
    inline Compute& WithGameLiftServiceSdkEndpoint(const char* value) { SetGameLiftServiceSdkEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The endpoint of the Amazon GameLift Agent. </p>
     */
    inline const Aws::String& GetGameLiftAgentEndpoint() const{ return m_gameLiftAgentEndpoint; }
    inline bool GameLiftAgentEndpointHasBeenSet() const { return m_gameLiftAgentEndpointHasBeenSet; }
    inline void SetGameLiftAgentEndpoint(const Aws::String& value) { m_gameLiftAgentEndpointHasBeenSet = true; m_gameLiftAgentEndpoint = value; }
    inline void SetGameLiftAgentEndpoint(Aws::String&& value) { m_gameLiftAgentEndpointHasBeenSet = true; m_gameLiftAgentEndpoint = std::move(value); }
    inline void SetGameLiftAgentEndpoint(const char* value) { m_gameLiftAgentEndpointHasBeenSet = true; m_gameLiftAgentEndpoint.assign(value); }
    inline Compute& WithGameLiftAgentEndpoint(const Aws::String& value) { SetGameLiftAgentEndpoint(value); return *this;}
    inline Compute& WithGameLiftAgentEndpoint(Aws::String&& value) { SetGameLiftAgentEndpoint(std::move(value)); return *this;}
    inline Compute& WithGameLiftAgentEndpoint(const char* value) { SetGameLiftAgentEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <code>InstanceID</code> of the EC2 instance that is hosting the compute.
     * </p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline Compute& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline Compute& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline Compute& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of attributes for each container in the compute. </p>
     */
    inline const Aws::Vector<ContainerAttribute>& GetContainerAttributes() const{ return m_containerAttributes; }
    inline bool ContainerAttributesHasBeenSet() const { return m_containerAttributesHasBeenSet; }
    inline void SetContainerAttributes(const Aws::Vector<ContainerAttribute>& value) { m_containerAttributesHasBeenSet = true; m_containerAttributes = value; }
    inline void SetContainerAttributes(Aws::Vector<ContainerAttribute>&& value) { m_containerAttributesHasBeenSet = true; m_containerAttributes = std::move(value); }
    inline Compute& WithContainerAttributes(const Aws::Vector<ContainerAttribute>& value) { SetContainerAttributes(value); return *this;}
    inline Compute& WithContainerAttributes(Aws::Vector<ContainerAttribute>&& value) { SetContainerAttributes(std::move(value)); return *this;}
    inline Compute& AddContainerAttributes(const ContainerAttribute& value) { m_containerAttributesHasBeenSet = true; m_containerAttributes.push_back(value); return *this; }
    inline Compute& AddContainerAttributes(ContainerAttribute&& value) { m_containerAttributesHasBeenSet = true; m_containerAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The game server container group definition for the compute.</p>
     */
    inline const Aws::String& GetGameServerContainerGroupDefinitionArn() const{ return m_gameServerContainerGroupDefinitionArn; }
    inline bool GameServerContainerGroupDefinitionArnHasBeenSet() const { return m_gameServerContainerGroupDefinitionArnHasBeenSet; }
    inline void SetGameServerContainerGroupDefinitionArn(const Aws::String& value) { m_gameServerContainerGroupDefinitionArnHasBeenSet = true; m_gameServerContainerGroupDefinitionArn = value; }
    inline void SetGameServerContainerGroupDefinitionArn(Aws::String&& value) { m_gameServerContainerGroupDefinitionArnHasBeenSet = true; m_gameServerContainerGroupDefinitionArn = std::move(value); }
    inline void SetGameServerContainerGroupDefinitionArn(const char* value) { m_gameServerContainerGroupDefinitionArnHasBeenSet = true; m_gameServerContainerGroupDefinitionArn.assign(value); }
    inline Compute& WithGameServerContainerGroupDefinitionArn(const Aws::String& value) { SetGameServerContainerGroupDefinitionArn(value); return *this;}
    inline Compute& WithGameServerContainerGroupDefinitionArn(Aws::String&& value) { SetGameServerContainerGroupDefinitionArn(std::move(value)); return *this;}
    inline Compute& WithGameServerContainerGroupDefinitionArn(const char* value) { SetGameServerContainerGroupDefinitionArn(value); return *this;}
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

    ComputeStatus m_computeStatus;
    bool m_computeStatusHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    EC2InstanceType m_type;
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
