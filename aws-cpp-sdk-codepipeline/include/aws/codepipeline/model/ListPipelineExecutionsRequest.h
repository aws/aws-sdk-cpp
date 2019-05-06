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
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>ListPipelineExecutions</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListPipelineExecutionsInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API ListPipelineExecutionsRequest : public CodePipelineRequest
  {
  public:
    ListPipelineExecutionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPipelineExecutions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the pipeline for which you want to get execution summary
     * information.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p>The name of the pipeline for which you want to get execution summary
     * information.</p>
     */
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }

    /**
     * <p>The name of the pipeline for which you want to get execution summary
     * information.</p>
     */
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }

    /**
     * <p>The name of the pipeline for which you want to get execution summary
     * information.</p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }

    /**
     * <p>The name of the pipeline for which you want to get execution summary
     * information.</p>
     */
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }

    /**
     * <p>The name of the pipeline for which you want to get execution summary
     * information.</p>
     */
    inline ListPipelineExecutionsRequest& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of the pipeline for which you want to get execution summary
     * information.</p>
     */
    inline ListPipelineExecutionsRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline for which you want to get execution summary
     * information.</p>
     */
    inline ListPipelineExecutionsRequest& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned nextToken value. Pipeline
     * history is limited to the most recent 12 months, based on pipeline execution
     * start times. Default value is 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned nextToken value. Pipeline
     * history is limited to the most recent 12 months, based on pipeline execution
     * start times. Default value is 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned nextToken value. Pipeline
     * history is limited to the most recent 12 months, based on pipeline execution
     * start times. Default value is 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned nextToken value. Pipeline
     * history is limited to the most recent 12 months, based on pipeline execution
     * start times. Default value is 100.</p>
     */
    inline ListPipelineExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token that was returned from the previous
     * <code>ListPipelineExecutions</code> call, which can be used to return the next
     * set of pipeline executions in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that was returned from the previous
     * <code>ListPipelineExecutions</code> call, which can be used to return the next
     * set of pipeline executions in the list.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token that was returned from the previous
     * <code>ListPipelineExecutions</code> call, which can be used to return the next
     * set of pipeline executions in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token that was returned from the previous
     * <code>ListPipelineExecutions</code> call, which can be used to return the next
     * set of pipeline executions in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token that was returned from the previous
     * <code>ListPipelineExecutions</code> call, which can be used to return the next
     * set of pipeline executions in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token that was returned from the previous
     * <code>ListPipelineExecutions</code> call, which can be used to return the next
     * set of pipeline executions in the list.</p>
     */
    inline ListPipelineExecutionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that was returned from the previous
     * <code>ListPipelineExecutions</code> call, which can be used to return the next
     * set of pipeline executions in the list.</p>
     */
    inline ListPipelineExecutionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that was returned from the previous
     * <code>ListPipelineExecutions</code> call, which can be used to return the next
     * set of pipeline executions in the list.</p>
     */
    inline ListPipelineExecutionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
