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
    AWS_GLOBALACCELERATOR_API RemoveCustomRoutingEndpointsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveCustomRoutingEndpoints"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The IDs for the endpoints. For custom routing accelerators, endpoint IDs are
     * the virtual private cloud (VPC) subnet IDs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEndpointIds() const { return m_endpointIds; }
    inline bool EndpointIdsHasBeenSet() const { return m_endpointIdsHasBeenSet; }
    template<typename EndpointIdsT = Aws::Vector<Aws::String>>
    void SetEndpointIds(EndpointIdsT&& value) { m_endpointIdsHasBeenSet = true; m_endpointIds = std::forward<EndpointIdsT>(value); }
    template<typename EndpointIdsT = Aws::Vector<Aws::String>>
    RemoveCustomRoutingEndpointsRequest& WithEndpointIds(EndpointIdsT&& value) { SetEndpointIds(std::forward<EndpointIdsT>(value)); return *this;}
    template<typename EndpointIdsT = Aws::String>
    RemoveCustomRoutingEndpointsRequest& AddEndpointIds(EndpointIdsT&& value) { m_endpointIdsHasBeenSet = true; m_endpointIds.emplace_back(std::forward<EndpointIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group to remove endpoints
     * from.</p>
     */
    inline const Aws::String& GetEndpointGroupArn() const { return m_endpointGroupArn; }
    inline bool EndpointGroupArnHasBeenSet() const { return m_endpointGroupArnHasBeenSet; }
    template<typename EndpointGroupArnT = Aws::String>
    void SetEndpointGroupArn(EndpointGroupArnT&& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = std::forward<EndpointGroupArnT>(value); }
    template<typename EndpointGroupArnT = Aws::String>
    RemoveCustomRoutingEndpointsRequest& WithEndpointGroupArn(EndpointGroupArnT&& value) { SetEndpointGroupArn(std::forward<EndpointGroupArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_endpointIds;
    bool m_endpointIdsHasBeenSet = false;

    Aws::String m_endpointGroupArn;
    bool m_endpointGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
