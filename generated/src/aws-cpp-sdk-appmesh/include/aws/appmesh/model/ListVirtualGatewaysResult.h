/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/VirtualGatewayRef.h>
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
namespace AppMesh
{
namespace Model
{
  class ListVirtualGatewaysResult
  {
  public:
    AWS_APPMESH_API ListVirtualGatewaysResult() = default;
    AWS_APPMESH_API ListVirtualGatewaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API ListVirtualGatewaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualGateways</code> request. When the results of a
     * <code>ListVirtualGateways</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVirtualGatewaysResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of existing virtual gateways for the specified service mesh.</p>
     */
    inline const Aws::Vector<VirtualGatewayRef>& GetVirtualGateways() const { return m_virtualGateways; }
    template<typename VirtualGatewaysT = Aws::Vector<VirtualGatewayRef>>
    void SetVirtualGateways(VirtualGatewaysT&& value) { m_virtualGatewaysHasBeenSet = true; m_virtualGateways = std::forward<VirtualGatewaysT>(value); }
    template<typename VirtualGatewaysT = Aws::Vector<VirtualGatewayRef>>
    ListVirtualGatewaysResult& WithVirtualGateways(VirtualGatewaysT&& value) { SetVirtualGateways(std::forward<VirtualGatewaysT>(value)); return *this;}
    template<typename VirtualGatewaysT = VirtualGatewayRef>
    ListVirtualGatewaysResult& AddVirtualGateways(VirtualGatewaysT&& value) { m_virtualGatewaysHasBeenSet = true; m_virtualGateways.emplace_back(std::forward<VirtualGatewaysT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVirtualGatewaysResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<VirtualGatewayRef> m_virtualGateways;
    bool m_virtualGatewaysHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
