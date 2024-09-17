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


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group. When creating a subdeployment, the
     * targetARN can only be a thing group.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }
    inline Deployment& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}
    inline Deployment& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}
    inline Deployment& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision number of the deployment.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }
    inline Deployment& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}
    inline Deployment& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}
    inline Deployment& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }
    inline Deployment& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}
    inline Deployment& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}
    inline Deployment& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}
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
    inline Deployment& WithDeploymentName(const Aws::String& value) { SetDeploymentName(value); return *this;}
    inline Deployment& WithDeploymentName(Aws::String&& value) { SetDeploymentName(std::move(value)); return *this;}
    inline Deployment& WithDeploymentName(const char* value) { SetDeploymentName(value); return *this;}
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
    inline Deployment& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}
    inline Deployment& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the deployment.</p>
     */
    inline const DeploymentStatus& GetDeploymentStatus() const{ return m_deploymentStatus; }
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }
    inline void SetDeploymentStatus(const DeploymentStatus& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }
    inline void SetDeploymentStatus(DeploymentStatus&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::move(value); }
    inline Deployment& WithDeploymentStatus(const DeploymentStatus& value) { SetDeploymentStatus(value); return *this;}
    inline Deployment& WithDeploymentStatus(DeploymentStatus&& value) { SetDeploymentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the deployment is the latest revision for its target.</p>
     */
    inline bool GetIsLatestForTarget() const{ return m_isLatestForTarget; }
    inline bool IsLatestForTargetHasBeenSet() const { return m_isLatestForTargetHasBeenSet; }
    inline void SetIsLatestForTarget(bool value) { m_isLatestForTargetHasBeenSet = true; m_isLatestForTarget = value; }
    inline Deployment& WithIsLatestForTarget(bool value) { SetIsLatestForTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline const Aws::String& GetParentTargetArn() const{ return m_parentTargetArn; }
    inline bool ParentTargetArnHasBeenSet() const { return m_parentTargetArnHasBeenSet; }
    inline void SetParentTargetArn(const Aws::String& value) { m_parentTargetArnHasBeenSet = true; m_parentTargetArn = value; }
    inline void SetParentTargetArn(Aws::String&& value) { m_parentTargetArnHasBeenSet = true; m_parentTargetArn = std::move(value); }
    inline void SetParentTargetArn(const char* value) { m_parentTargetArnHasBeenSet = true; m_parentTargetArn.assign(value); }
    inline Deployment& WithParentTargetArn(const Aws::String& value) { SetParentTargetArn(value); return *this;}
    inline Deployment& WithParentTargetArn(Aws::String&& value) { SetParentTargetArn(std::move(value)); return *this;}
    inline Deployment& WithParentTargetArn(const char* value) { SetParentTargetArn(value); return *this;}
    ///@}
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
