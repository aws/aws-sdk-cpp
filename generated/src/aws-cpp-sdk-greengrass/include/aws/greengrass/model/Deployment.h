/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/DeploymentType.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a deployment.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/Deployment">AWS
   * API Reference</a></p>
   */
  class Deployment
  {
  public:
    AWS_GREENGRASS_API Deployment();
    AWS_GREENGRASS_API Deployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Deployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The time, in milliseconds since the epoch, when the deployment was created.
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }
    inline Deployment& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}
    inline Deployment& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}
    inline Deployment& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the deployment.
     */
    inline const Aws::String& GetDeploymentArn() const{ return m_deploymentArn; }
    inline bool DeploymentArnHasBeenSet() const { return m_deploymentArnHasBeenSet; }
    inline void SetDeploymentArn(const Aws::String& value) { m_deploymentArnHasBeenSet = true; m_deploymentArn = value; }
    inline void SetDeploymentArn(Aws::String&& value) { m_deploymentArnHasBeenSet = true; m_deploymentArn = std::move(value); }
    inline void SetDeploymentArn(const char* value) { m_deploymentArnHasBeenSet = true; m_deploymentArn.assign(value); }
    inline Deployment& WithDeploymentArn(const Aws::String& value) { SetDeploymentArn(value); return *this;}
    inline Deployment& WithDeploymentArn(Aws::String&& value) { SetDeploymentArn(std::move(value)); return *this;}
    inline Deployment& WithDeploymentArn(const char* value) { SetDeploymentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the deployment.
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
     * The type of the deployment.
     */
    inline const DeploymentType& GetDeploymentType() const{ return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(const DeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline void SetDeploymentType(DeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }
    inline Deployment& WithDeploymentType(const DeploymentType& value) { SetDeploymentType(value); return *this;}
    inline Deployment& WithDeploymentType(DeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the group for this deployment.
     */
    inline const Aws::String& GetGroupArn() const{ return m_groupArn; }
    inline bool GroupArnHasBeenSet() const { return m_groupArnHasBeenSet; }
    inline void SetGroupArn(const Aws::String& value) { m_groupArnHasBeenSet = true; m_groupArn = value; }
    inline void SetGroupArn(Aws::String&& value) { m_groupArnHasBeenSet = true; m_groupArn = std::move(value); }
    inline void SetGroupArn(const char* value) { m_groupArnHasBeenSet = true; m_groupArn.assign(value); }
    inline Deployment& WithGroupArn(const Aws::String& value) { SetGroupArn(value); return *this;}
    inline Deployment& WithGroupArn(Aws::String&& value) { SetGroupArn(std::move(value)); return *this;}
    inline Deployment& WithGroupArn(const char* value) { SetGroupArn(value); return *this;}
    ///@}
  private:

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_deploymentArn;
    bool m_deploymentArnHasBeenSet = false;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    DeploymentType m_deploymentType;
    bool m_deploymentTypeHasBeenSet = false;

    Aws::String m_groupArn;
    bool m_groupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
