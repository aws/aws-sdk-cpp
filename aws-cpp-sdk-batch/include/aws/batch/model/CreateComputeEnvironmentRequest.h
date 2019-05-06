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
#include <aws/batch/model/CEType.h>
#include <aws/batch/model/CEState.h>
#include <aws/batch/model/ComputeResource.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   */
  class AWS_BATCH_API CreateComputeEnvironmentRequest : public BatchRequest
  {
  public:
    CreateComputeEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateComputeEnvironment"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name for your compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline const Aws::String& GetComputeEnvironmentName() const{ return m_computeEnvironmentName; }

    /**
     * <p>The name for your compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline bool ComputeEnvironmentNameHasBeenSet() const { return m_computeEnvironmentNameHasBeenSet; }

    /**
     * <p>The name for your compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline void SetComputeEnvironmentName(const Aws::String& value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName = value; }

    /**
     * <p>The name for your compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline void SetComputeEnvironmentName(Aws::String&& value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName = std::move(value); }

    /**
     * <p>The name for your compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline void SetComputeEnvironmentName(const char* value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName.assign(value); }

    /**
     * <p>The name for your compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline CreateComputeEnvironmentRequest& WithComputeEnvironmentName(const Aws::String& value) { SetComputeEnvironmentName(value); return *this;}

    /**
     * <p>The name for your compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline CreateComputeEnvironmentRequest& WithComputeEnvironmentName(Aws::String&& value) { SetComputeEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name for your compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline CreateComputeEnvironmentRequest& WithComputeEnvironmentName(const char* value) { SetComputeEnvironmentName(value); return *this;}


    /**
     * <p>The type of the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline const CEType& GetType() const{ return m_type; }

    /**
     * <p>The type of the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetType(const CEType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetType(CEType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline CreateComputeEnvironmentRequest& WithType(const CEType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline CreateComputeEnvironmentRequest& WithType(CEType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The state of the compute environment. If the state is <code>ENABLED</code>,
     * then the compute environment accepts jobs from a queue and can scale out
     * automatically based on queues.</p>
     */
    inline const CEState& GetState() const{ return m_state; }

    /**
     * <p>The state of the compute environment. If the state is <code>ENABLED</code>,
     * then the compute environment accepts jobs from a queue and can scale out
     * automatically based on queues.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the compute environment. If the state is <code>ENABLED</code>,
     * then the compute environment accepts jobs from a queue and can scale out
     * automatically based on queues.</p>
     */
    inline void SetState(const CEState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the compute environment. If the state is <code>ENABLED</code>,
     * then the compute environment accepts jobs from a queue and can scale out
     * automatically based on queues.</p>
     */
    inline void SetState(CEState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the compute environment. If the state is <code>ENABLED</code>,
     * then the compute environment accepts jobs from a queue and can scale out
     * automatically based on queues.</p>
     */
    inline CreateComputeEnvironmentRequest& WithState(const CEState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the compute environment. If the state is <code>ENABLED</code>,
     * then the compute environment accepts jobs from a queue and can scale out
     * automatically based on queues.</p>
     */
    inline CreateComputeEnvironmentRequest& WithState(CEState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Details of the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline const ComputeResource& GetComputeResources() const{ return m_computeResources; }

    /**
     * <p>Details of the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline bool ComputeResourcesHasBeenSet() const { return m_computeResourcesHasBeenSet; }

    /**
     * <p>Details of the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetComputeResources(const ComputeResource& value) { m_computeResourcesHasBeenSet = true; m_computeResources = value; }

    /**
     * <p>Details of the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetComputeResources(ComputeResource&& value) { m_computeResourcesHasBeenSet = true; m_computeResources = std::move(value); }

    /**
     * <p>Details of the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline CreateComputeEnvironmentRequest& WithComputeResources(const ComputeResource& value) { SetComputeResources(value); return *this;}

    /**
     * <p>Details of the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline CreateComputeEnvironmentRequest& WithComputeResources(ComputeResource&& value) { SetComputeResources(std::move(value)); return *this;}


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
    inline CreateComputeEnvironmentRequest& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

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
    inline CreateComputeEnvironmentRequest& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

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
    inline CreateComputeEnvironmentRequest& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}

  private:

    Aws::String m_computeEnvironmentName;
    bool m_computeEnvironmentNameHasBeenSet;

    CEType m_type;
    bool m_typeHasBeenSet;

    CEState m_state;
    bool m_stateHasBeenSet;

    ComputeResource m_computeResources;
    bool m_computeResourcesHasBeenSet;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
