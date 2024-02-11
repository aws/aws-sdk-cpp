/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class RegisterComputeRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API RegisterComputeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterCompute"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the fleet to register the compute to. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet to register the compute to. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet to register the compute to. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet to register the compute to. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet to register the compute to. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet to register the compute to. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline RegisterComputeRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet to register the compute to. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline RegisterComputeRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet to register the compute to. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline RegisterComputeRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>A descriptive label for the compute resource.</p>
     */
    inline const Aws::String& GetComputeName() const{ return m_computeName; }

    /**
     * <p>A descriptive label for the compute resource.</p>
     */
    inline bool ComputeNameHasBeenSet() const { return m_computeNameHasBeenSet; }

    /**
     * <p>A descriptive label for the compute resource.</p>
     */
    inline void SetComputeName(const Aws::String& value) { m_computeNameHasBeenSet = true; m_computeName = value; }

    /**
     * <p>A descriptive label for the compute resource.</p>
     */
    inline void SetComputeName(Aws::String&& value) { m_computeNameHasBeenSet = true; m_computeName = std::move(value); }

    /**
     * <p>A descriptive label for the compute resource.</p>
     */
    inline void SetComputeName(const char* value) { m_computeNameHasBeenSet = true; m_computeName.assign(value); }

    /**
     * <p>A descriptive label for the compute resource.</p>
     */
    inline RegisterComputeRequest& WithComputeName(const Aws::String& value) { SetComputeName(value); return *this;}

    /**
     * <p>A descriptive label for the compute resource.</p>
     */
    inline RegisterComputeRequest& WithComputeName(Aws::String&& value) { SetComputeName(std::move(value)); return *this;}

    /**
     * <p>A descriptive label for the compute resource.</p>
     */
    inline RegisterComputeRequest& WithComputeName(const char* value) { SetComputeName(value); return *this;}


    /**
     * <p>The path to a TLS certificate on your compute resource. Amazon GameLift
     * doesn't validate the path and certificate.</p>
     */
    inline const Aws::String& GetCertificatePath() const{ return m_certificatePath; }

    /**
     * <p>The path to a TLS certificate on your compute resource. Amazon GameLift
     * doesn't validate the path and certificate.</p>
     */
    inline bool CertificatePathHasBeenSet() const { return m_certificatePathHasBeenSet; }

    /**
     * <p>The path to a TLS certificate on your compute resource. Amazon GameLift
     * doesn't validate the path and certificate.</p>
     */
    inline void SetCertificatePath(const Aws::String& value) { m_certificatePathHasBeenSet = true; m_certificatePath = value; }

    /**
     * <p>The path to a TLS certificate on your compute resource. Amazon GameLift
     * doesn't validate the path and certificate.</p>
     */
    inline void SetCertificatePath(Aws::String&& value) { m_certificatePathHasBeenSet = true; m_certificatePath = std::move(value); }

    /**
     * <p>The path to a TLS certificate on your compute resource. Amazon GameLift
     * doesn't validate the path and certificate.</p>
     */
    inline void SetCertificatePath(const char* value) { m_certificatePathHasBeenSet = true; m_certificatePath.assign(value); }

    /**
     * <p>The path to a TLS certificate on your compute resource. Amazon GameLift
     * doesn't validate the path and certificate.</p>
     */
    inline RegisterComputeRequest& WithCertificatePath(const Aws::String& value) { SetCertificatePath(value); return *this;}

    /**
     * <p>The path to a TLS certificate on your compute resource. Amazon GameLift
     * doesn't validate the path and certificate.</p>
     */
    inline RegisterComputeRequest& WithCertificatePath(Aws::String&& value) { SetCertificatePath(std::move(value)); return *this;}

    /**
     * <p>The path to a TLS certificate on your compute resource. Amazon GameLift
     * doesn't validate the path and certificate.</p>
     */
    inline RegisterComputeRequest& WithCertificatePath(const char* value) { SetCertificatePath(value); return *this;}


    /**
     * <p>The DNS name of the compute resource. Amazon GameLift requires either a DNS
     * name or IP address.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }

    /**
     * <p>The DNS name of the compute resource. Amazon GameLift requires either a DNS
     * name or IP address.</p>
     */
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }

    /**
     * <p>The DNS name of the compute resource. Amazon GameLift requires either a DNS
     * name or IP address.</p>
     */
    inline void SetDnsName(const Aws::String& value) { m_dnsNameHasBeenSet = true; m_dnsName = value; }

    /**
     * <p>The DNS name of the compute resource. Amazon GameLift requires either a DNS
     * name or IP address.</p>
     */
    inline void SetDnsName(Aws::String&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::move(value); }

    /**
     * <p>The DNS name of the compute resource. Amazon GameLift requires either a DNS
     * name or IP address.</p>
     */
    inline void SetDnsName(const char* value) { m_dnsNameHasBeenSet = true; m_dnsName.assign(value); }

    /**
     * <p>The DNS name of the compute resource. Amazon GameLift requires either a DNS
     * name or IP address.</p>
     */
    inline RegisterComputeRequest& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}

    /**
     * <p>The DNS name of the compute resource. Amazon GameLift requires either a DNS
     * name or IP address.</p>
     */
    inline RegisterComputeRequest& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}

    /**
     * <p>The DNS name of the compute resource. Amazon GameLift requires either a DNS
     * name or IP address.</p>
     */
    inline RegisterComputeRequest& WithDnsName(const char* value) { SetDnsName(value); return *this;}


    /**
     * <p>The IP address of the compute resource. Amazon GameLift requires either a DNS
     * name or IP address.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The IP address of the compute resource. Amazon GameLift requires either a DNS
     * name or IP address.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The IP address of the compute resource. Amazon GameLift requires either a DNS
     * name or IP address.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The IP address of the compute resource. Amazon GameLift requires either a DNS
     * name or IP address.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The IP address of the compute resource. Amazon GameLift requires either a DNS
     * name or IP address.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The IP address of the compute resource. Amazon GameLift requires either a DNS
     * name or IP address.</p>
     */
    inline RegisterComputeRequest& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The IP address of the compute resource. Amazon GameLift requires either a DNS
     * name or IP address.</p>
     */
    inline RegisterComputeRequest& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address of the compute resource. Amazon GameLift requires either a DNS
     * name or IP address.</p>
     */
    inline RegisterComputeRequest& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>The name of a custom location to associate with the compute resource being
     * registered. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The name of a custom location to associate with the compute resource being
     * registered. </p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The name of a custom location to associate with the compute resource being
     * registered. </p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The name of a custom location to associate with the compute resource being
     * registered. </p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The name of a custom location to associate with the compute resource being
     * registered. </p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The name of a custom location to associate with the compute resource being
     * registered. </p>
     */
    inline RegisterComputeRequest& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The name of a custom location to associate with the compute resource being
     * registered. </p>
     */
    inline RegisterComputeRequest& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The name of a custom location to associate with the compute resource being
     * registered. </p>
     */
    inline RegisterComputeRequest& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_computeName;
    bool m_computeNameHasBeenSet = false;

    Aws::String m_certificatePath;
    bool m_certificatePathHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
