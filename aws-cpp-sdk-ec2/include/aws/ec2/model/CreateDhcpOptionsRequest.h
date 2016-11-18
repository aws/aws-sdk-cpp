/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/NewDhcpConfiguration.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateDhcpOptions.</p>
   */
  class AWS_EC2_API CreateDhcpOptionsRequest : public EC2Request
  {
  public:
    CreateDhcpOptionsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateDhcpOptionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline const Aws::Vector<NewDhcpConfiguration>& GetDhcpConfigurations() const{ return m_dhcpConfigurations; }

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline void SetDhcpConfigurations(const Aws::Vector<NewDhcpConfiguration>& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations = value; }

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline void SetDhcpConfigurations(Aws::Vector<NewDhcpConfiguration>&& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations = value; }

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline CreateDhcpOptionsRequest& WithDhcpConfigurations(const Aws::Vector<NewDhcpConfiguration>& value) { SetDhcpConfigurations(value); return *this;}

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline CreateDhcpOptionsRequest& WithDhcpConfigurations(Aws::Vector<NewDhcpConfiguration>&& value) { SetDhcpConfigurations(value); return *this;}

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline CreateDhcpOptionsRequest& AddDhcpConfigurations(const NewDhcpConfiguration& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations.push_back(value); return *this; }

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline CreateDhcpOptionsRequest& AddDhcpConfigurations(NewDhcpConfiguration&& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations.push_back(value); return *this; }

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::Vector<NewDhcpConfiguration> m_dhcpConfigurations;
    bool m_dhcpConfigurationsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
