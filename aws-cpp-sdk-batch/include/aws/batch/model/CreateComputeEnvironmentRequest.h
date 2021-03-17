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
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline const CEType& GetType() const{ return m_type; }

    /**
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetType(const CEType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetType(CEType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline CreateComputeEnvironmentRequest& WithType(const CEType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline CreateComputeEnvironmentRequest& WithType(CEType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The state of the compute environment. If the state is <code>ENABLED</code>,
     * then the compute environment accepts jobs from a queue and can scale out
     * automatically based on queues.</p> <p>If the state is <code>ENABLED</code>, then
     * the AWS Batch scheduler can attempt to place jobs from an associated job queue
     * on the compute resources within the environment. If the compute environment is
     * managed, then it can scale its instances out or in automatically, based on the
     * job queue demand.</p> <p>If the state is <code>DISABLED</code>, then the AWS
     * Batch scheduler doesn't attempt to place jobs within the environment. Jobs in a
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
     * the AWS Batch scheduler can attempt to place jobs from an associated job queue
     * on the compute resources within the environment. If the compute environment is
     * managed, then it can scale its instances out or in automatically, based on the
     * job queue demand.</p> <p>If the state is <code>DISABLED</code>, then the AWS
     * Batch scheduler doesn't attempt to place jobs within the environment. Jobs in a
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
     * the AWS Batch scheduler can attempt to place jobs from an associated job queue
     * on the compute resources within the environment. If the compute environment is
     * managed, then it can scale its instances out or in automatically, based on the
     * job queue demand.</p> <p>If the state is <code>DISABLED</code>, then the AWS
     * Batch scheduler doesn't attempt to place jobs within the environment. Jobs in a
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
     * the AWS Batch scheduler can attempt to place jobs from an associated job queue
     * on the compute resources within the environment. If the compute environment is
     * managed, then it can scale its instances out or in automatically, based on the
     * job queue demand.</p> <p>If the state is <code>DISABLED</code>, then the AWS
     * Batch scheduler doesn't attempt to place jobs within the environment. Jobs in a
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
     * the AWS Batch scheduler can attempt to place jobs from an associated job queue
     * on the compute resources within the environment. If the compute environment is
     * managed, then it can scale its instances out or in automatically, based on the
     * job queue demand.</p> <p>If the state is <code>DISABLED</code>, then the AWS
     * Batch scheduler doesn't attempt to place jobs within the environment. Jobs in a
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
     * the AWS Batch scheduler can attempt to place jobs from an associated job queue
     * on the compute resources within the environment. If the compute environment is
     * managed, then it can scale its instances out or in automatically, based on the
     * job queue demand.</p> <p>If the state is <code>DISABLED</code>, then the AWS
     * Batch scheduler doesn't attempt to place jobs within the environment. Jobs in a
     * <code>STARTING</code> or <code>RUNNING</code> state continue to progress
     * normally. Managed compute environments in the <code>DISABLED</code> state don't
     * scale out. However, they scale in to <code>minvCpus</code> value after instances
     * become idle.</p>
     */
    inline CreateComputeEnvironmentRequest& WithState(CEState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Details about the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline const ComputeResource& GetComputeResources() const{ return m_computeResources; }

    /**
     * <p>Details about the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline bool ComputeResourcesHasBeenSet() const { return m_computeResourcesHasBeenSet; }

    /**
     * <p>Details about the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetComputeResources(const ComputeResource& value) { m_computeResourcesHasBeenSet = true; m_computeResources = value; }

    /**
     * <p>Details about the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetComputeResources(ComputeResource&& value) { m_computeResourcesHasBeenSet = true; m_computeResources = std::move(value); }

    /**
     * <p>Details about the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline CreateComputeEnvironmentRequest& WithComputeResources(const ComputeResource& value) { SetComputeResources(value); return *this;}

    /**
     * <p>Details about the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline CreateComputeEnvironmentRequest& WithComputeResources(ComputeResource&& value) { SetComputeResources(std::move(value)); return *this;}


    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">AWS
     * Batch service IAM role</a> in the <i>AWS Batch User Guide</i>.</p> 
     * <p>If your account has already created the AWS Batch service-linked role, that
     * role is used by default for your compute environment unless you specify a role
     * here. If the AWS Batch service-linked role does not exist in your account, and
     * no role is specified here, the service will try to create the AWS Batch
     * service-linked role in your account.</p>  <p>If your specified role
     * has a path other than <code>/</code>, then you must specify either the full role
     * ARN (recommended) or prefix the role name with the path. For example, if a role
     * with the name <code>bar</code> has a path of <code>/foo/</code> then you would
     * specify <code>/foo/bar</code> as the role name. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>  <p>Depending on how
     * you created your AWS Batch service role, its ARN might contain the
     * <code>service-role</code> path prefix. When you only specify the name of the
     * service role, AWS Batch assumes that your ARN doesn't use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">AWS
     * Batch service IAM role</a> in the <i>AWS Batch User Guide</i>.</p> 
     * <p>If your account has already created the AWS Batch service-linked role, that
     * role is used by default for your compute environment unless you specify a role
     * here. If the AWS Batch service-linked role does not exist in your account, and
     * no role is specified here, the service will try to create the AWS Batch
     * service-linked role in your account.</p>  <p>If your specified role
     * has a path other than <code>/</code>, then you must specify either the full role
     * ARN (recommended) or prefix the role name with the path. For example, if a role
     * with the name <code>bar</code> has a path of <code>/foo/</code> then you would
     * specify <code>/foo/bar</code> as the role name. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>  <p>Depending on how
     * you created your AWS Batch service role, its ARN might contain the
     * <code>service-role</code> path prefix. When you only specify the name of the
     * service role, AWS Batch assumes that your ARN doesn't use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">AWS
     * Batch service IAM role</a> in the <i>AWS Batch User Guide</i>.</p> 
     * <p>If your account has already created the AWS Batch service-linked role, that
     * role is used by default for your compute environment unless you specify a role
     * here. If the AWS Batch service-linked role does not exist in your account, and
     * no role is specified here, the service will try to create the AWS Batch
     * service-linked role in your account.</p>  <p>If your specified role
     * has a path other than <code>/</code>, then you must specify either the full role
     * ARN (recommended) or prefix the role name with the path. For example, if a role
     * with the name <code>bar</code> has a path of <code>/foo/</code> then you would
     * specify <code>/foo/bar</code> as the role name. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>  <p>Depending on how
     * you created your AWS Batch service role, its ARN might contain the
     * <code>service-role</code> path prefix. When you only specify the name of the
     * service role, AWS Batch assumes that your ARN doesn't use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">AWS
     * Batch service IAM role</a> in the <i>AWS Batch User Guide</i>.</p> 
     * <p>If your account has already created the AWS Batch service-linked role, that
     * role is used by default for your compute environment unless you specify a role
     * here. If the AWS Batch service-linked role does not exist in your account, and
     * no role is specified here, the service will try to create the AWS Batch
     * service-linked role in your account.</p>  <p>If your specified role
     * has a path other than <code>/</code>, then you must specify either the full role
     * ARN (recommended) or prefix the role name with the path. For example, if a role
     * with the name <code>bar</code> has a path of <code>/foo/</code> then you would
     * specify <code>/foo/bar</code> as the role name. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>  <p>Depending on how
     * you created your AWS Batch service role, its ARN might contain the
     * <code>service-role</code> path prefix. When you only specify the name of the
     * service role, AWS Batch assumes that your ARN doesn't use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">AWS
     * Batch service IAM role</a> in the <i>AWS Batch User Guide</i>.</p> 
     * <p>If your account has already created the AWS Batch service-linked role, that
     * role is used by default for your compute environment unless you specify a role
     * here. If the AWS Batch service-linked role does not exist in your account, and
     * no role is specified here, the service will try to create the AWS Batch
     * service-linked role in your account.</p>  <p>If your specified role
     * has a path other than <code>/</code>, then you must specify either the full role
     * ARN (recommended) or prefix the role name with the path. For example, if a role
     * with the name <code>bar</code> has a path of <code>/foo/</code> then you would
     * specify <code>/foo/bar</code> as the role name. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>  <p>Depending on how
     * you created your AWS Batch service role, its ARN might contain the
     * <code>service-role</code> path prefix. When you only specify the name of the
     * service role, AWS Batch assumes that your ARN doesn't use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">AWS
     * Batch service IAM role</a> in the <i>AWS Batch User Guide</i>.</p> 
     * <p>If your account has already created the AWS Batch service-linked role, that
     * role is used by default for your compute environment unless you specify a role
     * here. If the AWS Batch service-linked role does not exist in your account, and
     * no role is specified here, the service will try to create the AWS Batch
     * service-linked role in your account.</p>  <p>If your specified role
     * has a path other than <code>/</code>, then you must specify either the full role
     * ARN (recommended) or prefix the role name with the path. For example, if a role
     * with the name <code>bar</code> has a path of <code>/foo/</code> then you would
     * specify <code>/foo/bar</code> as the role name. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>  <p>Depending on how
     * you created your AWS Batch service role, its ARN might contain the
     * <code>service-role</code> path prefix. When you only specify the name of the
     * service role, AWS Batch assumes that your ARN doesn't use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline CreateComputeEnvironmentRequest& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">AWS
     * Batch service IAM role</a> in the <i>AWS Batch User Guide</i>.</p> 
     * <p>If your account has already created the AWS Batch service-linked role, that
     * role is used by default for your compute environment unless you specify a role
     * here. If the AWS Batch service-linked role does not exist in your account, and
     * no role is specified here, the service will try to create the AWS Batch
     * service-linked role in your account.</p>  <p>If your specified role
     * has a path other than <code>/</code>, then you must specify either the full role
     * ARN (recommended) or prefix the role name with the path. For example, if a role
     * with the name <code>bar</code> has a path of <code>/foo/</code> then you would
     * specify <code>/foo/bar</code> as the role name. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>  <p>Depending on how
     * you created your AWS Batch service role, its ARN might contain the
     * <code>service-role</code> path prefix. When you only specify the name of the
     * service role, AWS Batch assumes that your ARN doesn't use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline CreateComputeEnvironmentRequest& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">AWS
     * Batch service IAM role</a> in the <i>AWS Batch User Guide</i>.</p> 
     * <p>If your account has already created the AWS Batch service-linked role, that
     * role is used by default for your compute environment unless you specify a role
     * here. If the AWS Batch service-linked role does not exist in your account, and
     * no role is specified here, the service will try to create the AWS Batch
     * service-linked role in your account.</p>  <p>If your specified role
     * has a path other than <code>/</code>, then you must specify either the full role
     * ARN (recommended) or prefix the role name with the path. For example, if a role
     * with the name <code>bar</code> has a path of <code>/foo/</code> then you would
     * specify <code>/foo/bar</code> as the role name. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>  <p>Depending on how
     * you created your AWS Batch service role, its ARN might contain the
     * <code>service-role</code> path prefix. When you only specify the name of the
     * service role, AWS Batch assumes that your ARN doesn't use the
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
     * AWS Resources</a> in <i>AWS General Reference</i>.</p> <p>These tags can be
     * updated or removed using the <a
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
     * AWS Resources</a> in <i>AWS General Reference</i>.</p> <p>These tags can be
     * updated or removed using the <a
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
     * AWS Resources</a> in <i>AWS General Reference</i>.</p> <p>These tags can be
     * updated or removed using the <a
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
     * AWS Resources</a> in <i>AWS General Reference</i>.</p> <p>These tags can be
     * updated or removed using the <a
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
     * AWS Resources</a> in <i>AWS General Reference</i>.</p> <p>These tags can be
     * updated or removed using the <a
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
     * AWS Resources</a> in <i>AWS General Reference</i>.</p> <p>These tags can be
     * updated or removed using the <a
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
     * AWS Resources</a> in <i>AWS General Reference</i>.</p> <p>These tags can be
     * updated or removed using the <a
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
     * AWS Resources</a> in <i>AWS General Reference</i>.</p> <p>These tags can be
     * updated or removed using the <a
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
     * AWS Resources</a> in <i>AWS General Reference</i>.</p> <p>These tags can be
     * updated or removed using the <a
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
     * AWS Resources</a> in <i>AWS General Reference</i>.</p> <p>These tags can be
     * updated or removed using the <a
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
     * AWS Resources</a> in <i>AWS General Reference</i>.</p> <p>These tags can be
     * updated or removed using the <a
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
     * AWS Resources</a> in <i>AWS General Reference</i>.</p> <p>These tags can be
     * updated or removed using the <a
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
     * AWS Resources</a> in <i>AWS General Reference</i>.</p> <p>These tags can be
     * updated or removed using the <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_TagResource.html">TagResource</a>
     * and <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_UntagResource.html">UntagResource</a>
     * API operations. These tags don't propagate to the underlying compute
     * resources.</p>
     */
    inline CreateComputeEnvironmentRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
