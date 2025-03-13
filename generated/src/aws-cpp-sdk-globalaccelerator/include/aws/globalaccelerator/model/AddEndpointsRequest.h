/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/EndpointConfiguration.h>
#include <utility>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class AddEndpointsRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API AddEndpointsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddEndpoints"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The list of endpoint objects.</p>
     */
    inline const Aws::Vector<EndpointConfiguration>& GetEndpointConfigurations() const { return m_endpointConfigurations; }
    inline bool EndpointConfigurationsHasBeenSet() const { return m_endpointConfigurationsHasBeenSet; }
    template<typename EndpointConfigurationsT = Aws::Vector<EndpointConfiguration>>
    void SetEndpointConfigurations(EndpointConfigurationsT&& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations = std::forward<EndpointConfigurationsT>(value); }
    template<typename EndpointConfigurationsT = Aws::Vector<EndpointConfiguration>>
    AddEndpointsRequest& WithEndpointConfigurations(EndpointConfigurationsT&& value) { SetEndpointConfigurations(std::forward<EndpointConfigurationsT>(value)); return *this;}
    template<typename EndpointConfigurationsT = EndpointConfiguration>
    AddEndpointsRequest& AddEndpointConfigurations(EndpointConfigurationsT&& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations.emplace_back(std::forward<EndpointConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline const Aws::String& GetEndpointGroupArn() const { return m_endpointGroupArn; }
    inline bool EndpointGroupArnHasBeenSet() const { return m_endpointGroupArnHasBeenSet; }
    template<typename EndpointGroupArnT = Aws::String>
    void SetEndpointGroupArn(EndpointGroupArnT&& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = std::forward<EndpointGroupArnT>(value); }
    template<typename EndpointGroupArnT = Aws::String>
    AddEndpointsRequest& WithEndpointGroupArn(EndpointGroupArnT&& value) { SetEndpointGroupArn(std::forward<EndpointGroupArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EndpointConfiguration> m_endpointConfigurations;
    bool m_endpointConfigurationsHasBeenSet = false;

    Aws::String m_endpointGroupArn;
    bool m_endpointGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
