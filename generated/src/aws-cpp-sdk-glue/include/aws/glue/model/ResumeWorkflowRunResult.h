/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ResumeWorkflowRunResult
  {
  public:
    AWS_GLUE_API ResumeWorkflowRunResult() = default;
    AWS_GLUE_API ResumeWorkflowRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ResumeWorkflowRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The new ID assigned to the resumed workflow run. Each resume of a workflow
     * run will have a new run ID.</p>
     */
    inline const Aws::String& GetRunId() const { return m_runId; }
    template<typename RunIdT = Aws::String>
    void SetRunId(RunIdT&& value) { m_runIdHasBeenSet = true; m_runId = std::forward<RunIdT>(value); }
    template<typename RunIdT = Aws::String>
    ResumeWorkflowRunResult& WithRunId(RunIdT&& value) { SetRunId(std::forward<RunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the node IDs for the nodes that were actually restarted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeIds() const { return m_nodeIds; }
    template<typename NodeIdsT = Aws::Vector<Aws::String>>
    void SetNodeIds(NodeIdsT&& value) { m_nodeIdsHasBeenSet = true; m_nodeIds = std::forward<NodeIdsT>(value); }
    template<typename NodeIdsT = Aws::Vector<Aws::String>>
    ResumeWorkflowRunResult& WithNodeIds(NodeIdsT&& value) { SetNodeIds(std::forward<NodeIdsT>(value)); return *this;}
    template<typename NodeIdsT = Aws::String>
    ResumeWorkflowRunResult& AddNodeIds(NodeIdsT&& value) { m_nodeIdsHasBeenSet = true; m_nodeIds.emplace_back(std::forward<NodeIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ResumeWorkflowRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodeIds;
    bool m_nodeIdsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
