/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/EffectiveDeploymentExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains information about a deployment job that AWS IoT Greengrass sends to
   * a AWS IoT Greengrass core device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/EffectiveDeployment">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASSV2_API EffectiveDeployment
  {
  public:
    EffectiveDeployment();
    EffectiveDeployment(Aws::Utils::Json::JsonView jsonValue);
    EffectiveDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The ID of the deployment.</p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p>The ID of the deployment.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The ID of the deployment.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p>The ID of the deployment.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The ID of the deployment.</p>
     */
    inline EffectiveDeployment& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The ID of the deployment.</p>
     */
    inline EffectiveDeployment& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the deployment.</p>
     */
    inline EffectiveDeployment& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>The name of the deployment.</p> <p>You can create deployments without names.
     * If you create a deployment without a name, the AWS IoT Greengrass V2 console
     * shows the deployment name as <code>&lt;targetType&gt;:&lt;targetName&gt;</code>,
     * where <code>targetType</code> and <code>targetName</code> are the type and name
     * of the deployment target.</p>
     */
    inline const Aws::String& GetDeploymentName() const{ return m_deploymentName; }

    /**
     * <p>The name of the deployment.</p> <p>You can create deployments without names.
     * If you create a deployment without a name, the AWS IoT Greengrass V2 console
     * shows the deployment name as <code>&lt;targetType&gt;:&lt;targetName&gt;</code>,
     * where <code>targetType</code> and <code>targetName</code> are the type and name
     * of the deployment target.</p>
     */
    inline bool DeploymentNameHasBeenSet() const { return m_deploymentNameHasBeenSet; }

    /**
     * <p>The name of the deployment.</p> <p>You can create deployments without names.
     * If you create a deployment without a name, the AWS IoT Greengrass V2 console
     * shows the deployment name as <code>&lt;targetType&gt;:&lt;targetName&gt;</code>,
     * where <code>targetType</code> and <code>targetName</code> are the type and name
     * of the deployment target.</p>
     */
    inline void SetDeploymentName(const Aws::String& value) { m_deploymentNameHasBeenSet = true; m_deploymentName = value; }

    /**
     * <p>The name of the deployment.</p> <p>You can create deployments without names.
     * If you create a deployment without a name, the AWS IoT Greengrass V2 console
     * shows the deployment name as <code>&lt;targetType&gt;:&lt;targetName&gt;</code>,
     * where <code>targetType</code> and <code>targetName</code> are the type and name
     * of the deployment target.</p>
     */
    inline void SetDeploymentName(Aws::String&& value) { m_deploymentNameHasBeenSet = true; m_deploymentName = std::move(value); }

    /**
     * <p>The name of the deployment.</p> <p>You can create deployments without names.
     * If you create a deployment without a name, the AWS IoT Greengrass V2 console
     * shows the deployment name as <code>&lt;targetType&gt;:&lt;targetName&gt;</code>,
     * where <code>targetType</code> and <code>targetName</code> are the type and name
     * of the deployment target.</p>
     */
    inline void SetDeploymentName(const char* value) { m_deploymentNameHasBeenSet = true; m_deploymentName.assign(value); }

    /**
     * <p>The name of the deployment.</p> <p>You can create deployments without names.
     * If you create a deployment without a name, the AWS IoT Greengrass V2 console
     * shows the deployment name as <code>&lt;targetType&gt;:&lt;targetName&gt;</code>,
     * where <code>targetType</code> and <code>targetName</code> are the type and name
     * of the deployment target.</p>
     */
    inline EffectiveDeployment& WithDeploymentName(const Aws::String& value) { SetDeploymentName(value); return *this;}

    /**
     * <p>The name of the deployment.</p> <p>You can create deployments without names.
     * If you create a deployment without a name, the AWS IoT Greengrass V2 console
     * shows the deployment name as <code>&lt;targetType&gt;:&lt;targetName&gt;</code>,
     * where <code>targetType</code> and <code>targetName</code> are the type and name
     * of the deployment target.</p>
     */
    inline EffectiveDeployment& WithDeploymentName(Aws::String&& value) { SetDeploymentName(std::move(value)); return *this;}

    /**
     * <p>The name of the deployment.</p> <p>You can create deployments without names.
     * If you create a deployment without a name, the AWS IoT Greengrass V2 console
     * shows the deployment name as <code>&lt;targetType&gt;:&lt;targetName&gt;</code>,
     * where <code>targetType</code> and <code>targetName</code> are the type and name
     * of the deployment target.</p>
     */
    inline EffectiveDeployment& WithDeploymentName(const char* value) { SetDeploymentName(value); return *this;}


    /**
     * <p>The ID of the AWS IoT job that applies the deployment to target devices.</p>
     */
    inline const Aws::String& GetIotJobId() const{ return m_iotJobId; }

    /**
     * <p>The ID of the AWS IoT job that applies the deployment to target devices.</p>
     */
    inline bool IotJobIdHasBeenSet() const { return m_iotJobIdHasBeenSet; }

    /**
     * <p>The ID of the AWS IoT job that applies the deployment to target devices.</p>
     */
    inline void SetIotJobId(const Aws::String& value) { m_iotJobIdHasBeenSet = true; m_iotJobId = value; }

    /**
     * <p>The ID of the AWS IoT job that applies the deployment to target devices.</p>
     */
    inline void SetIotJobId(Aws::String&& value) { m_iotJobIdHasBeenSet = true; m_iotJobId = std::move(value); }

    /**
     * <p>The ID of the AWS IoT job that applies the deployment to target devices.</p>
     */
    inline void SetIotJobId(const char* value) { m_iotJobIdHasBeenSet = true; m_iotJobId.assign(value); }

    /**
     * <p>The ID of the AWS IoT job that applies the deployment to target devices.</p>
     */
    inline EffectiveDeployment& WithIotJobId(const Aws::String& value) { SetIotJobId(value); return *this;}

    /**
     * <p>The ID of the AWS IoT job that applies the deployment to target devices.</p>
     */
    inline EffectiveDeployment& WithIotJobId(Aws::String&& value) { SetIotJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS IoT job that applies the deployment to target devices.</p>
     */
    inline EffectiveDeployment& WithIotJobId(const char* value) { SetIotJobId(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the AWS IoT job that applies the deployment to target devices.</p>
     */
    inline const Aws::String& GetIotJobArn() const{ return m_iotJobArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the AWS IoT job that applies the deployment to target devices.</p>
     */
    inline bool IotJobArnHasBeenSet() const { return m_iotJobArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the AWS IoT job that applies the deployment to target devices.</p>
     */
    inline void SetIotJobArn(const Aws::String& value) { m_iotJobArnHasBeenSet = true; m_iotJobArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the AWS IoT job that applies the deployment to target devices.</p>
     */
    inline void SetIotJobArn(Aws::String&& value) { m_iotJobArnHasBeenSet = true; m_iotJobArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the AWS IoT job that applies the deployment to target devices.</p>
     */
    inline void SetIotJobArn(const char* value) { m_iotJobArnHasBeenSet = true; m_iotJobArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the AWS IoT job that applies the deployment to target devices.</p>
     */
    inline EffectiveDeployment& WithIotJobArn(const Aws::String& value) { SetIotJobArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the AWS IoT job that applies the deployment to target devices.</p>
     */
    inline EffectiveDeployment& WithIotJobArn(Aws::String&& value) { SetIotJobArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the AWS IoT job that applies the deployment to target devices.</p>
     */
    inline EffectiveDeployment& WithIotJobArn(const char* value) { SetIotJobArn(value); return *this;}


    /**
     * <p>The description of the deployment job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the deployment job.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the deployment job.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the deployment job.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the deployment job.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the deployment job.</p>
     */
    inline EffectiveDeployment& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the deployment job.</p>
     */
    inline EffectiveDeployment& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the deployment job.</p>
     */
    inline EffectiveDeployment& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target AWS IoT thing or thing group.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target AWS IoT thing or thing group.</p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target AWS IoT thing or thing group.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target AWS IoT thing or thing group.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target AWS IoT thing or thing group.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target AWS IoT thing or thing group.</p>
     */
    inline EffectiveDeployment& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target AWS IoT thing or thing group.</p>
     */
    inline EffectiveDeployment& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target AWS IoT thing or thing group.</p>
     */
    inline EffectiveDeployment& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p>The status of the deployment job on the AWS IoT Greengrass core device.</p>
     */
    inline const EffectiveDeploymentExecutionStatus& GetCoreDeviceExecutionStatus() const{ return m_coreDeviceExecutionStatus; }

    /**
     * <p>The status of the deployment job on the AWS IoT Greengrass core device.</p>
     */
    inline bool CoreDeviceExecutionStatusHasBeenSet() const { return m_coreDeviceExecutionStatusHasBeenSet; }

    /**
     * <p>The status of the deployment job on the AWS IoT Greengrass core device.</p>
     */
    inline void SetCoreDeviceExecutionStatus(const EffectiveDeploymentExecutionStatus& value) { m_coreDeviceExecutionStatusHasBeenSet = true; m_coreDeviceExecutionStatus = value; }

    /**
     * <p>The status of the deployment job on the AWS IoT Greengrass core device.</p>
     */
    inline void SetCoreDeviceExecutionStatus(EffectiveDeploymentExecutionStatus&& value) { m_coreDeviceExecutionStatusHasBeenSet = true; m_coreDeviceExecutionStatus = std::move(value); }

    /**
     * <p>The status of the deployment job on the AWS IoT Greengrass core device.</p>
     */
    inline EffectiveDeployment& WithCoreDeviceExecutionStatus(const EffectiveDeploymentExecutionStatus& value) { SetCoreDeviceExecutionStatus(value); return *this;}

    /**
     * <p>The status of the deployment job on the AWS IoT Greengrass core device.</p>
     */
    inline EffectiveDeployment& WithCoreDeviceExecutionStatus(EffectiveDeploymentExecutionStatus&& value) { SetCoreDeviceExecutionStatus(std::move(value)); return *this;}


    /**
     * <p>The reason code for the update, if the job was updated.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason code for the update, if the job was updated.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason code for the update, if the job was updated.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason code for the update, if the job was updated.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason code for the update, if the job was updated.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason code for the update, if the job was updated.</p>
     */
    inline EffectiveDeployment& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason code for the update, if the job was updated.</p>
     */
    inline EffectiveDeployment& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason code for the update, if the job was updated.</p>
     */
    inline EffectiveDeployment& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>The time at which the deployment was created, expressed in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The time at which the deployment was created, expressed in ISO 8601
     * format.</p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p>The time at which the deployment was created, expressed in ISO 8601
     * format.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The time at which the deployment was created, expressed in ISO 8601
     * format.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p>The time at which the deployment was created, expressed in ISO 8601
     * format.</p>
     */
    inline EffectiveDeployment& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The time at which the deployment was created, expressed in ISO 8601
     * format.</p>
     */
    inline EffectiveDeployment& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which the deployment job was last modified, expressed in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTimestamp() const{ return m_modifiedTimestamp; }

    /**
     * <p>The time at which the deployment job was last modified, expressed in ISO 8601
     * format.</p>
     */
    inline bool ModifiedTimestampHasBeenSet() const { return m_modifiedTimestampHasBeenSet; }

    /**
     * <p>The time at which the deployment job was last modified, expressed in ISO 8601
     * format.</p>
     */
    inline void SetModifiedTimestamp(const Aws::Utils::DateTime& value) { m_modifiedTimestampHasBeenSet = true; m_modifiedTimestamp = value; }

    /**
     * <p>The time at which the deployment job was last modified, expressed in ISO 8601
     * format.</p>
     */
    inline void SetModifiedTimestamp(Aws::Utils::DateTime&& value) { m_modifiedTimestampHasBeenSet = true; m_modifiedTimestamp = std::move(value); }

    /**
     * <p>The time at which the deployment job was last modified, expressed in ISO 8601
     * format.</p>
     */
    inline EffectiveDeployment& WithModifiedTimestamp(const Aws::Utils::DateTime& value) { SetModifiedTimestamp(value); return *this;}

    /**
     * <p>The time at which the deployment job was last modified, expressed in ISO 8601
     * format.</p>
     */
    inline EffectiveDeployment& WithModifiedTimestamp(Aws::Utils::DateTime&& value) { SetModifiedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;

    Aws::String m_deploymentName;
    bool m_deploymentNameHasBeenSet;

    Aws::String m_iotJobId;
    bool m_iotJobIdHasBeenSet;

    Aws::String m_iotJobArn;
    bool m_iotJobArnHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet;

    EffectiveDeploymentExecutionStatus m_coreDeviceExecutionStatus;
    bool m_coreDeviceExecutionStatusHasBeenSet;

    Aws::String m_reason;
    bool m_reasonHasBeenSet;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet;

    Aws::Utils::DateTime m_modifiedTimestamp;
    bool m_modifiedTimestampHasBeenSet;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
