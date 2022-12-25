/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/AppMeshRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/GatewayRouteSpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/TagRef.h>
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
  class CreateGatewayRouteRequest : public AppMeshRequest
  {
  public:
    AWS_APPMESH_API CreateGatewayRouteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGatewayRoute"; }

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
    inline CreateGatewayRouteRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline CreateGatewayRouteRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline CreateGatewayRouteRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The name to use for the gateway route.</p>
     */
    inline const Aws::String& GetGatewayRouteName() const{ return m_gatewayRouteName; }

    /**
     * <p>The name to use for the gateway route.</p>
     */
    inline bool GatewayRouteNameHasBeenSet() const { return m_gatewayRouteNameHasBeenSet; }

    /**
     * <p>The name to use for the gateway route.</p>
     */
    inline void SetGatewayRouteName(const Aws::String& value) { m_gatewayRouteNameHasBeenSet = true; m_gatewayRouteName = value; }

    /**
     * <p>The name to use for the gateway route.</p>
     */
    inline void SetGatewayRouteName(Aws::String&& value) { m_gatewayRouteNameHasBeenSet = true; m_gatewayRouteName = std::move(value); }

    /**
     * <p>The name to use for the gateway route.</p>
     */
    inline void SetGatewayRouteName(const char* value) { m_gatewayRouteNameHasBeenSet = true; m_gatewayRouteName.assign(value); }

    /**
     * <p>The name to use for the gateway route.</p>
     */
    inline CreateGatewayRouteRequest& WithGatewayRouteName(const Aws::String& value) { SetGatewayRouteName(value); return *this;}

    /**
     * <p>The name to use for the gateway route.</p>
     */
    inline CreateGatewayRouteRequest& WithGatewayRouteName(Aws::String&& value) { SetGatewayRouteName(std::move(value)); return *this;}

    /**
     * <p>The name to use for the gateway route.</p>
     */
    inline CreateGatewayRouteRequest& WithGatewayRouteName(const char* value) { SetGatewayRouteName(value); return *this;}


    /**
     * <p>The name of the service mesh to create the gateway route in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }

    /**
     * <p>The name of the service mesh to create the gateway route in.</p>
     */
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }

    /**
     * <p>The name of the service mesh to create the gateway route in.</p>
     */
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }

    /**
     * <p>The name of the service mesh to create the gateway route in.</p>
     */
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }

    /**
     * <p>The name of the service mesh to create the gateway route in.</p>
     */
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }

    /**
     * <p>The name of the service mesh to create the gateway route in.</p>
     */
    inline CreateGatewayRouteRequest& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}

    /**
     * <p>The name of the service mesh to create the gateway route in.</p>
     */
    inline CreateGatewayRouteRequest& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}

    /**
     * <p>The name of the service mesh to create the gateway route in.</p>
     */
    inline CreateGatewayRouteRequest& WithMeshName(const char* value) { SetMeshName(value); return *this;}


    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then the account that you specify must share the
     * mesh with your account before you can create the resource in the service mesh.
     * For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline const Aws::String& GetMeshOwner() const{ return m_meshOwner; }

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then the account that you specify must share the
     * mesh with your account before you can create the resource in the service mesh.
     * For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline bool MeshOwnerHasBeenSet() const { return m_meshOwnerHasBeenSet; }

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then the account that you specify must share the
     * mesh with your account before you can create the resource in the service mesh.
     * For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline void SetMeshOwner(const Aws::String& value) { m_meshOwnerHasBeenSet = true; m_meshOwner = value; }

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then the account that you specify must share the
     * mesh with your account before you can create the resource in the service mesh.
     * For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline void SetMeshOwner(Aws::String&& value) { m_meshOwnerHasBeenSet = true; m_meshOwner = std::move(value); }

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then the account that you specify must share the
     * mesh with your account before you can create the resource in the service mesh.
     * For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline void SetMeshOwner(const char* value) { m_meshOwnerHasBeenSet = true; m_meshOwner.assign(value); }

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then the account that you specify must share the
     * mesh with your account before you can create the resource in the service mesh.
     * For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline CreateGatewayRouteRequest& WithMeshOwner(const Aws::String& value) { SetMeshOwner(value); return *this;}

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then the account that you specify must share the
     * mesh with your account before you can create the resource in the service mesh.
     * For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline CreateGatewayRouteRequest& WithMeshOwner(Aws::String&& value) { SetMeshOwner(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then the account that you specify must share the
     * mesh with your account before you can create the resource in the service mesh.
     * For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline CreateGatewayRouteRequest& WithMeshOwner(const char* value) { SetMeshOwner(value); return *this;}


    /**
     * <p>The gateway route specification to apply.</p>
     */
    inline const GatewayRouteSpec& GetSpec() const{ return m_spec; }

    /**
     * <p>The gateway route specification to apply.</p>
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * <p>The gateway route specification to apply.</p>
     */
    inline void SetSpec(const GatewayRouteSpec& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * <p>The gateway route specification to apply.</p>
     */
    inline void SetSpec(GatewayRouteSpec&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * <p>The gateway route specification to apply.</p>
     */
    inline CreateGatewayRouteRequest& WithSpec(const GatewayRouteSpec& value) { SetSpec(value); return *this;}

    /**
     * <p>The gateway route specification to apply.</p>
     */
    inline CreateGatewayRouteRequest& WithSpec(GatewayRouteSpec&& value) { SetSpec(std::move(value)); return *this;}


    /**
     * <p>Optional metadata that you can apply to the gateway route to assist with
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline const Aws::Vector<TagRef>& GetTags() const{ return m_tags; }

    /**
     * <p>Optional metadata that you can apply to the gateway route to assist with
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Optional metadata that you can apply to the gateway route to assist with
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline void SetTags(const Aws::Vector<TagRef>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Optional metadata that you can apply to the gateway route to assist with
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline void SetTags(Aws::Vector<TagRef>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Optional metadata that you can apply to the gateway route to assist with
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline CreateGatewayRouteRequest& WithTags(const Aws::Vector<TagRef>& value) { SetTags(value); return *this;}

    /**
     * <p>Optional metadata that you can apply to the gateway route to assist with
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline CreateGatewayRouteRequest& WithTags(Aws::Vector<TagRef>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Optional metadata that you can apply to the gateway route to assist with
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline CreateGatewayRouteRequest& AddTags(const TagRef& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Optional metadata that you can apply to the gateway route to assist with
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline CreateGatewayRouteRequest& AddTags(TagRef&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the virtual gateway to associate the gateway route with. If the
     * virtual gateway is in a shared mesh, then you must be the owner of the virtual
     * gateway resource.</p>
     */
    inline const Aws::String& GetVirtualGatewayName() const{ return m_virtualGatewayName; }

    /**
     * <p>The name of the virtual gateway to associate the gateway route with. If the
     * virtual gateway is in a shared mesh, then you must be the owner of the virtual
     * gateway resource.</p>
     */
    inline bool VirtualGatewayNameHasBeenSet() const { return m_virtualGatewayNameHasBeenSet; }

    /**
     * <p>The name of the virtual gateway to associate the gateway route with. If the
     * virtual gateway is in a shared mesh, then you must be the owner of the virtual
     * gateway resource.</p>
     */
    inline void SetVirtualGatewayName(const Aws::String& value) { m_virtualGatewayNameHasBeenSet = true; m_virtualGatewayName = value; }

    /**
     * <p>The name of the virtual gateway to associate the gateway route with. If the
     * virtual gateway is in a shared mesh, then you must be the owner of the virtual
     * gateway resource.</p>
     */
    inline void SetVirtualGatewayName(Aws::String&& value) { m_virtualGatewayNameHasBeenSet = true; m_virtualGatewayName = std::move(value); }

    /**
     * <p>The name of the virtual gateway to associate the gateway route with. If the
     * virtual gateway is in a shared mesh, then you must be the owner of the virtual
     * gateway resource.</p>
     */
    inline void SetVirtualGatewayName(const char* value) { m_virtualGatewayNameHasBeenSet = true; m_virtualGatewayName.assign(value); }

    /**
     * <p>The name of the virtual gateway to associate the gateway route with. If the
     * virtual gateway is in a shared mesh, then you must be the owner of the virtual
     * gateway resource.</p>
     */
    inline CreateGatewayRouteRequest& WithVirtualGatewayName(const Aws::String& value) { SetVirtualGatewayName(value); return *this;}

    /**
     * <p>The name of the virtual gateway to associate the gateway route with. If the
     * virtual gateway is in a shared mesh, then you must be the owner of the virtual
     * gateway resource.</p>
     */
    inline CreateGatewayRouteRequest& WithVirtualGatewayName(Aws::String&& value) { SetVirtualGatewayName(std::move(value)); return *this;}

    /**
     * <p>The name of the virtual gateway to associate the gateway route with. If the
     * virtual gateway is in a shared mesh, then you must be the owner of the virtual
     * gateway resource.</p>
     */
    inline CreateGatewayRouteRequest& WithVirtualGatewayName(const char* value) { SetVirtualGatewayName(value); return *this;}

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

    Aws::Vector<TagRef> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_virtualGatewayName;
    bool m_virtualGatewayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
