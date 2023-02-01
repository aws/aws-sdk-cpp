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
    AWS_GLOBALACCELERATOR_API CustomRoutingEndpointGroup();
    AWS_GLOBALACCELERATOR_API CustomRoutingEndpointGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API CustomRoutingEndpointGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline const Aws::String& GetEndpointGroupArn() const{ return m_endpointGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline bool EndpointGroupArnHasBeenSet() const { return m_endpointGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline void SetEndpointGroupArn(const Aws::String& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline void SetEndpointGroupArn(Aws::String&& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline void SetEndpointGroupArn(const char* value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline CustomRoutingEndpointGroup& WithEndpointGroupArn(const Aws::String& value) { SetEndpointGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline CustomRoutingEndpointGroup& WithEndpointGroupArn(Aws::String&& value) { SetEndpointGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline CustomRoutingEndpointGroup& WithEndpointGroupArn(const char* value) { SetEndpointGroupArn(value); return *this;}


    /**
     * <p>The Amazon Web Services Region where the endpoint group is located.</p>
     */
    inline const Aws::String& GetEndpointGroupRegion() const{ return m_endpointGroupRegion; }

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located.</p>
     */
    inline bool EndpointGroupRegionHasBeenSet() const { return m_endpointGroupRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located.</p>
     */
    inline void SetEndpointGroupRegion(const Aws::String& value) { m_endpointGroupRegionHasBeenSet = true; m_endpointGroupRegion = value; }

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located.</p>
     */
    inline void SetEndpointGroupRegion(Aws::String&& value) { m_endpointGroupRegionHasBeenSet = true; m_endpointGroupRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located.</p>
     */
    inline void SetEndpointGroupRegion(const char* value) { m_endpointGroupRegionHasBeenSet = true; m_endpointGroupRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located.</p>
     */
    inline CustomRoutingEndpointGroup& WithEndpointGroupRegion(const Aws::String& value) { SetEndpointGroupRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located.</p>
     */
    inline CustomRoutingEndpointGroup& WithEndpointGroupRegion(Aws::String&& value) { SetEndpointGroupRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located.</p>
     */
    inline CustomRoutingEndpointGroup& WithEndpointGroupRegion(const char* value) { SetEndpointGroupRegion(value); return *this;}


    /**
     * <p>For a custom routing accelerator, describes the port range and protocol for
     * all endpoints (virtual private cloud subnets) in an endpoint group to accept
     * client traffic on.</p>
     */
    inline const Aws::Vector<CustomRoutingDestinationDescription>& GetDestinationDescriptions() const{ return m_destinationDescriptions; }

    /**
     * <p>For a custom routing accelerator, describes the port range and protocol for
     * all endpoints (virtual private cloud subnets) in an endpoint group to accept
     * client traffic on.</p>
     */
    inline bool DestinationDescriptionsHasBeenSet() const { return m_destinationDescriptionsHasBeenSet; }

    /**
     * <p>For a custom routing accelerator, describes the port range and protocol for
     * all endpoints (virtual private cloud subnets) in an endpoint group to accept
     * client traffic on.</p>
     */
    inline void SetDestinationDescriptions(const Aws::Vector<CustomRoutingDestinationDescription>& value) { m_destinationDescriptionsHasBeenSet = true; m_destinationDescriptions = value; }

    /**
     * <p>For a custom routing accelerator, describes the port range and protocol for
     * all endpoints (virtual private cloud subnets) in an endpoint group to accept
     * client traffic on.</p>
     */
    inline void SetDestinationDescriptions(Aws::Vector<CustomRoutingDestinationDescription>&& value) { m_destinationDescriptionsHasBeenSet = true; m_destinationDescriptions = std::move(value); }

    /**
     * <p>For a custom routing accelerator, describes the port range and protocol for
     * all endpoints (virtual private cloud subnets) in an endpoint group to accept
     * client traffic on.</p>
     */
    inline CustomRoutingEndpointGroup& WithDestinationDescriptions(const Aws::Vector<CustomRoutingDestinationDescription>& value) { SetDestinationDescriptions(value); return *this;}

    /**
     * <p>For a custom routing accelerator, describes the port range and protocol for
     * all endpoints (virtual private cloud subnets) in an endpoint group to accept
     * client traffic on.</p>
     */
    inline CustomRoutingEndpointGroup& WithDestinationDescriptions(Aws::Vector<CustomRoutingDestinationDescription>&& value) { SetDestinationDescriptions(std::move(value)); return *this;}

    /**
     * <p>For a custom routing accelerator, describes the port range and protocol for
     * all endpoints (virtual private cloud subnets) in an endpoint group to accept
     * client traffic on.</p>
     */
    inline CustomRoutingEndpointGroup& AddDestinationDescriptions(const CustomRoutingDestinationDescription& value) { m_destinationDescriptionsHasBeenSet = true; m_destinationDescriptions.push_back(value); return *this; }

    /**
     * <p>For a custom routing accelerator, describes the port range and protocol for
     * all endpoints (virtual private cloud subnets) in an endpoint group to accept
     * client traffic on.</p>
     */
    inline CustomRoutingEndpointGroup& AddDestinationDescriptions(CustomRoutingDestinationDescription&& value) { m_destinationDescriptionsHasBeenSet = true; m_destinationDescriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>For a custom routing accelerator, describes the endpoints (virtual private
     * cloud subnets) in an endpoint group to accept client traffic on.</p>
     */
    inline const Aws::Vector<CustomRoutingEndpointDescription>& GetEndpointDescriptions() const{ return m_endpointDescriptions; }

    /**
     * <p>For a custom routing accelerator, describes the endpoints (virtual private
     * cloud subnets) in an endpoint group to accept client traffic on.</p>
     */
    inline bool EndpointDescriptionsHasBeenSet() const { return m_endpointDescriptionsHasBeenSet; }

    /**
     * <p>For a custom routing accelerator, describes the endpoints (virtual private
     * cloud subnets) in an endpoint group to accept client traffic on.</p>
     */
    inline void SetEndpointDescriptions(const Aws::Vector<CustomRoutingEndpointDescription>& value) { m_endpointDescriptionsHasBeenSet = true; m_endpointDescriptions = value; }

    /**
     * <p>For a custom routing accelerator, describes the endpoints (virtual private
     * cloud subnets) in an endpoint group to accept client traffic on.</p>
     */
    inline void SetEndpointDescriptions(Aws::Vector<CustomRoutingEndpointDescription>&& value) { m_endpointDescriptionsHasBeenSet = true; m_endpointDescriptions = std::move(value); }

    /**
     * <p>For a custom routing accelerator, describes the endpoints (virtual private
     * cloud subnets) in an endpoint group to accept client traffic on.</p>
     */
    inline CustomRoutingEndpointGroup& WithEndpointDescriptions(const Aws::Vector<CustomRoutingEndpointDescription>& value) { SetEndpointDescriptions(value); return *this;}

    /**
     * <p>For a custom routing accelerator, describes the endpoints (virtual private
     * cloud subnets) in an endpoint group to accept client traffic on.</p>
     */
    inline CustomRoutingEndpointGroup& WithEndpointDescriptions(Aws::Vector<CustomRoutingEndpointDescription>&& value) { SetEndpointDescriptions(std::move(value)); return *this;}

    /**
     * <p>For a custom routing accelerator, describes the endpoints (virtual private
     * cloud subnets) in an endpoint group to accept client traffic on.</p>
     */
    inline CustomRoutingEndpointGroup& AddEndpointDescriptions(const CustomRoutingEndpointDescription& value) { m_endpointDescriptionsHasBeenSet = true; m_endpointDescriptions.push_back(value); return *this; }

    /**
     * <p>For a custom routing accelerator, describes the endpoints (virtual private
     * cloud subnets) in an endpoint group to accept client traffic on.</p>
     */
    inline CustomRoutingEndpointGroup& AddEndpointDescriptions(CustomRoutingEndpointDescription&& value) { m_endpointDescriptionsHasBeenSet = true; m_endpointDescriptions.push_back(std::move(value)); return *this; }

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
