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
   * <p>Deletes a virtual node input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteVirtualNodeInput">AWS
   * API Reference</a></p>
   */
  class DeleteVirtualNodeRequest : public AppMeshRequest
  {
  public:
    AWS_APPMESH_API DeleteVirtualNodeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVirtualNode"; }

    AWS_APPMESH_API Aws::String SerializePayload() const override;

    AWS_APPMESH_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the service mesh to delete the virtual node in.</p>
     */
    inline const Aws::String& GetMeshName() const { return m_meshName; }
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }
    template<typename MeshNameT = Aws::String>
    void SetMeshName(MeshNameT&& value) { m_meshNameHasBeenSet = true; m_meshName = std::forward<MeshNameT>(value); }
    template<typename MeshNameT = Aws::String>
    DeleteVirtualNodeRequest& WithMeshName(MeshNameT&& value) { SetMeshName(std::forward<MeshNameT>(value)); return *this;}
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
    DeleteVirtualNodeRequest& WithMeshOwner(MeshOwnerT&& value) { SetMeshOwner(std::forward<MeshOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the virtual node to delete.</p>
     */
    inline const Aws::String& GetVirtualNodeName() const { return m_virtualNodeName; }
    inline bool VirtualNodeNameHasBeenSet() const { return m_virtualNodeNameHasBeenSet; }
    template<typename VirtualNodeNameT = Aws::String>
    void SetVirtualNodeName(VirtualNodeNameT&& value) { m_virtualNodeNameHasBeenSet = true; m_virtualNodeName = std::forward<VirtualNodeNameT>(value); }
    template<typename VirtualNodeNameT = Aws::String>
    DeleteVirtualNodeRequest& WithVirtualNodeName(VirtualNodeNameT&& value) { SetVirtualNodeName(std::forward<VirtualNodeNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet = false;

    Aws::String m_meshOwner;
    bool m_meshOwnerHasBeenSet = false;

    Aws::String m_virtualNodeName;
    bool m_virtualNodeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
