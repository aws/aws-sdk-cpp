/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class SetKeepJobFlowAliveWhenNoStepsRequest : public EMRRequest
  {
  public:
    AWS_EMR_API SetKeepJobFlowAliveWhenNoStepsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetKeepJobFlowAliveWhenNoSteps"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of strings that uniquely identify the clusters to protect. This
     * identifier is returned by <a
     * href="https://docs.aws.amazon.com/emr/latest/APIReference/API_RunJobFlow.html">RunJobFlow</a>
     * and can also be obtained from <a
     * href="https://docs.aws.amazon.com/emr/latest/APIReference/API_DescribeJobFlows.html">DescribeJobFlows</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobFlowIds() const { return m_jobFlowIds; }
    inline bool JobFlowIdsHasBeenSet() const { return m_jobFlowIdsHasBeenSet; }
    template<typename JobFlowIdsT = Aws::Vector<Aws::String>>
    void SetJobFlowIds(JobFlowIdsT&& value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds = std::forward<JobFlowIdsT>(value); }
    template<typename JobFlowIdsT = Aws::Vector<Aws::String>>
    SetKeepJobFlowAliveWhenNoStepsRequest& WithJobFlowIds(JobFlowIdsT&& value) { SetJobFlowIds(std::forward<JobFlowIdsT>(value)); return *this;}
    template<typename JobFlowIdsT = Aws::String>
    SetKeepJobFlowAliveWhenNoStepsRequest& AddJobFlowIds(JobFlowIdsT&& value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds.emplace_back(std::forward<JobFlowIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A Boolean that indicates whether to terminate the cluster after all steps are
     * executed.</p>
     */
    inline bool GetKeepJobFlowAliveWhenNoSteps() const { return m_keepJobFlowAliveWhenNoSteps; }
    inline bool KeepJobFlowAliveWhenNoStepsHasBeenSet() const { return m_keepJobFlowAliveWhenNoStepsHasBeenSet; }
    inline void SetKeepJobFlowAliveWhenNoSteps(bool value) { m_keepJobFlowAliveWhenNoStepsHasBeenSet = true; m_keepJobFlowAliveWhenNoSteps = value; }
    inline SetKeepJobFlowAliveWhenNoStepsRequest& WithKeepJobFlowAliveWhenNoSteps(bool value) { SetKeepJobFlowAliveWhenNoSteps(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_jobFlowIds;
    bool m_jobFlowIdsHasBeenSet = false;

    bool m_keepJobFlowAliveWhenNoSteps{false};
    bool m_keepJobFlowAliveWhenNoStepsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
