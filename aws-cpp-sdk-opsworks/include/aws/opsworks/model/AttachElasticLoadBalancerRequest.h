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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API AttachElasticLoadBalancerRequest : public OpsWorksRequest
  {
  public:
    AttachElasticLoadBalancerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachElasticLoadBalancer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Elastic Load Balancing instance's name.</p>
     */
    inline const Aws::String& GetElasticLoadBalancerName() const{ return m_elasticLoadBalancerName; }

    /**
     * <p>The Elastic Load Balancing instance's name.</p>
     */
    inline bool ElasticLoadBalancerNameHasBeenSet() const { return m_elasticLoadBalancerNameHasBeenSet; }

    /**
     * <p>The Elastic Load Balancing instance's name.</p>
     */
    inline void SetElasticLoadBalancerName(const Aws::String& value) { m_elasticLoadBalancerNameHasBeenSet = true; m_elasticLoadBalancerName = value; }

    /**
     * <p>The Elastic Load Balancing instance's name.</p>
     */
    inline void SetElasticLoadBalancerName(Aws::String&& value) { m_elasticLoadBalancerNameHasBeenSet = true; m_elasticLoadBalancerName = std::move(value); }

    /**
     * <p>The Elastic Load Balancing instance's name.</p>
     */
    inline void SetElasticLoadBalancerName(const char* value) { m_elasticLoadBalancerNameHasBeenSet = true; m_elasticLoadBalancerName.assign(value); }

    /**
     * <p>The Elastic Load Balancing instance's name.</p>
     */
    inline AttachElasticLoadBalancerRequest& WithElasticLoadBalancerName(const Aws::String& value) { SetElasticLoadBalancerName(value); return *this;}

    /**
     * <p>The Elastic Load Balancing instance's name.</p>
     */
    inline AttachElasticLoadBalancerRequest& WithElasticLoadBalancerName(Aws::String&& value) { SetElasticLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The Elastic Load Balancing instance's name.</p>
     */
    inline AttachElasticLoadBalancerRequest& WithElasticLoadBalancerName(const char* value) { SetElasticLoadBalancerName(value); return *this;}


    /**
     * <p>The ID of the layer to which the Elastic Load Balancing instance is to be
     * attached.</p>
     */
    inline const Aws::String& GetLayerId() const{ return m_layerId; }

    /**
     * <p>The ID of the layer to which the Elastic Load Balancing instance is to be
     * attached.</p>
     */
    inline bool LayerIdHasBeenSet() const { return m_layerIdHasBeenSet; }

    /**
     * <p>The ID of the layer to which the Elastic Load Balancing instance is to be
     * attached.</p>
     */
    inline void SetLayerId(const Aws::String& value) { m_layerIdHasBeenSet = true; m_layerId = value; }

    /**
     * <p>The ID of the layer to which the Elastic Load Balancing instance is to be
     * attached.</p>
     */
    inline void SetLayerId(Aws::String&& value) { m_layerIdHasBeenSet = true; m_layerId = std::move(value); }

    /**
     * <p>The ID of the layer to which the Elastic Load Balancing instance is to be
     * attached.</p>
     */
    inline void SetLayerId(const char* value) { m_layerIdHasBeenSet = true; m_layerId.assign(value); }

    /**
     * <p>The ID of the layer to which the Elastic Load Balancing instance is to be
     * attached.</p>
     */
    inline AttachElasticLoadBalancerRequest& WithLayerId(const Aws::String& value) { SetLayerId(value); return *this;}

    /**
     * <p>The ID of the layer to which the Elastic Load Balancing instance is to be
     * attached.</p>
     */
    inline AttachElasticLoadBalancerRequest& WithLayerId(Aws::String&& value) { SetLayerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the layer to which the Elastic Load Balancing instance is to be
     * attached.</p>
     */
    inline AttachElasticLoadBalancerRequest& WithLayerId(const char* value) { SetLayerId(value); return *this;}

  private:

    Aws::String m_elasticLoadBalancerName;
    bool m_elasticLoadBalancerNameHasBeenSet;

    Aws::String m_layerId;
    bool m_layerIdHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
