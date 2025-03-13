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
    AWS_GREENGRASS_API Deployment() = default;
    AWS_GREENGRASS_API Deployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Deployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The time, in milliseconds since the epoch, when the deployment was created.
     */
    inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::String>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::String>
    Deployment& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the deployment.
     */
    inline const Aws::String& GetDeploymentArn() const { return m_deploymentArn; }
    inline bool DeploymentArnHasBeenSet() const { return m_deploymentArnHasBeenSet; }
    template<typename DeploymentArnT = Aws::String>
    void SetDeploymentArn(DeploymentArnT&& value) { m_deploymentArnHasBeenSet = true; m_deploymentArn = std::forward<DeploymentArnT>(value); }
    template<typename DeploymentArnT = Aws::String>
    Deployment& WithDeploymentArn(DeploymentArnT&& value) { SetDeploymentArn(std::forward<DeploymentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the deployment.
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    Deployment& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The type of the deployment.
     */
    inline DeploymentType GetDeploymentType() const { return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(DeploymentType value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline Deployment& WithDeploymentType(DeploymentType value) { SetDeploymentType(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the group for this deployment.
     */
    inline const Aws::String& GetGroupArn() const { return m_groupArn; }
    inline bool GroupArnHasBeenSet() const { return m_groupArnHasBeenSet; }
    template<typename GroupArnT = Aws::String>
    void SetGroupArn(GroupArnT&& value) { m_groupArnHasBeenSet = true; m_groupArn = std::forward<GroupArnT>(value); }
    template<typename GroupArnT = Aws::String>
    Deployment& WithGroupArn(GroupArnT&& value) { SetGroupArn(std::forward<GroupArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_deploymentArn;
    bool m_deploymentArnHasBeenSet = false;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    DeploymentType m_deploymentType{DeploymentType::NOT_SET};
    bool m_deploymentTypeHasBeenSet = false;

    Aws::String m_groupArn;
    bool m_groupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
