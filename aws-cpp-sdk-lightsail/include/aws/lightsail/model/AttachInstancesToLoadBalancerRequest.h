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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API AttachInstancesToLoadBalancerRequest : public LightsailRequest
  {
  public:
    AttachInstancesToLoadBalancerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachInstancesToLoadBalancer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline AttachInstancesToLoadBalancerRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline AttachInstancesToLoadBalancerRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline AttachInstancesToLoadBalancerRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}


    /**
     * <p>An array of strings representing the instance name(s) you want to attach to
     * your load balancer.</p> <p>An instance must be <code>running</code> before you
     * can attach it to your load balancer.</p> <p>There are no additional limits on
     * the number of instances you can attach to your load balancer, aside from the
     * limit of Lightsail instances you can create in your account (20).</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceNames() const{ return m_instanceNames; }

    /**
     * <p>An array of strings representing the instance name(s) you want to attach to
     * your load balancer.</p> <p>An instance must be <code>running</code> before you
     * can attach it to your load balancer.</p> <p>There are no additional limits on
     * the number of instances you can attach to your load balancer, aside from the
     * limit of Lightsail instances you can create in your account (20).</p>
     */
    inline bool InstanceNamesHasBeenSet() const { return m_instanceNamesHasBeenSet; }

    /**
     * <p>An array of strings representing the instance name(s) you want to attach to
     * your load balancer.</p> <p>An instance must be <code>running</code> before you
     * can attach it to your load balancer.</p> <p>There are no additional limits on
     * the number of instances you can attach to your load balancer, aside from the
     * limit of Lightsail instances you can create in your account (20).</p>
     */
    inline void SetInstanceNames(const Aws::Vector<Aws::String>& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = value; }

    /**
     * <p>An array of strings representing the instance name(s) you want to attach to
     * your load balancer.</p> <p>An instance must be <code>running</code> before you
     * can attach it to your load balancer.</p> <p>There are no additional limits on
     * the number of instances you can attach to your load balancer, aside from the
     * limit of Lightsail instances you can create in your account (20).</p>
     */
    inline void SetInstanceNames(Aws::Vector<Aws::String>&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = std::move(value); }

    /**
     * <p>An array of strings representing the instance name(s) you want to attach to
     * your load balancer.</p> <p>An instance must be <code>running</code> before you
     * can attach it to your load balancer.</p> <p>There are no additional limits on
     * the number of instances you can attach to your load balancer, aside from the
     * limit of Lightsail instances you can create in your account (20).</p>
     */
    inline AttachInstancesToLoadBalancerRequest& WithInstanceNames(const Aws::Vector<Aws::String>& value) { SetInstanceNames(value); return *this;}

    /**
     * <p>An array of strings representing the instance name(s) you want to attach to
     * your load balancer.</p> <p>An instance must be <code>running</code> before you
     * can attach it to your load balancer.</p> <p>There are no additional limits on
     * the number of instances you can attach to your load balancer, aside from the
     * limit of Lightsail instances you can create in your account (20).</p>
     */
    inline AttachInstancesToLoadBalancerRequest& WithInstanceNames(Aws::Vector<Aws::String>&& value) { SetInstanceNames(std::move(value)); return *this;}

    /**
     * <p>An array of strings representing the instance name(s) you want to attach to
     * your load balancer.</p> <p>An instance must be <code>running</code> before you
     * can attach it to your load balancer.</p> <p>There are no additional limits on
     * the number of instances you can attach to your load balancer, aside from the
     * limit of Lightsail instances you can create in your account (20).</p>
     */
    inline AttachInstancesToLoadBalancerRequest& AddInstanceNames(const Aws::String& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(value); return *this; }

    /**
     * <p>An array of strings representing the instance name(s) you want to attach to
     * your load balancer.</p> <p>An instance must be <code>running</code> before you
     * can attach it to your load balancer.</p> <p>There are no additional limits on
     * the number of instances you can attach to your load balancer, aside from the
     * limit of Lightsail instances you can create in your account (20).</p>
     */
    inline AttachInstancesToLoadBalancerRequest& AddInstanceNames(Aws::String&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings representing the instance name(s) you want to attach to
     * your load balancer.</p> <p>An instance must be <code>running</code> before you
     * can attach it to your load balancer.</p> <p>There are no additional limits on
     * the number of instances you can attach to your load balancer, aside from the
     * limit of Lightsail instances you can create in your account (20).</p>
     */
    inline AttachInstancesToLoadBalancerRequest& AddInstanceNames(const char* value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(value); return *this; }

  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet;

    Aws::Vector<Aws::String> m_instanceNames;
    bool m_instanceNamesHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
