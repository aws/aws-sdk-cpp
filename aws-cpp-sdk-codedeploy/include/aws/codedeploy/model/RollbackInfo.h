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
  class AWS_CODEDEPLOY_API RollbackInfo
  {
  public:
    RollbackInfo();
    RollbackInfo(Aws::Utils::Json::JsonView jsonValue);
    RollbackInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the deployment rollback.</p>
     */
    inline const Aws::String& GetRollbackDeploymentId() const{ return m_rollbackDeploymentId; }

    /**
     * <p>The ID of the deployment rollback.</p>
     */
    inline bool RollbackDeploymentIdHasBeenSet() const { return m_rollbackDeploymentIdHasBeenSet; }

    /**
     * <p>The ID of the deployment rollback.</p>
     */
    inline void SetRollbackDeploymentId(const Aws::String& value) { m_rollbackDeploymentIdHasBeenSet = true; m_rollbackDeploymentId = value; }

    /**
     * <p>The ID of the deployment rollback.</p>
     */
    inline void SetRollbackDeploymentId(Aws::String&& value) { m_rollbackDeploymentIdHasBeenSet = true; m_rollbackDeploymentId = std::move(value); }

    /**
     * <p>The ID of the deployment rollback.</p>
     */
    inline void SetRollbackDeploymentId(const char* value) { m_rollbackDeploymentIdHasBeenSet = true; m_rollbackDeploymentId.assign(value); }

    /**
     * <p>The ID of the deployment rollback.</p>
     */
    inline RollbackInfo& WithRollbackDeploymentId(const Aws::String& value) { SetRollbackDeploymentId(value); return *this;}

    /**
     * <p>The ID of the deployment rollback.</p>
     */
    inline RollbackInfo& WithRollbackDeploymentId(Aws::String&& value) { SetRollbackDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the deployment rollback.</p>
     */
    inline RollbackInfo& WithRollbackDeploymentId(const char* value) { SetRollbackDeploymentId(value); return *this;}


    /**
     * <p>The deployment ID of the deployment that was underway and triggered a
     * rollback deployment because it failed or was stopped.</p>
     */
    inline const Aws::String& GetRollbackTriggeringDeploymentId() const{ return m_rollbackTriggeringDeploymentId; }

    /**
     * <p>The deployment ID of the deployment that was underway and triggered a
     * rollback deployment because it failed or was stopped.</p>
     */
    inline bool RollbackTriggeringDeploymentIdHasBeenSet() const { return m_rollbackTriggeringDeploymentIdHasBeenSet; }

    /**
     * <p>The deployment ID of the deployment that was underway and triggered a
     * rollback deployment because it failed or was stopped.</p>
     */
    inline void SetRollbackTriggeringDeploymentId(const Aws::String& value) { m_rollbackTriggeringDeploymentIdHasBeenSet = true; m_rollbackTriggeringDeploymentId = value; }

    /**
     * <p>The deployment ID of the deployment that was underway and triggered a
     * rollback deployment because it failed or was stopped.</p>
     */
    inline void SetRollbackTriggeringDeploymentId(Aws::String&& value) { m_rollbackTriggeringDeploymentIdHasBeenSet = true; m_rollbackTriggeringDeploymentId = std::move(value); }

    /**
     * <p>The deployment ID of the deployment that was underway and triggered a
     * rollback deployment because it failed or was stopped.</p>
     */
    inline void SetRollbackTriggeringDeploymentId(const char* value) { m_rollbackTriggeringDeploymentIdHasBeenSet = true; m_rollbackTriggeringDeploymentId.assign(value); }

    /**
     * <p>The deployment ID of the deployment that was underway and triggered a
     * rollback deployment because it failed or was stopped.</p>
     */
    inline RollbackInfo& WithRollbackTriggeringDeploymentId(const Aws::String& value) { SetRollbackTriggeringDeploymentId(value); return *this;}

    /**
     * <p>The deployment ID of the deployment that was underway and triggered a
     * rollback deployment because it failed or was stopped.</p>
     */
    inline RollbackInfo& WithRollbackTriggeringDeploymentId(Aws::String&& value) { SetRollbackTriggeringDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The deployment ID of the deployment that was underway and triggered a
     * rollback deployment because it failed or was stopped.</p>
     */
    inline RollbackInfo& WithRollbackTriggeringDeploymentId(const char* value) { SetRollbackTriggeringDeploymentId(value); return *this;}


    /**
     * <p>Information that describes the status of a deployment rollback (for example,
     * whether the deployment can't be rolled back, is in progress, failed, or
     * succeeded). </p>
     */
    inline const Aws::String& GetRollbackMessage() const{ return m_rollbackMessage; }

    /**
     * <p>Information that describes the status of a deployment rollback (for example,
     * whether the deployment can't be rolled back, is in progress, failed, or
     * succeeded). </p>
     */
    inline bool RollbackMessageHasBeenSet() const { return m_rollbackMessageHasBeenSet; }

    /**
     * <p>Information that describes the status of a deployment rollback (for example,
     * whether the deployment can't be rolled back, is in progress, failed, or
     * succeeded). </p>
     */
    inline void SetRollbackMessage(const Aws::String& value) { m_rollbackMessageHasBeenSet = true; m_rollbackMessage = value; }

    /**
     * <p>Information that describes the status of a deployment rollback (for example,
     * whether the deployment can't be rolled back, is in progress, failed, or
     * succeeded). </p>
     */
    inline void SetRollbackMessage(Aws::String&& value) { m_rollbackMessageHasBeenSet = true; m_rollbackMessage = std::move(value); }

    /**
     * <p>Information that describes the status of a deployment rollback (for example,
     * whether the deployment can't be rolled back, is in progress, failed, or
     * succeeded). </p>
     */
    inline void SetRollbackMessage(const char* value) { m_rollbackMessageHasBeenSet = true; m_rollbackMessage.assign(value); }

    /**
     * <p>Information that describes the status of a deployment rollback (for example,
     * whether the deployment can't be rolled back, is in progress, failed, or
     * succeeded). </p>
     */
    inline RollbackInfo& WithRollbackMessage(const Aws::String& value) { SetRollbackMessage(value); return *this;}

    /**
     * <p>Information that describes the status of a deployment rollback (for example,
     * whether the deployment can't be rolled back, is in progress, failed, or
     * succeeded). </p>
     */
    inline RollbackInfo& WithRollbackMessage(Aws::String&& value) { SetRollbackMessage(std::move(value)); return *this;}

    /**
     * <p>Information that describes the status of a deployment rollback (for example,
     * whether the deployment can't be rolled back, is in progress, failed, or
     * succeeded). </p>
     */
    inline RollbackInfo& WithRollbackMessage(const char* value) { SetRollbackMessage(value); return *this;}

  private:

    Aws::String m_rollbackDeploymentId;
    bool m_rollbackDeploymentIdHasBeenSet;

    Aws::String m_rollbackTriggeringDeploymentId;
    bool m_rollbackTriggeringDeploymentIdHasBeenSet;

    Aws::String m_rollbackMessage;
    bool m_rollbackMessageHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
