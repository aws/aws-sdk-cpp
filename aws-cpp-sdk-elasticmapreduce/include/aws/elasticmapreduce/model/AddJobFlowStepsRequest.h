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
  class AWS_EMR_API AddJobFlowStepsRequest : public EMRRequest
  {
  public:
    AddJobFlowStepsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddJobFlowSteps"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A string that uniquely identifies the job flow. This identifier is returned
     * by <a>RunJobFlow</a> and can also be obtained from <a>ListClusters</a>. </p>
     */
    inline const Aws::String& GetJobFlowId() const{ return m_jobFlowId; }

    /**
     * <p>A string that uniquely identifies the job flow. This identifier is returned
     * by <a>RunJobFlow</a> and can also be obtained from <a>ListClusters</a>. </p>
     */
    inline bool JobFlowIdHasBeenSet() const { return m_jobFlowIdHasBeenSet; }

    /**
     * <p>A string that uniquely identifies the job flow. This identifier is returned
     * by <a>RunJobFlow</a> and can also be obtained from <a>ListClusters</a>. </p>
     */
    inline void SetJobFlowId(const Aws::String& value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId = value; }

    /**
     * <p>A string that uniquely identifies the job flow. This identifier is returned
     * by <a>RunJobFlow</a> and can also be obtained from <a>ListClusters</a>. </p>
     */
    inline void SetJobFlowId(Aws::String&& value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId = std::move(value); }

    /**
     * <p>A string that uniquely identifies the job flow. This identifier is returned
     * by <a>RunJobFlow</a> and can also be obtained from <a>ListClusters</a>. </p>
     */
    inline void SetJobFlowId(const char* value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId.assign(value); }

    /**
     * <p>A string that uniquely identifies the job flow. This identifier is returned
     * by <a>RunJobFlow</a> and can also be obtained from <a>ListClusters</a>. </p>
     */
    inline AddJobFlowStepsRequest& WithJobFlowId(const Aws::String& value) { SetJobFlowId(value); return *this;}

    /**
     * <p>A string that uniquely identifies the job flow. This identifier is returned
     * by <a>RunJobFlow</a> and can also be obtained from <a>ListClusters</a>. </p>
     */
    inline AddJobFlowStepsRequest& WithJobFlowId(Aws::String&& value) { SetJobFlowId(std::move(value)); return *this;}

    /**
     * <p>A string that uniquely identifies the job flow. This identifier is returned
     * by <a>RunJobFlow</a> and can also be obtained from <a>ListClusters</a>. </p>
     */
    inline AddJobFlowStepsRequest& WithJobFlowId(const char* value) { SetJobFlowId(value); return *this;}


    /**
     * <p> A list of <a>StepConfig</a> to be executed by the job flow. </p>
     */
    inline const Aws::Vector<StepConfig>& GetSteps() const{ return m_steps; }

    /**
     * <p> A list of <a>StepConfig</a> to be executed by the job flow. </p>
     */
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }

    /**
     * <p> A list of <a>StepConfig</a> to be executed by the job flow. </p>
     */
    inline void SetSteps(const Aws::Vector<StepConfig>& value) { m_stepsHasBeenSet = true; m_steps = value; }

    /**
     * <p> A list of <a>StepConfig</a> to be executed by the job flow. </p>
     */
    inline void SetSteps(Aws::Vector<StepConfig>&& value) { m_stepsHasBeenSet = true; m_steps = std::move(value); }

    /**
     * <p> A list of <a>StepConfig</a> to be executed by the job flow. </p>
     */
    inline AddJobFlowStepsRequest& WithSteps(const Aws::Vector<StepConfig>& value) { SetSteps(value); return *this;}

    /**
     * <p> A list of <a>StepConfig</a> to be executed by the job flow. </p>
     */
    inline AddJobFlowStepsRequest& WithSteps(Aws::Vector<StepConfig>&& value) { SetSteps(std::move(value)); return *this;}

    /**
     * <p> A list of <a>StepConfig</a> to be executed by the job flow. </p>
     */
    inline AddJobFlowStepsRequest& AddSteps(const StepConfig& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }

    /**
     * <p> A list of <a>StepConfig</a> to be executed by the job flow. </p>
     */
    inline AddJobFlowStepsRequest& AddSteps(StepConfig&& value) { m_stepsHasBeenSet = true; m_steps.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_jobFlowId;
    bool m_jobFlowIdHasBeenSet;

    Aws::Vector<StepConfig> m_steps;
    bool m_stepsHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
