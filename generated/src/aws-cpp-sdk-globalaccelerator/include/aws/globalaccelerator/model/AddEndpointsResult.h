/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/EndpointDescription.h>
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
  class AddEndpointsResult
  {
  public:
    AWS_GLOBALACCELERATOR_API AddEndpointsResult() = default;
    AWS_GLOBALACCELERATOR_API AddEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API AddEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of endpoint objects.</p>
     */
    inline const Aws::Vector<EndpointDescription>& GetEndpointDescriptions() const { return m_endpointDescriptions; }
    template<typename EndpointDescriptionsT = Aws::Vector<EndpointDescription>>
    void SetEndpointDescriptions(EndpointDescriptionsT&& value) { m_endpointDescriptionsHasBeenSet = true; m_endpointDescriptions = std::forward<EndpointDescriptionsT>(value); }
    template<typename EndpointDescriptionsT = Aws::Vector<EndpointDescription>>
    AddEndpointsResult& WithEndpointDescriptions(EndpointDescriptionsT&& value) { SetEndpointDescriptions(std::forward<EndpointDescriptionsT>(value)); return *this;}
    template<typename EndpointDescriptionsT = EndpointDescription>
    AddEndpointsResult& AddEndpointDescriptions(EndpointDescriptionsT&& value) { m_endpointDescriptionsHasBeenSet = true; m_endpointDescriptions.emplace_back(std::forward<EndpointDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline const Aws::String& GetEndpointGroupArn() const { return m_endpointGroupArn; }
    template<typename EndpointGroupArnT = Aws::String>
    void SetEndpointGroupArn(EndpointGroupArnT&& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = std::forward<EndpointGroupArnT>(value); }
    template<typename EndpointGroupArnT = Aws::String>
    AddEndpointsResult& WithEndpointGroupArn(EndpointGroupArnT&& value) { SetEndpointGroupArn(std::forward<EndpointGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AddEndpointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EndpointDescription> m_endpointDescriptions;
    bool m_endpointDescriptionsHasBeenSet = false;

    Aws::String m_endpointGroupArn;
    bool m_endpointGroupArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
