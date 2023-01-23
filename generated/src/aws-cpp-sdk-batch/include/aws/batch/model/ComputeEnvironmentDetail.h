/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/CEType.h>
#include <aws/batch/model/CEState.h>
#include <aws/batch/model/CEStatus.h>
#include <aws/batch/model/ComputeResource.h>
#include <aws/batch/model/UpdatePolicy.h>
#include <aws/batch/model/EksConfiguration.h>
#include <aws/batch/model/OrchestrationType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Batch
{
namespace Model
{

  /**
   * <p>An object that represents an Batch compute environment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ComputeEnvironmentDetail">AWS
   * API Reference</a></p>
   */
  class ComputeEnvironmentDetail
  {
  public:
    AWS_BATCH_API ComputeEnvironmentDetail();
    AWS_BATCH_API ComputeEnvironmentDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ComputeEnvironmentDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the compute environment. It can be up to 128 characters long. It
     * can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline const Aws::String& GetComputeEnvironmentName() const{ return m_computeEnvironmentName; }

    /**
     * <p>The name of the compute environment. It can be up to 128 characters long. It
     * can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline bool ComputeEnvironmentNameHasBeenSet() const { return m_computeEnvironmentNameHasBeenSet; }

    /**
     * <p>The name of the compute environment. It can be up to 128 characters long. It
     * can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline void SetComputeEnvironmentName(const Aws::String& value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName = value; }

    /**
     * <p>The name of the compute environment. It can be up to 128 characters long. It
     * can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline void SetComputeEnvironmentName(Aws::String&& value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName = std::move(value); }

    /**
     * <p>The name of the compute environment. It can be up to 128 characters long. It
     * can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline void SetComputeEnvironmentName(const char* value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName.assign(value); }

    /**
     * <p>The name of the compute environment. It can be up to 128 characters long. It
     * can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline ComputeEnvironmentDetail& WithComputeEnvironmentName(const Aws::String& value) { SetComputeEnvironmentName(value); return *this;}

    /**
     * <p>The name of the compute environment. It can be up to 128 characters long. It
     * can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline ComputeEnvironmentDetail& WithComputeEnvironmentName(Aws::String&& value) { SetComputeEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the compute environment. It can be up to 128 characters long. It
     * can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline ComputeEnvironmentDetail& WithComputeEnvironmentName(const char* value) { SetComputeEnvironmentName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline const Aws::String& GetComputeEnvironmentArn() const{ return m_computeEnvironmentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline bool ComputeEnvironmentArnHasBeenSet() const { return m_computeEnvironmentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline void SetComputeEnvironmentArn(const Aws::String& value) { m_computeEnvironmentArnHasBeenSet = true; m_computeEnvironmentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline void SetComputeEnvironmentArn(Aws::String&& value) { m_computeEnvironmentArnHasBeenSet = true; m_computeEnvironmentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline void SetComputeEnvironmentArn(const char* value) { m_computeEnvironmentArnHasBeenSet = true; m_computeEnvironmentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& WithComputeEnvironmentArn(const Aws::String& value) { SetComputeEnvironmentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& WithComputeEnvironmentArn(Aws::String&& value) { SetComputeEnvironmentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& WithComputeEnvironmentArn(const char* value) { SetComputeEnvironmentArn(value); return *this;}


    /**
     * <p>The maximum number of VCPUs expected to be used for an unmanaged compute
     * environment.</p>
     */
    inline int GetUnmanagedvCpus() const{ return m_unmanagedvCpus; }

    /**
     * <p>The maximum number of VCPUs expected to be used for an unmanaged compute
     * environment.</p>
     */
    inline bool UnmanagedvCpusHasBeenSet() const { return m_unmanagedvCpusHasBeenSet; }

    /**
     * <p>The maximum number of VCPUs expected to be used for an unmanaged compute
     * environment.</p>
     */
    inline void SetUnmanagedvCpus(int value) { m_unmanagedvCpusHasBeenSet = true; m_unmanagedvCpus = value; }

    /**
     * <p>The maximum number of VCPUs expected to be used for an unmanaged compute
     * environment.</p>
     */
    inline ComputeEnvironmentDetail& WithUnmanagedvCpus(int value) { SetUnmanagedvCpus(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster that the
     * compute environment uses.</p>
     */
    inline const Aws::String& GetEcsClusterArn() const{ return m_ecsClusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster that the
     * compute environment uses.</p>
     */
    inline bool EcsClusterArnHasBeenSet() const { return m_ecsClusterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster that the
     * compute environment uses.</p>
     */
    inline void SetEcsClusterArn(const Aws::String& value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster that the
     * compute environment uses.</p>
     */
    inline void SetEcsClusterArn(Aws::String&& value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster that the
     * compute environment uses.</p>
     */
    inline void SetEcsClusterArn(const char* value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster that the
     * compute environment uses.</p>
     */
    inline ComputeEnvironmentDetail& WithEcsClusterArn(const Aws::String& value) { SetEcsClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster that the
     * compute environment uses.</p>
     */
    inline ComputeEnvironmentDetail& WithEcsClusterArn(Aws::String&& value) { SetEcsClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster that the
     * compute environment uses.</p>
     */
    inline ComputeEnvironmentDetail& WithEcsClusterArn(const char* value) { SetEcsClusterArn(value); return *this;}


    /**
     * <p>The tags applied to the compute environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags applied to the compute environment.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags applied to the compute environment.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags applied to the compute environment.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags applied to the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags applied to the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags applied to the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags applied to the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags applied to the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags applied to the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags applied to the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags applied to the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags applied to the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const CEType& GetType() const{ return m_type; }

    /**
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetType(const CEType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetType(CEType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ComputeEnvironmentDetail& WithType(const CEType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ComputeEnvironmentDetail& WithType(CEType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The state of the compute environment. The valid values are
     * <code>ENABLED</code> or <code>DISABLED</code>.</p> <p>If the state is
     * <code>ENABLED</code>, then the Batch scheduler can attempt to place jobs from an
     * associated job queue on the compute resources within the environment. If the
     * compute environment is managed, then it can scale its instances out or in
     * automatically based on the job queue demand.</p> <p>If the state is
     * <code>DISABLED</code>, then the Batch scheduler doesn't attempt to place jobs
     * within the environment. Jobs in a <code>STARTING</code> or <code>RUNNING</code>
     * state continue to progress normally. Managed compute environments in the
     * <code>DISABLED</code> state don't scale out. However, they scale in to
     * <code>minvCpus</code> value after instances become idle.</p>
     */
    inline const CEState& GetState() const{ return m_state; }

    /**
     * <p>The state of the compute environment. The valid values are
     * <code>ENABLED</code> or <code>DISABLED</code>.</p> <p>If the state is
     * <code>ENABLED</code>, then the Batch scheduler can attempt to place jobs from an
     * associated job queue on the compute resources within the environment. If the
     * compute environment is managed, then it can scale its instances out or in
     * automatically based on the job queue demand.</p> <p>If the state is
     * <code>DISABLED</code>, then the Batch scheduler doesn't attempt to place jobs
     * within the environment. Jobs in a <code>STARTING</code> or <code>RUNNING</code>
     * state continue to progress normally. Managed compute environments in the
     * <code>DISABLED</code> state don't scale out. However, they scale in to
     * <code>minvCpus</code> value after instances become idle.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the compute environment. The valid values are
     * <code>ENABLED</code> or <code>DISABLED</code>.</p> <p>If the state is
     * <code>ENABLED</code>, then the Batch scheduler can attempt to place jobs from an
     * associated job queue on the compute resources within the environment. If the
     * compute environment is managed, then it can scale its instances out or in
     * automatically based on the job queue demand.</p> <p>If the state is
     * <code>DISABLED</code>, then the Batch scheduler doesn't attempt to place jobs
     * within the environment. Jobs in a <code>STARTING</code> or <code>RUNNING</code>
     * state continue to progress normally. Managed compute environments in the
     * <code>DISABLED</code> state don't scale out. However, they scale in to
     * <code>minvCpus</code> value after instances become idle.</p>
     */
    inline void SetState(const CEState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the compute environment. The valid values are
     * <code>ENABLED</code> or <code>DISABLED</code>.</p> <p>If the state is
     * <code>ENABLED</code>, then the Batch scheduler can attempt to place jobs from an
     * associated job queue on the compute resources within the environment. If the
     * compute environment is managed, then it can scale its instances out or in
     * automatically based on the job queue demand.</p> <p>If the state is
     * <code>DISABLED</code>, then the Batch scheduler doesn't attempt to place jobs
     * within the environment. Jobs in a <code>STARTING</code> or <code>RUNNING</code>
     * state continue to progress normally. Managed compute environments in the
     * <code>DISABLED</code> state don't scale out. However, they scale in to
     * <code>minvCpus</code> value after instances become idle.</p>
     */
    inline void SetState(CEState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the compute environment. The valid values are
     * <code>ENABLED</code> or <code>DISABLED</code>.</p> <p>If the state is
     * <code>ENABLED</code>, then the Batch scheduler can attempt to place jobs from an
     * associated job queue on the compute resources within the environment. If the
     * compute environment is managed, then it can scale its instances out or in
     * automatically based on the job queue demand.</p> <p>If the state is
     * <code>DISABLED</code>, then the Batch scheduler doesn't attempt to place jobs
     * within the environment. Jobs in a <code>STARTING</code> or <code>RUNNING</code>
     * state continue to progress normally. Managed compute environments in the
     * <code>DISABLED</code> state don't scale out. However, they scale in to
     * <code>minvCpus</code> value after instances become idle.</p>
     */
    inline ComputeEnvironmentDetail& WithState(const CEState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the compute environment. The valid values are
     * <code>ENABLED</code> or <code>DISABLED</code>.</p> <p>If the state is
     * <code>ENABLED</code>, then the Batch scheduler can attempt to place jobs from an
     * associated job queue on the compute resources within the environment. If the
     * compute environment is managed, then it can scale its instances out or in
     * automatically based on the job queue demand.</p> <p>If the state is
     * <code>DISABLED</code>, then the Batch scheduler doesn't attempt to place jobs
     * within the environment. Jobs in a <code>STARTING</code> or <code>RUNNING</code>
     * state continue to progress normally. Managed compute environments in the
     * <code>DISABLED</code> state don't scale out. However, they scale in to
     * <code>minvCpus</code> value after instances become idle.</p>
     */
    inline ComputeEnvironmentDetail& WithState(CEState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The current status of the compute environment (for example,
     * <code>CREATING</code> or <code>VALID</code>).</p>
     */
    inline const CEStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the compute environment (for example,
     * <code>CREATING</code> or <code>VALID</code>).</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the compute environment (for example,
     * <code>CREATING</code> or <code>VALID</code>).</p>
     */
    inline void SetStatus(const CEStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the compute environment (for example,
     * <code>CREATING</code> or <code>VALID</code>).</p>
     */
    inline void SetStatus(CEStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the compute environment (for example,
     * <code>CREATING</code> or <code>VALID</code>).</p>
     */
    inline ComputeEnvironmentDetail& WithStatus(const CEStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the compute environment (for example,
     * <code>CREATING</code> or <code>VALID</code>).</p>
     */
    inline ComputeEnvironmentDetail& WithStatus(CEStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the compute environment.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the compute environment.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the compute environment.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the compute environment.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the compute environment.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The compute resources defined for the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const ComputeResource& GetComputeResources() const{ return m_computeResources; }

    /**
     * <p>The compute resources defined for the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline bool ComputeResourcesHasBeenSet() const { return m_computeResourcesHasBeenSet; }

    /**
     * <p>The compute resources defined for the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetComputeResources(const ComputeResource& value) { m_computeResourcesHasBeenSet = true; m_computeResources = value; }

    /**
     * <p>The compute resources defined for the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetComputeResources(ComputeResource&& value) { m_computeResourcesHasBeenSet = true; m_computeResources = std::move(value); }

    /**
     * <p>The compute resources defined for the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ComputeEnvironmentDetail& WithComputeResources(const ComputeResource& value) { SetComputeResources(value); return *this;}

    /**
     * <p>The compute resources defined for the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ComputeEnvironmentDetail& WithComputeResources(ComputeResource&& value) { SetComputeResources(std::move(value)); return *this;}


    /**
     * <p>The service role that's associated with the compute environment that allows
     * Batch to make calls to Amazon Web Services API operations on your behalf. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The service role that's associated with the compute environment that allows
     * Batch to make calls to Amazon Web Services API operations on your behalf. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The service role that's associated with the compute environment that allows
     * Batch to make calls to Amazon Web Services API operations on your behalf. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The service role that's associated with the compute environment that allows
     * Batch to make calls to Amazon Web Services API operations on your behalf. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The service role that's associated with the compute environment that allows
     * Batch to make calls to Amazon Web Services API operations on your behalf. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The service role that's associated with the compute environment that allows
     * Batch to make calls to Amazon Web Services API operations on your behalf. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ComputeEnvironmentDetail& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The service role that's associated with the compute environment that allows
     * Batch to make calls to Amazon Web Services API operations on your behalf. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ComputeEnvironmentDetail& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The service role that's associated with the compute environment that allows
     * Batch to make calls to Amazon Web Services API operations on your behalf. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ComputeEnvironmentDetail& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>Specifies the infrastructure update policy for the compute environment. For
     * more information about infrastructure updates, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const UpdatePolicy& GetUpdatePolicy() const{ return m_updatePolicy; }

    /**
     * <p>Specifies the infrastructure update policy for the compute environment. For
     * more information about infrastructure updates, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline bool UpdatePolicyHasBeenSet() const { return m_updatePolicyHasBeenSet; }

    /**
     * <p>Specifies the infrastructure update policy for the compute environment. For
     * more information about infrastructure updates, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetUpdatePolicy(const UpdatePolicy& value) { m_updatePolicyHasBeenSet = true; m_updatePolicy = value; }

    /**
     * <p>Specifies the infrastructure update policy for the compute environment. For
     * more information about infrastructure updates, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetUpdatePolicy(UpdatePolicy&& value) { m_updatePolicyHasBeenSet = true; m_updatePolicy = std::move(value); }

    /**
     * <p>Specifies the infrastructure update policy for the compute environment. For
     * more information about infrastructure updates, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ComputeEnvironmentDetail& WithUpdatePolicy(const UpdatePolicy& value) { SetUpdatePolicy(value); return *this;}

    /**
     * <p>Specifies the infrastructure update policy for the compute environment. For
     * more information about infrastructure updates, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ComputeEnvironmentDetail& WithUpdatePolicy(UpdatePolicy&& value) { SetUpdatePolicy(std::move(value)); return *this;}


    /**
     * <p>The configuration for the Amazon EKS cluster that supports the Batch compute
     * environment. Only specify this parameter if the
     * <code>containerOrchestrationType</code> is <code>EKS</code>.</p>
     */
    inline const EksConfiguration& GetEksConfiguration() const{ return m_eksConfiguration; }

    /**
     * <p>The configuration for the Amazon EKS cluster that supports the Batch compute
     * environment. Only specify this parameter if the
     * <code>containerOrchestrationType</code> is <code>EKS</code>.</p>
     */
    inline bool EksConfigurationHasBeenSet() const { return m_eksConfigurationHasBeenSet; }

    /**
     * <p>The configuration for the Amazon EKS cluster that supports the Batch compute
     * environment. Only specify this parameter if the
     * <code>containerOrchestrationType</code> is <code>EKS</code>.</p>
     */
    inline void SetEksConfiguration(const EksConfiguration& value) { m_eksConfigurationHasBeenSet = true; m_eksConfiguration = value; }

    /**
     * <p>The configuration for the Amazon EKS cluster that supports the Batch compute
     * environment. Only specify this parameter if the
     * <code>containerOrchestrationType</code> is <code>EKS</code>.</p>
     */
    inline void SetEksConfiguration(EksConfiguration&& value) { m_eksConfigurationHasBeenSet = true; m_eksConfiguration = std::move(value); }

    /**
     * <p>The configuration for the Amazon EKS cluster that supports the Batch compute
     * environment. Only specify this parameter if the
     * <code>containerOrchestrationType</code> is <code>EKS</code>.</p>
     */
    inline ComputeEnvironmentDetail& WithEksConfiguration(const EksConfiguration& value) { SetEksConfiguration(value); return *this;}

    /**
     * <p>The configuration for the Amazon EKS cluster that supports the Batch compute
     * environment. Only specify this parameter if the
     * <code>containerOrchestrationType</code> is <code>EKS</code>.</p>
     */
    inline ComputeEnvironmentDetail& WithEksConfiguration(EksConfiguration&& value) { SetEksConfiguration(std::move(value)); return *this;}


    /**
     * <p>The orchestration type of the compute environment. The valid values are
     * <code>ECS</code> (default) or <code>EKS</code>.</p>
     */
    inline const OrchestrationType& GetContainerOrchestrationType() const{ return m_containerOrchestrationType; }

    /**
     * <p>The orchestration type of the compute environment. The valid values are
     * <code>ECS</code> (default) or <code>EKS</code>.</p>
     */
    inline bool ContainerOrchestrationTypeHasBeenSet() const { return m_containerOrchestrationTypeHasBeenSet; }

    /**
     * <p>The orchestration type of the compute environment. The valid values are
     * <code>ECS</code> (default) or <code>EKS</code>.</p>
     */
    inline void SetContainerOrchestrationType(const OrchestrationType& value) { m_containerOrchestrationTypeHasBeenSet = true; m_containerOrchestrationType = value; }

    /**
     * <p>The orchestration type of the compute environment. The valid values are
     * <code>ECS</code> (default) or <code>EKS</code>.</p>
     */
    inline void SetContainerOrchestrationType(OrchestrationType&& value) { m_containerOrchestrationTypeHasBeenSet = true; m_containerOrchestrationType = std::move(value); }

    /**
     * <p>The orchestration type of the compute environment. The valid values are
     * <code>ECS</code> (default) or <code>EKS</code>.</p>
     */
    inline ComputeEnvironmentDetail& WithContainerOrchestrationType(const OrchestrationType& value) { SetContainerOrchestrationType(value); return *this;}

    /**
     * <p>The orchestration type of the compute environment. The valid values are
     * <code>ECS</code> (default) or <code>EKS</code>.</p>
     */
    inline ComputeEnvironmentDetail& WithContainerOrchestrationType(OrchestrationType&& value) { SetContainerOrchestrationType(std::move(value)); return *this;}


    /**
     * <p>Unique identifier for the compute environment.</p>
     */
    inline const Aws::String& GetUuid() const{ return m_uuid; }

    /**
     * <p>Unique identifier for the compute environment.</p>
     */
    inline bool UuidHasBeenSet() const { return m_uuidHasBeenSet; }

    /**
     * <p>Unique identifier for the compute environment.</p>
     */
    inline void SetUuid(const Aws::String& value) { m_uuidHasBeenSet = true; m_uuid = value; }

    /**
     * <p>Unique identifier for the compute environment.</p>
     */
    inline void SetUuid(Aws::String&& value) { m_uuidHasBeenSet = true; m_uuid = std::move(value); }

    /**
     * <p>Unique identifier for the compute environment.</p>
     */
    inline void SetUuid(const char* value) { m_uuidHasBeenSet = true; m_uuid.assign(value); }

    /**
     * <p>Unique identifier for the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& WithUuid(const Aws::String& value) { SetUuid(value); return *this;}

    /**
     * <p>Unique identifier for the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& WithUuid(Aws::String&& value) { SetUuid(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& WithUuid(const char* value) { SetUuid(value); return *this;}

  private:

    Aws::String m_computeEnvironmentName;
    bool m_computeEnvironmentNameHasBeenSet = false;

    Aws::String m_computeEnvironmentArn;
    bool m_computeEnvironmentArnHasBeenSet = false;

    int m_unmanagedvCpus;
    bool m_unmanagedvCpusHasBeenSet = false;

    Aws::String m_ecsClusterArn;
    bool m_ecsClusterArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    CEType m_type;
    bool m_typeHasBeenSet = false;

    CEState m_state;
    bool m_stateHasBeenSet = false;

    CEStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    ComputeResource m_computeResources;
    bool m_computeResourcesHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    UpdatePolicy m_updatePolicy;
    bool m_updatePolicyHasBeenSet = false;

    EksConfiguration m_eksConfiguration;
    bool m_eksConfigurationHasBeenSet = false;

    OrchestrationType m_containerOrchestrationType;
    bool m_containerOrchestrationTypeHasBeenSet = false;

    Aws::String m_uuid;
    bool m_uuidHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
