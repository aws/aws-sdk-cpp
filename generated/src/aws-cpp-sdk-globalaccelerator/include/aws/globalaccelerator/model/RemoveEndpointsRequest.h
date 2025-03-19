/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/EndpointIdentifier.h>
#include <utility>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class RemoveEndpointsRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API RemoveEndpointsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveEndpoints"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifiers of the endpoints that you want to remove.</p>
     */
    inline const Aws::Vector<EndpointIdentifier>& GetEndpointIdentifiers() const { return m_endpointIdentifiers; }
    inline bool EndpointIdentifiersHasBeenSet() const { return m_endpointIdentifiersHasBeenSet; }
    template<typename EndpointIdentifiersT = Aws::Vector<EndpointIdentifier>>
    void SetEndpointIdentifiers(EndpointIdentifiersT&& value) { m_endpointIdentifiersHasBeenSet = true; m_endpointIdentifiers = std::forward<EndpointIdentifiersT>(value); }
    template<typename EndpointIdentifiersT = Aws::Vector<EndpointIdentifier>>
    RemoveEndpointsRequest& WithEndpointIdentifiers(EndpointIdentifiersT&& value) { SetEndpointIdentifiers(std::forward<EndpointIdentifiersT>(value)); return *this;}
    template<typename EndpointIdentifiersT = EndpointIdentifier>
    RemoveEndpointsRequest& AddEndpointIdentifiers(EndpointIdentifiersT&& value) { m_endpointIdentifiersHasBeenSet = true; m_endpointIdentifiers.emplace_back(std::forward<EndpointIdentifiersT>(value)); return *this; }
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
    RemoveEndpointsRequest& WithEndpointGroupArn(EndpointGroupArnT&& value) { SetEndpointGroupArn(std::forward<EndpointGroupArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EndpointIdentifier> m_endpointIdentifiers;
    bool m_endpointIdentifiersHasBeenSet = false;

    Aws::String m_endpointGroupArn;
    bool m_endpointGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
