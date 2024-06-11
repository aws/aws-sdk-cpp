/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/AppMeshRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/VirtualNodeSpec.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/UpdateVirtualNodeInput">AWS
   * API Reference</a></p>
   */
  class UpdateVirtualNodeRequest : public AppMeshRequest
  {
  public:
    AWS_APPMESH_API UpdateVirtualNodeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVirtualNode"; }

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
    inline UpdateVirtualNodeRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateVirtualNodeRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateVirtualNodeRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }
    inline UpdateVirtualNodeRequest& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}
    inline UpdateVirtualNodeRequest& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}
    inline UpdateVirtualNodeRequest& WithMeshName(const char* value) { SetMeshName(value); return *this;}
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
    inline UpdateVirtualNodeRequest& WithMeshOwner(const Aws::String& value) { SetMeshOwner(value); return *this;}
    inline UpdateVirtualNodeRequest& WithMeshOwner(Aws::String&& value) { SetMeshOwner(std::move(value)); return *this;}
    inline UpdateVirtualNodeRequest& WithMeshOwner(const char* value) { SetMeshOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new virtual node specification to apply. This overwrites the existing
     * data.</p>
     */
    inline const VirtualNodeSpec& GetSpec() const{ return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    inline void SetSpec(const VirtualNodeSpec& value) { m_specHasBeenSet = true; m_spec = value; }
    inline void SetSpec(VirtualNodeSpec&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }
    inline UpdateVirtualNodeRequest& WithSpec(const VirtualNodeSpec& value) { SetSpec(value); return *this;}
    inline UpdateVirtualNodeRequest& WithSpec(VirtualNodeSpec&& value) { SetSpec(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the virtual node to update.</p>
     */
    inline const Aws::String& GetVirtualNodeName() const{ return m_virtualNodeName; }
    inline bool VirtualNodeNameHasBeenSet() const { return m_virtualNodeNameHasBeenSet; }
    inline void SetVirtualNodeName(const Aws::String& value) { m_virtualNodeNameHasBeenSet = true; m_virtualNodeName = value; }
    inline void SetVirtualNodeName(Aws::String&& value) { m_virtualNodeNameHasBeenSet = true; m_virtualNodeName = std::move(value); }
    inline void SetVirtualNodeName(const char* value) { m_virtualNodeNameHasBeenSet = true; m_virtualNodeName.assign(value); }
    inline UpdateVirtualNodeRequest& WithVirtualNodeName(const Aws::String& value) { SetVirtualNodeName(value); return *this;}
    inline UpdateVirtualNodeRequest& WithVirtualNodeName(Aws::String&& value) { SetVirtualNodeName(std::move(value)); return *this;}
    inline UpdateVirtualNodeRequest& WithVirtualNodeName(const char* value) { SetVirtualNodeName(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet = false;

    Aws::String m_meshOwner;
    bool m_meshOwnerHasBeenSet = false;

    VirtualNodeSpec m_spec;
    bool m_specHasBeenSet = false;

    Aws::String m_virtualNodeName;
    bool m_virtualNodeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
