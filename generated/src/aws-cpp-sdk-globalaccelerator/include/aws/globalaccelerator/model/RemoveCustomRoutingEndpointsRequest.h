/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class RemoveCustomRoutingEndpointsRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API RemoveCustomRoutingEndpointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveCustomRoutingEndpoints"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The IDs for the endpoints. For custom routing accelerators, endpoint IDs are
     * the virtual private cloud (VPC) subnet IDs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEndpointIds() const{ return m_endpointIds; }

    /**
     * <p>The IDs for the endpoints. For custom routing accelerators, endpoint IDs are
     * the virtual private cloud (VPC) subnet IDs. </p>
     */
    inline bool EndpointIdsHasBeenSet() const { return m_endpointIdsHasBeenSet; }

    /**
     * <p>The IDs for the endpoints. For custom routing accelerators, endpoint IDs are
     * the virtual private cloud (VPC) subnet IDs. </p>
     */
    inline void SetEndpointIds(const Aws::Vector<Aws::String>& value) { m_endpointIdsHasBeenSet = true; m_endpointIds = value; }

    /**
     * <p>The IDs for the endpoints. For custom routing accelerators, endpoint IDs are
     * the virtual private cloud (VPC) subnet IDs. </p>
     */
    inline void SetEndpointIds(Aws::Vector<Aws::String>&& value) { m_endpointIdsHasBeenSet = true; m_endpointIds = std::move(value); }

    /**
     * <p>The IDs for the endpoints. For custom routing accelerators, endpoint IDs are
     * the virtual private cloud (VPC) subnet IDs. </p>
     */
    inline RemoveCustomRoutingEndpointsRequest& WithEndpointIds(const Aws::Vector<Aws::String>& value) { SetEndpointIds(value); return *this;}

    /**
     * <p>The IDs for the endpoints. For custom routing accelerators, endpoint IDs are
     * the virtual private cloud (VPC) subnet IDs. </p>
     */
    inline RemoveCustomRoutingEndpointsRequest& WithEndpointIds(Aws::Vector<Aws::String>&& value) { SetEndpointIds(std::move(value)); return *this;}

    /**
     * <p>The IDs for the endpoints. For custom routing accelerators, endpoint IDs are
     * the virtual private cloud (VPC) subnet IDs. </p>
     */
    inline RemoveCustomRoutingEndpointsRequest& AddEndpointIds(const Aws::String& value) { m_endpointIdsHasBeenSet = true; m_endpointIds.push_back(value); return *this; }

    /**
     * <p>The IDs for the endpoints. For custom routing accelerators, endpoint IDs are
     * the virtual private cloud (VPC) subnet IDs. </p>
     */
    inline RemoveCustomRoutingEndpointsRequest& AddEndpointIds(Aws::String&& value) { m_endpointIdsHasBeenSet = true; m_endpointIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs for the endpoints. For custom routing accelerators, endpoint IDs are
     * the virtual private cloud (VPC) subnet IDs. </p>
     */
    inline RemoveCustomRoutingEndpointsRequest& AddEndpointIds(const char* value) { m_endpointIdsHasBeenSet = true; m_endpointIds.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group to remove endpoints
     * from.</p>
     */
    inline const Aws::String& GetEndpointGroupArn() const{ return m_endpointGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group to remove endpoints
     * from.</p>
     */
    inline bool EndpointGroupArnHasBeenSet() const { return m_endpointGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group to remove endpoints
     * from.</p>
     */
    inline void SetEndpointGroupArn(const Aws::String& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group to remove endpoints
     * from.</p>
     */
    inline void SetEndpointGroupArn(Aws::String&& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group to remove endpoints
     * from.</p>
     */
    inline void SetEndpointGroupArn(const char* value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group to remove endpoints
     * from.</p>
     */
    inline RemoveCustomRoutingEndpointsRequest& WithEndpointGroupArn(const Aws::String& value) { SetEndpointGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group to remove endpoints
     * from.</p>
     */
    inline RemoveCustomRoutingEndpointsRequest& WithEndpointGroupArn(Aws::String&& value) { SetEndpointGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group to remove endpoints
     * from.</p>
     */
    inline RemoveCustomRoutingEndpointsRequest& WithEndpointGroupArn(const char* value) { SetEndpointGroupArn(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_endpointIds;
    bool m_endpointIdsHasBeenSet = false;

    Aws::String m_endpointGroupArn;
    bool m_endpointGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
