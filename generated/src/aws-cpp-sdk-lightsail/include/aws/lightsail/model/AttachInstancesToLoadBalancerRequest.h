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
  class AttachInstancesToLoadBalancerRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API AttachInstancesToLoadBalancerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachInstancesToLoadBalancer"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }
    inline AttachInstancesToLoadBalancerRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}
    inline AttachInstancesToLoadBalancerRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}
    inline AttachInstancesToLoadBalancerRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings representing the instance name(s) you want to attach to
     * your load balancer.</p> <p>An instance must be <code>running</code> before you
     * can attach it to your load balancer.</p> <p>There are no additional limits on
     * the number of instances you can attach to your load balancer, aside from the
     * limit of Lightsail instances you can create in your account (20).</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceNames() const{ return m_instanceNames; }
    inline bool InstanceNamesHasBeenSet() const { return m_instanceNamesHasBeenSet; }
    inline void SetInstanceNames(const Aws::Vector<Aws::String>& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = value; }
    inline void SetInstanceNames(Aws::Vector<Aws::String>&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = std::move(value); }
    inline AttachInstancesToLoadBalancerRequest& WithInstanceNames(const Aws::Vector<Aws::String>& value) { SetInstanceNames(value); return *this;}
    inline AttachInstancesToLoadBalancerRequest& WithInstanceNames(Aws::Vector<Aws::String>&& value) { SetInstanceNames(std::move(value)); return *this;}
    inline AttachInstancesToLoadBalancerRequest& AddInstanceNames(const Aws::String& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(value); return *this; }
    inline AttachInstancesToLoadBalancerRequest& AddInstanceNames(Aws::String&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(std::move(value)); return *this; }
    inline AttachInstancesToLoadBalancerRequest& AddInstanceNames(const char* value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceNames;
    bool m_instanceNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
