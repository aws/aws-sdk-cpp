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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualServiceInput">AWS
   * API Reference</a></p>
   */
  class DescribeVirtualServiceRequest : public AppMeshRequest
  {
  public:
    AWS_APPMESH_API DescribeVirtualServiceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVirtualService"; }

    AWS_APPMESH_API Aws::String SerializePayload() const override;

    AWS_APPMESH_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the service mesh that the virtual service resides in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }
    inline DescribeVirtualServiceRequest& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}
    inline DescribeVirtualServiceRequest& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}
    inline DescribeVirtualServiceRequest& WithMeshName(const char* value) { SetMeshName(value); return *this;}
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
    inline DescribeVirtualServiceRequest& WithMeshOwner(const Aws::String& value) { SetMeshOwner(value); return *this;}
    inline DescribeVirtualServiceRequest& WithMeshOwner(Aws::String&& value) { SetMeshOwner(std::move(value)); return *this;}
    inline DescribeVirtualServiceRequest& WithMeshOwner(const char* value) { SetMeshOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the virtual service to describe.</p>
     */
    inline const Aws::String& GetVirtualServiceName() const{ return m_virtualServiceName; }
    inline bool VirtualServiceNameHasBeenSet() const { return m_virtualServiceNameHasBeenSet; }
    inline void SetVirtualServiceName(const Aws::String& value) { m_virtualServiceNameHasBeenSet = true; m_virtualServiceName = value; }
    inline void SetVirtualServiceName(Aws::String&& value) { m_virtualServiceNameHasBeenSet = true; m_virtualServiceName = std::move(value); }
    inline void SetVirtualServiceName(const char* value) { m_virtualServiceNameHasBeenSet = true; m_virtualServiceName.assign(value); }
    inline DescribeVirtualServiceRequest& WithVirtualServiceName(const Aws::String& value) { SetVirtualServiceName(value); return *this;}
    inline DescribeVirtualServiceRequest& WithVirtualServiceName(Aws::String&& value) { SetVirtualServiceName(std::move(value)); return *this;}
    inline DescribeVirtualServiceRequest& WithVirtualServiceName(const char* value) { SetVirtualServiceName(value); return *this;}
    ///@}
  private:

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet = false;

    Aws::String m_meshOwner;
    bool m_meshOwnerHasBeenSet = false;

    Aws::String m_virtualServiceName;
    bool m_virtualServiceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
