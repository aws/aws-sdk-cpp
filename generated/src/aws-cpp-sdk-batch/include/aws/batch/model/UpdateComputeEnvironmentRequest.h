/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/CEState.h>
#include <aws/batch/model/ComputeResourceUpdate.h>
#include <aws/batch/model/UpdatePolicy.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   * <p>Contains the parameters for
   * <code>UpdateComputeEnvironment</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/UpdateComputeEnvironmentRequest">AWS
   * API Reference</a></p>
   */
  class UpdateComputeEnvironmentRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API UpdateComputeEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateComputeEnvironment"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


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
     * automatically based on the workload demand of its associated queues.</p> <p>If
     * the state is <code>ENABLED</code>, then the Batch scheduler can attempt to place
     * jobs from an associated job queue on the compute resources within the
     * environment. If the compute environment is managed, then it can scale its
     * instances out or in automatically, based on the job queue demand.</p> <p>If the
     * state is <code>DISABLED</code>, then the Batch scheduler doesn't attempt to
     * place jobs within the environment. Jobs in a <code>STARTING</code> or
     * <code>RUNNING</code> state continue to progress normally. Managed compute
     * environments in the <code>DISABLED</code> state don't scale out. However, they
     * scale in to <code>minvCpus</code> value after instances become idle.</p>
     */
    inline const CEState& GetState() const{ return m_state; }

    /**
     * <p>The state of the compute environment. Compute environments in the
     * <code>ENABLED</code> state can accept jobs from a queue and scale in or out
     * automatically based on the workload demand of its associated queues.</p> <p>If
     * the state is <code>ENABLED</code>, then the Batch scheduler can attempt to place
     * jobs from an associated job queue on the compute resources within the
     * environment. If the compute environment is managed, then it can scale its
     * instances out or in automatically, based on the job queue demand.</p> <p>If the
     * state is <code>DISABLED</code>, then the Batch scheduler doesn't attempt to
     * place jobs within the environment. Jobs in a <code>STARTING</code> or
     * <code>RUNNING</code> state continue to progress normally. Managed compute
     * environments in the <code>DISABLED</code> state don't scale out. However, they
     * scale in to <code>minvCpus</code> value after instances become idle.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the compute environment. Compute environments in the
     * <code>ENABLED</code> state can accept jobs from a queue and scale in or out
     * automatically based on the workload demand of its associated queues.</p> <p>If
     * the state is <code>ENABLED</code>, then the Batch scheduler can attempt to place
     * jobs from an associated job queue on the compute resources within the
     * environment. If the compute environment is managed, then it can scale its
     * instances out or in automatically, based on the job queue demand.</p> <p>If the
     * state is <code>DISABLED</code>, then the Batch scheduler doesn't attempt to
     * place jobs within the environment. Jobs in a <code>STARTING</code> or
     * <code>RUNNING</code> state continue to progress normally. Managed compute
     * environments in the <code>DISABLED</code> state don't scale out. However, they
     * scale in to <code>minvCpus</code> value after instances become idle.</p>
     */
    inline void SetState(const CEState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the compute environment. Compute environments in the
     * <code>ENABLED</code> state can accept jobs from a queue and scale in or out
     * automatically based on the workload demand of its associated queues.</p> <p>If
     * the state is <code>ENABLED</code>, then the Batch scheduler can attempt to place
     * jobs from an associated job queue on the compute resources within the
     * environment. If the compute environment is managed, then it can scale its
     * instances out or in automatically, based on the job queue demand.</p> <p>If the
     * state is <code>DISABLED</code>, then the Batch scheduler doesn't attempt to
     * place jobs within the environment. Jobs in a <code>STARTING</code> or
     * <code>RUNNING</code> state continue to progress normally. Managed compute
     * environments in the <code>DISABLED</code> state don't scale out. However, they
     * scale in to <code>minvCpus</code> value after instances become idle.</p>
     */
    inline void SetState(CEState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the compute environment. Compute environments in the
     * <code>ENABLED</code> state can accept jobs from a queue and scale in or out
     * automatically based on the workload demand of its associated queues.</p> <p>If
     * the state is <code>ENABLED</code>, then the Batch scheduler can attempt to place
     * jobs from an associated job queue on the compute resources within the
     * environment. If the compute environment is managed, then it can scale its
     * instances out or in automatically, based on the job queue demand.</p> <p>If the
     * state is <code>DISABLED</code>, then the Batch scheduler doesn't attempt to
     * place jobs within the environment. Jobs in a <code>STARTING</code> or
     * <code>RUNNING</code> state continue to progress normally. Managed compute
     * environments in the <code>DISABLED</code> state don't scale out. However, they
     * scale in to <code>minvCpus</code> value after instances become idle.</p>
     */
    inline UpdateComputeEnvironmentRequest& WithState(const CEState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the compute environment. Compute environments in the
     * <code>ENABLED</code> state can accept jobs from a queue and scale in or out
     * automatically based on the workload demand of its associated queues.</p> <p>If
     * the state is <code>ENABLED</code>, then the Batch scheduler can attempt to place
     * jobs from an associated job queue on the compute resources within the
     * environment. If the compute environment is managed, then it can scale its
     * instances out or in automatically, based on the job queue demand.</p> <p>If the
     * state is <code>DISABLED</code>, then the Batch scheduler doesn't attempt to
     * place jobs within the environment. Jobs in a <code>STARTING</code> or
     * <code>RUNNING</code> state continue to progress normally. Managed compute
     * environments in the <code>DISABLED</code> state don't scale out. However, they
     * scale in to <code>minvCpus</code> value after instances become idle.</p>
     */
    inline UpdateComputeEnvironmentRequest& WithState(CEState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The maximum number of vCPUs expected to be used for an unmanaged compute
     * environment. Don't specify this parameter for a managed compute environment.
     * This parameter is only used for fair share scheduling to reserve vCPU capacity
     * for new share identifiers. If this parameter isn't provided for a fair share job
     * queue, no vCPU capacity is reserved.</p>
     */
    inline int GetUnmanagedvCpus() const{ return m_unmanagedvCpus; }

    /**
     * <p>The maximum number of vCPUs expected to be used for an unmanaged compute
     * environment. Don't specify this parameter for a managed compute environment.
     * This parameter is only used for fair share scheduling to reserve vCPU capacity
     * for new share identifiers. If this parameter isn't provided for a fair share job
     * queue, no vCPU capacity is reserved.</p>
     */
    inline bool UnmanagedvCpusHasBeenSet() const { return m_unmanagedvCpusHasBeenSet; }

    /**
     * <p>The maximum number of vCPUs expected to be used for an unmanaged compute
     * environment. Don't specify this parameter for a managed compute environment.
     * This parameter is only used for fair share scheduling to reserve vCPU capacity
     * for new share identifiers. If this parameter isn't provided for a fair share job
     * queue, no vCPU capacity is reserved.</p>
     */
    inline void SetUnmanagedvCpus(int value) { m_unmanagedvCpusHasBeenSet = true; m_unmanagedvCpus = value; }

    /**
     * <p>The maximum number of vCPUs expected to be used for an unmanaged compute
     * environment. Don't specify this parameter for a managed compute environment.
     * This parameter is only used for fair share scheduling to reserve vCPU capacity
     * for new share identifiers. If this parameter isn't provided for a fair share job
     * queue, no vCPU capacity is reserved.</p>
     */
    inline UpdateComputeEnvironmentRequest& WithUnmanagedvCpus(int value) { SetUnmanagedvCpus(value); return *this;}


    /**
     * <p>Details of the compute resources managed by the compute environment. Required
     * for a managed compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const ComputeResourceUpdate& GetComputeResources() const{ return m_computeResources; }

    /**
     * <p>Details of the compute resources managed by the compute environment. Required
     * for a managed compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline bool ComputeResourcesHasBeenSet() const { return m_computeResourcesHasBeenSet; }

    /**
     * <p>Details of the compute resources managed by the compute environment. Required
     * for a managed compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetComputeResources(const ComputeResourceUpdate& value) { m_computeResourcesHasBeenSet = true; m_computeResources = value; }

    /**
     * <p>Details of the compute resources managed by the compute environment. Required
     * for a managed compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetComputeResources(ComputeResourceUpdate&& value) { m_computeResourcesHasBeenSet = true; m_computeResources = std::move(value); }

    /**
     * <p>Details of the compute resources managed by the compute environment. Required
     * for a managed compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline UpdateComputeEnvironmentRequest& WithComputeResources(const ComputeResourceUpdate& value) { SetComputeResources(value); return *this;}

    /**
     * <p>Details of the compute resources managed by the compute environment. Required
     * for a managed compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline UpdateComputeEnvironmentRequest& WithComputeResources(ComputeResourceUpdate&& value) { SetComputeResources(std::move(value)); return *this;}


    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows Batch to make
     * calls to other Amazon Web Services services on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>  <p>If the
     * compute environment has a service-linked role, it can't be changed to use a
     * regular IAM role. Likewise, if the compute environment has a regular IAM role,
     * it can't be changed to use a service-linked role. To update the parameters for
     * the compute environment that require an infrastructure update to change, the
     * <b>AWSServiceRoleForBatch</b> service-linked role must be used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>  <p>If
     * your specified role has a path other than <code>/</code>, then you must either
     * specify the full role ARN (recommended) or prefix the role name with the
     * path.</p>  <p>Depending on how you created your Batch service role, its
     * ARN might contain the <code>service-role</code> path prefix. When you only
     * specify the name of the service role, Batch assumes that your ARN doesn't use
     * the <code>service-role</code> path prefix. Because of this, we recommend that
     * you specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows Batch to make
     * calls to other Amazon Web Services services on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>  <p>If the
     * compute environment has a service-linked role, it can't be changed to use a
     * regular IAM role. Likewise, if the compute environment has a regular IAM role,
     * it can't be changed to use a service-linked role. To update the parameters for
     * the compute environment that require an infrastructure update to change, the
     * <b>AWSServiceRoleForBatch</b> service-linked role must be used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>  <p>If
     * your specified role has a path other than <code>/</code>, then you must either
     * specify the full role ARN (recommended) or prefix the role name with the
     * path.</p>  <p>Depending on how you created your Batch service role, its
     * ARN might contain the <code>service-role</code> path prefix. When you only
     * specify the name of the service role, Batch assumes that your ARN doesn't use
     * the <code>service-role</code> path prefix. Because of this, we recommend that
     * you specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows Batch to make
     * calls to other Amazon Web Services services on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>  <p>If the
     * compute environment has a service-linked role, it can't be changed to use a
     * regular IAM role. Likewise, if the compute environment has a regular IAM role,
     * it can't be changed to use a service-linked role. To update the parameters for
     * the compute environment that require an infrastructure update to change, the
     * <b>AWSServiceRoleForBatch</b> service-linked role must be used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>  <p>If
     * your specified role has a path other than <code>/</code>, then you must either
     * specify the full role ARN (recommended) or prefix the role name with the
     * path.</p>  <p>Depending on how you created your Batch service role, its
     * ARN might contain the <code>service-role</code> path prefix. When you only
     * specify the name of the service role, Batch assumes that your ARN doesn't use
     * the <code>service-role</code> path prefix. Because of this, we recommend that
     * you specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows Batch to make
     * calls to other Amazon Web Services services on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>  <p>If the
     * compute environment has a service-linked role, it can't be changed to use a
     * regular IAM role. Likewise, if the compute environment has a regular IAM role,
     * it can't be changed to use a service-linked role. To update the parameters for
     * the compute environment that require an infrastructure update to change, the
     * <b>AWSServiceRoleForBatch</b> service-linked role must be used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>  <p>If
     * your specified role has a path other than <code>/</code>, then you must either
     * specify the full role ARN (recommended) or prefix the role name with the
     * path.</p>  <p>Depending on how you created your Batch service role, its
     * ARN might contain the <code>service-role</code> path prefix. When you only
     * specify the name of the service role, Batch assumes that your ARN doesn't use
     * the <code>service-role</code> path prefix. Because of this, we recommend that
     * you specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows Batch to make
     * calls to other Amazon Web Services services on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>  <p>If the
     * compute environment has a service-linked role, it can't be changed to use a
     * regular IAM role. Likewise, if the compute environment has a regular IAM role,
     * it can't be changed to use a service-linked role. To update the parameters for
     * the compute environment that require an infrastructure update to change, the
     * <b>AWSServiceRoleForBatch</b> service-linked role must be used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>  <p>If
     * your specified role has a path other than <code>/</code>, then you must either
     * specify the full role ARN (recommended) or prefix the role name with the
     * path.</p>  <p>Depending on how you created your Batch service role, its
     * ARN might contain the <code>service-role</code> path prefix. When you only
     * specify the name of the service role, Batch assumes that your ARN doesn't use
     * the <code>service-role</code> path prefix. Because of this, we recommend that
     * you specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows Batch to make
     * calls to other Amazon Web Services services on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>  <p>If the
     * compute environment has a service-linked role, it can't be changed to use a
     * regular IAM role. Likewise, if the compute environment has a regular IAM role,
     * it can't be changed to use a service-linked role. To update the parameters for
     * the compute environment that require an infrastructure update to change, the
     * <b>AWSServiceRoleForBatch</b> service-linked role must be used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>  <p>If
     * your specified role has a path other than <code>/</code>, then you must either
     * specify the full role ARN (recommended) or prefix the role name with the
     * path.</p>  <p>Depending on how you created your Batch service role, its
     * ARN might contain the <code>service-role</code> path prefix. When you only
     * specify the name of the service role, Batch assumes that your ARN doesn't use
     * the <code>service-role</code> path prefix. Because of this, we recommend that
     * you specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline UpdateComputeEnvironmentRequest& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows Batch to make
     * calls to other Amazon Web Services services on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>  <p>If the
     * compute environment has a service-linked role, it can't be changed to use a
     * regular IAM role. Likewise, if the compute environment has a regular IAM role,
     * it can't be changed to use a service-linked role. To update the parameters for
     * the compute environment that require an infrastructure update to change, the
     * <b>AWSServiceRoleForBatch</b> service-linked role must be used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>  <p>If
     * your specified role has a path other than <code>/</code>, then you must either
     * specify the full role ARN (recommended) or prefix the role name with the
     * path.</p>  <p>Depending on how you created your Batch service role, its
     * ARN might contain the <code>service-role</code> path prefix. When you only
     * specify the name of the service role, Batch assumes that your ARN doesn't use
     * the <code>service-role</code> path prefix. Because of this, we recommend that
     * you specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline UpdateComputeEnvironmentRequest& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows Batch to make
     * calls to other Amazon Web Services services on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>  <p>If the
     * compute environment has a service-linked role, it can't be changed to use a
     * regular IAM role. Likewise, if the compute environment has a regular IAM role,
     * it can't be changed to use a service-linked role. To update the parameters for
     * the compute environment that require an infrastructure update to change, the
     * <b>AWSServiceRoleForBatch</b> service-linked role must be used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>  <p>If
     * your specified role has a path other than <code>/</code>, then you must either
     * specify the full role ARN (recommended) or prefix the role name with the
     * path.</p>  <p>Depending on how you created your Batch service role, its
     * ARN might contain the <code>service-role</code> path prefix. When you only
     * specify the name of the service role, Batch assumes that your ARN doesn't use
     * the <code>service-role</code> path prefix. Because of this, we recommend that
     * you specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline UpdateComputeEnvironmentRequest& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>Specifies the updated infrastructure update policy for the compute
     * environment. For more information about infrastructure updates, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const UpdatePolicy& GetUpdatePolicy() const{ return m_updatePolicy; }

    /**
     * <p>Specifies the updated infrastructure update policy for the compute
     * environment. For more information about infrastructure updates, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline bool UpdatePolicyHasBeenSet() const { return m_updatePolicyHasBeenSet; }

    /**
     * <p>Specifies the updated infrastructure update policy for the compute
     * environment. For more information about infrastructure updates, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetUpdatePolicy(const UpdatePolicy& value) { m_updatePolicyHasBeenSet = true; m_updatePolicy = value; }

    /**
     * <p>Specifies the updated infrastructure update policy for the compute
     * environment. For more information about infrastructure updates, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetUpdatePolicy(UpdatePolicy&& value) { m_updatePolicyHasBeenSet = true; m_updatePolicy = std::move(value); }

    /**
     * <p>Specifies the updated infrastructure update policy for the compute
     * environment. For more information about infrastructure updates, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline UpdateComputeEnvironmentRequest& WithUpdatePolicy(const UpdatePolicy& value) { SetUpdatePolicy(value); return *this;}

    /**
     * <p>Specifies the updated infrastructure update policy for the compute
     * environment. For more information about infrastructure updates, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline UpdateComputeEnvironmentRequest& WithUpdatePolicy(UpdatePolicy&& value) { SetUpdatePolicy(std::move(value)); return *this;}

  private:

    Aws::String m_computeEnvironment;
    bool m_computeEnvironmentHasBeenSet = false;

    CEState m_state;
    bool m_stateHasBeenSet = false;

    int m_unmanagedvCpus;
    bool m_unmanagedvCpusHasBeenSet = false;

    ComputeResourceUpdate m_computeResources;
    bool m_computeResourcesHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    UpdatePolicy m_updatePolicy;
    bool m_updatePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
