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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API ModifyVpcEndpointServiceConfigurationRequest : public EC2Request
  {
  public:
    ModifyVpcEndpointServiceConfigurationRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpcEndpointServiceConfiguration"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline ModifyVpcEndpointServiceConfigurationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    /**
     * <p>The ID of the service.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The ID of the service.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>Indicate whether requests to create an endpoint to your service must be
     * accepted.</p>
     */
    inline bool GetAcceptanceRequired() const{ return m_acceptanceRequired; }

    /**
     * <p>Indicate whether requests to create an endpoint to your service must be
     * accepted.</p>
     */
    inline void SetAcceptanceRequired(bool value) { m_acceptanceRequiredHasBeenSet = true; m_acceptanceRequired = value; }

    /**
     * <p>Indicate whether requests to create an endpoint to your service must be
     * accepted.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithAcceptanceRequired(bool value) { SetAcceptanceRequired(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to add to your
     * service configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddNetworkLoadBalancerArns() const{ return m_addNetworkLoadBalancerArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to add to your
     * service configuration.</p>
     */
    inline void SetAddNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_addNetworkLoadBalancerArnsHasBeenSet = true; m_addNetworkLoadBalancerArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to add to your
     * service configuration.</p>
     */
    inline void SetAddNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_addNetworkLoadBalancerArnsHasBeenSet = true; m_addNetworkLoadBalancerArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to add to your
     * service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithAddNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetAddNetworkLoadBalancerArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to add to your
     * service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithAddNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetAddNetworkLoadBalancerArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to add to your
     * service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddAddNetworkLoadBalancerArns(const Aws::String& value) { m_addNetworkLoadBalancerArnsHasBeenSet = true; m_addNetworkLoadBalancerArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to add to your
     * service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddAddNetworkLoadBalancerArns(Aws::String&& value) { m_addNetworkLoadBalancerArnsHasBeenSet = true; m_addNetworkLoadBalancerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to add to your
     * service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddAddNetworkLoadBalancerArns(const char* value) { m_addNetworkLoadBalancerArnsHasBeenSet = true; m_addNetworkLoadBalancerArns.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to remove from
     * your service configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveNetworkLoadBalancerArns() const{ return m_removeNetworkLoadBalancerArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to remove from
     * your service configuration.</p>
     */
    inline void SetRemoveNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_removeNetworkLoadBalancerArnsHasBeenSet = true; m_removeNetworkLoadBalancerArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to remove from
     * your service configuration.</p>
     */
    inline void SetRemoveNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_removeNetworkLoadBalancerArnsHasBeenSet = true; m_removeNetworkLoadBalancerArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to remove from
     * your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithRemoveNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetRemoveNetworkLoadBalancerArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to remove from
     * your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithRemoveNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetRemoveNetworkLoadBalancerArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to remove from
     * your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddRemoveNetworkLoadBalancerArns(const Aws::String& value) { m_removeNetworkLoadBalancerArnsHasBeenSet = true; m_removeNetworkLoadBalancerArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to remove from
     * your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddRemoveNetworkLoadBalancerArns(Aws::String&& value) { m_removeNetworkLoadBalancerArnsHasBeenSet = true; m_removeNetworkLoadBalancerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to remove from
     * your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddRemoveNetworkLoadBalancerArns(const char* value) { m_removeNetworkLoadBalancerArnsHasBeenSet = true; m_removeNetworkLoadBalancerArns.push_back(value); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet;

    bool m_acceptanceRequired;
    bool m_acceptanceRequiredHasBeenSet;

    Aws::Vector<Aws::String> m_addNetworkLoadBalancerArns;
    bool m_addNetworkLoadBalancerArnsHasBeenSet;

    Aws::Vector<Aws::String> m_removeNetworkLoadBalancerArns;
    bool m_removeNetworkLoadBalancerArnsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
