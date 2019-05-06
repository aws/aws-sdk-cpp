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
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/comprehend/model/TopicsDetectionJobFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class AWS_COMPREHEND_API ListTopicsDetectionJobsRequest : public ComprehendRequest
  {
  public:
    ListTopicsDetectionJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTopicsDetectionJobs"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Filters the jobs that are returned. Jobs can be filtered on their name,
     * status, or the date and time that they were submitted. You can set only one
     * filter at a time.</p>
     */
    inline const TopicsDetectionJobFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>Filters the jobs that are returned. Jobs can be filtered on their name,
     * status, or the date and time that they were submitted. You can set only one
     * filter at a time.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Filters the jobs that are returned. Jobs can be filtered on their name,
     * status, or the date and time that they were submitted. You can set only one
     * filter at a time.</p>
     */
    inline void SetFilter(const TopicsDetectionJobFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Filters the jobs that are returned. Jobs can be filtered on their name,
     * status, or the date and time that they were submitted. You can set only one
     * filter at a time.</p>
     */
    inline void SetFilter(TopicsDetectionJobFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Filters the jobs that are returned. Jobs can be filtered on their name,
     * status, or the date and time that they were submitted. You can set only one
     * filter at a time.</p>
     */
    inline ListTopicsDetectionJobsRequest& WithFilter(const TopicsDetectionJobFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>Filters the jobs that are returned. Jobs can be filtered on their name,
     * status, or the date and time that they were submitted. You can set only one
     * filter at a time.</p>
     */
    inline ListTopicsDetectionJobsRequest& WithFilter(TopicsDetectionJobFilter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListTopicsDetectionJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListTopicsDetectionJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListTopicsDetectionJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in each page. The default is 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in each page. The default is 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in each page. The default is 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in each page. The default is 100.</p>
     */
    inline ListTopicsDetectionJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    TopicsDetectionJobFilter m_filter;
    bool m_filterHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
