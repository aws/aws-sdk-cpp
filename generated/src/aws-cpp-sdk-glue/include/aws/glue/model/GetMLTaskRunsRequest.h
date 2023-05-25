/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TaskRunFilterCriteria.h>
#include <aws/glue/model/TaskRunSortCriteria.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetMLTaskRunsRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetMLTaskRunsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMLTaskRuns"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the machine learning transform.</p>
     */
    inline const Aws::String& GetTransformId() const{ return m_transformId; }

    /**
     * <p>The unique identifier of the machine learning transform.</p>
     */
    inline bool TransformIdHasBeenSet() const { return m_transformIdHasBeenSet; }

    /**
     * <p>The unique identifier of the machine learning transform.</p>
     */
    inline void SetTransformId(const Aws::String& value) { m_transformIdHasBeenSet = true; m_transformId = value; }

    /**
     * <p>The unique identifier of the machine learning transform.</p>
     */
    inline void SetTransformId(Aws::String&& value) { m_transformIdHasBeenSet = true; m_transformId = std::move(value); }

    /**
     * <p>The unique identifier of the machine learning transform.</p>
     */
    inline void SetTransformId(const char* value) { m_transformIdHasBeenSet = true; m_transformId.assign(value); }

    /**
     * <p>The unique identifier of the machine learning transform.</p>
     */
    inline GetMLTaskRunsRequest& WithTransformId(const Aws::String& value) { SetTransformId(value); return *this;}

    /**
     * <p>The unique identifier of the machine learning transform.</p>
     */
    inline GetMLTaskRunsRequest& WithTransformId(Aws::String&& value) { SetTransformId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the machine learning transform.</p>
     */
    inline GetMLTaskRunsRequest& WithTransformId(const char* value) { SetTransformId(value); return *this;}


    /**
     * <p>A token for pagination of the results. The default is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for pagination of the results. The default is empty.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token for pagination of the results. The default is empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token for pagination of the results. The default is empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token for pagination of the results. The default is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token for pagination of the results. The default is empty.</p>
     */
    inline GetMLTaskRunsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for pagination of the results. The default is empty.</p>
     */
    inline GetMLTaskRunsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for pagination of the results. The default is empty.</p>
     */
    inline GetMLTaskRunsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return. </p>
     */
    inline GetMLTaskRunsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The filter criteria, in the <code>TaskRunFilterCriteria</code> structure, for
     * the task run.</p>
     */
    inline const TaskRunFilterCriteria& GetFilter() const{ return m_filter; }

    /**
     * <p>The filter criteria, in the <code>TaskRunFilterCriteria</code> structure, for
     * the task run.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>The filter criteria, in the <code>TaskRunFilterCriteria</code> structure, for
     * the task run.</p>
     */
    inline void SetFilter(const TaskRunFilterCriteria& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>The filter criteria, in the <code>TaskRunFilterCriteria</code> structure, for
     * the task run.</p>
     */
    inline void SetFilter(TaskRunFilterCriteria&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>The filter criteria, in the <code>TaskRunFilterCriteria</code> structure, for
     * the task run.</p>
     */
    inline GetMLTaskRunsRequest& WithFilter(const TaskRunFilterCriteria& value) { SetFilter(value); return *this;}

    /**
     * <p>The filter criteria, in the <code>TaskRunFilterCriteria</code> structure, for
     * the task run.</p>
     */
    inline GetMLTaskRunsRequest& WithFilter(TaskRunFilterCriteria&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The sorting criteria, in the <code>TaskRunSortCriteria</code> structure, for
     * the task run.</p>
     */
    inline const TaskRunSortCriteria& GetSort() const{ return m_sort; }

    /**
     * <p>The sorting criteria, in the <code>TaskRunSortCriteria</code> structure, for
     * the task run.</p>
     */
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }

    /**
     * <p>The sorting criteria, in the <code>TaskRunSortCriteria</code> structure, for
     * the task run.</p>
     */
    inline void SetSort(const TaskRunSortCriteria& value) { m_sortHasBeenSet = true; m_sort = value; }

    /**
     * <p>The sorting criteria, in the <code>TaskRunSortCriteria</code> structure, for
     * the task run.</p>
     */
    inline void SetSort(TaskRunSortCriteria&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }

    /**
     * <p>The sorting criteria, in the <code>TaskRunSortCriteria</code> structure, for
     * the task run.</p>
     */
    inline GetMLTaskRunsRequest& WithSort(const TaskRunSortCriteria& value) { SetSort(value); return *this;}

    /**
     * <p>The sorting criteria, in the <code>TaskRunSortCriteria</code> structure, for
     * the task run.</p>
     */
    inline GetMLTaskRunsRequest& WithSort(TaskRunSortCriteria&& value) { SetSort(std::move(value)); return *this;}

  private:

    Aws::String m_transformId;
    bool m_transformIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    TaskRunFilterCriteria m_filter;
    bool m_filterHasBeenSet = false;

    TaskRunSortCriteria m_sort;
    bool m_sortHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
