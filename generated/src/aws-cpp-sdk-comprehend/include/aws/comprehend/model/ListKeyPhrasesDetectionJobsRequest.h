/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/comprehend/model/KeyPhrasesDetectionJobFilter.h>
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
  class ListKeyPhrasesDetectionJobsRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API ListKeyPhrasesDetectionJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListKeyPhrasesDetectionJobs"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Filters the jobs that are returned. You can filter jobs on their name,
     * status, or the date and time that they were submitted. You can only set one
     * filter at a time.</p>
     */
    inline const KeyPhrasesDetectionJobFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>Filters the jobs that are returned. You can filter jobs on their name,
     * status, or the date and time that they were submitted. You can only set one
     * filter at a time.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Filters the jobs that are returned. You can filter jobs on their name,
     * status, or the date and time that they were submitted. You can only set one
     * filter at a time.</p>
     */
    inline void SetFilter(const KeyPhrasesDetectionJobFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Filters the jobs that are returned. You can filter jobs on their name,
     * status, or the date and time that they were submitted. You can only set one
     * filter at a time.</p>
     */
    inline void SetFilter(KeyPhrasesDetectionJobFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Filters the jobs that are returned. You can filter jobs on their name,
     * status, or the date and time that they were submitted. You can only set one
     * filter at a time.</p>
     */
    inline ListKeyPhrasesDetectionJobsRequest& WithFilter(const KeyPhrasesDetectionJobFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>Filters the jobs that are returned. You can filter jobs on their name,
     * status, or the date and time that they were submitted. You can only set one
     * filter at a time.</p>
     */
    inline ListKeyPhrasesDetectionJobsRequest& WithFilter(KeyPhrasesDetectionJobFilter&& value) { SetFilter(std::move(value)); return *this;}


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
    inline ListKeyPhrasesDetectionJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListKeyPhrasesDetectionJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListKeyPhrasesDetectionJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListKeyPhrasesDetectionJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    KeyPhrasesDetectionJobFilter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
