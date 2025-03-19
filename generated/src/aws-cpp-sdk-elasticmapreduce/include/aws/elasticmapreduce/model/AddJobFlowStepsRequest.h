/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/StepConfig.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p> The input argument to the <a>AddJobFlowSteps</a> operation. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddJobFlowStepsInput">AWS
   * API Reference</a></p>
   */
  class AddJobFlowStepsRequest : public EMRRequest
  {
  public:
    AWS_EMR_API AddJobFlowStepsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddJobFlowSteps"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A string that uniquely identifies the job flow. This identifier is returned
     * by <a>RunJobFlow</a> and can also be obtained from <a>ListClusters</a>. </p>
     */
    inline const Aws::String& GetJobFlowId() const { return m_jobFlowId; }
    inline bool JobFlowIdHasBeenSet() const { return m_jobFlowIdHasBeenSet; }
    template<typename JobFlowIdT = Aws::String>
    void SetJobFlowId(JobFlowIdT&& value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId = std::forward<JobFlowIdT>(value); }
    template<typename JobFlowIdT = Aws::String>
    AddJobFlowStepsRequest& WithJobFlowId(JobFlowIdT&& value) { SetJobFlowId(std::forward<JobFlowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of <a>StepConfig</a> to be executed by the job flow. </p>
     */
    inline const Aws::Vector<StepConfig>& GetSteps() const { return m_steps; }
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
    template<typename StepsT = Aws::Vector<StepConfig>>
    void SetSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps = std::forward<StepsT>(value); }
    template<typename StepsT = Aws::Vector<StepConfig>>
    AddJobFlowStepsRequest& WithSteps(StepsT&& value) { SetSteps(std::forward<StepsT>(value)); return *this;}
    template<typename StepsT = StepConfig>
    AddJobFlowStepsRequest& AddSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps.emplace_back(std::forward<StepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the runtime role for a step on the cluster.
     * The runtime role can be a cross-account IAM role. The runtime role ARN is a
     * combination of account ID, role name, and role type using the following format:
     * <code>arn:partition:service:region:account:resource</code>. </p> <p>For example,
     * <code>arn:aws:IAM::1234567890:role/ReadOnly</code> is a correctly formatted
     * runtime role ARN.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    AddJobFlowStepsRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobFlowId;
    bool m_jobFlowIdHasBeenSet = false;

    Aws::Vector<StepConfig> m_steps;
    bool m_stepsHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
