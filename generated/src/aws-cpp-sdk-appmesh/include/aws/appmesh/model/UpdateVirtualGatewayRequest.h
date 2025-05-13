/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/AppMeshRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/VirtualGatewaySpec.h>
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
  class UpdateVirtualGatewayRequest : public AppMeshRequest
  {
  public:
    AWS_APPMESH_API UpdateVirtualGatewayRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVirtualGateway"; }

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
    UpdateVirtualGatewayRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service mesh that the virtual gateway resides in.</p>
     */
    inline const Aws::String& GetMeshName() const { return m_meshName; }
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }
    template<typename MeshNameT = Aws::String>
    void SetMeshName(MeshNameT&& value) { m_meshNameHasBeenSet = true; m_meshName = std::forward<MeshNameT>(value); }
    template<typename MeshNameT = Aws::String>
    UpdateVirtualGatewayRequest& WithMeshName(MeshNameT&& value) { SetMeshName(std::forward<MeshNameT>(value)); return *this;}
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
    UpdateVirtualGatewayRequest& WithMeshOwner(MeshOwnerT&& value) { SetMeshOwner(std::forward<MeshOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new virtual gateway specification to apply. This overwrites the existing
     * data.</p>
     */
    inline const VirtualGatewaySpec& GetSpec() const { return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    template<typename SpecT = VirtualGatewaySpec>
    void SetSpec(SpecT&& value) { m_specHasBeenSet = true; m_spec = std::forward<SpecT>(value); }
    template<typename SpecT = VirtualGatewaySpec>
    UpdateVirtualGatewayRequest& WithSpec(SpecT&& value) { SetSpec(std::forward<SpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the virtual gateway to update.</p>
     */
    inline const Aws::String& GetVirtualGatewayName() const { return m_virtualGatewayName; }
    inline bool VirtualGatewayNameHasBeenSet() const { return m_virtualGatewayNameHasBeenSet; }
    template<typename VirtualGatewayNameT = Aws::String>
    void SetVirtualGatewayName(VirtualGatewayNameT&& value) { m_virtualGatewayNameHasBeenSet = true; m_virtualGatewayName = std::forward<VirtualGatewayNameT>(value); }
    template<typename VirtualGatewayNameT = Aws::String>
    UpdateVirtualGatewayRequest& WithVirtualGatewayName(VirtualGatewayNameT&& value) { SetVirtualGatewayName(std::forward<VirtualGatewayNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet = false;

    Aws::String m_meshOwner;
    bool m_meshOwnerHasBeenSet = false;

    VirtualGatewaySpec m_spec;
    bool m_specHasBeenSet = false;

    Aws::String m_virtualGatewayName;
    bool m_virtualGatewayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
