﻿/**
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
   * <p>An object representing an Batch compute environment.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ComputeEnvironmentDetail">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API ComputeEnvironmentDetail
  {
  public:
    ComputeEnvironmentDetail();
    ComputeEnvironmentDetail(Aws::Utils::Json::JsonView jsonValue);
    ComputeEnvironmentDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline const Aws::String& GetComputeEnvironmentName() const{ return m_computeEnvironmentName; }

    /**
     * <p>The name of the compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline bool ComputeEnvironmentNameHasBeenSet() const { return m_computeEnvironmentNameHasBeenSet; }

    /**
     * <p>The name of the compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline void SetComputeEnvironmentName(const Aws::String& value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName = value; }

    /**
     * <p>The name of the compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline void SetComputeEnvironmentName(Aws::String&& value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName = std::move(value); }

    /**
     * <p>The name of the compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline void SetComputeEnvironmentName(const char* value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName.assign(value); }

    /**
     * <p>The name of the compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline ComputeEnvironmentDetail& WithComputeEnvironmentName(const Aws::String& value) { SetComputeEnvironmentName(value); return *this;}

    /**
     * <p>The name of the compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline ComputeEnvironmentDetail& WithComputeEnvironmentName(Aws::String&& value) { SetComputeEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
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
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster used by
     * the compute environment.</p>
     */
    inline const Aws::String& GetEcsClusterArn() const{ return m_ecsClusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster used by
     * the compute environment.</p>
     */
    inline bool EcsClusterArnHasBeenSet() const { return m_ecsClusterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster used by
     * the compute environment.</p>
     */
    inline void SetEcsClusterArn(const Aws::String& value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster used by
     * the compute environment.</p>
     */
    inline void SetEcsClusterArn(Aws::String&& value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster used by
     * the compute environment.</p>
     */
    inline void SetEcsClusterArn(const char* value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster used by
     * the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& WithEcsClusterArn(const Aws::String& value) { SetEcsClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster used by
     * the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& WithEcsClusterArn(Aws::String&& value) { SetEcsClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster used by
     * the compute environment.</p>
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
    inline ComputeEnvironmentDetail& WithType(const CEType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ComputeEnvironmentDetail& WithType(CEType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The state of the compute environment. The valid values are
     * <code>ENABLED</code> or <code>DISABLED</code>.</p> <p>If the state is
     * <code>ENABLED</code>, then the Batch scheduler can attempt to place jobs from an
     * associated job queue on the compute resources within the environment. If the
     * compute environment is managed, then it can scale its instances out or in
     * automatically, based on the job queue demand.</p> <p>If the state is
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
     * automatically, based on the job queue demand.</p> <p>If the state is
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
     * automatically, based on the job queue demand.</p> <p>If the state is
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
     * automatically, based on the job queue demand.</p> <p>If the state is
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
     * automatically, based on the job queue demand.</p> <p>If the state is
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
     * automatically, based on the job queue demand.</p> <p>If the state is
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
     * <p>A short, human-readable string to provide additional details about the
     * current status of the compute environment.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the compute environment.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the compute environment.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the compute environment.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the compute environment.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The compute resources defined for the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const ComputeResource& GetComputeResources() const{ return m_computeResources; }

    /**
     * <p>The compute resources defined for the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline bool ComputeResourcesHasBeenSet() const { return m_computeResourcesHasBeenSet; }

    /**
     * <p>The compute resources defined for the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetComputeResources(const ComputeResource& value) { m_computeResourcesHasBeenSet = true; m_computeResources = value; }

    /**
     * <p>The compute resources defined for the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetComputeResources(ComputeResource&& value) { m_computeResourcesHasBeenSet = true; m_computeResources = std::move(value); }

    /**
     * <p>The compute resources defined for the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ComputeEnvironmentDetail& WithComputeResources(const ComputeResource& value) { SetComputeResources(value); return *this;}

    /**
     * <p>The compute resources defined for the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ComputeEnvironmentDetail& WithComputeResources(ComputeResource&& value) { SetComputeResources(std::move(value)); return *this;}


    /**
     * <p>The service role associated with the compute environment that allows Batch to
     * make calls to Amazon Web Services API operations on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The service role associated with the compute environment that allows Batch to
     * make calls to Amazon Web Services API operations on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The service role associated with the compute environment that allows Batch to
     * make calls to Amazon Web Services API operations on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The service role associated with the compute environment that allows Batch to
     * make calls to Amazon Web Services API operations on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The service role associated with the compute environment that allows Batch to
     * make calls to Amazon Web Services API operations on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The service role associated with the compute environment that allows Batch to
     * make calls to Amazon Web Services API operations on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ComputeEnvironmentDetail& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The service role associated with the compute environment that allows Batch to
     * make calls to Amazon Web Services API operations on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ComputeEnvironmentDetail& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The service role associated with the compute environment that allows Batch to
     * make calls to Amazon Web Services API operations on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ComputeEnvironmentDetail& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}

  private:

    Aws::String m_computeEnvironmentName;
    bool m_computeEnvironmentNameHasBeenSet;

    Aws::String m_computeEnvironmentArn;
    bool m_computeEnvironmentArnHasBeenSet;

    Aws::String m_ecsClusterArn;
    bool m_ecsClusterArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    CEType m_type;
    bool m_typeHasBeenSet;

    CEState m_state;
    bool m_stateHasBeenSet;

    CEStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet;

    ComputeResource m_computeResources;
    bool m_computeResourcesHasBeenSet;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
