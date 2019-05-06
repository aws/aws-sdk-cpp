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
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Contains the parameters for
   * SetLoadBalancerPoliciesForBackendServer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/SetLoadBalancerPoliciesForBackendServerInput">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCING_API SetLoadBalancerPoliciesForBackendServerRequest : public ElasticLoadBalancingRequest
  {
  public:
    SetLoadBalancerPoliciesForBackendServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetLoadBalancerPoliciesForBackendServer"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline SetLoadBalancerPoliciesForBackendServerRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline SetLoadBalancerPoliciesForBackendServerRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline SetLoadBalancerPoliciesForBackendServerRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}


    /**
     * <p>The port number associated with the EC2 instance.</p>
     */
    inline int GetInstancePort() const{ return m_instancePort; }

    /**
     * <p>The port number associated with the EC2 instance.</p>
     */
    inline bool InstancePortHasBeenSet() const { return m_instancePortHasBeenSet; }

    /**
     * <p>The port number associated with the EC2 instance.</p>
     */
    inline void SetInstancePort(int value) { m_instancePortHasBeenSet = true; m_instancePort = value; }

    /**
     * <p>The port number associated with the EC2 instance.</p>
     */
    inline SetLoadBalancerPoliciesForBackendServerRequest& WithInstancePort(int value) { SetInstancePort(value); return *this;}


    /**
     * <p>The names of the policies. If the list is empty, then all current polices are
     * removed from the EC2 instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNames() const{ return m_policyNames; }

    /**
     * <p>The names of the policies. If the list is empty, then all current polices are
     * removed from the EC2 instance.</p>
     */
    inline bool PolicyNamesHasBeenSet() const { return m_policyNamesHasBeenSet; }

    /**
     * <p>The names of the policies. If the list is empty, then all current polices are
     * removed from the EC2 instance.</p>
     */
    inline void SetPolicyNames(const Aws::Vector<Aws::String>& value) { m_policyNamesHasBeenSet = true; m_policyNames = value; }

    /**
     * <p>The names of the policies. If the list is empty, then all current polices are
     * removed from the EC2 instance.</p>
     */
    inline void SetPolicyNames(Aws::Vector<Aws::String>&& value) { m_policyNamesHasBeenSet = true; m_policyNames = std::move(value); }

    /**
     * <p>The names of the policies. If the list is empty, then all current polices are
     * removed from the EC2 instance.</p>
     */
    inline SetLoadBalancerPoliciesForBackendServerRequest& WithPolicyNames(const Aws::Vector<Aws::String>& value) { SetPolicyNames(value); return *this;}

    /**
     * <p>The names of the policies. If the list is empty, then all current polices are
     * removed from the EC2 instance.</p>
     */
    inline SetLoadBalancerPoliciesForBackendServerRequest& WithPolicyNames(Aws::Vector<Aws::String>&& value) { SetPolicyNames(std::move(value)); return *this;}

    /**
     * <p>The names of the policies. If the list is empty, then all current polices are
     * removed from the EC2 instance.</p>
     */
    inline SetLoadBalancerPoliciesForBackendServerRequest& AddPolicyNames(const Aws::String& value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(value); return *this; }

    /**
     * <p>The names of the policies. If the list is empty, then all current polices are
     * removed from the EC2 instance.</p>
     */
    inline SetLoadBalancerPoliciesForBackendServerRequest& AddPolicyNames(Aws::String&& value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the policies. If the list is empty, then all current polices are
     * removed from the EC2 instance.</p>
     */
    inline SetLoadBalancerPoliciesForBackendServerRequest& AddPolicyNames(const char* value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(value); return *this; }

  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet;

    int m_instancePort;
    bool m_instancePortHasBeenSet;

    Aws::Vector<Aws::String> m_policyNames;
    bool m_policyNamesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
