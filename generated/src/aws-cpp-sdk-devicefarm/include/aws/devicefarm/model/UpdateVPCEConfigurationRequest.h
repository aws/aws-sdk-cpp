/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   */
  class UpdateVPCEConfigurationRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API UpdateVPCEConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVPCEConfiguration"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint configuration you want to
     * update.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateVPCEConfigurationRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name you give to your VPC endpoint configuration to manage your
     * configurations more easily.</p>
     */
    inline const Aws::String& GetVpceConfigurationName() const { return m_vpceConfigurationName; }
    inline bool VpceConfigurationNameHasBeenSet() const { return m_vpceConfigurationNameHasBeenSet; }
    template<typename VpceConfigurationNameT = Aws::String>
    void SetVpceConfigurationName(VpceConfigurationNameT&& value) { m_vpceConfigurationNameHasBeenSet = true; m_vpceConfigurationName = std::forward<VpceConfigurationNameT>(value); }
    template<typename VpceConfigurationNameT = Aws::String>
    UpdateVPCEConfigurationRequest& WithVpceConfigurationName(VpceConfigurationNameT&& value) { SetVpceConfigurationName(std::forward<VpceConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VPC endpoint service running in your AWS account that you
     * want Device Farm to test.</p>
     */
    inline const Aws::String& GetVpceServiceName() const { return m_vpceServiceName; }
    inline bool VpceServiceNameHasBeenSet() const { return m_vpceServiceNameHasBeenSet; }
    template<typename VpceServiceNameT = Aws::String>
    void SetVpceServiceName(VpceServiceNameT&& value) { m_vpceServiceNameHasBeenSet = true; m_vpceServiceName = std::forward<VpceServiceNameT>(value); }
    template<typename VpceServiceNameT = Aws::String>
    UpdateVPCEConfigurationRequest& WithVpceServiceName(VpceServiceNameT&& value) { SetVpceServiceName(std::forward<VpceServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS (domain) name used to connect to your private service in your VPC.
     * The DNS name must not already be in use on the internet.</p>
     */
    inline const Aws::String& GetServiceDnsName() const { return m_serviceDnsName; }
    inline bool ServiceDnsNameHasBeenSet() const { return m_serviceDnsNameHasBeenSet; }
    template<typename ServiceDnsNameT = Aws::String>
    void SetServiceDnsName(ServiceDnsNameT&& value) { m_serviceDnsNameHasBeenSet = true; m_serviceDnsName = std::forward<ServiceDnsNameT>(value); }
    template<typename ServiceDnsNameT = Aws::String>
    UpdateVPCEConfigurationRequest& WithServiceDnsName(ServiceDnsNameT&& value) { SetServiceDnsName(std::forward<ServiceDnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description that provides details about your VPC endpoint
     * configuration.</p>
     */
    inline const Aws::String& GetVpceConfigurationDescription() const { return m_vpceConfigurationDescription; }
    inline bool VpceConfigurationDescriptionHasBeenSet() const { return m_vpceConfigurationDescriptionHasBeenSet; }
    template<typename VpceConfigurationDescriptionT = Aws::String>
    void SetVpceConfigurationDescription(VpceConfigurationDescriptionT&& value) { m_vpceConfigurationDescriptionHasBeenSet = true; m_vpceConfigurationDescription = std::forward<VpceConfigurationDescriptionT>(value); }
    template<typename VpceConfigurationDescriptionT = Aws::String>
    UpdateVPCEConfigurationRequest& WithVpceConfigurationDescription(VpceConfigurationDescriptionT&& value) { SetVpceConfigurationDescription(std::forward<VpceConfigurationDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_vpceConfigurationName;
    bool m_vpceConfigurationNameHasBeenSet = false;

    Aws::String m_vpceServiceName;
    bool m_vpceServiceNameHasBeenSet = false;

    Aws::String m_serviceDnsName;
    bool m_serviceDnsNameHasBeenSet = false;

    Aws::String m_vpceConfigurationDescription;
    bool m_vpceConfigurationDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
