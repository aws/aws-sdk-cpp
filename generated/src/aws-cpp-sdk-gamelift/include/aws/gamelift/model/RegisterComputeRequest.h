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
    AWS_GAMELIFT_API RegisterComputeRequest() = default;

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
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    RegisterComputeRequest& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label for the compute resource.</p>
     */
    inline const Aws::String& GetComputeName() const { return m_computeName; }
    inline bool ComputeNameHasBeenSet() const { return m_computeNameHasBeenSet; }
    template<typename ComputeNameT = Aws::String>
    void SetComputeName(ComputeNameT&& value) { m_computeNameHasBeenSet = true; m_computeName = std::forward<ComputeNameT>(value); }
    template<typename ComputeNameT = Aws::String>
    RegisterComputeRequest& WithComputeName(ComputeNameT&& value) { SetComputeName(std::forward<ComputeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to a TLS certificate on your compute resource. Amazon GameLift
     * Servers doesn't validate the path and certificate.</p>
     */
    inline const Aws::String& GetCertificatePath() const { return m_certificatePath; }
    inline bool CertificatePathHasBeenSet() const { return m_certificatePathHasBeenSet; }
    template<typename CertificatePathT = Aws::String>
    void SetCertificatePath(CertificatePathT&& value) { m_certificatePathHasBeenSet = true; m_certificatePath = std::forward<CertificatePathT>(value); }
    template<typename CertificatePathT = Aws::String>
    RegisterComputeRequest& WithCertificatePath(CertificatePathT&& value) { SetCertificatePath(std::forward<CertificatePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of the compute resource. Amazon GameLift Servers requires either
     * a DNS name or IP address.</p>
     */
    inline const Aws::String& GetDnsName() const { return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    template<typename DnsNameT = Aws::String>
    void SetDnsName(DnsNameT&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::forward<DnsNameT>(value); }
    template<typename DnsNameT = Aws::String>
    RegisterComputeRequest& WithDnsName(DnsNameT&& value) { SetDnsName(std::forward<DnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the compute resource. Amazon GameLift Servers requires
     * either a DNS name or IP address. When registering an Anywhere fleet, an IP
     * address is required.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    RegisterComputeRequest& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a custom location to associate with the compute resource being
     * registered. This parameter is required when registering a compute for an
     * Anywhere fleet.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    RegisterComputeRequest& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
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
