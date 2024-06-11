/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents an Amazon Virtual Private Cloud (VPC) endpoint
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/VPCEConfiguration">AWS
   * API Reference</a></p>
   */
  class VPCEConfiguration
  {
  public:
    AWS_DEVICEFARM_API VPCEConfiguration();
    AWS_DEVICEFARM_API VPCEConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API VPCEConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint configuration.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline VPCEConfiguration& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline VPCEConfiguration& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline VPCEConfiguration& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name you give to your VPC endpoint configuration to manage your
     * configurations more easily.</p>
     */
    inline const Aws::String& GetVpceConfigurationName() const{ return m_vpceConfigurationName; }
    inline bool VpceConfigurationNameHasBeenSet() const { return m_vpceConfigurationNameHasBeenSet; }
    inline void SetVpceConfigurationName(const Aws::String& value) { m_vpceConfigurationNameHasBeenSet = true; m_vpceConfigurationName = value; }
    inline void SetVpceConfigurationName(Aws::String&& value) { m_vpceConfigurationNameHasBeenSet = true; m_vpceConfigurationName = std::move(value); }
    inline void SetVpceConfigurationName(const char* value) { m_vpceConfigurationNameHasBeenSet = true; m_vpceConfigurationName.assign(value); }
    inline VPCEConfiguration& WithVpceConfigurationName(const Aws::String& value) { SetVpceConfigurationName(value); return *this;}
    inline VPCEConfiguration& WithVpceConfigurationName(Aws::String&& value) { SetVpceConfigurationName(std::move(value)); return *this;}
    inline VPCEConfiguration& WithVpceConfigurationName(const char* value) { SetVpceConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VPC endpoint service running in your AWS account that you
     * want Device Farm to test.</p>
     */
    inline const Aws::String& GetVpceServiceName() const{ return m_vpceServiceName; }
    inline bool VpceServiceNameHasBeenSet() const { return m_vpceServiceNameHasBeenSet; }
    inline void SetVpceServiceName(const Aws::String& value) { m_vpceServiceNameHasBeenSet = true; m_vpceServiceName = value; }
    inline void SetVpceServiceName(Aws::String&& value) { m_vpceServiceNameHasBeenSet = true; m_vpceServiceName = std::move(value); }
    inline void SetVpceServiceName(const char* value) { m_vpceServiceNameHasBeenSet = true; m_vpceServiceName.assign(value); }
    inline VPCEConfiguration& WithVpceServiceName(const Aws::String& value) { SetVpceServiceName(value); return *this;}
    inline VPCEConfiguration& WithVpceServiceName(Aws::String&& value) { SetVpceServiceName(std::move(value)); return *this;}
    inline VPCEConfiguration& WithVpceServiceName(const char* value) { SetVpceServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name that maps to the private IP address of the service you want to
     * access.</p>
     */
    inline const Aws::String& GetServiceDnsName() const{ return m_serviceDnsName; }
    inline bool ServiceDnsNameHasBeenSet() const { return m_serviceDnsNameHasBeenSet; }
    inline void SetServiceDnsName(const Aws::String& value) { m_serviceDnsNameHasBeenSet = true; m_serviceDnsName = value; }
    inline void SetServiceDnsName(Aws::String&& value) { m_serviceDnsNameHasBeenSet = true; m_serviceDnsName = std::move(value); }
    inline void SetServiceDnsName(const char* value) { m_serviceDnsNameHasBeenSet = true; m_serviceDnsName.assign(value); }
    inline VPCEConfiguration& WithServiceDnsName(const Aws::String& value) { SetServiceDnsName(value); return *this;}
    inline VPCEConfiguration& WithServiceDnsName(Aws::String&& value) { SetServiceDnsName(std::move(value)); return *this;}
    inline VPCEConfiguration& WithServiceDnsName(const char* value) { SetServiceDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description that provides details about your VPC endpoint
     * configuration.</p>
     */
    inline const Aws::String& GetVpceConfigurationDescription() const{ return m_vpceConfigurationDescription; }
    inline bool VpceConfigurationDescriptionHasBeenSet() const { return m_vpceConfigurationDescriptionHasBeenSet; }
    inline void SetVpceConfigurationDescription(const Aws::String& value) { m_vpceConfigurationDescriptionHasBeenSet = true; m_vpceConfigurationDescription = value; }
    inline void SetVpceConfigurationDescription(Aws::String&& value) { m_vpceConfigurationDescriptionHasBeenSet = true; m_vpceConfigurationDescription = std::move(value); }
    inline void SetVpceConfigurationDescription(const char* value) { m_vpceConfigurationDescriptionHasBeenSet = true; m_vpceConfigurationDescription.assign(value); }
    inline VPCEConfiguration& WithVpceConfigurationDescription(const Aws::String& value) { SetVpceConfigurationDescription(value); return *this;}
    inline VPCEConfiguration& WithVpceConfigurationDescription(Aws::String&& value) { SetVpceConfigurationDescription(std::move(value)); return *this;}
    inline VPCEConfiguration& WithVpceConfigurationDescription(const char* value) { SetVpceConfigurationDescription(value); return *this;}
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
