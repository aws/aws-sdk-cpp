/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/AppRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppRunner
{
namespace Model
{

  /**
   */
  class ListAutoScalingConfigurationsRequest : public AppRunnerRequest
  {
  public:
    AWS_APPRUNNER_API ListAutoScalingConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAutoScalingConfigurations"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the App Runner auto scaling configuration that you want to list.
     * If specified, App Runner lists revisions that share this name. If not specified,
     * App Runner returns revisions of all active configurations.</p>
     */
    inline const Aws::String& GetAutoScalingConfigurationName() const{ return m_autoScalingConfigurationName; }

    /**
     * <p>The name of the App Runner auto scaling configuration that you want to list.
     * If specified, App Runner lists revisions that share this name. If not specified,
     * App Runner returns revisions of all active configurations.</p>
     */
    inline bool AutoScalingConfigurationNameHasBeenSet() const { return m_autoScalingConfigurationNameHasBeenSet; }

    /**
     * <p>The name of the App Runner auto scaling configuration that you want to list.
     * If specified, App Runner lists revisions that share this name. If not specified,
     * App Runner returns revisions of all active configurations.</p>
     */
    inline void SetAutoScalingConfigurationName(const Aws::String& value) { m_autoScalingConfigurationNameHasBeenSet = true; m_autoScalingConfigurationName = value; }

    /**
     * <p>The name of the App Runner auto scaling configuration that you want to list.
     * If specified, App Runner lists revisions that share this name. If not specified,
     * App Runner returns revisions of all active configurations.</p>
     */
    inline void SetAutoScalingConfigurationName(Aws::String&& value) { m_autoScalingConfigurationNameHasBeenSet = true; m_autoScalingConfigurationName = std::move(value); }

    /**
     * <p>The name of the App Runner auto scaling configuration that you want to list.
     * If specified, App Runner lists revisions that share this name. If not specified,
     * App Runner returns revisions of all active configurations.</p>
     */
    inline void SetAutoScalingConfigurationName(const char* value) { m_autoScalingConfigurationNameHasBeenSet = true; m_autoScalingConfigurationName.assign(value); }

    /**
     * <p>The name of the App Runner auto scaling configuration that you want to list.
     * If specified, App Runner lists revisions that share this name. If not specified,
     * App Runner returns revisions of all active configurations.</p>
     */
    inline ListAutoScalingConfigurationsRequest& WithAutoScalingConfigurationName(const Aws::String& value) { SetAutoScalingConfigurationName(value); return *this;}

    /**
     * <p>The name of the App Runner auto scaling configuration that you want to list.
     * If specified, App Runner lists revisions that share this name. If not specified,
     * App Runner returns revisions of all active configurations.</p>
     */
    inline ListAutoScalingConfigurationsRequest& WithAutoScalingConfigurationName(Aws::String&& value) { SetAutoScalingConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The name of the App Runner auto scaling configuration that you want to list.
     * If specified, App Runner lists revisions that share this name. If not specified,
     * App Runner returns revisions of all active configurations.</p>
     */
    inline ListAutoScalingConfigurationsRequest& WithAutoScalingConfigurationName(const char* value) { SetAutoScalingConfigurationName(value); return *this;}


    /**
     * <p>Set to <code>true</code> to list only the latest revision for each requested
     * configuration name.</p> <p>Set to <code>false</code> to list all revisions for
     * each requested configuration name.</p> <p>Default: <code>true</code> </p>
     */
    inline bool GetLatestOnly() const{ return m_latestOnly; }

    /**
     * <p>Set to <code>true</code> to list only the latest revision for each requested
     * configuration name.</p> <p>Set to <code>false</code> to list all revisions for
     * each requested configuration name.</p> <p>Default: <code>true</code> </p>
     */
    inline bool LatestOnlyHasBeenSet() const { return m_latestOnlyHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to list only the latest revision for each requested
     * configuration name.</p> <p>Set to <code>false</code> to list all revisions for
     * each requested configuration name.</p> <p>Default: <code>true</code> </p>
     */
    inline void SetLatestOnly(bool value) { m_latestOnlyHasBeenSet = true; m_latestOnly = value; }

    /**
     * <p>Set to <code>true</code> to list only the latest revision for each requested
     * configuration name.</p> <p>Set to <code>false</code> to list all revisions for
     * each requested configuration name.</p> <p>Default: <code>true</code> </p>
     */
    inline ListAutoScalingConfigurationsRequest& WithLatestOnly(bool value) { SetLatestOnly(value); return *this;}


    /**
     * <p>The maximum number of results to include in each response (result page). It's
     * used for a paginated request.</p> <p>If you don't specify
     * <code>MaxResults</code>, the request retrieves all available results in a single
     * response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to include in each response (result page). It's
     * used for a paginated request.</p> <p>If you don't specify
     * <code>MaxResults</code>, the request retrieves all available results in a single
     * response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to include in each response (result page). It's
     * used for a paginated request.</p> <p>If you don't specify
     * <code>MaxResults</code>, the request retrieves all available results in a single
     * response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to include in each response (result page). It's
     * used for a paginated request.</p> <p>If you don't specify
     * <code>MaxResults</code>, the request retrieves all available results in a single
     * response.</p>
     */
    inline ListAutoScalingConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token from a previous result page. It's used for a paginated request. The
     * request retrieves the next result page. All other parameter values must be
     * identical to the ones that are specified in the initial request.</p> <p>If you
     * don't specify <code>NextToken</code>, the request retrieves the first result
     * page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token from a previous result page. It's used for a paginated request. The
     * request retrieves the next result page. All other parameter values must be
     * identical to the ones that are specified in the initial request.</p> <p>If you
     * don't specify <code>NextToken</code>, the request retrieves the first result
     * page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token from a previous result page. It's used for a paginated request. The
     * request retrieves the next result page. All other parameter values must be
     * identical to the ones that are specified in the initial request.</p> <p>If you
     * don't specify <code>NextToken</code>, the request retrieves the first result
     * page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token from a previous result page. It's used for a paginated request. The
     * request retrieves the next result page. All other parameter values must be
     * identical to the ones that are specified in the initial request.</p> <p>If you
     * don't specify <code>NextToken</code>, the request retrieves the first result
     * page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token from a previous result page. It's used for a paginated request. The
     * request retrieves the next result page. All other parameter values must be
     * identical to the ones that are specified in the initial request.</p> <p>If you
     * don't specify <code>NextToken</code>, the request retrieves the first result
     * page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token from a previous result page. It's used for a paginated request. The
     * request retrieves the next result page. All other parameter values must be
     * identical to the ones that are specified in the initial request.</p> <p>If you
     * don't specify <code>NextToken</code>, the request retrieves the first result
     * page.</p>
     */
    inline ListAutoScalingConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token from a previous result page. It's used for a paginated request. The
     * request retrieves the next result page. All other parameter values must be
     * identical to the ones that are specified in the initial request.</p> <p>If you
     * don't specify <code>NextToken</code>, the request retrieves the first result
     * page.</p>
     */
    inline ListAutoScalingConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token from a previous result page. It's used for a paginated request. The
     * request retrieves the next result page. All other parameter values must be
     * identical to the ones that are specified in the initial request.</p> <p>If you
     * don't specify <code>NextToken</code>, the request retrieves the first result
     * page.</p>
     */
    inline ListAutoScalingConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_autoScalingConfigurationName;
    bool m_autoScalingConfigurationNameHasBeenSet = false;

    bool m_latestOnly;
    bool m_latestOnlyHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
