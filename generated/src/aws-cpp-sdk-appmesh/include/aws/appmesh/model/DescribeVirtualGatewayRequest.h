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
   */
  class DescribeVirtualGatewayRequest : public AppMeshRequest
  {
  public:
    AWS_APPMESH_API DescribeVirtualGatewayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVirtualGateway"; }

    AWS_APPMESH_API Aws::String SerializePayload() const override;

    AWS_APPMESH_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the service mesh that the gateway route resides in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }
    inline DescribeVirtualGatewayRequest& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}
    inline DescribeVirtualGatewayRequest& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}
    inline DescribeVirtualGatewayRequest& WithMeshName(const char* value) { SetMeshName(value); return *this;}
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
    inline DescribeVirtualGatewayRequest& WithMeshOwner(const Aws::String& value) { SetMeshOwner(value); return *this;}
    inline DescribeVirtualGatewayRequest& WithMeshOwner(Aws::String&& value) { SetMeshOwner(std::move(value)); return *this;}
    inline DescribeVirtualGatewayRequest& WithMeshOwner(const char* value) { SetMeshOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the virtual gateway to describe.</p>
     */
    inline const Aws::String& GetVirtualGatewayName() const{ return m_virtualGatewayName; }
    inline bool VirtualGatewayNameHasBeenSet() const { return m_virtualGatewayNameHasBeenSet; }
    inline void SetVirtualGatewayName(const Aws::String& value) { m_virtualGatewayNameHasBeenSet = true; m_virtualGatewayName = value; }
    inline void SetVirtualGatewayName(Aws::String&& value) { m_virtualGatewayNameHasBeenSet = true; m_virtualGatewayName = std::move(value); }
    inline void SetVirtualGatewayName(const char* value) { m_virtualGatewayNameHasBeenSet = true; m_virtualGatewayName.assign(value); }
    inline DescribeVirtualGatewayRequest& WithVirtualGatewayName(const Aws::String& value) { SetVirtualGatewayName(value); return *this;}
    inline DescribeVirtualGatewayRequest& WithVirtualGatewayName(Aws::String&& value) { SetVirtualGatewayName(std::move(value)); return *this;}
    inline DescribeVirtualGatewayRequest& WithVirtualGatewayName(const char* value) { SetVirtualGatewayName(value); return *this;}
    ///@}
  private:

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet = false;

    Aws::String m_meshOwner;
    bool m_meshOwnerHasBeenSet = false;

    Aws::String m_virtualGatewayName;
    bool m_virtualGatewayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
