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
   * <p> The input argument to the <a>TerminationProtection</a> operation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SetTerminationProtectionInput">AWS
   * API Reference</a></p>
   */
  class SetTerminationProtectionRequest : public EMRRequest
  {
  public:
    AWS_EMR_API SetTerminationProtectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetTerminationProtection"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> A list of strings that uniquely identify the clusters to protect. This
     * identifier is returned by <a>RunJobFlow</a> and can also be obtained from
     * <a>DescribeJobFlows</a> . </p>
     */
    inline const Aws::Vector<Aws::String>& GetJobFlowIds() const { return m_jobFlowIds; }
    inline bool JobFlowIdsHasBeenSet() const { return m_jobFlowIdsHasBeenSet; }
    template<typename JobFlowIdsT = Aws::Vector<Aws::String>>
    void SetJobFlowIds(JobFlowIdsT&& value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds = std::forward<JobFlowIdsT>(value); }
    template<typename JobFlowIdsT = Aws::Vector<Aws::String>>
    SetTerminationProtectionRequest& WithJobFlowIds(JobFlowIdsT&& value) { SetJobFlowIds(std::forward<JobFlowIdsT>(value)); return *this;}
    template<typename JobFlowIdsT = Aws::String>
    SetTerminationProtectionRequest& AddJobFlowIds(JobFlowIdsT&& value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds.emplace_back(std::forward<JobFlowIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A Boolean that indicates whether to protect the cluster and prevent the
     * Amazon EC2 instances in the cluster from shutting down due to API calls, user
     * intervention, or job-flow error.</p>
     */
    inline bool GetTerminationProtected() const { return m_terminationProtected; }
    inline bool TerminationProtectedHasBeenSet() const { return m_terminationProtectedHasBeenSet; }
    inline void SetTerminationProtected(bool value) { m_terminationProtectedHasBeenSet = true; m_terminationProtected = value; }
    inline SetTerminationProtectionRequest& WithTerminationProtected(bool value) { SetTerminationProtected(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_jobFlowIds;
    bool m_jobFlowIdsHasBeenSet = false;

    bool m_terminationProtected{false};
    bool m_terminationProtectedHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
