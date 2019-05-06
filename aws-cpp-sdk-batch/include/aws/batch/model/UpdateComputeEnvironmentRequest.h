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
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/CEState.h>
#include <aws/batch/model/ComputeResourceUpdate.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateComputeEnvironment"; }

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
    inline bool ComputeEnvironmentHasBeenSet() const { return m_computeEnvironmentHasBeenSet; }

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the compute environment to
     * update.</p>
     */
    inline void SetComputeEnvironment(const Aws::String& value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment = value; }

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the compute environment to
     * update.</p>
     */
    inline void SetComputeEnvironment(Aws::String&& value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment = std::move(value); }

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
    inline UpdateComputeEnvironmentRequest& WithComputeEnvironment(Aws::String&& value) { SetComputeEnvironment(std::move(value)); return *this;}

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
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

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
    inline void SetState(CEState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

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
    inline UpdateComputeEnvironmentRequest& WithState(CEState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Details of the compute resources managed by the compute environment. Required
     * for a managed compute environment.</p>
     */
    inline const ComputeResourceUpdate& GetComputeResources() const{ return m_computeResources; }

    /**
     * <p>Details of the compute resources managed by the compute environment. Required
     * for a managed compute environment.</p>
     */
    inline bool ComputeResourcesHasBeenSet() const { return m_computeResourcesHasBeenSet; }

    /**
     * <p>Details of the compute resources managed by the compute environment. Required
     * for a managed compute environment.</p>
     */
    inline void SetComputeResources(const ComputeResourceUpdate& value) { m_computeResourcesHasBeenSet = true; m_computeResources = value; }

    /**
     * <p>Details of the compute resources managed by the compute environment. Required
     * for a managed compute environment.</p>
     */
    inline void SetComputeResources(ComputeResourceUpdate&& value) { m_computeResourcesHasBeenSet = true; m_computeResources = std::move(value); }

    /**
     * <p>Details of the compute resources managed by the compute environment. Required
     * for a managed compute environment.</p>
     */
    inline UpdateComputeEnvironmentRequest& WithComputeResources(const ComputeResourceUpdate& value) { SetComputeResources(value); return *this;}

    /**
     * <p>Details of the compute resources managed by the compute environment. Required
     * for a managed compute environment.</p>
     */
    inline UpdateComputeEnvironmentRequest& WithComputeResources(ComputeResourceUpdate&& value) { SetComputeResources(std::move(value)); return *this;}


    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf.</p> <p>If your specified role
     * has a path other than <code>/</code>, then you must either specify the full role
     * ARN (this is recommended) or prefix the role name with the path.</p> <note>
     * <p>Depending on how you created your AWS Batch service role, its ARN may contain
     * the <code>service-role</code> path prefix. When you only specify the name of the
     * service role, AWS Batch assumes that your ARN does not use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> </note>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf.</p> <p>If your specified role
     * has a path other than <code>/</code>, then you must either specify the full role
     * ARN (this is recommended) or prefix the role name with the path.</p> <note>
     * <p>Depending on how you created your AWS Batch service role, its ARN may contain
     * the <code>service-role</code> path prefix. When you only specify the name of the
     * service role, AWS Batch assumes that your ARN does not use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> </note>
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf.</p> <p>If your specified role
     * has a path other than <code>/</code>, then you must either specify the full role
     * ARN (this is recommended) or prefix the role name with the path.</p> <note>
     * <p>Depending on how you created your AWS Batch service role, its ARN may contain
     * the <code>service-role</code> path prefix. When you only specify the name of the
     * service role, AWS Batch assumes that your ARN does not use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> </note>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf.</p> <p>If your specified role
     * has a path other than <code>/</code>, then you must either specify the full role
     * ARN (this is recommended) or prefix the role name with the path.</p> <note>
     * <p>Depending on how you created your AWS Batch service role, its ARN may contain
     * the <code>service-role</code> path prefix. When you only specify the name of the
     * service role, AWS Batch assumes that your ARN does not use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> </note>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf.</p> <p>If your specified role
     * has a path other than <code>/</code>, then you must either specify the full role
     * ARN (this is recommended) or prefix the role name with the path.</p> <note>
     * <p>Depending on how you created your AWS Batch service role, its ARN may contain
     * the <code>service-role</code> path prefix. When you only specify the name of the
     * service role, AWS Batch assumes that your ARN does not use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> </note>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf.</p> <p>If your specified role
     * has a path other than <code>/</code>, then you must either specify the full role
     * ARN (this is recommended) or prefix the role name with the path.</p> <note>
     * <p>Depending on how you created your AWS Batch service role, its ARN may contain
     * the <code>service-role</code> path prefix. When you only specify the name of the
     * service role, AWS Batch assumes that your ARN does not use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> </note>
     */
    inline UpdateComputeEnvironmentRequest& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf.</p> <p>If your specified role
     * has a path other than <code>/</code>, then you must either specify the full role
     * ARN (this is recommended) or prefix the role name with the path.</p> <note>
     * <p>Depending on how you created your AWS Batch service role, its ARN may contain
     * the <code>service-role</code> path prefix. When you only specify the name of the
     * service role, AWS Batch assumes that your ARN does not use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> </note>
     */
    inline UpdateComputeEnvironmentRequest& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf.</p> <p>If your specified role
     * has a path other than <code>/</code>, then you must either specify the full role
     * ARN (this is recommended) or prefix the role name with the path.</p> <note>
     * <p>Depending on how you created your AWS Batch service role, its ARN may contain
     * the <code>service-role</code> path prefix. When you only specify the name of the
     * service role, AWS Batch assumes that your ARN does not use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> </note>
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
