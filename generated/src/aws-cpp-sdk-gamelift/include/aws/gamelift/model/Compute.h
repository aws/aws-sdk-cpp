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
   * <p>Resources used to host your game servers. A compute resource can be managed
   * GameLift Amazon EC2 instances or your own resources.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/Compute">AWS
   * API Reference</a></p>
   */
  class Compute
  {
  public:
    AWS_GAMELIFT_API Compute();
    AWS_GAMELIFT_API Compute(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Compute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline Compute& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline Compute& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline Compute& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the fleet that the compute is registered
     * to.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet that the compute is registered
     * to.</p>
     */
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet that the compute is registered
     * to.</p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet that the compute is registered
     * to.</p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet that the compute is registered
     * to.</p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet that the compute is registered
     * to.</p>
     */
    inline Compute& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet that the compute is registered
     * to.</p>
     */
    inline Compute& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet that the compute is registered
     * to.</p>
     */
    inline Compute& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


    /**
     * <p>A descriptive label that is associated with the compute resource registered
     * to your fleet.</p>
     */
    inline const Aws::String& GetComputeName() const{ return m_computeName; }

    /**
     * <p>A descriptive label that is associated with the compute resource registered
     * to your fleet.</p>
     */
    inline bool ComputeNameHasBeenSet() const { return m_computeNameHasBeenSet; }

    /**
     * <p>A descriptive label that is associated with the compute resource registered
     * to your fleet.</p>
     */
    inline void SetComputeName(const Aws::String& value) { m_computeNameHasBeenSet = true; m_computeName = value; }

    /**
     * <p>A descriptive label that is associated with the compute resource registered
     * to your fleet.</p>
     */
    inline void SetComputeName(Aws::String&& value) { m_computeNameHasBeenSet = true; m_computeName = std::move(value); }

    /**
     * <p>A descriptive label that is associated with the compute resource registered
     * to your fleet.</p>
     */
    inline void SetComputeName(const char* value) { m_computeNameHasBeenSet = true; m_computeName.assign(value); }

    /**
     * <p>A descriptive label that is associated with the compute resource registered
     * to your fleet.</p>
     */
    inline Compute& WithComputeName(const Aws::String& value) { SetComputeName(value); return *this;}

    /**
     * <p>A descriptive label that is associated with the compute resource registered
     * to your fleet.</p>
     */
    inline Compute& WithComputeName(Aws::String&& value) { SetComputeName(std::move(value)); return *this;}

    /**
     * <p>A descriptive label that is associated with the compute resource registered
     * to your fleet.</p>
     */
    inline Compute& WithComputeName(const char* value) { SetComputeName(value); return *this;}


    /**
     * <p>The ARN that is assigned to the compute resource and uniquely identifies it.
     * ARNs are unique across locations.</p>
     */
    inline const Aws::String& GetComputeArn() const{ return m_computeArn; }

    /**
     * <p>The ARN that is assigned to the compute resource and uniquely identifies it.
     * ARNs are unique across locations.</p>
     */
    inline bool ComputeArnHasBeenSet() const { return m_computeArnHasBeenSet; }

    /**
     * <p>The ARN that is assigned to the compute resource and uniquely identifies it.
     * ARNs are unique across locations.</p>
     */
    inline void SetComputeArn(const Aws::String& value) { m_computeArnHasBeenSet = true; m_computeArn = value; }

    /**
     * <p>The ARN that is assigned to the compute resource and uniquely identifies it.
     * ARNs are unique across locations.</p>
     */
    inline void SetComputeArn(Aws::String&& value) { m_computeArnHasBeenSet = true; m_computeArn = std::move(value); }

    /**
     * <p>The ARN that is assigned to the compute resource and uniquely identifies it.
     * ARNs are unique across locations.</p>
     */
    inline void SetComputeArn(const char* value) { m_computeArnHasBeenSet = true; m_computeArn.assign(value); }

    /**
     * <p>The ARN that is assigned to the compute resource and uniquely identifies it.
     * ARNs are unique across locations.</p>
     */
    inline Compute& WithComputeArn(const Aws::String& value) { SetComputeArn(value); return *this;}

    /**
     * <p>The ARN that is assigned to the compute resource and uniquely identifies it.
     * ARNs are unique across locations.</p>
     */
    inline Compute& WithComputeArn(Aws::String&& value) { SetComputeArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that is assigned to the compute resource and uniquely identifies it.
     * ARNs are unique across locations.</p>
     */
    inline Compute& WithComputeArn(const char* value) { SetComputeArn(value); return *this;}


    /**
     * <p>The IP address of the compute resource. GameLift requires the DNS name or IP
     * address to manage your compute resource.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The IP address of the compute resource. GameLift requires the DNS name or IP
     * address to manage your compute resource.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The IP address of the compute resource. GameLift requires the DNS name or IP
     * address to manage your compute resource.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The IP address of the compute resource. GameLift requires the DNS name or IP
     * address to manage your compute resource.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The IP address of the compute resource. GameLift requires the DNS name or IP
     * address to manage your compute resource.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The IP address of the compute resource. GameLift requires the DNS name or IP
     * address to manage your compute resource.</p>
     */
    inline Compute& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The IP address of the compute resource. GameLift requires the DNS name or IP
     * address to manage your compute resource.</p>
     */
    inline Compute& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address of the compute resource. GameLift requires the DNS name or IP
     * address to manage your compute resource.</p>
     */
    inline Compute& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>The DNS name of the compute resource. GameLift requires the DNS name or IP
     * address to manage your compute resource.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }

    /**
     * <p>The DNS name of the compute resource. GameLift requires the DNS name or IP
     * address to manage your compute resource.</p>
     */
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }

    /**
     * <p>The DNS name of the compute resource. GameLift requires the DNS name or IP
     * address to manage your compute resource.</p>
     */
    inline void SetDnsName(const Aws::String& value) { m_dnsNameHasBeenSet = true; m_dnsName = value; }

    /**
     * <p>The DNS name of the compute resource. GameLift requires the DNS name or IP
     * address to manage your compute resource.</p>
     */
    inline void SetDnsName(Aws::String&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::move(value); }

    /**
     * <p>The DNS name of the compute resource. GameLift requires the DNS name or IP
     * address to manage your compute resource.</p>
     */
    inline void SetDnsName(const char* value) { m_dnsNameHasBeenSet = true; m_dnsName.assign(value); }

    /**
     * <p>The DNS name of the compute resource. GameLift requires the DNS name or IP
     * address to manage your compute resource.</p>
     */
    inline Compute& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}

    /**
     * <p>The DNS name of the compute resource. GameLift requires the DNS name or IP
     * address to manage your compute resource.</p>
     */
    inline Compute& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}

    /**
     * <p>The DNS name of the compute resource. GameLift requires the DNS name or IP
     * address to manage your compute resource.</p>
     */
    inline Compute& WithDnsName(const char* value) { SetDnsName(value); return *this;}


    /**
     * <p>Current status of the compute. A compute must have an <code>ACTIVE</code>
     * status to host game sessions.</p>
     */
    inline const ComputeStatus& GetComputeStatus() const{ return m_computeStatus; }

    /**
     * <p>Current status of the compute. A compute must have an <code>ACTIVE</code>
     * status to host game sessions.</p>
     */
    inline bool ComputeStatusHasBeenSet() const { return m_computeStatusHasBeenSet; }

    /**
     * <p>Current status of the compute. A compute must have an <code>ACTIVE</code>
     * status to host game sessions.</p>
     */
    inline void SetComputeStatus(const ComputeStatus& value) { m_computeStatusHasBeenSet = true; m_computeStatus = value; }

    /**
     * <p>Current status of the compute. A compute must have an <code>ACTIVE</code>
     * status to host game sessions.</p>
     */
    inline void SetComputeStatus(ComputeStatus&& value) { m_computeStatusHasBeenSet = true; m_computeStatus = std::move(value); }

    /**
     * <p>Current status of the compute. A compute must have an <code>ACTIVE</code>
     * status to host game sessions.</p>
     */
    inline Compute& WithComputeStatus(const ComputeStatus& value) { SetComputeStatus(value); return *this;}

    /**
     * <p>Current status of the compute. A compute must have an <code>ACTIVE</code>
     * status to host game sessions.</p>
     */
    inline Compute& WithComputeStatus(ComputeStatus&& value) { SetComputeStatus(std::move(value)); return *this;}


    /**
     * <p>The name of the custom location you added to the fleet that this compute
     * resource resides in.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The name of the custom location you added to the fleet that this compute
     * resource resides in.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The name of the custom location you added to the fleet that this compute
     * resource resides in.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The name of the custom location you added to the fleet that this compute
     * resource resides in.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The name of the custom location you added to the fleet that this compute
     * resource resides in.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The name of the custom location you added to the fleet that this compute
     * resource resides in.</p>
     */
    inline Compute& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The name of the custom location you added to the fleet that this compute
     * resource resides in.</p>
     */
    inline Compute& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The name of the custom location you added to the fleet that this compute
     * resource resides in.</p>
     */
    inline Compute& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline Compute& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline Compute& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The type of operating system on your compute resource.</p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>The type of operating system on your compute resource.</p>
     */
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }

    /**
     * <p>The type of operating system on your compute resource.</p>
     */
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }

    /**
     * <p>The type of operating system on your compute resource.</p>
     */
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }

    /**
     * <p>The type of operating system on your compute resource.</p>
     */
    inline Compute& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>The type of operating system on your compute resource.</p>
     */
    inline Compute& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}


    /**
     * <p>Which compute type that the fleet uses. A fleet can use Anywhere compute
     * resources owned by you or managed Amazon EC2 instances.</p>
     */
    inline const EC2InstanceType& GetType() const{ return m_type; }

    /**
     * <p>Which compute type that the fleet uses. A fleet can use Anywhere compute
     * resources owned by you or managed Amazon EC2 instances.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Which compute type that the fleet uses. A fleet can use Anywhere compute
     * resources owned by you or managed Amazon EC2 instances.</p>
     */
    inline void SetType(const EC2InstanceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Which compute type that the fleet uses. A fleet can use Anywhere compute
     * resources owned by you or managed Amazon EC2 instances.</p>
     */
    inline void SetType(EC2InstanceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Which compute type that the fleet uses. A fleet can use Anywhere compute
     * resources owned by you or managed Amazon EC2 instances.</p>
     */
    inline Compute& WithType(const EC2InstanceType& value) { SetType(value); return *this;}

    /**
     * <p>Which compute type that the fleet uses. A fleet can use Anywhere compute
     * resources owned by you or managed Amazon EC2 instances.</p>
     */
    inline Compute& WithType(EC2InstanceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The endpoint connection details of the GameLift SDK endpoint that your game
     * server connects to.</p>
     */
    inline const Aws::String& GetGameLiftServiceSdkEndpoint() const{ return m_gameLiftServiceSdkEndpoint; }

    /**
     * <p>The endpoint connection details of the GameLift SDK endpoint that your game
     * server connects to.</p>
     */
    inline bool GameLiftServiceSdkEndpointHasBeenSet() const { return m_gameLiftServiceSdkEndpointHasBeenSet; }

    /**
     * <p>The endpoint connection details of the GameLift SDK endpoint that your game
     * server connects to.</p>
     */
    inline void SetGameLiftServiceSdkEndpoint(const Aws::String& value) { m_gameLiftServiceSdkEndpointHasBeenSet = true; m_gameLiftServiceSdkEndpoint = value; }

    /**
     * <p>The endpoint connection details of the GameLift SDK endpoint that your game
     * server connects to.</p>
     */
    inline void SetGameLiftServiceSdkEndpoint(Aws::String&& value) { m_gameLiftServiceSdkEndpointHasBeenSet = true; m_gameLiftServiceSdkEndpoint = std::move(value); }

    /**
     * <p>The endpoint connection details of the GameLift SDK endpoint that your game
     * server connects to.</p>
     */
    inline void SetGameLiftServiceSdkEndpoint(const char* value) { m_gameLiftServiceSdkEndpointHasBeenSet = true; m_gameLiftServiceSdkEndpoint.assign(value); }

    /**
     * <p>The endpoint connection details of the GameLift SDK endpoint that your game
     * server connects to.</p>
     */
    inline Compute& WithGameLiftServiceSdkEndpoint(const Aws::String& value) { SetGameLiftServiceSdkEndpoint(value); return *this;}

    /**
     * <p>The endpoint connection details of the GameLift SDK endpoint that your game
     * server connects to.</p>
     */
    inline Compute& WithGameLiftServiceSdkEndpoint(Aws::String&& value) { SetGameLiftServiceSdkEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint connection details of the GameLift SDK endpoint that your game
     * server connects to.</p>
     */
    inline Compute& WithGameLiftServiceSdkEndpoint(const char* value) { SetGameLiftServiceSdkEndpoint(value); return *this;}

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
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
