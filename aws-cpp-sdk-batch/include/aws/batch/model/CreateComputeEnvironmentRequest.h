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
#include <aws/batch/model/CEType.h>
#include <aws/batch/model/CEState.h>
#include <aws/batch/model/ComputeResource.h>

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
    Aws::String SerializePayload() const override;


    /**
     * <p>The name for your compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, and underscores are allowed.</p>
     */
    inline const Aws::String& GetComputeEnvironmentName() const{ return m_computeEnvironmentName; }

    /**
     * <p>The name for your compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, and underscores are allowed.</p>
     */
    inline void SetComputeEnvironmentName(const Aws::String& value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName = value; }

    /**
     * <p>The name for your compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, and underscores are allowed.</p>
     */
    inline void SetComputeEnvironmentName(Aws::String&& value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName = value; }

    /**
     * <p>The name for your compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, and underscores are allowed.</p>
     */
    inline void SetComputeEnvironmentName(const char* value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName.assign(value); }

    /**
     * <p>The name for your compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, and underscores are allowed.</p>
     */
    inline CreateComputeEnvironmentRequest& WithComputeEnvironmentName(const Aws::String& value) { SetComputeEnvironmentName(value); return *this;}

    /**
     * <p>The name for your compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, and underscores are allowed.</p>
     */
    inline CreateComputeEnvironmentRequest& WithComputeEnvironmentName(Aws::String&& value) { SetComputeEnvironmentName(value); return *this;}

    /**
     * <p>The name for your compute environment. Up to 128 letters (uppercase and
     * lowercase), numbers, and underscores are allowed.</p>
     */
    inline CreateComputeEnvironmentRequest& WithComputeEnvironmentName(const char* value) { SetComputeEnvironmentName(value); return *this;}

    /**
     * <p>The type of the compute environment. </p>
     */
    inline const CEType& GetType() const{ return m_type; }

    /**
     * <p>The type of the compute environment. </p>
     */
    inline void SetType(const CEType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the compute environment. </p>
     */
    inline void SetType(CEType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the compute environment. </p>
     */
    inline CreateComputeEnvironmentRequest& WithType(const CEType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the compute environment. </p>
     */
    inline CreateComputeEnvironmentRequest& WithType(CEType&& value) { SetType(value); return *this;}

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
    inline void SetState(const CEState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the compute environment. If the state is <code>ENABLED</code>,
     * then the compute environment accepts jobs from a queue and can scale out
     * automatically based on queues.</p>
     */
    inline void SetState(CEState&& value) { m_stateHasBeenSet = true; m_state = value; }

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
    inline CreateComputeEnvironmentRequest& WithState(CEState&& value) { SetState(value); return *this;}

    /**
     * <p>Details of the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments.</p>
     */
    inline const ComputeResource& GetComputeResources() const{ return m_computeResources; }

    /**
     * <p>Details of the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments.</p>
     */
    inline void SetComputeResources(const ComputeResource& value) { m_computeResourcesHasBeenSet = true; m_computeResources = value; }

    /**
     * <p>Details of the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments.</p>
     */
    inline void SetComputeResources(ComputeResource&& value) { m_computeResourcesHasBeenSet = true; m_computeResources = value; }

    /**
     * <p>Details of the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments.</p>
     */
    inline CreateComputeEnvironmentRequest& WithComputeResources(const ComputeResource& value) { SetComputeResources(value); return *this;}

    /**
     * <p>Details of the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments.</p>
     */
    inline CreateComputeEnvironmentRequest& WithComputeResources(ComputeResource&& value) { SetComputeResources(value); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf. </p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf. </p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf. </p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf. </p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf. </p>
     */
    inline CreateComputeEnvironmentRequest& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf. </p>
     */
    inline CreateComputeEnvironmentRequest& WithServiceRole(Aws::String&& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows AWS Batch to
     * make calls to other AWS services on your behalf. </p>
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
