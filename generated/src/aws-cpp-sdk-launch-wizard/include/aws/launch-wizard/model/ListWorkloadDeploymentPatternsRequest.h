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
    AWS_LAUNCHWIZARD_API ListWorkloadDeploymentPatternsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkloadDeploymentPatterns"; }

    AWS_LAUNCHWIZARD_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListWorkloadDeploymentPatternsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkloadDeploymentPatternsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workload.</p>
     */
    inline const Aws::String& GetWorkloadName() const { return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    template<typename WorkloadNameT = Aws::String>
    void SetWorkloadName(WorkloadNameT&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::forward<WorkloadNameT>(value); }
    template<typename WorkloadNameT = Aws::String>
    ListWorkloadDeploymentPatternsRequest& WithWorkloadName(WorkloadNameT&& value) { SetWorkloadName(std::forward<WorkloadNameT>(value)); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
