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
    AWS_GLUE_API ResumeWorkflowRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResumeWorkflowRun"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the workflow to resume.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the workflow to resume.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the workflow to resume.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the workflow to resume.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the workflow to resume.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the workflow to resume.</p>
     */
    inline ResumeWorkflowRunRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the workflow to resume.</p>
     */
    inline ResumeWorkflowRunRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the workflow to resume.</p>
     */
    inline ResumeWorkflowRunRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the workflow run to resume.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The ID of the workflow run to resume.</p>
     */
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }

    /**
     * <p>The ID of the workflow run to resume.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>The ID of the workflow run to resume.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }

    /**
     * <p>The ID of the workflow run to resume.</p>
     */
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }

    /**
     * <p>The ID of the workflow run to resume.</p>
     */
    inline ResumeWorkflowRunRequest& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The ID of the workflow run to resume.</p>
     */
    inline ResumeWorkflowRunRequest& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workflow run to resume.</p>
     */
    inline ResumeWorkflowRunRequest& WithRunId(const char* value) { SetRunId(value); return *this;}


    /**
     * <p>A list of the node IDs for the nodes you want to restart. The nodes that are
     * to be restarted must have a run attempt in the original run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeIds() const{ return m_nodeIds; }

    /**
     * <p>A list of the node IDs for the nodes you want to restart. The nodes that are
     * to be restarted must have a run attempt in the original run.</p>
     */
    inline bool NodeIdsHasBeenSet() const { return m_nodeIdsHasBeenSet; }

    /**
     * <p>A list of the node IDs for the nodes you want to restart. The nodes that are
     * to be restarted must have a run attempt in the original run.</p>
     */
    inline void SetNodeIds(const Aws::Vector<Aws::String>& value) { m_nodeIdsHasBeenSet = true; m_nodeIds = value; }

    /**
     * <p>A list of the node IDs for the nodes you want to restart. The nodes that are
     * to be restarted must have a run attempt in the original run.</p>
     */
    inline void SetNodeIds(Aws::Vector<Aws::String>&& value) { m_nodeIdsHasBeenSet = true; m_nodeIds = std::move(value); }

    /**
     * <p>A list of the node IDs for the nodes you want to restart. The nodes that are
     * to be restarted must have a run attempt in the original run.</p>
     */
    inline ResumeWorkflowRunRequest& WithNodeIds(const Aws::Vector<Aws::String>& value) { SetNodeIds(value); return *this;}

    /**
     * <p>A list of the node IDs for the nodes you want to restart. The nodes that are
     * to be restarted must have a run attempt in the original run.</p>
     */
    inline ResumeWorkflowRunRequest& WithNodeIds(Aws::Vector<Aws::String>&& value) { SetNodeIds(std::move(value)); return *this;}

    /**
     * <p>A list of the node IDs for the nodes you want to restart. The nodes that are
     * to be restarted must have a run attempt in the original run.</p>
     */
    inline ResumeWorkflowRunRequest& AddNodeIds(const Aws::String& value) { m_nodeIdsHasBeenSet = true; m_nodeIds.push_back(value); return *this; }

    /**
     * <p>A list of the node IDs for the nodes you want to restart. The nodes that are
     * to be restarted must have a run attempt in the original run.</p>
     */
    inline ResumeWorkflowRunRequest& AddNodeIds(Aws::String&& value) { m_nodeIdsHasBeenSet = true; m_nodeIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the node IDs for the nodes you want to restart. The nodes that are
     * to be restarted must have a run attempt in the original run.</p>
     */
    inline ResumeWorkflowRunRequest& AddNodeIds(const char* value) { m_nodeIdsHasBeenSet = true; m_nodeIds.push_back(value); return *this; }

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
