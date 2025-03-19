/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/VirtualGateway.h>
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
namespace DirectConnect
{
namespace Model
{
  class DescribeVirtualGatewaysResult
  {
  public:
    AWS_DIRECTCONNECT_API DescribeVirtualGatewaysResult() = default;
    AWS_DIRECTCONNECT_API DescribeVirtualGatewaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeVirtualGatewaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The virtual private gateways.</p>
     */
    inline const Aws::Vector<VirtualGateway>& GetVirtualGateways() const { return m_virtualGateways; }
    template<typename VirtualGatewaysT = Aws::Vector<VirtualGateway>>
    void SetVirtualGateways(VirtualGatewaysT&& value) { m_virtualGatewaysHasBeenSet = true; m_virtualGateways = std::forward<VirtualGatewaysT>(value); }
    template<typename VirtualGatewaysT = Aws::Vector<VirtualGateway>>
    DescribeVirtualGatewaysResult& WithVirtualGateways(VirtualGatewaysT&& value) { SetVirtualGateways(std::forward<VirtualGatewaysT>(value)); return *this;}
    template<typename VirtualGatewaysT = VirtualGateway>
    DescribeVirtualGatewaysResult& AddVirtualGateways(VirtualGatewaysT&& value) { m_virtualGatewaysHasBeenSet = true; m_virtualGateways.emplace_back(std::forward<VirtualGatewaysT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeVirtualGatewaysResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VirtualGateway> m_virtualGateways;
    bool m_virtualGatewaysHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
