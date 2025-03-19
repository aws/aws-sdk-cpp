/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayData.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateVirtualGatewayResult
  {
  public:
    AWS_APPMESH_API UpdateVirtualGatewayResult() = default;
    AWS_APPMESH_API UpdateVirtualGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API UpdateVirtualGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A full description of the virtual gateway that was updated.</p>
     */
    inline const VirtualGatewayData& GetVirtualGateway() const { return m_virtualGateway; }
    template<typename VirtualGatewayT = VirtualGatewayData>
    void SetVirtualGateway(VirtualGatewayT&& value) { m_virtualGatewayHasBeenSet = true; m_virtualGateway = std::forward<VirtualGatewayT>(value); }
    template<typename VirtualGatewayT = VirtualGatewayData>
    UpdateVirtualGatewayResult& WithVirtualGateway(VirtualGatewayT&& value) { SetVirtualGateway(std::forward<VirtualGatewayT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateVirtualGatewayResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VirtualGatewayData m_virtualGateway;
    bool m_virtualGatewayHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
