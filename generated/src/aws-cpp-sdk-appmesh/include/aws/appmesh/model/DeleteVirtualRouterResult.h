/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualRouterData.h>
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
  /**
   * <zonbook></zonbook><xhtml></xhtml><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualRouterOutput">AWS
   * API Reference</a></p>
   */
  class DeleteVirtualRouterResult
  {
  public:
    AWS_APPMESH_API DeleteVirtualRouterResult() = default;
    AWS_APPMESH_API DeleteVirtualRouterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API DeleteVirtualRouterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The virtual router that was deleted.</p>
     */
    inline const VirtualRouterData& GetVirtualRouter() const { return m_virtualRouter; }
    template<typename VirtualRouterT = VirtualRouterData>
    void SetVirtualRouter(VirtualRouterT&& value) { m_virtualRouterHasBeenSet = true; m_virtualRouter = std::forward<VirtualRouterT>(value); }
    template<typename VirtualRouterT = VirtualRouterData>
    DeleteVirtualRouterResult& WithVirtualRouter(VirtualRouterT&& value) { SetVirtualRouter(std::forward<VirtualRouterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteVirtualRouterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VirtualRouterData m_virtualRouter;
    bool m_virtualRouterHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
