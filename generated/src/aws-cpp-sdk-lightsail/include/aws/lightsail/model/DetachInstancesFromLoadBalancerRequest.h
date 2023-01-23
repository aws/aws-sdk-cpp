/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DetachInstancesFromLoadBalancerRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API DetachInstancesFromLoadBalancerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetachInstancesFromLoadBalancer"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Lightsail load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of the Lightsail load balancer.</p>
     */
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }

    /**
     * <p>The name of the Lightsail load balancer.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the Lightsail load balancer.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }

    /**
     * <p>The name of the Lightsail load balancer.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The name of the Lightsail load balancer.</p>
     */
    inline DetachInstancesFromLoadBalancerRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the Lightsail load balancer.</p>
     */
    inline DetachInstancesFromLoadBalancerRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The name of the Lightsail load balancer.</p>
     */
    inline DetachInstancesFromLoadBalancerRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}


    /**
     * <p>An array of strings containing the names of the instances you want to detach
     * from the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceNames() const{ return m_instanceNames; }

    /**
     * <p>An array of strings containing the names of the instances you want to detach
     * from the load balancer.</p>
     */
    inline bool InstanceNamesHasBeenSet() const { return m_instanceNamesHasBeenSet; }

    /**
     * <p>An array of strings containing the names of the instances you want to detach
     * from the load balancer.</p>
     */
    inline void SetInstanceNames(const Aws::Vector<Aws::String>& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = value; }

    /**
     * <p>An array of strings containing the names of the instances you want to detach
     * from the load balancer.</p>
     */
    inline void SetInstanceNames(Aws::Vector<Aws::String>&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = std::move(value); }

    /**
     * <p>An array of strings containing the names of the instances you want to detach
     * from the load balancer.</p>
     */
    inline DetachInstancesFromLoadBalancerRequest& WithInstanceNames(const Aws::Vector<Aws::String>& value) { SetInstanceNames(value); return *this;}

    /**
     * <p>An array of strings containing the names of the instances you want to detach
     * from the load balancer.</p>
     */
    inline DetachInstancesFromLoadBalancerRequest& WithInstanceNames(Aws::Vector<Aws::String>&& value) { SetInstanceNames(std::move(value)); return *this;}

    /**
     * <p>An array of strings containing the names of the instances you want to detach
     * from the load balancer.</p>
     */
    inline DetachInstancesFromLoadBalancerRequest& AddInstanceNames(const Aws::String& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(value); return *this; }

    /**
     * <p>An array of strings containing the names of the instances you want to detach
     * from the load balancer.</p>
     */
    inline DetachInstancesFromLoadBalancerRequest& AddInstanceNames(Aws::String&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings containing the names of the instances you want to detach
     * from the load balancer.</p>
     */
    inline DetachInstancesFromLoadBalancerRequest& AddInstanceNames(const char* value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(value); return *this; }

  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceNames;
    bool m_instanceNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
