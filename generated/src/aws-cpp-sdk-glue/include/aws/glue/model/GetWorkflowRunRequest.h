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
    AWS_GLUE_API GetWorkflowRunRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetWorkflowRunRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workflow run.</p>
     */
    inline const Aws::String& GetRunId() const { return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    template<typename RunIdT = Aws::String>
    void SetRunId(RunIdT&& value) { m_runIdHasBeenSet = true; m_runId = std::forward<RunIdT>(value); }
    template<typename RunIdT = Aws::String>
    GetWorkflowRunRequest& WithRunId(RunIdT&& value) { SetRunId(std::forward<RunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include the workflow graph in response or not.</p>
     */
    inline bool GetIncludeGraph() const { return m_includeGraph; }
    inline bool IncludeGraphHasBeenSet() const { return m_includeGraphHasBeenSet; }
    inline void SetIncludeGraph(bool value) { m_includeGraphHasBeenSet = true; m_includeGraph = value; }
    inline GetWorkflowRunRequest& WithIncludeGraph(bool value) { SetIncludeGraph(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    bool m_includeGraph{false};
    bool m_includeGraphHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
