/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/VirtualNodeRef.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualNodesOutput">AWS
   * API Reference</a></p>
   */
  class ListVirtualNodesResult
  {
  public:
    AWS_APPMESH_API ListVirtualNodesResult() = default;
    AWS_APPMESH_API ListVirtualNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API ListVirtualNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualNodes</code> request. When the results of a
     * <code>ListVirtualNodes</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVirtualNodesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of existing virtual nodes for the specified service mesh.</p>
     */
    inline const Aws::Vector<VirtualNodeRef>& GetVirtualNodes() const { return m_virtualNodes; }
    template<typename VirtualNodesT = Aws::Vector<VirtualNodeRef>>
    void SetVirtualNodes(VirtualNodesT&& value) { m_virtualNodesHasBeenSet = true; m_virtualNodes = std::forward<VirtualNodesT>(value); }
    template<typename VirtualNodesT = Aws::Vector<VirtualNodeRef>>
    ListVirtualNodesResult& WithVirtualNodes(VirtualNodesT&& value) { SetVirtualNodes(std::forward<VirtualNodesT>(value)); return *this;}
    template<typename VirtualNodesT = VirtualNodeRef>
    ListVirtualNodesResult& AddVirtualNodes(VirtualNodesT&& value) { m_virtualNodesHasBeenSet = true; m_virtualNodes.emplace_back(std::forward<VirtualNodesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVirtualNodesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<VirtualNodeRef> m_virtualNodes;
    bool m_virtualNodesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
