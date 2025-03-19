/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about a deployment rollback.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RollbackInfo">AWS
   * API Reference</a></p>
   */
  class RollbackInfo
  {
  public:
    AWS_CODEDEPLOY_API RollbackInfo() = default;
    AWS_CODEDEPLOY_API RollbackInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API RollbackInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the deployment rollback.</p>
     */
    inline const Aws::String& GetRollbackDeploymentId() const { return m_rollbackDeploymentId; }
    inline bool RollbackDeploymentIdHasBeenSet() const { return m_rollbackDeploymentIdHasBeenSet; }
    template<typename RollbackDeploymentIdT = Aws::String>
    void SetRollbackDeploymentId(RollbackDeploymentIdT&& value) { m_rollbackDeploymentIdHasBeenSet = true; m_rollbackDeploymentId = std::forward<RollbackDeploymentIdT>(value); }
    template<typename RollbackDeploymentIdT = Aws::String>
    RollbackInfo& WithRollbackDeploymentId(RollbackDeploymentIdT&& value) { SetRollbackDeploymentId(std::forward<RollbackDeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment ID of the deployment that was underway and triggered a
     * rollback deployment because it failed or was stopped.</p>
     */
    inline const Aws::String& GetRollbackTriggeringDeploymentId() const { return m_rollbackTriggeringDeploymentId; }
    inline bool RollbackTriggeringDeploymentIdHasBeenSet() const { return m_rollbackTriggeringDeploymentIdHasBeenSet; }
    template<typename RollbackTriggeringDeploymentIdT = Aws::String>
    void SetRollbackTriggeringDeploymentId(RollbackTriggeringDeploymentIdT&& value) { m_rollbackTriggeringDeploymentIdHasBeenSet = true; m_rollbackTriggeringDeploymentId = std::forward<RollbackTriggeringDeploymentIdT>(value); }
    template<typename RollbackTriggeringDeploymentIdT = Aws::String>
    RollbackInfo& WithRollbackTriggeringDeploymentId(RollbackTriggeringDeploymentIdT&& value) { SetRollbackTriggeringDeploymentId(std::forward<RollbackTriggeringDeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information that describes the status of a deployment rollback (for example,
     * whether the deployment can't be rolled back, is in progress, failed, or
     * succeeded). </p>
     */
    inline const Aws::String& GetRollbackMessage() const { return m_rollbackMessage; }
    inline bool RollbackMessageHasBeenSet() const { return m_rollbackMessageHasBeenSet; }
    template<typename RollbackMessageT = Aws::String>
    void SetRollbackMessage(RollbackMessageT&& value) { m_rollbackMessageHasBeenSet = true; m_rollbackMessage = std::forward<RollbackMessageT>(value); }
    template<typename RollbackMessageT = Aws::String>
    RollbackInfo& WithRollbackMessage(RollbackMessageT&& value) { SetRollbackMessage(std::forward<RollbackMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_rollbackDeploymentId;
    bool m_rollbackDeploymentIdHasBeenSet = false;

    Aws::String m_rollbackTriggeringDeploymentId;
    bool m_rollbackTriggeringDeploymentIdHasBeenSet = false;

    Aws::String m_rollbackMessage;
    bool m_rollbackMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
