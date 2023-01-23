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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListRoutesInput">AWS
   * API Reference</a></p>
   */
  class ListRoutesRequest : public AppMeshRequest
  {
  public:
    AWS_APPMESH_API ListRoutesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRoutes"; }

    AWS_APPMESH_API Aws::String SerializePayload() const override;

    AWS_APPMESH_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of results returned by <code>ListRoutes</code> in
     * paginated output. When you use this parameter, <code>ListRoutes</code> returns
     * only <code>limit</code> results in a single page along with a
     * <code>nextToken</code> response element. You can see the remaining results of
     * the initial request by sending another <code>ListRoutes</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * you don't use this parameter, <code>ListRoutes</code> returns up to 100 results
     * and a <code>nextToken</code> value if applicable.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of results returned by <code>ListRoutes</code> in
     * paginated output. When you use this parameter, <code>ListRoutes</code> returns
     * only <code>limit</code> results in a single page along with a
     * <code>nextToken</code> response element. You can see the remaining results of
     * the initial request by sending another <code>ListRoutes</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * you don't use this parameter, <code>ListRoutes</code> returns up to 100 results
     * and a <code>nextToken</code> value if applicable.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of results returned by <code>ListRoutes</code> in
     * paginated output. When you use this parameter, <code>ListRoutes</code> returns
     * only <code>limit</code> results in a single page along with a
     * <code>nextToken</code> response element. You can see the remaining results of
     * the initial request by sending another <code>ListRoutes</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * you don't use this parameter, <code>ListRoutes</code> returns up to 100 results
     * and a <code>nextToken</code> value if applicable.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of results returned by <code>ListRoutes</code> in
     * paginated output. When you use this parameter, <code>ListRoutes</code> returns
     * only <code>limit</code> results in a single page along with a
     * <code>nextToken</code> response element. You can see the remaining results of
     * the initial request by sending another <code>ListRoutes</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * you don't use this parameter, <code>ListRoutes</code> returns up to 100 results
     * and a <code>nextToken</code> value if applicable.</p>
     */
    inline ListRoutesRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The name of the service mesh to list routes in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }

    /**
     * <p>The name of the service mesh to list routes in.</p>
     */
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }

    /**
     * <p>The name of the service mesh to list routes in.</p>
     */
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }

    /**
     * <p>The name of the service mesh to list routes in.</p>
     */
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }

    /**
     * <p>The name of the service mesh to list routes in.</p>
     */
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }

    /**
     * <p>The name of the service mesh to list routes in.</p>
     */
    inline ListRoutesRequest& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}

    /**
     * <p>The name of the service mesh to list routes in.</p>
     */
    inline ListRoutesRequest& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}

    /**
     * <p>The name of the service mesh to list routes in.</p>
     */
    inline ListRoutesRequest& WithMeshName(const char* value) { SetMeshName(value); return *this;}


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
    inline ListRoutesRequest& WithMeshOwner(const Aws::String& value) { SetMeshOwner(value); return *this;}

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then it's the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline ListRoutesRequest& WithMeshOwner(Aws::String&& value) { SetMeshOwner(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then it's the ID of the account that shared the mesh
     * with your account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline ListRoutesRequest& WithMeshOwner(const char* value) { SetMeshOwner(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRoutes</code> request where <code>limit</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRoutes</code> request where <code>limit</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRoutes</code> request where <code>limit</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRoutes</code> request where <code>limit</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRoutes</code> request where <code>limit</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRoutes</code> request where <code>limit</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     */
    inline ListRoutesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRoutes</code> request where <code>limit</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     */
    inline ListRoutesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRoutes</code> request where <code>limit</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     */
    inline ListRoutesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The name of the virtual router to list routes in.</p>
     */
    inline const Aws::String& GetVirtualRouterName() const{ return m_virtualRouterName; }

    /**
     * <p>The name of the virtual router to list routes in.</p>
     */
    inline bool VirtualRouterNameHasBeenSet() const { return m_virtualRouterNameHasBeenSet; }

    /**
     * <p>The name of the virtual router to list routes in.</p>
     */
    inline void SetVirtualRouterName(const Aws::String& value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName = value; }

    /**
     * <p>The name of the virtual router to list routes in.</p>
     */
    inline void SetVirtualRouterName(Aws::String&& value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName = std::move(value); }

    /**
     * <p>The name of the virtual router to list routes in.</p>
     */
    inline void SetVirtualRouterName(const char* value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName.assign(value); }

    /**
     * <p>The name of the virtual router to list routes in.</p>
     */
    inline ListRoutesRequest& WithVirtualRouterName(const Aws::String& value) { SetVirtualRouterName(value); return *this;}

    /**
     * <p>The name of the virtual router to list routes in.</p>
     */
    inline ListRoutesRequest& WithVirtualRouterName(Aws::String&& value) { SetVirtualRouterName(std::move(value)); return *this;}

    /**
     * <p>The name of the virtual router to list routes in.</p>
     */
    inline ListRoutesRequest& WithVirtualRouterName(const char* value) { SetVirtualRouterName(value); return *this;}

  private:

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet = false;

    Aws::String m_meshOwner;
    bool m_meshOwnerHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_virtualRouterName;
    bool m_virtualRouterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
