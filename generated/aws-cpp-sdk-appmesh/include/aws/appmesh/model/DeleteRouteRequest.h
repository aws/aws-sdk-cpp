﻿/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteRouteInput">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API DeleteRouteRequest : public AppMeshRequest
  {
  public:
    DeleteRouteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRoute"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the service mesh to delete the route in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }

    /**
     * <p>The name of the service mesh to delete the route in.</p>
     */
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }

    /**
     * <p>The name of the service mesh to delete the route in.</p>
     */
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }

    /**
     * <p>The name of the service mesh to delete the route in.</p>
     */
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }

    /**
     * <p>The name of the service mesh to delete the route in.</p>
     */
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }

    /**
     * <p>The name of the service mesh to delete the route in.</p>
     */
    inline DeleteRouteRequest& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}

    /**
     * <p>The name of the service mesh to delete the route in.</p>
     */
    inline DeleteRouteRequest& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}

    /**
     * <p>The name of the service mesh to delete the route in.</p>
     */
    inline DeleteRouteRequest& WithMeshName(const char* value) { SetMeshName(value); return *this;}


    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's the ID of the account that shared the mesh with your
     * account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline const Aws::String& GetMeshOwner() const{ return m_meshOwner; }

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's the ID of the account that shared the mesh with your
     * account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline bool MeshOwnerHasBeenSet() const { return m_meshOwnerHasBeenSet; }

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's the ID of the account that shared the mesh with your
     * account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline void SetMeshOwner(const Aws::String& value) { m_meshOwnerHasBeenSet = true; m_meshOwner = value; }

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's the ID of the account that shared the mesh with your
     * account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline void SetMeshOwner(Aws::String&& value) { m_meshOwnerHasBeenSet = true; m_meshOwner = std::move(value); }

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's the ID of the account that shared the mesh with your
     * account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline void SetMeshOwner(const char* value) { m_meshOwnerHasBeenSet = true; m_meshOwner.assign(value); }

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's the ID of the account that shared the mesh with your
     * account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline DeleteRouteRequest& WithMeshOwner(const Aws::String& value) { SetMeshOwner(value); return *this;}

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's the ID of the account that shared the mesh with your
     * account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline DeleteRouteRequest& WithMeshOwner(Aws::String&& value) { SetMeshOwner(std::move(value)); return *this;}

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's the ID of the account that shared the mesh with your
     * account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline DeleteRouteRequest& WithMeshOwner(const char* value) { SetMeshOwner(value); return *this;}


    /**
     * <p>The name of the route to delete.</p>
     */
    inline const Aws::String& GetRouteName() const{ return m_routeName; }

    /**
     * <p>The name of the route to delete.</p>
     */
    inline bool RouteNameHasBeenSet() const { return m_routeNameHasBeenSet; }

    /**
     * <p>The name of the route to delete.</p>
     */
    inline void SetRouteName(const Aws::String& value) { m_routeNameHasBeenSet = true; m_routeName = value; }

    /**
     * <p>The name of the route to delete.</p>
     */
    inline void SetRouteName(Aws::String&& value) { m_routeNameHasBeenSet = true; m_routeName = std::move(value); }

    /**
     * <p>The name of the route to delete.</p>
     */
    inline void SetRouteName(const char* value) { m_routeNameHasBeenSet = true; m_routeName.assign(value); }

    /**
     * <p>The name of the route to delete.</p>
     */
    inline DeleteRouteRequest& WithRouteName(const Aws::String& value) { SetRouteName(value); return *this;}

    /**
     * <p>The name of the route to delete.</p>
     */
    inline DeleteRouteRequest& WithRouteName(Aws::String&& value) { SetRouteName(std::move(value)); return *this;}

    /**
     * <p>The name of the route to delete.</p>
     */
    inline DeleteRouteRequest& WithRouteName(const char* value) { SetRouteName(value); return *this;}


    /**
     * <p>The name of the virtual router to delete the route in.</p>
     */
    inline const Aws::String& GetVirtualRouterName() const{ return m_virtualRouterName; }

    /**
     * <p>The name of the virtual router to delete the route in.</p>
     */
    inline bool VirtualRouterNameHasBeenSet() const { return m_virtualRouterNameHasBeenSet; }

    /**
     * <p>The name of the virtual router to delete the route in.</p>
     */
    inline void SetVirtualRouterName(const Aws::String& value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName = value; }

    /**
     * <p>The name of the virtual router to delete the route in.</p>
     */
    inline void SetVirtualRouterName(Aws::String&& value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName = std::move(value); }

    /**
     * <p>The name of the virtual router to delete the route in.</p>
     */
    inline void SetVirtualRouterName(const char* value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName.assign(value); }

    /**
     * <p>The name of the virtual router to delete the route in.</p>
     */
    inline DeleteRouteRequest& WithVirtualRouterName(const Aws::String& value) { SetVirtualRouterName(value); return *this;}

    /**
     * <p>The name of the virtual router to delete the route in.</p>
     */
    inline DeleteRouteRequest& WithVirtualRouterName(Aws::String&& value) { SetVirtualRouterName(std::move(value)); return *this;}

    /**
     * <p>The name of the virtual router to delete the route in.</p>
     */
    inline DeleteRouteRequest& WithVirtualRouterName(const char* value) { SetVirtualRouterName(value); return *this;}

  private:

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet;

    Aws::String m_meshOwner;
    bool m_meshOwnerHasBeenSet;

    Aws::String m_routeName;
    bool m_routeNameHasBeenSet;

    Aws::String m_virtualRouterName;
    bool m_virtualRouterNameHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
