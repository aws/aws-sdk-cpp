/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evidently/model/LaunchStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   */
  class ListLaunchesRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ListLaunchesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLaunches"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHEVIDENTLY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of results to include in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to include in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to include in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to include in the response.</p>
     */
    inline ListLaunchesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListLaunches</code> operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListLaunches</code> operation.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListLaunches</code> operation.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListLaunches</code> operation.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListLaunches</code> operation.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListLaunches</code> operation.</p>
     */
    inline ListLaunchesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListLaunches</code> operation.</p>
     */
    inline ListLaunchesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListLaunches</code> operation.</p>
     */
    inline ListLaunchesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The name or ARN of the project to return the launch list from.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }

    /**
     * <p>The name or ARN of the project to return the launch list from.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>The name or ARN of the project to return the launch list from.</p>
     */
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>The name or ARN of the project to return the launch list from.</p>
     */
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>The name or ARN of the project to return the launch list from.</p>
     */
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }

    /**
     * <p>The name or ARN of the project to return the launch list from.</p>
     */
    inline ListLaunchesRequest& WithProject(const Aws::String& value) { SetProject(value); return *this;}

    /**
     * <p>The name or ARN of the project to return the launch list from.</p>
     */
    inline ListLaunchesRequest& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the project to return the launch list from.</p>
     */
    inline ListLaunchesRequest& WithProject(const char* value) { SetProject(value); return *this;}


    /**
     * <p>Use this optional parameter to limit the returned results to only the
     * launches with the status that you specify here.</p>
     */
    inline const LaunchStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Use this optional parameter to limit the returned results to only the
     * launches with the status that you specify here.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Use this optional parameter to limit the returned results to only the
     * launches with the status that you specify here.</p>
     */
    inline void SetStatus(const LaunchStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Use this optional parameter to limit the returned results to only the
     * launches with the status that you specify here.</p>
     */
    inline void SetStatus(LaunchStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Use this optional parameter to limit the returned results to only the
     * launches with the status that you specify here.</p>
     */
    inline ListLaunchesRequest& WithStatus(const LaunchStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Use this optional parameter to limit the returned results to only the
     * launches with the status that you specify here.</p>
     */
    inline ListLaunchesRequest& WithStatus(LaunchStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    LaunchStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
