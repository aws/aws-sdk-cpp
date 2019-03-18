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
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An object representing an AWS Batch compute environment.</p><p><h3>See
   * Also:</h3>   <a
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
     * <p>The name of the compute environment. </p>
     */
    inline const Aws::String& GetComputeEnvironmentName() const{ return m_computeEnvironmentName; }

    /**
     * <p>The name of the compute environment. </p>
     */
    inline bool ComputeEnvironmentNameHasBeenSet() const { return m_computeEnvironmentNameHasBeenSet; }

    /**
     * <p>The name of the compute environment. </p>
     */
    inline void SetComputeEnvironmentName(const Aws::String& value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName = value; }

    /**
     * <p>The name of the compute environment. </p>
     */
    inline void SetComputeEnvironmentName(Aws::String&& value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName = std::move(value); }

    /**
     * <p>The name of the compute environment. </p>
     */
    inline void SetComputeEnvironmentName(const char* value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName.assign(value); }

    /**
     * <p>The name of the compute environment. </p>
     */
    inline ComputeEnvironmentDetail& WithComputeEnvironmentName(const Aws::String& value) { SetComputeEnvironmentName(value); return *this;}

    /**
     * <p>The name of the compute environment. </p>
     */
    inline ComputeEnvironmentDetail& WithComputeEnvironmentName(Aws::String&& value) { SetComputeEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the compute environment. </p>
     */
    inline ComputeEnvironmentDetail& WithComputeEnvironmentName(const char* value) { SetComputeEnvironmentName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment. </p>
     */
    inline const Aws::String& GetComputeEnvironmentArn() const{ return m_computeEnvironmentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment. </p>
     */
    inline bool ComputeEnvironmentArnHasBeenSet() const { return m_computeEnvironmentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment. </p>
     */
    inline void SetComputeEnvironmentArn(const Aws::String& value) { m_computeEnvironmentArnHasBeenSet = true; m_computeEnvironmentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment. </p>
     */
    inline void SetComputeEnvironmentArn(Aws::String&& value) { m_computeEnvironmentArnHasBeenSet = true; m_computeEnvironmentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment. </p>
     */
    inline void SetComputeEnvironmentArn(const char* value) { m_computeEnvironmentArnHasBeenSet = true; m_computeEnvironmentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment. </p>
     */
    inline ComputeEnvironmentDetail& WithComputeEnvironmentArn(const Aws::String& value) { SetComputeEnvironmentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment. </p>
     */
    inline ComputeEnvironmentDetail& WithComputeEnvironmentArn(Aws::String&& value) { SetComputeEnvironmentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment. </p>
     */
    inline ComputeEnvironmentDetail& WithComputeEnvironmentArn(const char* value) { SetComputeEnvironmentArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster used by
     * the compute environment. </p>
     */
    inline const Aws::String& GetEcsClusterArn() const{ return m_ecsClusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster used by
     * the compute environment. </p>
     */
    inline bool EcsClusterArnHasBeenSet() const { return m_ecsClusterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster used by
     * the compute environment. </p>
     */
    inline void SetEcsClusterArn(const Aws::String& value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster used by
     * the compute environment. </p>
     */
    inline void SetEcsClusterArn(Aws::String&& value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster used by
     * the compute environment. </p>
     */
    inline void SetEcsClusterArn(const char* value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster used by
     * the compute environment. </p>
     */
    inline ComputeEnvironmentDetail& WithEcsClusterArn(const Aws::String& value) { SetEcsClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster used by
     * the compute environment. </p>
     */
    inline ComputeEnvironmentDetail& WithEcsClusterArn(Aws::String&& value) { SetEcsClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster used by
     * the compute environment. </p>
     */
    inline ComputeEnvironmentDetail& WithEcsClusterArn(const char* value) { SetEcsClusterArn(value); return *this;}


    /**
     * <p>The type of the compute environment.</p>
     */
    inline const CEType& GetType() const{ return m_type; }

    /**
     * <p>The type of the compute environment.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the compute environment.</p>
     */
    inline void SetType(const CEType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the compute environment.</p>
     */
    inline void SetType(CEType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& WithType(const CEType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the compute environment.</p>
     */
    inline ComputeEnvironmentDetail& WithType(CEType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The state of the compute environment. The valid values are
     * <code>ENABLED</code> or <code>DISABLED</code>. </p> <p>If the state is
     * <code>ENABLED</code>, then the AWS Batch scheduler can attempt to place jobs
     * from an associated job queue on the compute resources within the environment. If
     * the compute environment is managed, then it can scale its instances out or in
     * automatically, based on the job queue demand.</p> <p>If the state is
     * <code>DISABLED</code>, then the AWS Batch scheduler does not attempt to place
     * jobs within the environment. Jobs in a <code>STARTING</code> or
     * <code>RUNNING</code> state continue to progress normally. Managed compute
     * environments in the <code>DISABLED</code> state do not scale out. However, they
     * scale in to <code>minvCpus</code> value after instances become idle.</p>
     */
    inline const CEState& GetState() const{ return m_state; }

    /**
     * <p>The state of the compute environment. The valid values are
     * <code>ENABLED</code> or <code>DISABLED</code>. </p> <p>If the state is
     * <code>ENABLED</code>, then the AWS Batch scheduler can attempt to place jobs
     * from an associated job queue on the compute resources within the environment. If
     * the compute environment is managed, then it can scale its instances out or in
     * automatically, based on the job queue demand.</p> <p>If the state is
     * <code>DISABLED</code>, then the AWS Batch scheduler does not attempt to place
     * jobs within the environment. Jobs in a <code>STARTING</code> or
     * <code>RUNNING</code> state continue to progress normally. Managed compute
     * environments in the <code>DISABLED</code> state do not scale out. However, they
     * scale in to <code>minvCpus</code> value after instances become idle.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the compute environment. The valid values are
     * <code>ENABLED</code> or <code>DISABLED</code>. </p> <p>If the state is
     * <code>ENABLED</code>, then the AWS Batch scheduler can attempt to place jobs
     * from an associated job queue on the compute resources within the environment. If
     * the compute environment is managed, then it can scale its instances out or in
     * automatically, based on the job queue demand.</p> <p>If the state is
     * <code>DISABLED</code>, then the AWS Batch scheduler does not attempt to place
     * jobs within the environment. Jobs in a <code>STARTING</code> or
     * <code>RUNNING</code> state continue to progress normally. Managed compute
     * environments in the <code>DISABLED</code> state do not scale out. However, they
     * scale in to <code>minvCpus</code> value after instances become idle.</p>
     */
    inline void SetState(const CEState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the compute environment. The valid values are
     * <code>ENABLED</code> or <code>DISABLED</code>. </p> <p>If the state is
     * <code>ENABLED</code>, then the AWS Batch scheduler can attempt to place jobs
     * from an associated job queue on the compute resources within the environment. If
     * the compute environment is managed, then it can scale its instances out or in
     * automatically, based on the job queue demand.</p> <p>If the state is
     * <code>DISABLED</code>, then the AWS Batch scheduler does not attempt to place
     * jobs within the environment. Jobs in a <code>STARTING</code> or
     * <code>RUNNING</code> state continue to progress normally. Managed compute
     * environments in the <code>DISABLED</code> state do not scale out. However, they
     * scale in to <code>minvCpus</code> value after instances become idle.</p>
     */
    inline void SetState(CEState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the compute environment. The valid values are
     * <code>ENABLED</code> or <code>DISABLED</code>. </p> <p>If the state is
     * <code>ENABLED</code>, then the AWS Batch scheduler can attempt to place jobs
     * from an associated job queue on the compute resources within the environment. If
     * the compute environment is managed, then it can scale its instances out or in
     * automatically, based on the job queue demand.</p> <p>If the state is
     * <code>DISABLED</code>, then the AWS Batch scheduler does not attempt to place
     * jobs within the environment. Jobs in a <code>STARTING</code> or
     * <code>RUNNING</code> state continue to progress normally. Managed compute
     * environments in the <code>DISABLED</code> state do not scale out. However, they
     * scale in to <code>minvCpus</code> value after instances become idle.</p>
     */
    inline ComputeEnvironmentDetail& WithState(const CEState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the compute environment. The valid values are
     * <code>ENABLED</code> or <code>DISABLED</code>. </p> <p>If the state is
     * <code>ENABLED</code>, then the AWS Batch scheduler can attempt to place jobs
     * from an associated job queue on the compute resources within the environment. If
     * the compute environment is managed, then it can scale its instances out or in
     * automatically, based on the job queue demand.</p> <p>If the state is
     * <code>DISABLED</code>, then the AWS Batch scheduler does not attempt to place
     * jobs within the environment. Jobs in a <code>STARTING</code> or
     * <code>RUNNING</code> state continue to progress normally. Managed compute
     * environments in the <code>DISABLED</code> state do not scale out. However, they
     * scale in to <code>minvCpus</code> value after instances become idle.</p>
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
     * <p>The compute resources defined for the compute environment. </p>
     */
    inline const ComputeResource& GetComputeResources() const{ return m_computeResources; }

    /**
     * <p>The compute resources defined for the compute environment. </p>
     */
    inline bool ComputeResourcesHasBeenSet() const { return m_computeResourcesHasBeenSet; }

    /**
     * <p>The compute resources defined for the compute environment. </p>
     */
    inline void SetComputeResources(const ComputeResource& value) { m_computeResourcesHasBeenSet = true; m_computeResources = value; }

    /**
     * <p>The compute resources defined for the compute environment. </p>
     */
    inline void SetComputeResources(ComputeResource&& value) { m_computeResourcesHasBeenSet = true; m_computeResources = std::move(value); }

    /**
     * <p>The compute resources defined for the compute environment. </p>
     */
    inline ComputeEnvironmentDetail& WithComputeResources(const ComputeResource& value) { SetComputeResources(value); return *this;}

    /**
     * <p>The compute resources defined for the compute environment. </p>
     */
    inline ComputeEnvironmentDetail& WithComputeResources(ComputeResource&& value) { SetComputeResources(std::move(value)); return *this;}


    /**
     * <p>The service role associated with the compute environment that allows AWS
     * Batch to make calls to AWS API operations on your behalf.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The service role associated with the compute environment that allows AWS
     * Batch to make calls to AWS API operations on your behalf.</p>
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The service role associated with the compute environment that allows AWS
     * Batch to make calls to AWS API operations on your behalf.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The service role associated with the compute environment that allows AWS
     * Batch to make calls to AWS API operations on your behalf.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The service role associated with the compute environment that allows AWS
     * Batch to make calls to AWS API operations on your behalf.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The service role associated with the compute environment that allows AWS
     * Batch to make calls to AWS API operations on your behalf.</p>
     */
    inline ComputeEnvironmentDetail& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The service role associated with the compute environment that allows AWS
     * Batch to make calls to AWS API operations on your behalf.</p>
     */
    inline ComputeEnvironmentDetail& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The service role associated with the compute environment that allows AWS
     * Batch to make calls to AWS API operations on your behalf.</p>
     */
    inline ComputeEnvironmentDetail& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}

  private:

    Aws::String m_computeEnvironmentName;
    bool m_computeEnvironmentNameHasBeenSet;

    Aws::String m_computeEnvironmentArn;
    bool m_computeEnvironmentArnHasBeenSet;

    Aws::String m_ecsClusterArn;
    bool m_ecsClusterArnHasBeenSet;

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
