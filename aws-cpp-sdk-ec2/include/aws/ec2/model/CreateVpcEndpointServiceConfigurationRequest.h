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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API CreateVpcEndpointServiceConfigurationRequest : public EC2Request
  {
  public:
    CreateVpcEndpointServiceConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcEndpointServiceConfiguration"; }

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
    inline CreateVpcEndpointServiceConfigurationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Indicate whether requests from service consumers to create an endpoint to
     * your service must be accepted. To accept a request, use
     * <a>AcceptVpcEndpointConnections</a>.</p>
     */
    inline bool GetAcceptanceRequired() const{ return m_acceptanceRequired; }

    /**
     * <p>Indicate whether requests from service consumers to create an endpoint to
     * your service must be accepted. To accept a request, use
     * <a>AcceptVpcEndpointConnections</a>.</p>
     */
    inline bool AcceptanceRequiredHasBeenSet() const { return m_acceptanceRequiredHasBeenSet; }

    /**
     * <p>Indicate whether requests from service consumers to create an endpoint to
     * your service must be accepted. To accept a request, use
     * <a>AcceptVpcEndpointConnections</a>.</p>
     */
    inline void SetAcceptanceRequired(bool value) { m_acceptanceRequiredHasBeenSet = true; m_acceptanceRequired = value; }

    /**
     * <p>Indicate whether requests from service consumers to create an endpoint to
     * your service must be accepted. To accept a request, use
     * <a>AcceptVpcEndpointConnections</a>.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithAcceptanceRequired(bool value) { SetAcceptanceRequired(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Network Load Balancers for
     * your service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkLoadBalancerArns() const{ return m_networkLoadBalancerArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Network Load Balancers for
     * your service.</p>
     */
    inline bool NetworkLoadBalancerArnsHasBeenSet() const { return m_networkLoadBalancerArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Network Load Balancers for
     * your service.</p>
     */
    inline void SetNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Network Load Balancers for
     * your service.</p>
     */
    inline void SetNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Network Load Balancers for
     * your service.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetNetworkLoadBalancerArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Network Load Balancers for
     * your service.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetNetworkLoadBalancerArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Network Load Balancers for
     * your service.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& AddNetworkLoadBalancerArns(const Aws::String& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Network Load Balancers for
     * your service.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& AddNetworkLoadBalancerArns(Aws::String&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Network Load Balancers for
     * your service.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& AddNetworkLoadBalancerArns(const char* value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(value); return *this; }


    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    bool m_acceptanceRequired;
    bool m_acceptanceRequiredHasBeenSet;

    Aws::Vector<Aws::String> m_networkLoadBalancerArns;
    bool m_networkLoadBalancerArnsHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
