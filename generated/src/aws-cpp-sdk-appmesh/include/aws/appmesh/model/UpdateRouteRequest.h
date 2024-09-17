/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/AppMeshRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/RouteSpec.h>
#include <utility>
#include <aws/core/utils/UUID.h>

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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateRouteInput">AWS
   * API Reference</a></p>
   */
  class UpdateRouteRequest : public AppMeshRequest
  {
  public:
    AWS_APPMESH_API UpdateRouteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRoute"; }

    AWS_APPMESH_API Aws::String SerializePayload() const override;

    AWS_APPMESH_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateRouteRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateRouteRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateRouteRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service mesh that the route resides in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }
    inline UpdateRouteRequest& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}
    inline UpdateRouteRequest& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}
    inline UpdateRouteRequest& WithMeshName(const char* value) { SetMeshName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then it's the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline const Aws::String& GetMeshOwner() const{ return m_meshOwner; }
    inline bool MeshOwnerHasBeenSet() const { return m_meshOwnerHasBeenSet; }
    inline void SetMeshOwner(const Aws::String& value) { m_meshOwnerHasBeenSet = true; m_meshOwner = value; }
    inline void SetMeshOwner(Aws::String&& value) { m_meshOwnerHasBeenSet = true; m_meshOwner = std::move(value); }
    inline void SetMeshOwner(const char* value) { m_meshOwnerHasBeenSet = true; m_meshOwner.assign(value); }
    inline UpdateRouteRequest& WithMeshOwner(const Aws::String& value) { SetMeshOwner(value); return *this;}
    inline UpdateRouteRequest& WithMeshOwner(Aws::String&& value) { SetMeshOwner(std::move(value)); return *this;}
    inline UpdateRouteRequest& WithMeshOwner(const char* value) { SetMeshOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the route to update.</p>
     */
    inline const Aws::String& GetRouteName() const{ return m_routeName; }
    inline bool RouteNameHasBeenSet() const { return m_routeNameHasBeenSet; }
    inline void SetRouteName(const Aws::String& value) { m_routeNameHasBeenSet = true; m_routeName = value; }
    inline void SetRouteName(Aws::String&& value) { m_routeNameHasBeenSet = true; m_routeName = std::move(value); }
    inline void SetRouteName(const char* value) { m_routeNameHasBeenSet = true; m_routeName.assign(value); }
    inline UpdateRouteRequest& WithRouteName(const Aws::String& value) { SetRouteName(value); return *this;}
    inline UpdateRouteRequest& WithRouteName(Aws::String&& value) { SetRouteName(std::move(value)); return *this;}
    inline UpdateRouteRequest& WithRouteName(const char* value) { SetRouteName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new route specification to apply. This overwrites the existing data.</p>
     */
    inline const RouteSpec& GetSpec() const{ return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    inline void SetSpec(const RouteSpec& value) { m_specHasBeenSet = true; m_spec = value; }
    inline void SetSpec(RouteSpec&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }
    inline UpdateRouteRequest& WithSpec(const RouteSpec& value) { SetSpec(value); return *this;}
    inline UpdateRouteRequest& WithSpec(RouteSpec&& value) { SetSpec(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the virtual router that the route is associated with.</p>
     */
    inline const Aws::String& GetVirtualRouterName() const{ return m_virtualRouterName; }
    inline bool VirtualRouterNameHasBeenSet() const { return m_virtualRouterNameHasBeenSet; }
    inline void SetVirtualRouterName(const Aws::String& value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName = value; }
    inline void SetVirtualRouterName(Aws::String&& value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName = std::move(value); }
    inline void SetVirtualRouterName(const char* value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName.assign(value); }
    inline UpdateRouteRequest& WithVirtualRouterName(const Aws::String& value) { SetVirtualRouterName(value); return *this;}
    inline UpdateRouteRequest& WithVirtualRouterName(Aws::String&& value) { SetVirtualRouterName(std::move(value)); return *this;}
    inline UpdateRouteRequest& WithVirtualRouterName(const char* value) { SetVirtualRouterName(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet = false;

    Aws::String m_meshOwner;
    bool m_meshOwnerHasBeenSet = false;

    Aws::String m_routeName;
    bool m_routeNameHasBeenSet = false;

    RouteSpec m_spec;
    bool m_specHasBeenSet = false;

    Aws::String m_virtualRouterName;
    bool m_virtualRouterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
