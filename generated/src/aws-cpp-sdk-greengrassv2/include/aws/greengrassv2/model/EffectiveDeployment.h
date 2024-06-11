﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/EffectiveDeploymentExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/greengrassv2/model/EffectiveDeploymentStatusDetails.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about a deployment job that IoT Greengrass sends to a
   * Greengrass core device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/EffectiveDeployment">AWS
   * API Reference</a></p>
   */
  class EffectiveDeployment
  {
  public:
    AWS_GREENGRASSV2_API EffectiveDeployment();
    AWS_GREENGRASSV2_API EffectiveDeployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API EffectiveDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }
    inline EffectiveDeployment& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}
    inline EffectiveDeployment& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}
    inline EffectiveDeployment& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentName() const{ return m_deploymentName; }
    inline bool DeploymentNameHasBeenSet() const { return m_deploymentNameHasBeenSet; }
    inline void SetDeploymentName(const Aws::String& value) { m_deploymentNameHasBeenSet = true; m_deploymentName = value; }
    inline void SetDeploymentName(Aws::String&& value) { m_deploymentNameHasBeenSet = true; m_deploymentName = std::move(value); }
    inline void SetDeploymentName(const char* value) { m_deploymentNameHasBeenSet = true; m_deploymentName.assign(value); }
    inline EffectiveDeployment& WithDeploymentName(const Aws::String& value) { SetDeploymentName(value); return *this;}
    inline EffectiveDeployment& WithDeploymentName(Aws::String&& value) { SetDeploymentName(std::move(value)); return *this;}
    inline EffectiveDeployment& WithDeploymentName(const char* value) { SetDeploymentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IoT job that applies the deployment to target devices.</p>
     */
    inline const Aws::String& GetIotJobId() const{ return m_iotJobId; }
    inline bool IotJobIdHasBeenSet() const { return m_iotJobIdHasBeenSet; }
    inline void SetIotJobId(const Aws::String& value) { m_iotJobIdHasBeenSet = true; m_iotJobId = value; }
    inline void SetIotJobId(Aws::String&& value) { m_iotJobIdHasBeenSet = true; m_iotJobId = std::move(value); }
    inline void SetIotJobId(const char* value) { m_iotJobIdHasBeenSet = true; m_iotJobId.assign(value); }
    inline EffectiveDeployment& WithIotJobId(const Aws::String& value) { SetIotJobId(value); return *this;}
    inline EffectiveDeployment& WithIotJobId(Aws::String&& value) { SetIotJobId(std::move(value)); return *this;}
    inline EffectiveDeployment& WithIotJobId(const char* value) { SetIotJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IoT job that applies the deployment to target devices.</p>
     */
    inline const Aws::String& GetIotJobArn() const{ return m_iotJobArn; }
    inline bool IotJobArnHasBeenSet() const { return m_iotJobArnHasBeenSet; }
    inline void SetIotJobArn(const Aws::String& value) { m_iotJobArnHasBeenSet = true; m_iotJobArn = value; }
    inline void SetIotJobArn(Aws::String&& value) { m_iotJobArnHasBeenSet = true; m_iotJobArn = std::move(value); }
    inline void SetIotJobArn(const char* value) { m_iotJobArnHasBeenSet = true; m_iotJobArn.assign(value); }
    inline EffectiveDeployment& WithIotJobArn(const Aws::String& value) { SetIotJobArn(value); return *this;}
    inline EffectiveDeployment& WithIotJobArn(Aws::String&& value) { SetIotJobArn(std::move(value)); return *this;}
    inline EffectiveDeployment& WithIotJobArn(const char* value) { SetIotJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the deployment job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline EffectiveDeployment& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline EffectiveDeployment& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline EffectiveDeployment& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }
    inline EffectiveDeployment& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}
    inline EffectiveDeployment& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}
    inline EffectiveDeployment& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the deployment job on the Greengrass core device.</p> <ul> <li>
     * <p> <code>IN_PROGRESS</code> – The deployment job is running.</p> </li> <li> <p>
     * <code>QUEUED</code> – The deployment job is in the job queue and waiting to
     * run.</p> </li> <li> <p> <code>FAILED</code> – The deployment failed. For more
     * information, see the <code>statusDetails</code> field.</p> </li> <li> <p>
     * <code>COMPLETED</code> – The deployment to an IoT thing was completed
     * successfully.</p> </li> <li> <p> <code>TIMED_OUT</code> – The deployment didn't
     * complete in the allotted time. </p> </li> <li> <p> <code>CANCELED</code> – The
     * deployment was canceled by the user.</p> </li> <li> <p> <code>REJECTED</code> –
     * The deployment was rejected. For more information, see the
     * <code>statusDetails</code> field.</p> </li> <li> <p> <code>SUCCEEDED</code> –
     * The deployment to an IoT thing group was completed successfully.</p> </li> </ul>
     */
    inline const EffectiveDeploymentExecutionStatus& GetCoreDeviceExecutionStatus() const{ return m_coreDeviceExecutionStatus; }
    inline bool CoreDeviceExecutionStatusHasBeenSet() const { return m_coreDeviceExecutionStatusHasBeenSet; }
    inline void SetCoreDeviceExecutionStatus(const EffectiveDeploymentExecutionStatus& value) { m_coreDeviceExecutionStatusHasBeenSet = true; m_coreDeviceExecutionStatus = value; }
    inline void SetCoreDeviceExecutionStatus(EffectiveDeploymentExecutionStatus&& value) { m_coreDeviceExecutionStatusHasBeenSet = true; m_coreDeviceExecutionStatus = std::move(value); }
    inline EffectiveDeployment& WithCoreDeviceExecutionStatus(const EffectiveDeploymentExecutionStatus& value) { SetCoreDeviceExecutionStatus(value); return *this;}
    inline EffectiveDeployment& WithCoreDeviceExecutionStatus(EffectiveDeploymentExecutionStatus&& value) { SetCoreDeviceExecutionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason code for the update, if the job was updated.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline EffectiveDeployment& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline EffectiveDeployment& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline EffectiveDeployment& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the deployment was created, expressed in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }
    inline EffectiveDeployment& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}
    inline EffectiveDeployment& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the deployment job was last modified, expressed in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTimestamp() const{ return m_modifiedTimestamp; }
    inline bool ModifiedTimestampHasBeenSet() const { return m_modifiedTimestampHasBeenSet; }
    inline void SetModifiedTimestamp(const Aws::Utils::DateTime& value) { m_modifiedTimestampHasBeenSet = true; m_modifiedTimestamp = value; }
    inline void SetModifiedTimestamp(Aws::Utils::DateTime&& value) { m_modifiedTimestampHasBeenSet = true; m_modifiedTimestamp = std::move(value); }
    inline EffectiveDeployment& WithModifiedTimestamp(const Aws::Utils::DateTime& value) { SetModifiedTimestamp(value); return *this;}
    inline EffectiveDeployment& WithModifiedTimestamp(Aws::Utils::DateTime&& value) { SetModifiedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status details that explain why a deployment has an error. This response
     * will be null if the deployment is in a success state.</p>
     */
    inline const EffectiveDeploymentStatusDetails& GetStatusDetails() const{ return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    inline void SetStatusDetails(const EffectiveDeploymentStatusDetails& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }
    inline void SetStatusDetails(EffectiveDeploymentStatusDetails&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::move(value); }
    inline EffectiveDeployment& WithStatusDetails(const EffectiveDeploymentStatusDetails& value) { SetStatusDetails(value); return *this;}
    inline EffectiveDeployment& WithStatusDetails(EffectiveDeploymentStatusDetails&& value) { SetStatusDetails(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_deploymentName;
    bool m_deploymentNameHasBeenSet = false;

    Aws::String m_iotJobId;
    bool m_iotJobIdHasBeenSet = false;

    Aws::String m_iotJobArn;
    bool m_iotJobArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    EffectiveDeploymentExecutionStatus m_coreDeviceExecutionStatus;
    bool m_coreDeviceExecutionStatusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedTimestamp;
    bool m_modifiedTimestampHasBeenSet = false;

    EffectiveDeploymentStatusDetails m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
