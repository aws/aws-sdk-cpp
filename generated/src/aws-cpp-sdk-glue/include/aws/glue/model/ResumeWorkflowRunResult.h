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
    AWS_GLUE_API ResumeWorkflowRunResult();
    AWS_GLUE_API ResumeWorkflowRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ResumeWorkflowRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The new ID assigned to the resumed workflow run. Each resume of a workflow
     * run will have a new run ID.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The new ID assigned to the resumed workflow run. Each resume of a workflow
     * run will have a new run ID.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runId = value; }

    /**
     * <p>The new ID assigned to the resumed workflow run. Each resume of a workflow
     * run will have a new run ID.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runId = std::move(value); }

    /**
     * <p>The new ID assigned to the resumed workflow run. Each resume of a workflow
     * run will have a new run ID.</p>
     */
    inline void SetRunId(const char* value) { m_runId.assign(value); }

    /**
     * <p>The new ID assigned to the resumed workflow run. Each resume of a workflow
     * run will have a new run ID.</p>
     */
    inline ResumeWorkflowRunResult& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The new ID assigned to the resumed workflow run. Each resume of a workflow
     * run will have a new run ID.</p>
     */
    inline ResumeWorkflowRunResult& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>The new ID assigned to the resumed workflow run. Each resume of a workflow
     * run will have a new run ID.</p>
     */
    inline ResumeWorkflowRunResult& WithRunId(const char* value) { SetRunId(value); return *this;}


    /**
     * <p>A list of the node IDs for the nodes that were actually restarted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeIds() const{ return m_nodeIds; }

    /**
     * <p>A list of the node IDs for the nodes that were actually restarted.</p>
     */
    inline void SetNodeIds(const Aws::Vector<Aws::String>& value) { m_nodeIds = value; }

    /**
     * <p>A list of the node IDs for the nodes that were actually restarted.</p>
     */
    inline void SetNodeIds(Aws::Vector<Aws::String>&& value) { m_nodeIds = std::move(value); }

    /**
     * <p>A list of the node IDs for the nodes that were actually restarted.</p>
     */
    inline ResumeWorkflowRunResult& WithNodeIds(const Aws::Vector<Aws::String>& value) { SetNodeIds(value); return *this;}

    /**
     * <p>A list of the node IDs for the nodes that were actually restarted.</p>
     */
    inline ResumeWorkflowRunResult& WithNodeIds(Aws::Vector<Aws::String>&& value) { SetNodeIds(std::move(value)); return *this;}

    /**
     * <p>A list of the node IDs for the nodes that were actually restarted.</p>
     */
    inline ResumeWorkflowRunResult& AddNodeIds(const Aws::String& value) { m_nodeIds.push_back(value); return *this; }

    /**
     * <p>A list of the node IDs for the nodes that were actually restarted.</p>
     */
    inline ResumeWorkflowRunResult& AddNodeIds(Aws::String&& value) { m_nodeIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the node IDs for the nodes that were actually restarted.</p>
     */
    inline ResumeWorkflowRunResult& AddNodeIds(const char* value) { m_nodeIds.push_back(value); return *this; }

  private:

    Aws::String m_runId;

    Aws::Vector<Aws::String> m_nodeIds;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
