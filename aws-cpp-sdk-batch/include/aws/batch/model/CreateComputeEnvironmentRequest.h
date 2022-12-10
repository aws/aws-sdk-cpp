/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/CEType.h>
#include <aws/batch/model/CEState.h>
#include <aws/batch/model/ComputeResource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/EksConfiguration.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   * <p>Contains the parameters for
   * <code>CreateComputeEnvironment</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CreateComputeEnvironmentRequest">AWS
   * API Reference</a></p>
   */
  class CreateComputeEnvironmentRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API CreateComputeEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateComputeEnvironment"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    /**
     * <p>The name for your compute environment. It can be up to 128 characters long.
     * It can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline const Aws::String& GetComputeEnvironmentName() const{ return m_computeEnvironmentName; }

    /**
     * <p>The name for your compute environment. It can be up to 128 characters long.
     * It can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline bool ComputeEnvironmentNameHasBeenSet() const { return m_computeEnvironmentNameHasBeenSet; }

    /**
     * <p>The name for your compute environment. It can be up to 128 characters long.
     * It can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline void SetComputeEnvironmentName(const Aws::String& value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName = value; }

    /**
     * <p>The name for your compute environment. It can be up to 128 characters long.
     * It can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline void SetComputeEnvironmentName(Aws::String&& value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName = std::move(value); }

    /**
     * <p>The name for your compute environment. It can be up to 128 characters long.
     * It can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline void SetComputeEnvironmentName(const char* value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName.assign(value); }

    /**
     * <p>The name for your compute environment. It can be up to 128 characters long.
     * It can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline CreateComputeEnvironmentRequest& WithComputeEnvironmentName(const Aws::String& value) { SetComputeEnvironmentName(value); return *this;}

    /**
     * <p>The name for your compute environment. It can be up to 128 characters long.
     * It can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline CreateComputeEnvironmentRequest& WithComputeEnvironmentName(Aws::String&& value) { SetComputeEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name for your compute environment. It can be up to 128 characters long.
     * It can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline CreateComputeEnvironmentRequest& WithComputeEnvironmentName(const char* value) { SetComputeEnvironmentName(value); return *this;}


    /**
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const CEType& GetType() const{ return m_type; }

    /**
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetType(const CEType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetType(CEType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline CreateComputeEnvironmentRequest& WithType(const CEType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline CreateComputeEnvironmentRequest& WithType(CEType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The state of the compute environment. If the state is <code>ENABLED</code>,
     * then the compute environment accepts jobs from a queue and can scale out
     * automatically based on queues.</p> <p>If the state is <code>ENABLED</code>, then
     * the Batch scheduler can attempt to place jobs from an associated job queue on
     * the compute resources within the environment. If the compute environment is
     * managed, then it can scale its instances out or in automatically, based on the
     * job queue demand.</p> <p>If the state is <code>DISABLED</code>, then the Batch
     * scheduler doesn't attempt to place jobs within the environment. Jobs in a
     * <code>STARTING</code> or <code>RUNNING</code> state continue to progress
     * normally. Managed compute environments in the <code>DISABLED</code> state don't
     * scale out. However, they scale in to <code>minvCpus</code> value after instances
     * become idle.</p>
     */
    inline const CEState& GetState() const{ return m_state; }

    /**
     * <p>The state of the compute environment. If the state is <code>ENABLED</code>,
     * then the compute environment accepts jobs from a queue and can scale out
     * automatically based on queues.</p> <p>If the state is <code>ENABLED</code>, then
     * the Batch scheduler can attempt to place jobs from an associated job queue on
     * the compute resources within the environment. If the compute environment is
     * managed, then it can scale its instances out or in automatically, based on the
     * job queue demand.</p> <p>If the state is <code>DISABLED</code>, then the Batch
     * scheduler doesn't attempt to place jobs within the environment. Jobs in a
     * <code>STARTING</code> or <code>RUNNING</code> state continue to progress
     * normally. Managed compute environments in the <code>DISABLED</code> state don't
     * scale out. However, they scale in to <code>minvCpus</code> value after instances
     * become idle.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the compute environment. If the state is <code>ENABLED</code>,
     * then the compute environment accepts jobs from a queue and can scale out
     * automatically based on queues.</p> <p>If the state is <code>ENABLED</code>, then
     * the Batch scheduler can attempt to place jobs from an associated job queue on
     * the compute resources within the environment. If the compute environment is
     * managed, then it can scale its instances out or in automatically, based on the
     * job queue demand.</p> <p>If the state is <code>DISABLED</code>, then the Batch
     * scheduler doesn't attempt to place jobs within the environment. Jobs in a
     * <code>STARTING</code> or <code>RUNNING</code> state continue to progress
     * normally. Managed compute environments in the <code>DISABLED</code> state don't
     * scale out. However, they scale in to <code>minvCpus</code> value after instances
     * become idle.</p>
     */
    inline void SetState(const CEState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the compute environment. If the state is <code>ENABLED</code>,
     * then the compute environment accepts jobs from a queue and can scale out
     * automatically based on queues.</p> <p>If the state is <code>ENABLED</code>, then
     * the Batch scheduler can attempt to place jobs from an associated job queue on
     * the compute resources within the environment. If the compute environment is
     * managed, then it can scale its instances out or in automatically, based on the
     * job queue demand.</p> <p>If the state is <code>DISABLED</code>, then the Batch
     * scheduler doesn't attempt to place jobs within the environment. Jobs in a
     * <code>STARTING</code> or <code>RUNNING</code> state continue to progress
     * normally. Managed compute environments in the <code>DISABLED</code> state don't
     * scale out. However, they scale in to <code>minvCpus</code> value after instances
     * become idle.</p>
     */
    inline void SetState(CEState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the compute environment. If the state is <code>ENABLED</code>,
     * then the compute environment accepts jobs from a queue and can scale out
     * automatically based on queues.</p> <p>If the state is <code>ENABLED</code>, then
     * the Batch scheduler can attempt to place jobs from an associated job queue on
     * the compute resources within the environment. If the compute environment is
     * managed, then it can scale its instances out or in automatically, based on the
     * job queue demand.</p> <p>If the state is <code>DISABLED</code>, then the Batch
     * scheduler doesn't attempt to place jobs within the environment. Jobs in a
     * <code>STARTING</code> or <code>RUNNING</code> state continue to progress
     * normally. Managed compute environments in the <code>DISABLED</code> state don't
     * scale out. However, they scale in to <code>minvCpus</code> value after instances
     * become idle.</p>
     */
    inline CreateComputeEnvironmentRequest& WithState(const CEState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the compute environment. If the state is <code>ENABLED</code>,
     * then the compute environment accepts jobs from a queue and can scale out
     * automatically based on queues.</p> <p>If the state is <code>ENABLED</code>, then
     * the Batch scheduler can attempt to place jobs from an associated job queue on
     * the compute resources within the environment. If the compute environment is
     * managed, then it can scale its instances out or in automatically, based on the
     * job queue demand.</p> <p>If the state is <code>DISABLED</code>, then the Batch
     * scheduler doesn't attempt to place jobs within the environment. Jobs in a
     * <code>STARTING</code> or <code>RUNNING</code> state continue to progress
     * normally. Managed compute environments in the <code>DISABLED</code> state don't
     * scale out. However, they scale in to <code>minvCpus</code> value after instances
     * become idle.</p>
     */
    inline CreateComputeEnvironmentRequest& WithState(CEState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The maximum number of vCPUs for an unmanaged compute environment. This
     * parameter is only used for fair share scheduling to reserve vCPU capacity for
     * new share identifiers. If this parameter isn't provided for a fair share job
     * queue, no vCPU capacity is reserved.</p>  <p>This parameter is only
     * supported when the <code>type</code> parameter is set to
     * <code>UNMANAGED</code>.</p> 
     */
    inline int GetUnmanagedvCpus() const{ return m_unmanagedvCpus; }

    /**
     * <p>The maximum number of vCPUs for an unmanaged compute environment. This
     * parameter is only used for fair share scheduling to reserve vCPU capacity for
     * new share identifiers. If this parameter isn't provided for a fair share job
     * queue, no vCPU capacity is reserved.</p>  <p>This parameter is only
     * supported when the <code>type</code> parameter is set to
     * <code>UNMANAGED</code>.</p> 
     */
    inline bool UnmanagedvCpusHasBeenSet() const { return m_unmanagedvCpusHasBeenSet; }

    /**
     * <p>The maximum number of vCPUs for an unmanaged compute environment. This
     * parameter is only used for fair share scheduling to reserve vCPU capacity for
     * new share identifiers. If this parameter isn't provided for a fair share job
     * queue, no vCPU capacity is reserved.</p>  <p>This parameter is only
     * supported when the <code>type</code> parameter is set to
     * <code>UNMANAGED</code>.</p> 
     */
    inline void SetUnmanagedvCpus(int value) { m_unmanagedvCpusHasBeenSet = true; m_unmanagedvCpus = value; }

    /**
     * <p>The maximum number of vCPUs for an unmanaged compute environment. This
     * parameter is only used for fair share scheduling to reserve vCPU capacity for
     * new share identifiers. If this parameter isn't provided for a fair share job
     * queue, no vCPU capacity is reserved.</p>  <p>This parameter is only
     * supported when the <code>type</code> parameter is set to
     * <code>UNMANAGED</code>.</p> 
     */
    inline CreateComputeEnvironmentRequest& WithUnmanagedvCpus(int value) { SetUnmanagedvCpus(value); return *this;}


    /**
     * <p>Details about the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const ComputeResource& GetComputeResources() const{ return m_computeResources; }

    /**
     * <p>Details about the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline bool ComputeResourcesHasBeenSet() const { return m_computeResourcesHasBeenSet; }

    /**
     * <p>Details about the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetComputeResources(const ComputeResource& value) { m_computeResourcesHasBeenSet = true; m_computeResources = value; }

    /**
     * <p>Details about the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetComputeResources(ComputeResource&& value) { m_computeResourcesHasBeenSet = true; m_computeResources = std::move(value); }

    /**
     * <p>Details about the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline CreateComputeEnvironmentRequest& WithComputeResources(const ComputeResource& value) { SetComputeResources(value); return *this;}

    /**
     * <p>Details about the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline CreateComputeEnvironmentRequest& WithComputeResources(ComputeResource&& value) { SetComputeResources(std::move(value)); return *this;}


    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows Batch to make
     * calls to other Amazon Web Services services on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>  <p>If your
     * account already created the Batch service-linked role, that role is used by
     * default for your compute environment unless you specify a different role here.
     * If the Batch service-linked role doesn't exist in your account, and no role is
     * specified here, the service attempts to create the Batch service-linked role in
     * your account.</p>  <p>If your specified role has a path other than
     * <code>/</code>, then you must specify either the full role ARN (recommended) or
     * prefix the role name with the path. For example, if a role with the name
     * <code>bar</code> has a path of <code>/foo/</code>, specify <code>/foo/bar</code>
     * as the role name. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>  <p>Depending on how
     * you created your Batch service role, its ARN might contain the
     * <code>service-role</code> path prefix. When you only specify the name of the
     * service role, Batch assumes that your ARN doesn't use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows Batch to make
     * calls to other Amazon Web Services services on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>  <p>If your
     * account already created the Batch service-linked role, that role is used by
     * default for your compute environment unless you specify a different role here.
     * If the Batch service-linked role doesn't exist in your account, and no role is
     * specified here, the service attempts to create the Batch service-linked role in
     * your account.</p>  <p>If your specified role has a path other than
     * <code>/</code>, then you must specify either the full role ARN (recommended) or
     * prefix the role name with the path. For example, if a role with the name
     * <code>bar</code> has a path of <code>/foo/</code>, specify <code>/foo/bar</code>
     * as the role name. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>  <p>Depending on how
     * you created your Batch service role, its ARN might contain the
     * <code>service-role</code> path prefix. When you only specify the name of the
     * service role, Batch assumes that your ARN doesn't use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows Batch to make
     * calls to other Amazon Web Services services on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>  <p>If your
     * account already created the Batch service-linked role, that role is used by
     * default for your compute environment unless you specify a different role here.
     * If the Batch service-linked role doesn't exist in your account, and no role is
     * specified here, the service attempts to create the Batch service-linked role in
     * your account.</p>  <p>If your specified role has a path other than
     * <code>/</code>, then you must specify either the full role ARN (recommended) or
     * prefix the role name with the path. For example, if a role with the name
     * <code>bar</code> has a path of <code>/foo/</code>, specify <code>/foo/bar</code>
     * as the role name. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>  <p>Depending on how
     * you created your Batch service role, its ARN might contain the
     * <code>service-role</code> path prefix. When you only specify the name of the
     * service role, Batch assumes that your ARN doesn't use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows Batch to make
     * calls to other Amazon Web Services services on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>  <p>If your
     * account already created the Batch service-linked role, that role is used by
     * default for your compute environment unless you specify a different role here.
     * If the Batch service-linked role doesn't exist in your account, and no role is
     * specified here, the service attempts to create the Batch service-linked role in
     * your account.</p>  <p>If your specified role has a path other than
     * <code>/</code>, then you must specify either the full role ARN (recommended) or
     * prefix the role name with the path. For example, if a role with the name
     * <code>bar</code> has a path of <code>/foo/</code>, specify <code>/foo/bar</code>
     * as the role name. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>  <p>Depending on how
     * you created your Batch service role, its ARN might contain the
     * <code>service-role</code> path prefix. When you only specify the name of the
     * service role, Batch assumes that your ARN doesn't use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows Batch to make
     * calls to other Amazon Web Services services on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>  <p>If your
     * account already created the Batch service-linked role, that role is used by
     * default for your compute environment unless you specify a different role here.
     * If the Batch service-linked role doesn't exist in your account, and no role is
     * specified here, the service attempts to create the Batch service-linked role in
     * your account.</p>  <p>If your specified role has a path other than
     * <code>/</code>, then you must specify either the full role ARN (recommended) or
     * prefix the role name with the path. For example, if a role with the name
     * <code>bar</code> has a path of <code>/foo/</code>, specify <code>/foo/bar</code>
     * as the role name. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>  <p>Depending on how
     * you created your Batch service role, its ARN might contain the
     * <code>service-role</code> path prefix. When you only specify the name of the
     * service role, Batch assumes that your ARN doesn't use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows Batch to make
     * calls to other Amazon Web Services services on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>  <p>If your
     * account already created the Batch service-linked role, that role is used by
     * default for your compute environment unless you specify a different role here.
     * If the Batch service-linked role doesn't exist in your account, and no role is
     * specified here, the service attempts to create the Batch service-linked role in
     * your account.</p>  <p>If your specified role has a path other than
     * <code>/</code>, then you must specify either the full role ARN (recommended) or
     * prefix the role name with the path. For example, if a role with the name
     * <code>bar</code> has a path of <code>/foo/</code>, specify <code>/foo/bar</code>
     * as the role name. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>  <p>Depending on how
     * you created your Batch service role, its ARN might contain the
     * <code>service-role</code> path prefix. When you only specify the name of the
     * service role, Batch assumes that your ARN doesn't use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline CreateComputeEnvironmentRequest& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows Batch to make
     * calls to other Amazon Web Services services on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>  <p>If your
     * account already created the Batch service-linked role, that role is used by
     * default for your compute environment unless you specify a different role here.
     * If the Batch service-linked role doesn't exist in your account, and no role is
     * specified here, the service attempts to create the Batch service-linked role in
     * your account.</p>  <p>If your specified role has a path other than
     * <code>/</code>, then you must specify either the full role ARN (recommended) or
     * prefix the role name with the path. For example, if a role with the name
     * <code>bar</code> has a path of <code>/foo/</code>, specify <code>/foo/bar</code>
     * as the role name. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>  <p>Depending on how
     * you created your Batch service role, its ARN might contain the
     * <code>service-role</code> path prefix. When you only specify the name of the
     * service role, Batch assumes that your ARN doesn't use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline CreateComputeEnvironmentRequest& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows Batch to make
     * calls to other Amazon Web Services services on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>  <p>If your
     * account already created the Batch service-linked role, that role is used by
     * default for your compute environment unless you specify a different role here.
     * If the Batch service-linked role doesn't exist in your account, and no role is
     * specified here, the service attempts to create the Batch service-linked role in
     * your account.</p>  <p>If your specified role has a path other than
     * <code>/</code>, then you must specify either the full role ARN (recommended) or
     * prefix the role name with the path. For example, if a role with the name
     * <code>bar</code> has a path of <code>/foo/</code>, specify <code>/foo/bar</code>
     * as the role name. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>  <p>Depending on how
     * you created your Batch service role, its ARN might contain the
     * <code>service-role</code> path prefix. When you only specify the name of the
     * service role, Batch assumes that your ARN doesn't use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline CreateComputeEnvironmentRequest& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>The tags that you apply to the compute environment to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in <i>Amazon Web Services General
     * Reference</i>.</p> <p>These tags can be updated or removed using the <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_TagResource.html">TagResource</a>
     * and <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_UntagResource.html">UntagResource</a>
     * API operations. These tags don't propagate to the underlying compute
     * resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that you apply to the compute environment to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in <i>Amazon Web Services General
     * Reference</i>.</p> <p>These tags can be updated or removed using the <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_TagResource.html">TagResource</a>
     * and <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_UntagResource.html">UntagResource</a>
     * API operations. These tags don't propagate to the underlying compute
     * resources.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags that you apply to the compute environment to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in <i>Amazon Web Services General
     * Reference</i>.</p> <p>These tags can be updated or removed using the <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_TagResource.html">TagResource</a>
     * and <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_UntagResource.html">UntagResource</a>
     * API operations. These tags don't propagate to the underlying compute
     * resources.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags that you apply to the compute environment to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in <i>Amazon Web Services General
     * Reference</i>.</p> <p>These tags can be updated or removed using the <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_TagResource.html">TagResource</a>
     * and <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_UntagResource.html">UntagResource</a>
     * API operations. These tags don't propagate to the underlying compute
     * resources.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags that you apply to the compute environment to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in <i>Amazon Web Services General
     * Reference</i>.</p> <p>These tags can be updated or removed using the <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_TagResource.html">TagResource</a>
     * and <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_UntagResource.html">UntagResource</a>
     * API operations. These tags don't propagate to the underlying compute
     * resources.</p>
     */
    inline CreateComputeEnvironmentRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that you apply to the compute environment to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in <i>Amazon Web Services General
     * Reference</i>.</p> <p>These tags can be updated or removed using the <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_TagResource.html">TagResource</a>
     * and <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_UntagResource.html">UntagResource</a>
     * API operations. These tags don't propagate to the underlying compute
     * resources.</p>
     */
    inline CreateComputeEnvironmentRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that you apply to the compute environment to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in <i>Amazon Web Services General
     * Reference</i>.</p> <p>These tags can be updated or removed using the <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_TagResource.html">TagResource</a>
     * and <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_UntagResource.html">UntagResource</a>
     * API operations. These tags don't propagate to the underlying compute
     * resources.</p>
     */
    inline CreateComputeEnvironmentRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags that you apply to the compute environment to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in <i>Amazon Web Services General
     * Reference</i>.</p> <p>These tags can be updated or removed using the <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_TagResource.html">TagResource</a>
     * and <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_UntagResource.html">UntagResource</a>
     * API operations. These tags don't propagate to the underlying compute
     * resources.</p>
     */
    inline CreateComputeEnvironmentRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that you apply to the compute environment to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in <i>Amazon Web Services General
     * Reference</i>.</p> <p>These tags can be updated or removed using the <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_TagResource.html">TagResource</a>
     * and <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_UntagResource.html">UntagResource</a>
     * API operations. These tags don't propagate to the underlying compute
     * resources.</p>
     */
    inline CreateComputeEnvironmentRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that you apply to the compute environment to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in <i>Amazon Web Services General
     * Reference</i>.</p> <p>These tags can be updated or removed using the <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_TagResource.html">TagResource</a>
     * and <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_UntagResource.html">UntagResource</a>
     * API operations. These tags don't propagate to the underlying compute
     * resources.</p>
     */
    inline CreateComputeEnvironmentRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags that you apply to the compute environment to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in <i>Amazon Web Services General
     * Reference</i>.</p> <p>These tags can be updated or removed using the <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_TagResource.html">TagResource</a>
     * and <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_UntagResource.html">UntagResource</a>
     * API operations. These tags don't propagate to the underlying compute
     * resources.</p>
     */
    inline CreateComputeEnvironmentRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that you apply to the compute environment to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in <i>Amazon Web Services General
     * Reference</i>.</p> <p>These tags can be updated or removed using the <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_TagResource.html">TagResource</a>
     * and <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_UntagResource.html">UntagResource</a>
     * API operations. These tags don't propagate to the underlying compute
     * resources.</p>
     */
    inline CreateComputeEnvironmentRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that you apply to the compute environment to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in <i>Amazon Web Services General
     * Reference</i>.</p> <p>These tags can be updated or removed using the <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_TagResource.html">TagResource</a>
     * and <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_UntagResource.html">UntagResource</a>
     * API operations. These tags don't propagate to the underlying compute
     * resources.</p>
     */
    inline CreateComputeEnvironmentRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The details for the Amazon EKS cluster that supports the compute
     * environment.</p>
     */
    inline const EksConfiguration& GetEksConfiguration() const{ return m_eksConfiguration; }

    /**
     * <p>The details for the Amazon EKS cluster that supports the compute
     * environment.</p>
     */
    inline bool EksConfigurationHasBeenSet() const { return m_eksConfigurationHasBeenSet; }

    /**
     * <p>The details for the Amazon EKS cluster that supports the compute
     * environment.</p>
     */
    inline void SetEksConfiguration(const EksConfiguration& value) { m_eksConfigurationHasBeenSet = true; m_eksConfiguration = value; }

    /**
     * <p>The details for the Amazon EKS cluster that supports the compute
     * environment.</p>
     */
    inline void SetEksConfiguration(EksConfiguration&& value) { m_eksConfigurationHasBeenSet = true; m_eksConfiguration = std::move(value); }

    /**
     * <p>The details for the Amazon EKS cluster that supports the compute
     * environment.</p>
     */
    inline CreateComputeEnvironmentRequest& WithEksConfiguration(const EksConfiguration& value) { SetEksConfiguration(value); return *this;}

    /**
     * <p>The details for the Amazon EKS cluster that supports the compute
     * environment.</p>
     */
    inline CreateComputeEnvironmentRequest& WithEksConfiguration(EksConfiguration&& value) { SetEksConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_computeEnvironmentName;
    bool m_computeEnvironmentNameHasBeenSet = false;

    CEType m_type;
    bool m_typeHasBeenSet = false;

    CEState m_state;
    bool m_stateHasBeenSet = false;

    int m_unmanagedvCpus;
    bool m_unmanagedvCpusHasBeenSet = false;

    ComputeResource m_computeResources;
    bool m_computeResourcesHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    EksConfiguration m_eksConfiguration;
    bool m_eksConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
