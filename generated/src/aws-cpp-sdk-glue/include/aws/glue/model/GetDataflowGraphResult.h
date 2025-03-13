/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/CodeGenNode.h>
#include <aws/glue/model/CodeGenEdge.h>
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
namespace Glue
{
namespace Model
{
  class GetDataflowGraphResult
  {
  public:
    AWS_GLUE_API GetDataflowGraphResult() = default;
    AWS_GLUE_API GetDataflowGraphResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetDataflowGraphResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the nodes in the resulting DAG.</p>
     */
    inline const Aws::Vector<CodeGenNode>& GetDagNodes() const { return m_dagNodes; }
    template<typename DagNodesT = Aws::Vector<CodeGenNode>>
    void SetDagNodes(DagNodesT&& value) { m_dagNodesHasBeenSet = true; m_dagNodes = std::forward<DagNodesT>(value); }
    template<typename DagNodesT = Aws::Vector<CodeGenNode>>
    GetDataflowGraphResult& WithDagNodes(DagNodesT&& value) { SetDagNodes(std::forward<DagNodesT>(value)); return *this;}
    template<typename DagNodesT = CodeGenNode>
    GetDataflowGraphResult& AddDagNodes(DagNodesT&& value) { m_dagNodesHasBeenSet = true; m_dagNodes.emplace_back(std::forward<DagNodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the edges in the resulting DAG.</p>
     */
    inline const Aws::Vector<CodeGenEdge>& GetDagEdges() const { return m_dagEdges; }
    template<typename DagEdgesT = Aws::Vector<CodeGenEdge>>
    void SetDagEdges(DagEdgesT&& value) { m_dagEdgesHasBeenSet = true; m_dagEdges = std::forward<DagEdgesT>(value); }
    template<typename DagEdgesT = Aws::Vector<CodeGenEdge>>
    GetDataflowGraphResult& WithDagEdges(DagEdgesT&& value) { SetDagEdges(std::forward<DagEdgesT>(value)); return *this;}
    template<typename DagEdgesT = CodeGenEdge>
    GetDataflowGraphResult& AddDagEdges(DagEdgesT&& value) { m_dagEdgesHasBeenSet = true; m_dagEdges.emplace_back(std::forward<DagEdgesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataflowGraphResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CodeGenNode> m_dagNodes;
    bool m_dagNodesHasBeenSet = false;

    Aws::Vector<CodeGenEdge> m_dagEdges;
    bool m_dagEdgesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
