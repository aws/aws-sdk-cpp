/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class ResumeWorkflowRunRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API ResumeWorkflowRunRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResumeWorkflowRun"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the workflow to resume.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ResumeWorkflowRunRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workflow run to resume.</p>
     */
    inline const Aws::String& GetRunId() const { return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    template<typename RunIdT = Aws::String>
    void SetRunId(RunIdT&& value) { m_runIdHasBeenSet = true; m_runId = std::forward<RunIdT>(value); }
    template<typename RunIdT = Aws::String>
    ResumeWorkflowRunRequest& WithRunId(RunIdT&& value) { SetRunId(std::forward<RunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the node IDs for the nodes you want to restart. The nodes that are
     * to be restarted must have a run attempt in the original run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeIds() const { return m_nodeIds; }
    inline bool NodeIdsHasBeenSet() const { return m_nodeIdsHasBeenSet; }
    template<typename NodeIdsT = Aws::Vector<Aws::String>>
    void SetNodeIds(NodeIdsT&& value) { m_nodeIdsHasBeenSet = true; m_nodeIds = std::forward<NodeIdsT>(value); }
    template<typename NodeIdsT = Aws::Vector<Aws::String>>
    ResumeWorkflowRunRequest& WithNodeIds(NodeIdsT&& value) { SetNodeIds(std::forward<NodeIdsT>(value)); return *this;}
    template<typename NodeIdsT = Aws::String>
    ResumeWorkflowRunRequest& AddNodeIds(NodeIdsT&& value) { m_nodeIdsHasBeenSet = true; m_nodeIds.emplace_back(std::forward<NodeIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodeIds;
    bool m_nodeIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
