/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/MeshRef.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{
  /**
   * <zonbook></zonbook><xhtml></xhtml><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListMeshesOutput">AWS
   * API Reference</a></p>
   */
  class ListMeshesResult
  {
  public:
    AWS_APPMESH_API ListMeshesResult() = default;
    AWS_APPMESH_API ListMeshesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API ListMeshesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of existing service meshes.</p>
     */
    inline const Aws::Vector<MeshRef>& GetMeshes() const { return m_meshes; }
    template<typename MeshesT = Aws::Vector<MeshRef>>
    void SetMeshes(MeshesT&& value) { m_meshesHasBeenSet = true; m_meshes = std::forward<MeshesT>(value); }
    template<typename MeshesT = Aws::Vector<MeshRef>>
    ListMeshesResult& WithMeshes(MeshesT&& value) { SetMeshes(std::forward<MeshesT>(value)); return *this;}
    template<typename MeshesT = MeshRef>
    ListMeshesResult& AddMeshes(MeshesT&& value) { m_meshesHasBeenSet = true; m_meshes.emplace_back(std::forward<MeshesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListMeshes</code> request. When the results of a <code>ListMeshes</code>
     * request exceed <code>limit</code>, you can use this value to retrieve the next
     * page of results. This value is <code>null</code> when there are no more results
     * to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMeshesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMeshesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MeshRef> m_meshes;
    bool m_meshesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
