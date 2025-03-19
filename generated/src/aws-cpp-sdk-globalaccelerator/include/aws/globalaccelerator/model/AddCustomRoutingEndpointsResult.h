/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/CustomRoutingEndpointDescription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GlobalAccelerator
{
namespace Model
{
  class AddCustomRoutingEndpointsResult
  {
  public:
    AWS_GLOBALACCELERATOR_API AddCustomRoutingEndpointsResult() = default;
    AWS_GLOBALACCELERATOR_API AddCustomRoutingEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API AddCustomRoutingEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The endpoint objects added to the custom routing accelerator.</p>
     */
    inline const Aws::Vector<CustomRoutingEndpointDescription>& GetEndpointDescriptions() const { return m_endpointDescriptions; }
    template<typename EndpointDescriptionsT = Aws::Vector<CustomRoutingEndpointDescription>>
    void SetEndpointDescriptions(EndpointDescriptionsT&& value) { m_endpointDescriptionsHasBeenSet = true; m_endpointDescriptions = std::forward<EndpointDescriptionsT>(value); }
    template<typename EndpointDescriptionsT = Aws::Vector<CustomRoutingEndpointDescription>>
    AddCustomRoutingEndpointsResult& WithEndpointDescriptions(EndpointDescriptionsT&& value) { SetEndpointDescriptions(std::forward<EndpointDescriptionsT>(value)); return *this;}
    template<typename EndpointDescriptionsT = CustomRoutingEndpointDescription>
    AddCustomRoutingEndpointsResult& AddEndpointDescriptions(EndpointDescriptionsT&& value) { m_endpointDescriptionsHasBeenSet = true; m_endpointDescriptions.emplace_back(std::forward<EndpointDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group for the custom routing
     * endpoint.</p>
     */
    inline const Aws::String& GetEndpointGroupArn() const { return m_endpointGroupArn; }
    template<typename EndpointGroupArnT = Aws::String>
    void SetEndpointGroupArn(EndpointGroupArnT&& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = std::forward<EndpointGroupArnT>(value); }
    template<typename EndpointGroupArnT = Aws::String>
    AddCustomRoutingEndpointsResult& WithEndpointGroupArn(EndpointGroupArnT&& value) { SetEndpointGroupArn(std::forward<EndpointGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AddCustomRoutingEndpointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CustomRoutingEndpointDescription> m_endpointDescriptions;
    bool m_endpointDescriptionsHasBeenSet = false;

    Aws::String m_endpointGroupArn;
    bool m_endpointGroupArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
