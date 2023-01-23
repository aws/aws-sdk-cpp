/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/globalaccelerator/model/CustomRoutingDestinationConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class CreateCustomRoutingEndpointGroupRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API CreateCustomRoutingEndpointGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomRoutingEndpointGroup"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the listener for a custom routing
     * endpoint.</p>
     */
    inline const Aws::String& GetListenerArn() const{ return m_listenerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener for a custom routing
     * endpoint.</p>
     */
    inline bool ListenerArnHasBeenSet() const { return m_listenerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener for a custom routing
     * endpoint.</p>
     */
    inline void SetListenerArn(const Aws::String& value) { m_listenerArnHasBeenSet = true; m_listenerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener for a custom routing
     * endpoint.</p>
     */
    inline void SetListenerArn(Aws::String&& value) { m_listenerArnHasBeenSet = true; m_listenerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener for a custom routing
     * endpoint.</p>
     */
    inline void SetListenerArn(const char* value) { m_listenerArnHasBeenSet = true; m_listenerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener for a custom routing
     * endpoint.</p>
     */
    inline CreateCustomRoutingEndpointGroupRequest& WithListenerArn(const Aws::String& value) { SetListenerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener for a custom routing
     * endpoint.</p>
     */
    inline CreateCustomRoutingEndpointGroupRequest& WithListenerArn(Aws::String&& value) { SetListenerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener for a custom routing
     * endpoint.</p>
     */
    inline CreateCustomRoutingEndpointGroupRequest& WithListenerArn(const char* value) { SetListenerArn(value); return *this;}


    /**
     * <p>The Amazon Web Services Region where the endpoint group is located. A
     * listener can have only one endpoint group in a specific Region.</p>
     */
    inline const Aws::String& GetEndpointGroupRegion() const{ return m_endpointGroupRegion; }

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located. A
     * listener can have only one endpoint group in a specific Region.</p>
     */
    inline bool EndpointGroupRegionHasBeenSet() const { return m_endpointGroupRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located. A
     * listener can have only one endpoint group in a specific Region.</p>
     */
    inline void SetEndpointGroupRegion(const Aws::String& value) { m_endpointGroupRegionHasBeenSet = true; m_endpointGroupRegion = value; }

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located. A
     * listener can have only one endpoint group in a specific Region.</p>
     */
    inline void SetEndpointGroupRegion(Aws::String&& value) { m_endpointGroupRegionHasBeenSet = true; m_endpointGroupRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located. A
     * listener can have only one endpoint group in a specific Region.</p>
     */
    inline void SetEndpointGroupRegion(const char* value) { m_endpointGroupRegionHasBeenSet = true; m_endpointGroupRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located. A
     * listener can have only one endpoint group in a specific Region.</p>
     */
    inline CreateCustomRoutingEndpointGroupRequest& WithEndpointGroupRegion(const Aws::String& value) { SetEndpointGroupRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located. A
     * listener can have only one endpoint group in a specific Region.</p>
     */
    inline CreateCustomRoutingEndpointGroupRequest& WithEndpointGroupRegion(Aws::String&& value) { SetEndpointGroupRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located. A
     * listener can have only one endpoint group in a specific Region.</p>
     */
    inline CreateCustomRoutingEndpointGroupRequest& WithEndpointGroupRegion(const char* value) { SetEndpointGroupRegion(value); return *this;}


    /**
     * <p>Sets the port range and protocol for all endpoints (virtual private cloud
     * subnets) in a custom routing endpoint group to accept client traffic on.</p>
     */
    inline const Aws::Vector<CustomRoutingDestinationConfiguration>& GetDestinationConfigurations() const{ return m_destinationConfigurations; }

    /**
     * <p>Sets the port range and protocol for all endpoints (virtual private cloud
     * subnets) in a custom routing endpoint group to accept client traffic on.</p>
     */
    inline bool DestinationConfigurationsHasBeenSet() const { return m_destinationConfigurationsHasBeenSet; }

    /**
     * <p>Sets the port range and protocol for all endpoints (virtual private cloud
     * subnets) in a custom routing endpoint group to accept client traffic on.</p>
     */
    inline void SetDestinationConfigurations(const Aws::Vector<CustomRoutingDestinationConfiguration>& value) { m_destinationConfigurationsHasBeenSet = true; m_destinationConfigurations = value; }

    /**
     * <p>Sets the port range and protocol for all endpoints (virtual private cloud
     * subnets) in a custom routing endpoint group to accept client traffic on.</p>
     */
    inline void SetDestinationConfigurations(Aws::Vector<CustomRoutingDestinationConfiguration>&& value) { m_destinationConfigurationsHasBeenSet = true; m_destinationConfigurations = std::move(value); }

    /**
     * <p>Sets the port range and protocol for all endpoints (virtual private cloud
     * subnets) in a custom routing endpoint group to accept client traffic on.</p>
     */
    inline CreateCustomRoutingEndpointGroupRequest& WithDestinationConfigurations(const Aws::Vector<CustomRoutingDestinationConfiguration>& value) { SetDestinationConfigurations(value); return *this;}

    /**
     * <p>Sets the port range and protocol for all endpoints (virtual private cloud
     * subnets) in a custom routing endpoint group to accept client traffic on.</p>
     */
    inline CreateCustomRoutingEndpointGroupRequest& WithDestinationConfigurations(Aws::Vector<CustomRoutingDestinationConfiguration>&& value) { SetDestinationConfigurations(std::move(value)); return *this;}

    /**
     * <p>Sets the port range and protocol for all endpoints (virtual private cloud
     * subnets) in a custom routing endpoint group to accept client traffic on.</p>
     */
    inline CreateCustomRoutingEndpointGroupRequest& AddDestinationConfigurations(const CustomRoutingDestinationConfiguration& value) { m_destinationConfigurationsHasBeenSet = true; m_destinationConfigurations.push_back(value); return *this; }

    /**
     * <p>Sets the port range and protocol for all endpoints (virtual private cloud
     * subnets) in a custom routing endpoint group to accept client traffic on.</p>
     */
    inline CreateCustomRoutingEndpointGroupRequest& AddDestinationConfigurations(CustomRoutingDestinationConfiguration&& value) { m_destinationConfigurationsHasBeenSet = true; m_destinationConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of the request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of the request.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of the request.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of the request.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of the request.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of the request.</p>
     */
    inline CreateCustomRoutingEndpointGroupRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of the request.</p>
     */
    inline CreateCustomRoutingEndpointGroupRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of the request.</p>
     */
    inline CreateCustomRoutingEndpointGroupRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}

  private:

    Aws::String m_listenerArn;
    bool m_listenerArnHasBeenSet = false;

    Aws::String m_endpointGroupRegion;
    bool m_endpointGroupRegionHasBeenSet = false;

    Aws::Vector<CustomRoutingDestinationConfiguration> m_destinationConfigurations;
    bool m_destinationConfigurationsHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
