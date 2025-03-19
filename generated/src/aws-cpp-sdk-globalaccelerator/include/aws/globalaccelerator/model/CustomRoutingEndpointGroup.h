/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/globalaccelerator/model/CustomRoutingDestinationDescription.h>
#include <aws/globalaccelerator/model/CustomRoutingEndpointDescription.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GlobalAccelerator
{
namespace Model
{

  /**
   * <p>A complex type for the endpoint group for a custom routing accelerator. An
   * Amazon Web Services Region can have only one endpoint group for a specific
   * listener. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CustomRoutingEndpointGroup">AWS
   * API Reference</a></p>
   */
  class CustomRoutingEndpointGroup
  {
  public:
    AWS_GLOBALACCELERATOR_API CustomRoutingEndpointGroup() = default;
    AWS_GLOBALACCELERATOR_API CustomRoutingEndpointGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API CustomRoutingEndpointGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline const Aws::String& GetEndpointGroupArn() const { return m_endpointGroupArn; }
    inline bool EndpointGroupArnHasBeenSet() const { return m_endpointGroupArnHasBeenSet; }
    template<typename EndpointGroupArnT = Aws::String>
    void SetEndpointGroupArn(EndpointGroupArnT&& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = std::forward<EndpointGroupArnT>(value); }
    template<typename EndpointGroupArnT = Aws::String>
    CustomRoutingEndpointGroup& WithEndpointGroupArn(EndpointGroupArnT&& value) { SetEndpointGroupArn(std::forward<EndpointGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the endpoint group is located.</p>
     */
    inline const Aws::String& GetEndpointGroupRegion() const { return m_endpointGroupRegion; }
    inline bool EndpointGroupRegionHasBeenSet() const { return m_endpointGroupRegionHasBeenSet; }
    template<typename EndpointGroupRegionT = Aws::String>
    void SetEndpointGroupRegion(EndpointGroupRegionT&& value) { m_endpointGroupRegionHasBeenSet = true; m_endpointGroupRegion = std::forward<EndpointGroupRegionT>(value); }
    template<typename EndpointGroupRegionT = Aws::String>
    CustomRoutingEndpointGroup& WithEndpointGroupRegion(EndpointGroupRegionT&& value) { SetEndpointGroupRegion(std::forward<EndpointGroupRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a custom routing accelerator, describes the port range and protocol for
     * all endpoints (virtual private cloud subnets) in an endpoint group to accept
     * client traffic on.</p>
     */
    inline const Aws::Vector<CustomRoutingDestinationDescription>& GetDestinationDescriptions() const { return m_destinationDescriptions; }
    inline bool DestinationDescriptionsHasBeenSet() const { return m_destinationDescriptionsHasBeenSet; }
    template<typename DestinationDescriptionsT = Aws::Vector<CustomRoutingDestinationDescription>>
    void SetDestinationDescriptions(DestinationDescriptionsT&& value) { m_destinationDescriptionsHasBeenSet = true; m_destinationDescriptions = std::forward<DestinationDescriptionsT>(value); }
    template<typename DestinationDescriptionsT = Aws::Vector<CustomRoutingDestinationDescription>>
    CustomRoutingEndpointGroup& WithDestinationDescriptions(DestinationDescriptionsT&& value) { SetDestinationDescriptions(std::forward<DestinationDescriptionsT>(value)); return *this;}
    template<typename DestinationDescriptionsT = CustomRoutingDestinationDescription>
    CustomRoutingEndpointGroup& AddDestinationDescriptions(DestinationDescriptionsT&& value) { m_destinationDescriptionsHasBeenSet = true; m_destinationDescriptions.emplace_back(std::forward<DestinationDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For a custom routing accelerator, describes the endpoints (virtual private
     * cloud subnets) in an endpoint group to accept client traffic on.</p>
     */
    inline const Aws::Vector<CustomRoutingEndpointDescription>& GetEndpointDescriptions() const { return m_endpointDescriptions; }
    inline bool EndpointDescriptionsHasBeenSet() const { return m_endpointDescriptionsHasBeenSet; }
    template<typename EndpointDescriptionsT = Aws::Vector<CustomRoutingEndpointDescription>>
    void SetEndpointDescriptions(EndpointDescriptionsT&& value) { m_endpointDescriptionsHasBeenSet = true; m_endpointDescriptions = std::forward<EndpointDescriptionsT>(value); }
    template<typename EndpointDescriptionsT = Aws::Vector<CustomRoutingEndpointDescription>>
    CustomRoutingEndpointGroup& WithEndpointDescriptions(EndpointDescriptionsT&& value) { SetEndpointDescriptions(std::forward<EndpointDescriptionsT>(value)); return *this;}
    template<typename EndpointDescriptionsT = CustomRoutingEndpointDescription>
    CustomRoutingEndpointGroup& AddEndpointDescriptions(EndpointDescriptionsT&& value) { m_endpointDescriptionsHasBeenSet = true; m_endpointDescriptions.emplace_back(std::forward<EndpointDescriptionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_endpointGroupArn;
    bool m_endpointGroupArnHasBeenSet = false;

    Aws::String m_endpointGroupRegion;
    bool m_endpointGroupRegionHasBeenSet = false;

    Aws::Vector<CustomRoutingDestinationDescription> m_destinationDescriptions;
    bool m_destinationDescriptionsHasBeenSet = false;

    Aws::Vector<CustomRoutingEndpointDescription> m_endpointDescriptions;
    bool m_endpointDescriptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
