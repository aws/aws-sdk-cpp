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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/NewDhcpConfiguration.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API CreateDhcpOptionsRequest : public EC2Request
  {
  public:
    CreateDhcpOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDhcpOptions"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline const Aws::Vector<NewDhcpConfiguration>& GetDhcpConfigurations() const{ return m_dhcpConfigurations; }

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline bool DhcpConfigurationsHasBeenSet() const { return m_dhcpConfigurationsHasBeenSet; }

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline void SetDhcpConfigurations(const Aws::Vector<NewDhcpConfiguration>& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations = value; }

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline void SetDhcpConfigurations(Aws::Vector<NewDhcpConfiguration>&& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations = std::move(value); }

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline CreateDhcpOptionsRequest& WithDhcpConfigurations(const Aws::Vector<NewDhcpConfiguration>& value) { SetDhcpConfigurations(value); return *this;}

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline CreateDhcpOptionsRequest& WithDhcpConfigurations(Aws::Vector<NewDhcpConfiguration>&& value) { SetDhcpConfigurations(std::move(value)); return *this;}

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline CreateDhcpOptionsRequest& AddDhcpConfigurations(const NewDhcpConfiguration& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations.push_back(value); return *this; }

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline CreateDhcpOptionsRequest& AddDhcpConfigurations(NewDhcpConfiguration&& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations.push_back(std::move(value)); return *this; }


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
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

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

  private:

    Aws::Vector<NewDhcpConfiguration> m_dhcpConfigurations;
    bool m_dhcpConfigurationsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
