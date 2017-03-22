/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/CEState.h>
#include <aws/batch/model/ComputeResourceUpdate.h>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   */
  class AWS_BATCH_API UpdateComputeEnvironmentRequest : public BatchRequest
  {
  public:
    UpdateComputeEnvironmentRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The name or full Amazon Resource Name (ARN) of the compute environment to
     * update.</p>
     */
    inline const Aws::String& GetComputeEnvironment() const{ return m_computeEnvironment; }

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the compute environment to
     * update.</p>
     */
    inline void SetComputeEnvironment(const Aws::String& value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment = value; }

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the compute environment to
     * update.</p>
     */
    inline void SetComputeEnvironment(Aws::String&& value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment = value; }

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the compute environment to
     * update.</p>
     */
    inline void SetComputeEnvironment(const char* value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment.assign(value); }

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the compute environment to
     * update.</p>
     */
    inline UpdateComputeEnvironmentRequest& WithComputeEnvironment(const Aws::String& value) { SetComputeEnvironment(value); return *this;}

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the compute environment to
     * update.</p>
     */
    inline UpdateComputeEnvironmentRequest& WithComputeEnvironment(Aws::String&& value) { SetComputeEnvironment(value); return *this;}

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the compute environment to
     * update.</p>
     */
    inline UpdateComputeEnvironmentRequest& WithComputeEnvironment(const char* value) { SetComputeEnvironment(value); return *this;}

    /**
     * <p>The state of the compute environment. Compute environments in the
     * <code>ENABLED</code> state can accept jobs from a queue and scale in or out
     * automatically based on the workload demand of its associated queues.</p>
     */
    inline const CEState& GetState() const{ return m_state; }

    /**
     * <p>The state of the compute environment. Compute environments in the
     * <code>ENABLED</code> state can accept jobs from a queue and scale in or out
     * automatically based on the workload demand of its associated queues.</p>
     */
    inline void SetState(const CEState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the compute environment. Compute environments in the
     * <code>ENABLED</code> state can accept jobs from a queue and scale in or out
     * automatically based on the workload demand of its associated queues.</p>
     */
    inline void SetState(CEState&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the compute environment. Compute environments in the
     * <code>ENABLED</code> state can accept jobs from a queue and scale in or out
     * automatically based on the workload demand of its associated queues.</p>
     */
    inline UpdateComputeEnvironmentRequest& WithState(const CEState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the compute environment. Compute environments in the
     * <code>ENABLED</code> state can accept jobs from a queue and scale in or out
     * automatically based on the workload demand of its associated queues.</p>
     */
    inline UpdateComputeEnvironmentRequest& WithState(CEState&& value) { SetState(value); return *this;}

    /**
     * <p>Details of the compute resources managed by the compute environment. Required
     * for a managed compute environment.</p>
     */
    inline const ComputeResourceUpdate& GetComputeResources() const{ return m_computeResources; }

    /**
     * <p>Details of the compute resources managed by the compute environment. Required
     * for a managed compute environment.</p>
     */
    inline void SetComputeResources(const ComputeResourceUpdate& value) { m_computeResourcesHasBeenSet = true; m_computeResources = value; }

    /**
     * <p>Details of the compute resources managed by the compute environment. Required
     * for a managed compute environment.</p>
     */
    inline void SetComputeResources(ComputeResourceUpdate&& value) { m_computeResourcesHasBeenSet = true; m_computeResources = value; }

    /**
     * <p>Details of the compute resources managed by the compute environment. Required
     * for a managed compute environment.</p>
     */
    inline UpdateComputeEnvironmentRequest& WithComputeResources(const ComputeResourceUpdate& value) { SetComputeResources(value); return *this;}

    /**
     * <p>Details of the compute resources managed by the compute environment. Required
     * for a managed compute environment.</p>
     */
    inline UpdateComputeEnvironmentRequest& WithComputeResources(ComputeResourceUpdate&& value) { SetComputeResources(value); return *this;}

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows AWS
     * Batch to make calls to ECS, Auto Scaling, and EC2 on your behalf.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows AWS
     * Batch to make calls to ECS, Auto Scaling, and EC2 on your behalf.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows AWS
     * Batch to make calls to ECS, Auto Scaling, and EC2 on your behalf.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows AWS
     * Batch to make calls to ECS, Auto Scaling, and EC2 on your behalf.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows AWS
     * Batch to make calls to ECS, Auto Scaling, and EC2 on your behalf.</p>
     */
    inline UpdateComputeEnvironmentRequest& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows AWS
     * Batch to make calls to ECS, Auto Scaling, and EC2 on your behalf.</p>
     */
    inline UpdateComputeEnvironmentRequest& WithServiceRole(Aws::String&& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows AWS
     * Batch to make calls to ECS, Auto Scaling, and EC2 on your behalf.</p>
     */
    inline UpdateComputeEnvironmentRequest& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}

  private:
    Aws::String m_computeEnvironment;
    bool m_computeEnvironmentHasBeenSet;
    CEState m_state;
    bool m_stateHasBeenSet;
    ComputeResourceUpdate m_computeResources;
    bool m_computeResourcesHasBeenSet;
    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
