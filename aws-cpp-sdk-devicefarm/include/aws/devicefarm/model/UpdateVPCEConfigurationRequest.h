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
  class AWS_DEVICEFARM_API UpdateVPCEConfigurationRequest : public DeviceFarmRequest
  {
  public:
    UpdateVPCEConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVPCEConfiguration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint configuration you want to
     * update.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint configuration you want to
     * update.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint configuration you want to
     * update.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint configuration you want to
     * update.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint configuration you want to
     * update.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint configuration you want to
     * update.</p>
     */
    inline UpdateVPCEConfigurationRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint configuration you want to
     * update.</p>
     */
    inline UpdateVPCEConfigurationRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint configuration you want to
     * update.</p>
     */
    inline UpdateVPCEConfigurationRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The friendly name you give to your VPC endpoint configuration, to manage your
     * configurations more easily.</p>
     */
    inline const Aws::String& GetVpceConfigurationName() const{ return m_vpceConfigurationName; }

    /**
     * <p>The friendly name you give to your VPC endpoint configuration, to manage your
     * configurations more easily.</p>
     */
    inline bool VpceConfigurationNameHasBeenSet() const { return m_vpceConfigurationNameHasBeenSet; }

    /**
     * <p>The friendly name you give to your VPC endpoint configuration, to manage your
     * configurations more easily.</p>
     */
    inline void SetVpceConfigurationName(const Aws::String& value) { m_vpceConfigurationNameHasBeenSet = true; m_vpceConfigurationName = value; }

    /**
     * <p>The friendly name you give to your VPC endpoint configuration, to manage your
     * configurations more easily.</p>
     */
    inline void SetVpceConfigurationName(Aws::String&& value) { m_vpceConfigurationNameHasBeenSet = true; m_vpceConfigurationName = std::move(value); }

    /**
     * <p>The friendly name you give to your VPC endpoint configuration, to manage your
     * configurations more easily.</p>
     */
    inline void SetVpceConfigurationName(const char* value) { m_vpceConfigurationNameHasBeenSet = true; m_vpceConfigurationName.assign(value); }

    /**
     * <p>The friendly name you give to your VPC endpoint configuration, to manage your
     * configurations more easily.</p>
     */
    inline UpdateVPCEConfigurationRequest& WithVpceConfigurationName(const Aws::String& value) { SetVpceConfigurationName(value); return *this;}

    /**
     * <p>The friendly name you give to your VPC endpoint configuration, to manage your
     * configurations more easily.</p>
     */
    inline UpdateVPCEConfigurationRequest& WithVpceConfigurationName(Aws::String&& value) { SetVpceConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The friendly name you give to your VPC endpoint configuration, to manage your
     * configurations more easily.</p>
     */
    inline UpdateVPCEConfigurationRequest& WithVpceConfigurationName(const char* value) { SetVpceConfigurationName(value); return *this;}


    /**
     * <p>The name of the VPC endpoint service running inside your AWS account that you
     * want Device Farm to test.</p>
     */
    inline const Aws::String& GetVpceServiceName() const{ return m_vpceServiceName; }

    /**
     * <p>The name of the VPC endpoint service running inside your AWS account that you
     * want Device Farm to test.</p>
     */
    inline bool VpceServiceNameHasBeenSet() const { return m_vpceServiceNameHasBeenSet; }

    /**
     * <p>The name of the VPC endpoint service running inside your AWS account that you
     * want Device Farm to test.</p>
     */
    inline void SetVpceServiceName(const Aws::String& value) { m_vpceServiceNameHasBeenSet = true; m_vpceServiceName = value; }

    /**
     * <p>The name of the VPC endpoint service running inside your AWS account that you
     * want Device Farm to test.</p>
     */
    inline void SetVpceServiceName(Aws::String&& value) { m_vpceServiceNameHasBeenSet = true; m_vpceServiceName = std::move(value); }

    /**
     * <p>The name of the VPC endpoint service running inside your AWS account that you
     * want Device Farm to test.</p>
     */
    inline void SetVpceServiceName(const char* value) { m_vpceServiceNameHasBeenSet = true; m_vpceServiceName.assign(value); }

    /**
     * <p>The name of the VPC endpoint service running inside your AWS account that you
     * want Device Farm to test.</p>
     */
    inline UpdateVPCEConfigurationRequest& WithVpceServiceName(const Aws::String& value) { SetVpceServiceName(value); return *this;}

    /**
     * <p>The name of the VPC endpoint service running inside your AWS account that you
     * want Device Farm to test.</p>
     */
    inline UpdateVPCEConfigurationRequest& WithVpceServiceName(Aws::String&& value) { SetVpceServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the VPC endpoint service running inside your AWS account that you
     * want Device Farm to test.</p>
     */
    inline UpdateVPCEConfigurationRequest& WithVpceServiceName(const char* value) { SetVpceServiceName(value); return *this;}


    /**
     * <p>The DNS (domain) name used to connect to your private service in your Amazon
     * VPC. The DNS name must not already be in use on the Internet.</p>
     */
    inline const Aws::String& GetServiceDnsName() const{ return m_serviceDnsName; }

    /**
     * <p>The DNS (domain) name used to connect to your private service in your Amazon
     * VPC. The DNS name must not already be in use on the Internet.</p>
     */
    inline bool ServiceDnsNameHasBeenSet() const { return m_serviceDnsNameHasBeenSet; }

    /**
     * <p>The DNS (domain) name used to connect to your private service in your Amazon
     * VPC. The DNS name must not already be in use on the Internet.</p>
     */
    inline void SetServiceDnsName(const Aws::String& value) { m_serviceDnsNameHasBeenSet = true; m_serviceDnsName = value; }

    /**
     * <p>The DNS (domain) name used to connect to your private service in your Amazon
     * VPC. The DNS name must not already be in use on the Internet.</p>
     */
    inline void SetServiceDnsName(Aws::String&& value) { m_serviceDnsNameHasBeenSet = true; m_serviceDnsName = std::move(value); }

    /**
     * <p>The DNS (domain) name used to connect to your private service in your Amazon
     * VPC. The DNS name must not already be in use on the Internet.</p>
     */
    inline void SetServiceDnsName(const char* value) { m_serviceDnsNameHasBeenSet = true; m_serviceDnsName.assign(value); }

    /**
     * <p>The DNS (domain) name used to connect to your private service in your Amazon
     * VPC. The DNS name must not already be in use on the Internet.</p>
     */
    inline UpdateVPCEConfigurationRequest& WithServiceDnsName(const Aws::String& value) { SetServiceDnsName(value); return *this;}

    /**
     * <p>The DNS (domain) name used to connect to your private service in your Amazon
     * VPC. The DNS name must not already be in use on the Internet.</p>
     */
    inline UpdateVPCEConfigurationRequest& WithServiceDnsName(Aws::String&& value) { SetServiceDnsName(std::move(value)); return *this;}

    /**
     * <p>The DNS (domain) name used to connect to your private service in your Amazon
     * VPC. The DNS name must not already be in use on the Internet.</p>
     */
    inline UpdateVPCEConfigurationRequest& WithServiceDnsName(const char* value) { SetServiceDnsName(value); return *this;}


    /**
     * <p>An optional description, providing more details about your VPC endpoint
     * configuration.</p>
     */
    inline const Aws::String& GetVpceConfigurationDescription() const{ return m_vpceConfigurationDescription; }

    /**
     * <p>An optional description, providing more details about your VPC endpoint
     * configuration.</p>
     */
    inline bool VpceConfigurationDescriptionHasBeenSet() const { return m_vpceConfigurationDescriptionHasBeenSet; }

    /**
     * <p>An optional description, providing more details about your VPC endpoint
     * configuration.</p>
     */
    inline void SetVpceConfigurationDescription(const Aws::String& value) { m_vpceConfigurationDescriptionHasBeenSet = true; m_vpceConfigurationDescription = value; }

    /**
     * <p>An optional description, providing more details about your VPC endpoint
     * configuration.</p>
     */
    inline void SetVpceConfigurationDescription(Aws::String&& value) { m_vpceConfigurationDescriptionHasBeenSet = true; m_vpceConfigurationDescription = std::move(value); }

    /**
     * <p>An optional description, providing more details about your VPC endpoint
     * configuration.</p>
     */
    inline void SetVpceConfigurationDescription(const char* value) { m_vpceConfigurationDescriptionHasBeenSet = true; m_vpceConfigurationDescription.assign(value); }

    /**
     * <p>An optional description, providing more details about your VPC endpoint
     * configuration.</p>
     */
    inline UpdateVPCEConfigurationRequest& WithVpceConfigurationDescription(const Aws::String& value) { SetVpceConfigurationDescription(value); return *this;}

    /**
     * <p>An optional description, providing more details about your VPC endpoint
     * configuration.</p>
     */
    inline UpdateVPCEConfigurationRequest& WithVpceConfigurationDescription(Aws::String&& value) { SetVpceConfigurationDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description, providing more details about your VPC endpoint
     * configuration.</p>
     */
    inline UpdateVPCEConfigurationRequest& WithVpceConfigurationDescription(const char* value) { SetVpceConfigurationDescription(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_vpceConfigurationName;
    bool m_vpceConfigurationNameHasBeenSet;

    Aws::String m_vpceServiceName;
    bool m_vpceServiceNameHasBeenSet;

    Aws::String m_serviceDnsName;
    bool m_serviceDnsNameHasBeenSet;

    Aws::String m_vpceConfigurationDescription;
    bool m_vpceConfigurationDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
