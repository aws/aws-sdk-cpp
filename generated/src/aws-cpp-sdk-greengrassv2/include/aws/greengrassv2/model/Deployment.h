/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/greengrassv2/model/DeploymentStatus.h>
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
   * <p>Contains information about a deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/Deployment">AWS
   * API Reference</a></p>
   */
  class Deployment
  {
  public:
    AWS_GREENGRASSV2_API Deployment();
    AWS_GREENGRASSV2_API Deployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Deployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group. When creating a subdeployment, the
     * targetARN can only be a thing group.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group. When creating a subdeployment, the
     * targetARN can only be a thing group.</p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group. When creating a subdeployment, the
     * targetARN can only be a thing group.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group. When creating a subdeployment, the
     * targetARN can only be a thing group.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group. When creating a subdeployment, the
     * targetARN can only be a thing group.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group. When creating a subdeployment, the
     * targetARN can only be a thing group.</p>
     */
    inline Deployment& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group. When creating a subdeployment, the
     * targetARN can only be a thing group.</p>
     */
    inline Deployment& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group. When creating a subdeployment, the
     * targetARN can only be a thing group.</p>
     */
    inline Deployment& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p>The revision number of the deployment.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The revision number of the deployment.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The revision number of the deployment.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The revision number of the deployment.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The revision number of the deployment.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The revision number of the deployment.</p>
     */
    inline Deployment& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The revision number of the deployment.</p>
     */
    inline Deployment& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The revision number of the deployment.</p>
     */
    inline Deployment& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


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
    inline Deployment& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The ID of the deployment.</p>
     */
    inline Deployment& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the deployment.</p>
     */
    inline Deployment& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>The name of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentName() const{ return m_deploymentName; }

    /**
     * <p>The name of the deployment.</p>
     */
    inline bool DeploymentNameHasBeenSet() const { return m_deploymentNameHasBeenSet; }

    /**
     * <p>The name of the deployment.</p>
     */
    inline void SetDeploymentName(const Aws::String& value) { m_deploymentNameHasBeenSet = true; m_deploymentName = value; }

    /**
     * <p>The name of the deployment.</p>
     */
    inline void SetDeploymentName(Aws::String&& value) { m_deploymentNameHasBeenSet = true; m_deploymentName = std::move(value); }

    /**
     * <p>The name of the deployment.</p>
     */
    inline void SetDeploymentName(const char* value) { m_deploymentNameHasBeenSet = true; m_deploymentName.assign(value); }

    /**
     * <p>The name of the deployment.</p>
     */
    inline Deployment& WithDeploymentName(const Aws::String& value) { SetDeploymentName(value); return *this;}

    /**
     * <p>The name of the deployment.</p>
     */
    inline Deployment& WithDeploymentName(Aws::String&& value) { SetDeploymentName(std::move(value)); return *this;}

    /**
     * <p>The name of the deployment.</p>
     */
    inline Deployment& WithDeploymentName(const char* value) { SetDeploymentName(value); return *this;}


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
    inline Deployment& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The time at which the deployment was created, expressed in ISO 8601
     * format.</p>
     */
    inline Deployment& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The status of the deployment.</p>
     */
    inline const DeploymentStatus& GetDeploymentStatus() const{ return m_deploymentStatus; }

    /**
     * <p>The status of the deployment.</p>
     */
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }

    /**
     * <p>The status of the deployment.</p>
     */
    inline void SetDeploymentStatus(const DeploymentStatus& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }

    /**
     * <p>The status of the deployment.</p>
     */
    inline void SetDeploymentStatus(DeploymentStatus&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::move(value); }

    /**
     * <p>The status of the deployment.</p>
     */
    inline Deployment& WithDeploymentStatus(const DeploymentStatus& value) { SetDeploymentStatus(value); return *this;}

    /**
     * <p>The status of the deployment.</p>
     */
    inline Deployment& WithDeploymentStatus(DeploymentStatus&& value) { SetDeploymentStatus(std::move(value)); return *this;}


    /**
     * <p>Whether or not the deployment is the latest revision for its target.</p>
     */
    inline bool GetIsLatestForTarget() const{ return m_isLatestForTarget; }

    /**
     * <p>Whether or not the deployment is the latest revision for its target.</p>
     */
    inline bool IsLatestForTargetHasBeenSet() const { return m_isLatestForTargetHasBeenSet; }

    /**
     * <p>Whether or not the deployment is the latest revision for its target.</p>
     */
    inline void SetIsLatestForTarget(bool value) { m_isLatestForTargetHasBeenSet = true; m_isLatestForTarget = value; }

    /**
     * <p>Whether or not the deployment is the latest revision for its target.</p>
     */
    inline Deployment& WithIsLatestForTarget(bool value) { SetIsLatestForTarget(value); return *this;}


    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline const Aws::String& GetParentTargetArn() const{ return m_parentTargetArn; }

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline bool ParentTargetArnHasBeenSet() const { return m_parentTargetArnHasBeenSet; }

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline void SetParentTargetArn(const Aws::String& value) { m_parentTargetArnHasBeenSet = true; m_parentTargetArn = value; }

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline void SetParentTargetArn(Aws::String&& value) { m_parentTargetArnHasBeenSet = true; m_parentTargetArn = std::move(value); }

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline void SetParentTargetArn(const char* value) { m_parentTargetArnHasBeenSet = true; m_parentTargetArn.assign(value); }

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline Deployment& WithParentTargetArn(const Aws::String& value) { SetParentTargetArn(value); return *this;}

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline Deployment& WithParentTargetArn(Aws::String&& value) { SetParentTargetArn(std::move(value)); return *this;}

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline Deployment& WithParentTargetArn(const char* value) { SetParentTargetArn(value); return *this;}

  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_deploymentName;
    bool m_deploymentNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    DeploymentStatus m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet = false;

    bool m_isLatestForTarget;
    bool m_isLatestForTargetHasBeenSet = false;

    Aws::String m_parentTargetArn;
    bool m_parentTargetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
