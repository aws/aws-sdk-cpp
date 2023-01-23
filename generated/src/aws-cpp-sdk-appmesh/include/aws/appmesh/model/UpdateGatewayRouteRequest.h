/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/AppMeshRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/GatewayRouteSpec.h>
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
   */
  class UpdateGatewayRouteRequest : public AppMeshRequest
  {
  public:
    AWS_APPMESH_API UpdateGatewayRouteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGatewayRoute"; }

    AWS_APPMESH_API Aws::String SerializePayload() const override;

    AWS_APPMESH_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline UpdateGatewayRouteRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline UpdateGatewayRouteRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline UpdateGatewayRouteRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The name of the gateway route to update.</p>
     */
    inline const Aws::String& GetGatewayRouteName() const{ return m_gatewayRouteName; }

    /**
     * <p>The name of the gateway route to update.</p>
     */
    inline bool GatewayRouteNameHasBeenSet() const { return m_gatewayRouteNameHasBeenSet; }

    /**
     * <p>The name of the gateway route to update.</p>
     */
    inline void SetGatewayRouteName(const Aws::String& value) { m_gatewayRouteNameHasBeenSet = true; m_gatewayRouteName = value; }

    /**
     * <p>The name of the gateway route to update.</p>
     */
    inline void SetGatewayRouteName(Aws::String&& value) { m_gatewayRouteNameHasBeenSet = true; m_gatewayRouteName = std::move(value); }

    /**
     * <p>The name of the gateway route to update.</p>
     */
    inline void SetGatewayRouteName(const char* value) { m_gatewayRouteNameHasBeenSet = true; m_gatewayRouteName.assign(value); }

    /**
     * <p>The name of the gateway route to update.</p>
     */
    inline UpdateGatewayRouteRequest& WithGatewayRouteName(const Aws::String& value) { SetGatewayRouteName(value); return *this;}

    /**
     * <p>The name of the gateway route to update.</p>
     */
    inline UpdateGatewayRouteRequest& WithGatewayRouteName(Aws::String&& value) { SetGatewayRouteName(std::move(value)); return *this;}

    /**
     * <p>The name of the gateway route to update.</p>
     */
    inline UpdateGatewayRouteRequest& WithGatewayRouteName(const char* value) { SetGatewayRouteName(value); return *this;}


    /**
     * <p>The name of the service mesh that the gateway route resides in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }

    /**
     * <p>The name of the service mesh that the gateway route resides in.</p>
     */
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }

    /**
     * <p>The name of the service mesh that the gateway route resides in.</p>
     */
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }

    /**
     * <p>The name of the service mesh that the gateway route resides in.</p>
     */
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }

    /**
     * <p>The name of the service mesh that the gateway route resides in.</p>
     */
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }

    /**
     * <p>The name of the service mesh that the gateway route resides in.</p>
     */
    inline UpdateGatewayRouteRequest& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}

    /**
     * <p>The name of the service mesh that the gateway route resides in.</p>
     */
    inline UpdateGatewayRouteRequest& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}

    /**
     * <p>The name of the service mesh that the gateway route resides in.</p>
     */
    inline UpdateGatewayRouteRequest& WithMeshName(const char* value) { SetMeshName(value); return *this;}


    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then it's the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline const Aws::String& GetMeshOwner() const{ return m_meshOwner; }

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then it's the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline bool MeshOwnerHasBeenSet() const { return m_meshOwnerHasBeenSet; }

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then it's the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline void SetMeshOwner(const Aws::String& value) { m_meshOwnerHasBeenSet = true; m_meshOwner = value; }

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then it's the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline void SetMeshOwner(Aws::String&& value) { m_meshOwnerHasBeenSet = true; m_meshOwner = std::move(value); }

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then it's the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline void SetMeshOwner(const char* value) { m_meshOwnerHasBeenSet = true; m_meshOwner.assign(value); }

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then it's the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline UpdateGatewayRouteRequest& WithMeshOwner(const Aws::String& value) { SetMeshOwner(value); return *this;}

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then it's the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline UpdateGatewayRouteRequest& WithMeshOwner(Aws::String&& value) { SetMeshOwner(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then it's the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline UpdateGatewayRouteRequest& WithMeshOwner(const char* value) { SetMeshOwner(value); return *this;}


    /**
     * <p>The new gateway route specification to apply. This overwrites the existing
     * data.</p>
     */
    inline const GatewayRouteSpec& GetSpec() const{ return m_spec; }

    /**
     * <p>The new gateway route specification to apply. This overwrites the existing
     * data.</p>
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * <p>The new gateway route specification to apply. This overwrites the existing
     * data.</p>
     */
    inline void SetSpec(const GatewayRouteSpec& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * <p>The new gateway route specification to apply. This overwrites the existing
     * data.</p>
     */
    inline void SetSpec(GatewayRouteSpec&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * <p>The new gateway route specification to apply. This overwrites the existing
     * data.</p>
     */
    inline UpdateGatewayRouteRequest& WithSpec(const GatewayRouteSpec& value) { SetSpec(value); return *this;}

    /**
     * <p>The new gateway route specification to apply. This overwrites the existing
     * data.</p>
     */
    inline UpdateGatewayRouteRequest& WithSpec(GatewayRouteSpec&& value) { SetSpec(std::move(value)); return *this;}


    /**
     * <p>The name of the virtual gateway that the gateway route is associated
     * with.</p>
     */
    inline const Aws::String& GetVirtualGatewayName() const{ return m_virtualGatewayName; }

    /**
     * <p>The name of the virtual gateway that the gateway route is associated
     * with.</p>
     */
    inline bool VirtualGatewayNameHasBeenSet() const { return m_virtualGatewayNameHasBeenSet; }

    /**
     * <p>The name of the virtual gateway that the gateway route is associated
     * with.</p>
     */
    inline void SetVirtualGatewayName(const Aws::String& value) { m_virtualGatewayNameHasBeenSet = true; m_virtualGatewayName = value; }

    /**
     * <p>The name of the virtual gateway that the gateway route is associated
     * with.</p>
     */
    inline void SetVirtualGatewayName(Aws::String&& value) { m_virtualGatewayNameHasBeenSet = true; m_virtualGatewayName = std::move(value); }

    /**
     * <p>The name of the virtual gateway that the gateway route is associated
     * with.</p>
     */
    inline void SetVirtualGatewayName(const char* value) { m_virtualGatewayNameHasBeenSet = true; m_virtualGatewayName.assign(value); }

    /**
     * <p>The name of the virtual gateway that the gateway route is associated
     * with.</p>
     */
    inline UpdateGatewayRouteRequest& WithVirtualGatewayName(const Aws::String& value) { SetVirtualGatewayName(value); return *this;}

    /**
     * <p>The name of the virtual gateway that the gateway route is associated
     * with.</p>
     */
    inline UpdateGatewayRouteRequest& WithVirtualGatewayName(Aws::String&& value) { SetVirtualGatewayName(std::move(value)); return *this;}

    /**
     * <p>The name of the virtual gateway that the gateway route is associated
     * with.</p>
     */
    inline UpdateGatewayRouteRequest& WithVirtualGatewayName(const char* value) { SetVirtualGatewayName(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_gatewayRouteName;
    bool m_gatewayRouteNameHasBeenSet = false;

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet = false;

    Aws::String m_meshOwner;
    bool m_meshOwnerHasBeenSet = false;

    GatewayRouteSpec m_spec;
    bool m_specHasBeenSet = false;

    Aws::String m_virtualGatewayName;
    bool m_virtualGatewayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
