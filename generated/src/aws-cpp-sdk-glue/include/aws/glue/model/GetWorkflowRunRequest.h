/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetWorkflowRunRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetWorkflowRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWorkflowRun"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name of the workflow being run.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline GetWorkflowRunRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetWorkflowRunRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetWorkflowRunRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workflow run.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }
    inline GetWorkflowRunRequest& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}
    inline GetWorkflowRunRequest& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}
    inline GetWorkflowRunRequest& WithRunId(const char* value) { SetRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include the workflow graph in response or not.</p>
     */
    inline bool GetIncludeGraph() const{ return m_includeGraph; }
    inline bool IncludeGraphHasBeenSet() const { return m_includeGraphHasBeenSet; }
    inline void SetIncludeGraph(bool value) { m_includeGraphHasBeenSet = true; m_includeGraph = value; }
    inline GetWorkflowRunRequest& WithIncludeGraph(bool value) { SetIncludeGraph(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    bool m_includeGraph;
    bool m_includeGraphHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
