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
    AWS_APPMESH_API VirtualServiceProvider();
    AWS_APPMESH_API VirtualServiceProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualServiceProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The virtual node associated with a virtual service.</p>
     */
    inline const VirtualNodeServiceProvider& GetVirtualNode() const{ return m_virtualNode; }

    /**
     * <p>The virtual node associated with a virtual service.</p>
     */
    inline bool VirtualNodeHasBeenSet() const { return m_virtualNodeHasBeenSet; }

    /**
     * <p>The virtual node associated with a virtual service.</p>
     */
    inline void SetVirtualNode(const VirtualNodeServiceProvider& value) { m_virtualNodeHasBeenSet = true; m_virtualNode = value; }

    /**
     * <p>The virtual node associated with a virtual service.</p>
     */
    inline void SetVirtualNode(VirtualNodeServiceProvider&& value) { m_virtualNodeHasBeenSet = true; m_virtualNode = std::move(value); }

    /**
     * <p>The virtual node associated with a virtual service.</p>
     */
    inline VirtualServiceProvider& WithVirtualNode(const VirtualNodeServiceProvider& value) { SetVirtualNode(value); return *this;}

    /**
     * <p>The virtual node associated with a virtual service.</p>
     */
    inline VirtualServiceProvider& WithVirtualNode(VirtualNodeServiceProvider&& value) { SetVirtualNode(std::move(value)); return *this;}


    /**
     * <p>The virtual router associated with a virtual service.</p>
     */
    inline const VirtualRouterServiceProvider& GetVirtualRouter() const{ return m_virtualRouter; }

    /**
     * <p>The virtual router associated with a virtual service.</p>
     */
    inline bool VirtualRouterHasBeenSet() const { return m_virtualRouterHasBeenSet; }

    /**
     * <p>The virtual router associated with a virtual service.</p>
     */
    inline void SetVirtualRouter(const VirtualRouterServiceProvider& value) { m_virtualRouterHasBeenSet = true; m_virtualRouter = value; }

    /**
     * <p>The virtual router associated with a virtual service.</p>
     */
    inline void SetVirtualRouter(VirtualRouterServiceProvider&& value) { m_virtualRouterHasBeenSet = true; m_virtualRouter = std::move(value); }

    /**
     * <p>The virtual router associated with a virtual service.</p>
     */
    inline VirtualServiceProvider& WithVirtualRouter(const VirtualRouterServiceProvider& value) { SetVirtualRouter(value); return *this;}

    /**
     * <p>The virtual router associated with a virtual service.</p>
     */
    inline VirtualServiceProvider& WithVirtualRouter(VirtualRouterServiceProvider&& value) { SetVirtualRouter(std::move(value)); return *this;}

  private:

    VirtualNodeServiceProvider m_virtualNode;
    bool m_virtualNodeHasBeenSet = false;

    VirtualRouterServiceProvider m_virtualRouter;
    bool m_virtualRouterHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
