/**
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
    AWS_GREENGRASSV2_API EffectiveDeployment() = default;
    AWS_GREENGRASSV2_API EffectiveDeployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API EffectiveDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    EffectiveDeployment& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentName() const { return m_deploymentName; }
    inline bool DeploymentNameHasBeenSet() const { return m_deploymentNameHasBeenSet; }
    template<typename DeploymentNameT = Aws::String>
    void SetDeploymentName(DeploymentNameT&& value) { m_deploymentNameHasBeenSet = true; m_deploymentName = std::forward<DeploymentNameT>(value); }
    template<typename DeploymentNameT = Aws::String>
    EffectiveDeployment& WithDeploymentName(DeploymentNameT&& value) { SetDeploymentName(std::forward<DeploymentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IoT job that applies the deployment to target devices.</p>
     */
    inline const Aws::String& GetIotJobId() const { return m_iotJobId; }
    inline bool IotJobIdHasBeenSet() const { return m_iotJobIdHasBeenSet; }
    template<typename IotJobIdT = Aws::String>
    void SetIotJobId(IotJobIdT&& value) { m_iotJobIdHasBeenSet = true; m_iotJobId = std::forward<IotJobIdT>(value); }
    template<typename IotJobIdT = Aws::String>
    EffectiveDeployment& WithIotJobId(IotJobIdT&& value) { SetIotJobId(std::forward<IotJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IoT job that applies the deployment to target devices.</p>
     */
    inline const Aws::String& GetIotJobArn() const { return m_iotJobArn; }
    inline bool IotJobArnHasBeenSet() const { return m_iotJobArnHasBeenSet; }
    template<typename IotJobArnT = Aws::String>
    void SetIotJobArn(IotJobArnT&& value) { m_iotJobArnHasBeenSet = true; m_iotJobArn = std::forward<IotJobArnT>(value); }
    template<typename IotJobArnT = Aws::String>
    EffectiveDeployment& WithIotJobArn(IotJobArnT&& value) { SetIotJobArn(std::forward<IotJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the deployment job.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    EffectiveDeployment& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group.</p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    EffectiveDeployment& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
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
    inline EffectiveDeploymentExecutionStatus GetCoreDeviceExecutionStatus() const { return m_coreDeviceExecutionStatus; }
    inline bool CoreDeviceExecutionStatusHasBeenSet() const { return m_coreDeviceExecutionStatusHasBeenSet; }
    inline void SetCoreDeviceExecutionStatus(EffectiveDeploymentExecutionStatus value) { m_coreDeviceExecutionStatusHasBeenSet = true; m_coreDeviceExecutionStatus = value; }
    inline EffectiveDeployment& WithCoreDeviceExecutionStatus(EffectiveDeploymentExecutionStatus value) { SetCoreDeviceExecutionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason code for the update, if the job was updated.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    EffectiveDeployment& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the deployment was created, expressed in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    EffectiveDeployment& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the deployment job was last modified, expressed in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTimestamp() const { return m_modifiedTimestamp; }
    inline bool ModifiedTimestampHasBeenSet() const { return m_modifiedTimestampHasBeenSet; }
    template<typename ModifiedTimestampT = Aws::Utils::DateTime>
    void SetModifiedTimestamp(ModifiedTimestampT&& value) { m_modifiedTimestampHasBeenSet = true; m_modifiedTimestamp = std::forward<ModifiedTimestampT>(value); }
    template<typename ModifiedTimestampT = Aws::Utils::DateTime>
    EffectiveDeployment& WithModifiedTimestamp(ModifiedTimestampT&& value) { SetModifiedTimestamp(std::forward<ModifiedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status details that explain why a deployment has an error. This response
     * will be null if the deployment is in a success state.</p>
     */
    inline const EffectiveDeploymentStatusDetails& GetStatusDetails() const { return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    template<typename StatusDetailsT = EffectiveDeploymentStatusDetails>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = EffectiveDeploymentStatusDetails>
    EffectiveDeployment& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
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

    EffectiveDeploymentExecutionStatus m_coreDeviceExecutionStatus{EffectiveDeploymentExecutionStatus::NOT_SET};
    bool m_coreDeviceExecutionStatusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedTimestamp{};
    bool m_modifiedTimestampHasBeenSet = false;

    EffectiveDeploymentStatusDetails m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
