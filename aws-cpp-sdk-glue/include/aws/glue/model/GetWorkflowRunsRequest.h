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
  class AWS_GLUE_API GetWorkflowRunsRequest : public GlueRequest
  {
  public:
    GetWorkflowRunsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWorkflowRuns"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of the workflow whose metadata of runs should be returned.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the workflow whose metadata of runs should be returned.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the workflow whose metadata of runs should be returned.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the workflow whose metadata of runs should be returned.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the workflow whose metadata of runs should be returned.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the workflow whose metadata of runs should be returned.</p>
     */
    inline GetWorkflowRunsRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the workflow whose metadata of runs should be returned.</p>
     */
    inline GetWorkflowRunsRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the workflow whose metadata of runs should be returned.</p>
     */
    inline GetWorkflowRunsRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies whether to include the workflow graph in response or not.</p>
     */
    inline bool GetIncludeGraph() const{ return m_includeGraph; }

    /**
     * <p>Specifies whether to include the workflow graph in response or not.</p>
     */
    inline bool IncludeGraphHasBeenSet() const { return m_includeGraphHasBeenSet; }

    /**
     * <p>Specifies whether to include the workflow graph in response or not.</p>
     */
    inline void SetIncludeGraph(bool value) { m_includeGraphHasBeenSet = true; m_includeGraph = value; }

    /**
     * <p>Specifies whether to include the workflow graph in response or not.</p>
     */
    inline GetWorkflowRunsRequest& WithIncludeGraph(bool value) { SetIncludeGraph(value); return *this;}


    /**
     * <p>The maximum size of the response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The maximum size of the response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The maximum size of the response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The maximum size of the response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The maximum size of the response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The maximum size of the response.</p>
     */
    inline GetWorkflowRunsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum size of the response.</p>
     */
    inline GetWorkflowRunsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The maximum size of the response.</p>
     */
    inline GetWorkflowRunsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of workflow runs to be included in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of workflow runs to be included in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of workflow runs to be included in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of workflow runs to be included in the response.</p>
     */
    inline GetWorkflowRunsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    bool m_includeGraph;
    bool m_includeGraphHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
