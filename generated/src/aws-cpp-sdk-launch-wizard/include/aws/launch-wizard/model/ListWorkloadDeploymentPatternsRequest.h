/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/launch-wizard/LaunchWizardRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LaunchWizard
{
namespace Model
{

  /**
   */
  class ListWorkloadDeploymentPatternsRequest : public LaunchWizardRequest
  {
  public:
    AWS_LAUNCHWIZARD_API ListWorkloadDeploymentPatternsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkloadDeploymentPatterns"; }

    AWS_LAUNCHWIZARD_API Aws::String SerializePayload() const override;


    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output.</p>
     */
    inline ListWorkloadDeploymentPatternsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline ListWorkloadDeploymentPatternsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline ListWorkloadDeploymentPatternsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline ListWorkloadDeploymentPatternsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The name of the workload.</p>
     */
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }

    /**
     * <p>The name of the workload.</p>
     */
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }

    /**
     * <p>The name of the workload.</p>
     */
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }

    /**
     * <p>The name of the workload.</p>
     */
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }

    /**
     * <p>The name of the workload.</p>
     */
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }

    /**
     * <p>The name of the workload.</p>
     */
    inline ListWorkloadDeploymentPatternsRequest& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}

    /**
     * <p>The name of the workload.</p>
     */
    inline ListWorkloadDeploymentPatternsRequest& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}

    /**
     * <p>The name of the workload.</p>
     */
    inline ListWorkloadDeploymentPatternsRequest& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
