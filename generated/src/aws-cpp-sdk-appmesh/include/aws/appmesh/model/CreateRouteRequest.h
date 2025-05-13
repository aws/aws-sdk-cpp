/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/AppMeshRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/RouteSpec.h>
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
   * <zonbook></zonbook><xhtml></xhtml><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateRouteInput">AWS
   * API Reference</a></p>
   */
  class CreateRouteRequest : public AppMeshRequest
  {
  public:
    AWS_APPMESH_API CreateRouteRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRoute"; }

    AWS_APPMESH_API Aws::String SerializePayload() const override;

    AWS_APPMESH_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateRouteRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service mesh to create the route in.</p>
     */
    inline const Aws::String& GetMeshName() const { return m_meshName; }
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }
    template<typename MeshNameT = Aws::String>
    void SetMeshName(MeshNameT&& value) { m_meshNameHasBeenSet = true; m_meshName = std::forward<MeshNameT>(value); }
    template<typename MeshNameT = Aws::String>
    CreateRouteRequest& WithMeshName(MeshNameT&& value) { SetMeshName(std::forward<MeshNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then the account that you specify must share the
     * mesh with your account before you can create the resource in the service mesh.
     * For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline const Aws::String& GetMeshOwner() const { return m_meshOwner; }
    inline bool MeshOwnerHasBeenSet() const { return m_meshOwnerHasBeenSet; }
    template<typename MeshOwnerT = Aws::String>
    void SetMeshOwner(MeshOwnerT&& value) { m_meshOwnerHasBeenSet = true; m_meshOwner = std::forward<MeshOwnerT>(value); }
    template<typename MeshOwnerT = Aws::String>
    CreateRouteRequest& WithMeshOwner(MeshOwnerT&& value) { SetMeshOwner(std::forward<MeshOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to use for the route.</p>
     */
    inline const Aws::String& GetRouteName() const { return m_routeName; }
    inline bool RouteNameHasBeenSet() const { return m_routeNameHasBeenSet; }
    template<typename RouteNameT = Aws::String>
    void SetRouteName(RouteNameT&& value) { m_routeNameHasBeenSet = true; m_routeName = std::forward<RouteNameT>(value); }
    template<typename RouteNameT = Aws::String>
    CreateRouteRequest& WithRouteName(RouteNameT&& value) { SetRouteName(std::forward<RouteNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route specification to apply.</p>
     */
    inline const RouteSpec& GetSpec() const { return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    template<typename SpecT = RouteSpec>
    void SetSpec(SpecT&& value) { m_specHasBeenSet = true; m_spec = std::forward<SpecT>(value); }
    template<typename SpecT = RouteSpec>
    CreateRouteRequest& WithSpec(SpecT&& value) { SetSpec(std::forward<SpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional metadata that you can apply to the route to assist with
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline const Aws::Vector<TagRef>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<TagRef>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<TagRef>>
    CreateRouteRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = TagRef>
    CreateRouteRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the virtual router in which to create the route. If the virtual
     * router is in a shared mesh, then you must be the owner of the virtual router
     * resource.</p>
     */
    inline const Aws::String& GetVirtualRouterName() const { return m_virtualRouterName; }
    inline bool VirtualRouterNameHasBeenSet() const { return m_virtualRouterNameHasBeenSet; }
    template<typename VirtualRouterNameT = Aws::String>
    void SetVirtualRouterName(VirtualRouterNameT&& value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName = std::forward<VirtualRouterNameT>(value); }
    template<typename VirtualRouterNameT = Aws::String>
    CreateRouteRequest& WithVirtualRouterName(VirtualRouterNameT&& value) { SetVirtualRouterName(std::forward<VirtualRouterNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet = false;

    Aws::String m_meshOwner;
    bool m_meshOwnerHasBeenSet = false;

    Aws::String m_routeName;
    bool m_routeNameHasBeenSet = false;

    RouteSpec m_spec;
    bool m_specHasBeenSet = false;

    Aws::Vector<TagRef> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_virtualRouterName;
    bool m_virtualRouterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
