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


    ///@{
    /**
     * <p>The name or full Amazon Resource Name (ARN) of the compute environment to
     * update.</p>
     */
    inline const Aws::String& GetComputeEnvironment() const{ return m_computeEnvironment; }
    inline bool ComputeEnvironmentHasBeenSet() const { return m_computeEnvironmentHasBeenSet; }
    inline void SetComputeEnvironment(const Aws::String& value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment = value; }
    inline void SetComputeEnvironment(Aws::String&& value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment = std::move(value); }
    inline void SetComputeEnvironment(const char* value) { m_computeEnvironmentHasBeenSet = true; m_computeEnvironment.assign(value); }
    inline UpdateComputeEnvironmentRequest& WithComputeEnvironment(const Aws::String& value) { SetComputeEnvironment(value); return *this;}
    inline UpdateComputeEnvironmentRequest& WithComputeEnvironment(Aws::String&& value) { SetComputeEnvironment(std::move(value)); return *this;}
    inline UpdateComputeEnvironmentRequest& WithComputeEnvironment(const char* value) { SetComputeEnvironment(value); return *this;}
    ///@}

    ///@{
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
     * environments in the <code>DISABLED</code> state don't scale out. </p> 
     * <p>Compute environments in a <code>DISABLED</code> state may continue to incur
     * billing charges. To prevent additional charges, turn off and then delete the
     * compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environment_parameters.html#compute_environment_state">State</a>
     * in the <i>Batch User Guide</i>.</p>  <p>When an instance is idle, the
     * instance scales down to the <code>minvCpus</code> value. However, the instance
     * size doesn't change. For example, consider a <code>c5.8xlarge</code> instance
     * with a <code>minvCpus</code> value of <code>4</code> and a
     * <code>desiredvCpus</code> value of <code>36</code>. This instance doesn't scale
     * down to a <code>c5.large</code> instance.</p>
     */
    inline const CEState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const CEState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(CEState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline UpdateComputeEnvironmentRequest& WithState(const CEState& value) { SetState(value); return *this;}
    inline UpdateComputeEnvironmentRequest& WithState(CEState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of vCPUs expected to be used for an unmanaged compute
     * environment. Don't specify this parameter for a managed compute environment.
     * This parameter is only used for fair share scheduling to reserve vCPU capacity
     * for new share identifiers. If this parameter isn't provided for a fair share job
     * queue, no vCPU capacity is reserved.</p>
     */
    inline int GetUnmanagedvCpus() const{ return m_unmanagedvCpus; }
    inline bool UnmanagedvCpusHasBeenSet() const { return m_unmanagedvCpusHasBeenSet; }
    inline void SetUnmanagedvCpus(int value) { m_unmanagedvCpusHasBeenSet = true; m_unmanagedvCpus = value; }
    inline UpdateComputeEnvironmentRequest& WithUnmanagedvCpus(int value) { SetUnmanagedvCpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the compute resources managed by the compute environment. Required
     * for a managed compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const ComputeResourceUpdate& GetComputeResources() const{ return m_computeResources; }
    inline bool ComputeResourcesHasBeenSet() const { return m_computeResourcesHasBeenSet; }
    inline void SetComputeResources(const ComputeResourceUpdate& value) { m_computeResourcesHasBeenSet = true; m_computeResources = value; }
    inline void SetComputeResources(ComputeResourceUpdate&& value) { m_computeResourcesHasBeenSet = true; m_computeResources = std::move(value); }
    inline UpdateComputeEnvironmentRequest& WithComputeResources(const ComputeResourceUpdate& value) { SetComputeResources(value); return *this;}
    inline UpdateComputeEnvironmentRequest& WithComputeResources(ComputeResourceUpdate&& value) { SetComputeResources(std::move(value)); return *this;}
    ///@}

    ///@{
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
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }
    inline UpdateComputeEnvironmentRequest& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}
    inline UpdateComputeEnvironmentRequest& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}
    inline UpdateComputeEnvironmentRequest& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the updated infrastructure update policy for the compute
     * environment. For more information about infrastructure updates, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const UpdatePolicy& GetUpdatePolicy() const{ return m_updatePolicy; }
    inline bool UpdatePolicyHasBeenSet() const { return m_updatePolicyHasBeenSet; }
    inline void SetUpdatePolicy(const UpdatePolicy& value) { m_updatePolicyHasBeenSet = true; m_updatePolicy = value; }
    inline void SetUpdatePolicy(UpdatePolicy&& value) { m_updatePolicyHasBeenSet = true; m_updatePolicy = std::move(value); }
    inline UpdateComputeEnvironmentRequest& WithUpdatePolicy(const UpdatePolicy& value) { SetUpdatePolicy(value); return *this;}
    inline UpdateComputeEnvironmentRequest& WithUpdatePolicy(UpdatePolicy&& value) { SetUpdatePolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetContext() const{ return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    inline void SetContext(const Aws::String& value) { m_contextHasBeenSet = true; m_context = value; }
    inline void SetContext(Aws::String&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }
    inline void SetContext(const char* value) { m_contextHasBeenSet = true; m_context.assign(value); }
    inline UpdateComputeEnvironmentRequest& WithContext(const Aws::String& value) { SetContext(value); return *this;}
    inline UpdateComputeEnvironmentRequest& WithContext(Aws::String&& value) { SetContext(std::move(value)); return *this;}
    inline UpdateComputeEnvironmentRequest& WithContext(const char* value) { SetContext(value); return *this;}
    ///@}
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

    Aws::String m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
