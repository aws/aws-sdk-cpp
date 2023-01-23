/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ActionExecutionFilter.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   */
  class ListActionExecutionsRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API ListActionExecutionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListActionExecutions"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The name of the pipeline for which you want to list action execution
     * history.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p> The name of the pipeline for which you want to list action execution
     * history.</p>
     */
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }

    /**
     * <p> The name of the pipeline for which you want to list action execution
     * history.</p>
     */
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }

    /**
     * <p> The name of the pipeline for which you want to list action execution
     * history.</p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }

    /**
     * <p> The name of the pipeline for which you want to list action execution
     * history.</p>
     */
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }

    /**
     * <p> The name of the pipeline for which you want to list action execution
     * history.</p>
     */
    inline ListActionExecutionsRequest& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p> The name of the pipeline for which you want to list action execution
     * history.</p>
     */
    inline ListActionExecutionsRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p> The name of the pipeline for which you want to list action execution
     * history.</p>
     */
    inline ListActionExecutionsRequest& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


    /**
     * <p>Input information used to filter action execution history.</p>
     */
    inline const ActionExecutionFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>Input information used to filter action execution history.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Input information used to filter action execution history.</p>
     */
    inline void SetFilter(const ActionExecutionFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Input information used to filter action execution history.</p>
     */
    inline void SetFilter(ActionExecutionFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Input information used to filter action execution history.</p>
     */
    inline ListActionExecutionsRequest& WithFilter(const ActionExecutionFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>Input information used to filter action execution history.</p>
     */
    inline ListActionExecutionsRequest& WithFilter(ActionExecutionFilter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned nextToken value. Action
     * execution history is retained for up to 12 months, based on action execution
     * start times. Default value is 100. </p>  <p>Detailed execution history is
     * available for executions run on or after February 21, 2019.</p> 
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned nextToken value. Action
     * execution history is retained for up to 12 months, based on action execution
     * start times. Default value is 100. </p>  <p>Detailed execution history is
     * available for executions run on or after February 21, 2019.</p> 
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned nextToken value. Action
     * execution history is retained for up to 12 months, based on action execution
     * start times. Default value is 100. </p>  <p>Detailed execution history is
     * available for executions run on or after February 21, 2019.</p> 
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned nextToken value. Action
     * execution history is retained for up to 12 months, based on action execution
     * start times. Default value is 100. </p>  <p>Detailed execution history is
     * available for executions run on or after February 21, 2019.</p> 
     */
    inline ListActionExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token that was returned from the previous
     * <code>ListActionExecutions</code> call, which can be used to return the next set
     * of action executions in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that was returned from the previous
     * <code>ListActionExecutions</code> call, which can be used to return the next set
     * of action executions in the list.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token that was returned from the previous
     * <code>ListActionExecutions</code> call, which can be used to return the next set
     * of action executions in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token that was returned from the previous
     * <code>ListActionExecutions</code> call, which can be used to return the next set
     * of action executions in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token that was returned from the previous
     * <code>ListActionExecutions</code> call, which can be used to return the next set
     * of action executions in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token that was returned from the previous
     * <code>ListActionExecutions</code> call, which can be used to return the next set
     * of action executions in the list.</p>
     */
    inline ListActionExecutionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that was returned from the previous
     * <code>ListActionExecutions</code> call, which can be used to return the next set
     * of action executions in the list.</p>
     */
    inline ListActionExecutionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that was returned from the previous
     * <code>ListActionExecutions</code> call, which can be used to return the next set
     * of action executions in the list.</p>
     */
    inline ListActionExecutionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    ActionExecutionFilter m_filter;
    bool m_filterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
