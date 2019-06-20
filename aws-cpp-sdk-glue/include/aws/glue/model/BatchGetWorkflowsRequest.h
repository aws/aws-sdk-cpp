/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_GLUE_API BatchGetWorkflowsRequest : public GlueRequest
  {
  public:
    BatchGetWorkflowsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetWorkflows"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of workflow names, which may be the names returned from the
     * <code>ListWorkflows</code> operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>A list of workflow names, which may be the names returned from the
     * <code>ListWorkflows</code> operation.</p>
     */
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }

    /**
     * <p>A list of workflow names, which may be the names returned from the
     * <code>ListWorkflows</code> operation.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>A list of workflow names, which may be the names returned from the
     * <code>ListWorkflows</code> operation.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }

    /**
     * <p>A list of workflow names, which may be the names returned from the
     * <code>ListWorkflows</code> operation.</p>
     */
    inline BatchGetWorkflowsRequest& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>A list of workflow names, which may be the names returned from the
     * <code>ListWorkflows</code> operation.</p>
     */
    inline BatchGetWorkflowsRequest& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}

    /**
     * <p>A list of workflow names, which may be the names returned from the
     * <code>ListWorkflows</code> operation.</p>
     */
    inline BatchGetWorkflowsRequest& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>A list of workflow names, which may be the names returned from the
     * <code>ListWorkflows</code> operation.</p>
     */
    inline BatchGetWorkflowsRequest& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of workflow names, which may be the names returned from the
     * <code>ListWorkflows</code> operation.</p>
     */
    inline BatchGetWorkflowsRequest& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }


    /**
     * <p>Specifies whether to include a graph when returning the workflow resource
     * metadata.</p>
     */
    inline bool GetIncludeGraph() const{ return m_includeGraph; }

    /**
     * <p>Specifies whether to include a graph when returning the workflow resource
     * metadata.</p>
     */
    inline bool IncludeGraphHasBeenSet() const { return m_includeGraphHasBeenSet; }

    /**
     * <p>Specifies whether to include a graph when returning the workflow resource
     * metadata.</p>
     */
    inline void SetIncludeGraph(bool value) { m_includeGraphHasBeenSet = true; m_includeGraph = value; }

    /**
     * <p>Specifies whether to include a graph when returning the workflow resource
     * metadata.</p>
     */
    inline BatchGetWorkflowsRequest& WithIncludeGraph(bool value) { SetIncludeGraph(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet;

    bool m_includeGraph;
    bool m_includeGraphHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
