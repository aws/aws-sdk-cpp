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
namespace AppMesh
{
namespace Model
{

  /**
   * <zonbook></zonbook><xhtml></xhtml><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DeleteMeshInput">AWS
   * API Reference</a></p>
   */
  class DeleteMeshRequest : public AppMeshRequest
  {
  public:
    AWS_APPMESH_API DeleteMeshRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMesh"; }

    AWS_APPMESH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the service mesh to delete.</p>
     */
    inline const Aws::String& GetMeshName() const { return m_meshName; }
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }
    template<typename MeshNameT = Aws::String>
    void SetMeshName(MeshNameT&& value) { m_meshNameHasBeenSet = true; m_meshName = std::forward<MeshNameT>(value); }
    template<typename MeshNameT = Aws::String>
    DeleteMeshRequest& WithMeshName(MeshNameT&& value) { SetMeshName(std::forward<MeshNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
