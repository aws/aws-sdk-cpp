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
    AWS_GLOBALACCELERATOR_API CreateCustomRoutingEndpointGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomRoutingEndpointGroup"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the listener for a custom routing
     * endpoint.</p>
     */
    inline const Aws::String& GetListenerArn() const { return m_listenerArn; }
    inline bool ListenerArnHasBeenSet() const { return m_listenerArnHasBeenSet; }
    template<typename ListenerArnT = Aws::String>
    void SetListenerArn(ListenerArnT&& value) { m_listenerArnHasBeenSet = true; m_listenerArn = std::forward<ListenerArnT>(value); }
    template<typename ListenerArnT = Aws::String>
    CreateCustomRoutingEndpointGroupRequest& WithListenerArn(ListenerArnT&& value) { SetListenerArn(std::forward<ListenerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the endpoint group is located. A
     * listener can have only one endpoint group in a specific Region.</p>
     */
    inline const Aws::String& GetEndpointGroupRegion() const { return m_endpointGroupRegion; }
    inline bool EndpointGroupRegionHasBeenSet() const { return m_endpointGroupRegionHasBeenSet; }
    template<typename EndpointGroupRegionT = Aws::String>
    void SetEndpointGroupRegion(EndpointGroupRegionT&& value) { m_endpointGroupRegionHasBeenSet = true; m_endpointGroupRegion = std::forward<EndpointGroupRegionT>(value); }
    template<typename EndpointGroupRegionT = Aws::String>
    CreateCustomRoutingEndpointGroupRequest& WithEndpointGroupRegion(EndpointGroupRegionT&& value) { SetEndpointGroupRegion(std::forward<EndpointGroupRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the port range and protocol for all endpoints (virtual private cloud
     * subnets) in a custom routing endpoint group to accept client traffic on.</p>
     */
    inline const Aws::Vector<CustomRoutingDestinationConfiguration>& GetDestinationConfigurations() const { return m_destinationConfigurations; }
    inline bool DestinationConfigurationsHasBeenSet() const { return m_destinationConfigurationsHasBeenSet; }
    template<typename DestinationConfigurationsT = Aws::Vector<CustomRoutingDestinationConfiguration>>
    void SetDestinationConfigurations(DestinationConfigurationsT&& value) { m_destinationConfigurationsHasBeenSet = true; m_destinationConfigurations = std::forward<DestinationConfigurationsT>(value); }
    template<typename DestinationConfigurationsT = Aws::Vector<CustomRoutingDestinationConfiguration>>
    CreateCustomRoutingEndpointGroupRequest& WithDestinationConfigurations(DestinationConfigurationsT&& value) { SetDestinationConfigurations(std::forward<DestinationConfigurationsT>(value)); return *this;}
    template<typename DestinationConfigurationsT = CustomRoutingDestinationConfiguration>
    CreateCustomRoutingEndpointGroupRequest& AddDestinationConfigurations(DestinationConfigurationsT&& value) { m_destinationConfigurationsHasBeenSet = true; m_destinationConfigurations.emplace_back(std::forward<DestinationConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of the request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    CreateCustomRoutingEndpointGroupRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_listenerArn;
    bool m_listenerArnHasBeenSet = false;

    Aws::String m_endpointGroupRegion;
    bool m_endpointGroupRegionHasBeenSet = false;

    Aws::Vector<CustomRoutingDestinationConfiguration> m_destinationConfigurations;
    bool m_destinationConfigurationsHasBeenSet = false;

    Aws::String m_idempotencyToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_idempotencyTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
