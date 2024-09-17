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


    ///@{
    /**
     * <p>A unique identifier for the fleet to register the compute to. You can use
     * either the fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }
    inline RegisterComputeRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline RegisterComputeRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline RegisterComputeRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label for the compute resource.</p>
     */
    inline const Aws::String& GetComputeName() const{ return m_computeName; }
    inline bool ComputeNameHasBeenSet() const { return m_computeNameHasBeenSet; }
    inline void SetComputeName(const Aws::String& value) { m_computeNameHasBeenSet = true; m_computeName = value; }
    inline void SetComputeName(Aws::String&& value) { m_computeNameHasBeenSet = true; m_computeName = std::move(value); }
    inline void SetComputeName(const char* value) { m_computeNameHasBeenSet = true; m_computeName.assign(value); }
    inline RegisterComputeRequest& WithComputeName(const Aws::String& value) { SetComputeName(value); return *this;}
    inline RegisterComputeRequest& WithComputeName(Aws::String&& value) { SetComputeName(std::move(value)); return *this;}
    inline RegisterComputeRequest& WithComputeName(const char* value) { SetComputeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to a TLS certificate on your compute resource. Amazon GameLift
     * doesn't validate the path and certificate.</p>
     */
    inline const Aws::String& GetCertificatePath() const{ return m_certificatePath; }
    inline bool CertificatePathHasBeenSet() const { return m_certificatePathHasBeenSet; }
    inline void SetCertificatePath(const Aws::String& value) { m_certificatePathHasBeenSet = true; m_certificatePath = value; }
    inline void SetCertificatePath(Aws::String&& value) { m_certificatePathHasBeenSet = true; m_certificatePath = std::move(value); }
    inline void SetCertificatePath(const char* value) { m_certificatePathHasBeenSet = true; m_certificatePath.assign(value); }
    inline RegisterComputeRequest& WithCertificatePath(const Aws::String& value) { SetCertificatePath(value); return *this;}
    inline RegisterComputeRequest& WithCertificatePath(Aws::String&& value) { SetCertificatePath(std::move(value)); return *this;}
    inline RegisterComputeRequest& WithCertificatePath(const char* value) { SetCertificatePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of the compute resource. Amazon GameLift requires either a DNS
     * name or IP address.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    inline void SetDnsName(const Aws::String& value) { m_dnsNameHasBeenSet = true; m_dnsName = value; }
    inline void SetDnsName(Aws::String&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::move(value); }
    inline void SetDnsName(const char* value) { m_dnsNameHasBeenSet = true; m_dnsName.assign(value); }
    inline RegisterComputeRequest& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}
    inline RegisterComputeRequest& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}
    inline RegisterComputeRequest& WithDnsName(const char* value) { SetDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the compute resource. Amazon GameLift requires either a DNS
     * name or IP address. When registering an Anywhere fleet, an IP address is
     * required.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline RegisterComputeRequest& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline RegisterComputeRequest& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline RegisterComputeRequest& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a custom location to associate with the compute resource being
     * registered. This parameter is required when registering a compute for an
     * Anywhere fleet.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline RegisterComputeRequest& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline RegisterComputeRequest& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline RegisterComputeRequest& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}
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
