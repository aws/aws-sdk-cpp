﻿/*
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
  class AWS_DEVICEFARM_API VPCEConfiguration
  {
  public:
    VPCEConfiguration();
    VPCEConfiguration(Aws::Utils::Json::JsonView jsonValue);
    VPCEConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint configuration.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint configuration.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint configuration.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint configuration.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint configuration.</p>
     */
    inline VPCEConfiguration& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint configuration.</p>
     */
    inline VPCEConfiguration& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint configuration.</p>
     */
    inline VPCEConfiguration& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The friendly name you give to your VPC endpoint configuration, to manage your
     * configurations more easily.</p>
     */
    inline const Aws::String& GetVpceConfigurationName() const{ return m_vpceConfigurationName; }

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
    inline VPCEConfiguration& WithVpceConfigurationName(const Aws::String& value) { SetVpceConfigurationName(value); return *this;}

    /**
     * <p>The friendly name you give to your VPC endpoint configuration, to manage your
     * configurations more easily.</p>
     */
    inline VPCEConfiguration& WithVpceConfigurationName(Aws::String&& value) { SetVpceConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The friendly name you give to your VPC endpoint configuration, to manage your
     * configurations more easily.</p>
     */
    inline VPCEConfiguration& WithVpceConfigurationName(const char* value) { SetVpceConfigurationName(value); return *this;}


    /**
     * <p>The name of the VPC endpoint service running inside your AWS account that you
     * want Device Farm to test.</p>
     */
    inline const Aws::String& GetVpceServiceName() const{ return m_vpceServiceName; }

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
    inline VPCEConfiguration& WithVpceServiceName(const Aws::String& value) { SetVpceServiceName(value); return *this;}

    /**
     * <p>The name of the VPC endpoint service running inside your AWS account that you
     * want Device Farm to test.</p>
     */
    inline VPCEConfiguration& WithVpceServiceName(Aws::String&& value) { SetVpceServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the VPC endpoint service running inside your AWS account that you
     * want Device Farm to test.</p>
     */
    inline VPCEConfiguration& WithVpceServiceName(const char* value) { SetVpceServiceName(value); return *this;}


    /**
     * <p>The DNS name that maps to the private IP address of the service you want to
     * access.</p>
     */
    inline const Aws::String& GetServiceDnsName() const{ return m_serviceDnsName; }

    /**
     * <p>The DNS name that maps to the private IP address of the service you want to
     * access.</p>
     */
    inline void SetServiceDnsName(const Aws::String& value) { m_serviceDnsNameHasBeenSet = true; m_serviceDnsName = value; }

    /**
     * <p>The DNS name that maps to the private IP address of the service you want to
     * access.</p>
     */
    inline void SetServiceDnsName(Aws::String&& value) { m_serviceDnsNameHasBeenSet = true; m_serviceDnsName = std::move(value); }

    /**
     * <p>The DNS name that maps to the private IP address of the service you want to
     * access.</p>
     */
    inline void SetServiceDnsName(const char* value) { m_serviceDnsNameHasBeenSet = true; m_serviceDnsName.assign(value); }

    /**
     * <p>The DNS name that maps to the private IP address of the service you want to
     * access.</p>
     */
    inline VPCEConfiguration& WithServiceDnsName(const Aws::String& value) { SetServiceDnsName(value); return *this;}

    /**
     * <p>The DNS name that maps to the private IP address of the service you want to
     * access.</p>
     */
    inline VPCEConfiguration& WithServiceDnsName(Aws::String&& value) { SetServiceDnsName(std::move(value)); return *this;}

    /**
     * <p>The DNS name that maps to the private IP address of the service you want to
     * access.</p>
     */
    inline VPCEConfiguration& WithServiceDnsName(const char* value) { SetServiceDnsName(value); return *this;}


    /**
     * <p>An optional description, providing more details about your VPC endpoint
     * configuration.</p>
     */
    inline const Aws::String& GetVpceConfigurationDescription() const{ return m_vpceConfigurationDescription; }

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
    inline VPCEConfiguration& WithVpceConfigurationDescription(const Aws::String& value) { SetVpceConfigurationDescription(value); return *this;}

    /**
     * <p>An optional description, providing more details about your VPC endpoint
     * configuration.</p>
     */
    inline VPCEConfiguration& WithVpceConfigurationDescription(Aws::String&& value) { SetVpceConfigurationDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description, providing more details about your VPC endpoint
     * configuration.</p>
     */
    inline VPCEConfiguration& WithVpceConfigurationDescription(const char* value) { SetVpceConfigurationDescription(value); return *this;}

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
