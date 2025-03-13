/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/AppMeshRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppMesh
{
namespace Model
{

  /**
   * <zonbook></zonbook><xhtml></xhtml><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeRouteInput">AWS
   * API Reference</a></p>
   */
  class DescribeRouteRequest : public AppMeshRequest
  {
  public:
    AWS_APPMESH_API DescribeRouteRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRoute"; }

    AWS_APPMESH_API Aws::String SerializePayload() const override;

    AWS_APPMESH_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the service mesh that the route resides in.</p>
     */
    inline const Aws::String& GetMeshName() const { return m_meshName; }
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }
    template<typename MeshNameT = Aws::String>
    void SetMeshName(MeshNameT&& value) { m_meshNameHasBeenSet = true; m_meshName = std::forward<MeshNameT>(value); }
    template<typename MeshNameT = Aws::String>
    DescribeRouteRequest& WithMeshName(MeshNameT&& value) { SetMeshName(std::forward<MeshNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then it's the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline const Aws::String& GetMeshOwner() const { return m_meshOwner; }
    inline bool MeshOwnerHasBeenSet() const { return m_meshOwnerHasBeenSet; }
    template<typename MeshOwnerT = Aws::String>
    void SetMeshOwner(MeshOwnerT&& value) { m_meshOwnerHasBeenSet = true; m_meshOwner = std::forward<MeshOwnerT>(value); }
    template<typename MeshOwnerT = Aws::String>
    DescribeRouteRequest& WithMeshOwner(MeshOwnerT&& value) { SetMeshOwner(std::forward<MeshOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the route to describe.</p>
     */
    inline const Aws::String& GetRouteName() const { return m_routeName; }
    inline bool RouteNameHasBeenSet() const { return m_routeNameHasBeenSet; }
    template<typename RouteNameT = Aws::String>
    void SetRouteName(RouteNameT&& value) { m_routeNameHasBeenSet = true; m_routeName = std::forward<RouteNameT>(value); }
    template<typename RouteNameT = Aws::String>
    DescribeRouteRequest& WithRouteName(RouteNameT&& value) { SetRouteName(std::forward<RouteNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the virtual router that the route is associated with.</p>
     */
    inline const Aws::String& GetVirtualRouterName() const { return m_virtualRouterName; }
    inline bool VirtualRouterNameHasBeenSet() const { return m_virtualRouterNameHasBeenSet; }
    template<typename VirtualRouterNameT = Aws::String>
    void SetVirtualRouterName(VirtualRouterNameT&& value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName = std::forward<VirtualRouterNameT>(value); }
    template<typename VirtualRouterNameT = Aws::String>
    DescribeRouteRequest& WithVirtualRouterName(VirtualRouterNameT&& value) { SetVirtualRouterName(std::forward<VirtualRouterNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet = false;

    Aws::String m_meshOwner;
    bool m_meshOwnerHasBeenSet = false;

    Aws::String m_routeName;
    bool m_routeNameHasBeenSet = false;

    Aws::String m_virtualRouterName;
    bool m_virtualRouterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
