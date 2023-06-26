/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/CustomRoutingEndpointConfiguration.h>
#include <utility>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class AddCustomRoutingEndpointsRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API AddCustomRoutingEndpointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddCustomRoutingEndpoints"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The list of endpoint objects to add to a custom routing accelerator.</p>
     */
    inline const Aws::Vector<CustomRoutingEndpointConfiguration>& GetEndpointConfigurations() const{ return m_endpointConfigurations; }

    /**
     * <p>The list of endpoint objects to add to a custom routing accelerator.</p>
     */
    inline bool EndpointConfigurationsHasBeenSet() const { return m_endpointConfigurationsHasBeenSet; }

    /**
     * <p>The list of endpoint objects to add to a custom routing accelerator.</p>
     */
    inline void SetEndpointConfigurations(const Aws::Vector<CustomRoutingEndpointConfiguration>& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations = value; }

    /**
     * <p>The list of endpoint objects to add to a custom routing accelerator.</p>
     */
    inline void SetEndpointConfigurations(Aws::Vector<CustomRoutingEndpointConfiguration>&& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations = std::move(value); }

    /**
     * <p>The list of endpoint objects to add to a custom routing accelerator.</p>
     */
    inline AddCustomRoutingEndpointsRequest& WithEndpointConfigurations(const Aws::Vector<CustomRoutingEndpointConfiguration>& value) { SetEndpointConfigurations(value); return *this;}

    /**
     * <p>The list of endpoint objects to add to a custom routing accelerator.</p>
     */
    inline AddCustomRoutingEndpointsRequest& WithEndpointConfigurations(Aws::Vector<CustomRoutingEndpointConfiguration>&& value) { SetEndpointConfigurations(std::move(value)); return *this;}

    /**
     * <p>The list of endpoint objects to add to a custom routing accelerator.</p>
     */
    inline AddCustomRoutingEndpointsRequest& AddEndpointConfigurations(const CustomRoutingEndpointConfiguration& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations.push_back(value); return *this; }

    /**
     * <p>The list of endpoint objects to add to a custom routing accelerator.</p>
     */
    inline AddCustomRoutingEndpointsRequest& AddEndpointConfigurations(CustomRoutingEndpointConfiguration&& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group for the custom routing
     * endpoint.</p>
     */
    inline const Aws::String& GetEndpointGroupArn() const{ return m_endpointGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group for the custom routing
     * endpoint.</p>
     */
    inline bool EndpointGroupArnHasBeenSet() const { return m_endpointGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group for the custom routing
     * endpoint.</p>
     */
    inline void SetEndpointGroupArn(const Aws::String& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group for the custom routing
     * endpoint.</p>
     */
    inline void SetEndpointGroupArn(Aws::String&& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group for the custom routing
     * endpoint.</p>
     */
    inline void SetEndpointGroupArn(const char* value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group for the custom routing
     * endpoint.</p>
     */
    inline AddCustomRoutingEndpointsRequest& WithEndpointGroupArn(const Aws::String& value) { SetEndpointGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group for the custom routing
     * endpoint.</p>
     */
    inline AddCustomRoutingEndpointsRequest& WithEndpointGroupArn(Aws::String&& value) { SetEndpointGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group for the custom routing
     * endpoint.</p>
     */
    inline AddCustomRoutingEndpointsRequest& WithEndpointGroupArn(const char* value) { SetEndpointGroupArn(value); return *this;}

  private:

    Aws::Vector<CustomRoutingEndpointConfiguration> m_endpointConfigurations;
    bool m_endpointConfigurationsHasBeenSet = false;

    Aws::String m_endpointGroupArn;
    bool m_endpointGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
