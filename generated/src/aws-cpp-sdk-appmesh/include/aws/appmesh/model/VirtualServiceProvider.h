/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualNodeServiceProvider.h>
#include <aws/appmesh/model/VirtualRouterServiceProvider.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents the provider for a virtual service.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualServiceProvider">AWS
   * API Reference</a></p>
   */
  class VirtualServiceProvider
  {
  public:
    AWS_APPMESH_API VirtualServiceProvider() = default;
    AWS_APPMESH_API VirtualServiceProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualServiceProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The virtual node associated with a virtual service.</p>
     */
    inline const VirtualNodeServiceProvider& GetVirtualNode() const { return m_virtualNode; }
    inline bool VirtualNodeHasBeenSet() const { return m_virtualNodeHasBeenSet; }
    template<typename VirtualNodeT = VirtualNodeServiceProvider>
    void SetVirtualNode(VirtualNodeT&& value) { m_virtualNodeHasBeenSet = true; m_virtualNode = std::forward<VirtualNodeT>(value); }
    template<typename VirtualNodeT = VirtualNodeServiceProvider>
    VirtualServiceProvider& WithVirtualNode(VirtualNodeT&& value) { SetVirtualNode(std::forward<VirtualNodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual router associated with a virtual service.</p>
     */
    inline const VirtualRouterServiceProvider& GetVirtualRouter() const { return m_virtualRouter; }
    inline bool VirtualRouterHasBeenSet() const { return m_virtualRouterHasBeenSet; }
    template<typename VirtualRouterT = VirtualRouterServiceProvider>
    void SetVirtualRouter(VirtualRouterT&& value) { m_virtualRouterHasBeenSet = true; m_virtualRouter = std::forward<VirtualRouterT>(value); }
    template<typename VirtualRouterT = VirtualRouterServiceProvider>
    VirtualServiceProvider& WithVirtualRouter(VirtualRouterT&& value) { SetVirtualRouter(std::forward<VirtualRouterT>(value)); return *this;}
    ///@}
  private:

    VirtualNodeServiceProvider m_virtualNode;
    bool m_virtualNodeHasBeenSet = false;

    VirtualRouterServiceProvider m_virtualRouter;
    bool m_virtualRouterHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
