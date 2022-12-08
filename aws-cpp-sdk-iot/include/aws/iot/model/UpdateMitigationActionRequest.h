/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/MitigationActionParams.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class UpdateMitigationActionRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateMitigationActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMitigationAction"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The friendly name for the mitigation action. You cannot change the name by
     * using <code>UpdateMitigationAction</code>. Instead, you must delete and recreate
     * the mitigation action with the new name.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>The friendly name for the mitigation action. You cannot change the name by
     * using <code>UpdateMitigationAction</code>. Instead, you must delete and recreate
     * the mitigation action with the new name.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>The friendly name for the mitigation action. You cannot change the name by
     * using <code>UpdateMitigationAction</code>. Instead, you must delete and recreate
     * the mitigation action with the new name.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The friendly name for the mitigation action. You cannot change the name by
     * using <code>UpdateMitigationAction</code>. Instead, you must delete and recreate
     * the mitigation action with the new name.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>The friendly name for the mitigation action. You cannot change the name by
     * using <code>UpdateMitigationAction</code>. Instead, you must delete and recreate
     * the mitigation action with the new name.</p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p>The friendly name for the mitigation action. You cannot change the name by
     * using <code>UpdateMitigationAction</code>. Instead, you must delete and recreate
     * the mitigation action with the new name.</p>
     */
    inline UpdateMitigationActionRequest& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>The friendly name for the mitigation action. You cannot change the name by
     * using <code>UpdateMitigationAction</code>. Instead, you must delete and recreate
     * the mitigation action with the new name.</p>
     */
    inline UpdateMitigationActionRequest& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>The friendly name for the mitigation action. You cannot change the name by
     * using <code>UpdateMitigationAction</code>. Instead, you must delete and recreate
     * the mitigation action with the new name.</p>
     */
    inline UpdateMitigationActionRequest& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p>The ARN of the IAM role that is used to apply the mitigation action.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that is used to apply the mitigation action.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that is used to apply the mitigation action.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that is used to apply the mitigation action.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that is used to apply the mitigation action.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that is used to apply the mitigation action.</p>
     */
    inline UpdateMitigationActionRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that is used to apply the mitigation action.</p>
     */
    inline UpdateMitigationActionRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that is used to apply the mitigation action.</p>
     */
    inline UpdateMitigationActionRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Defines the type of action and the parameters for that action.</p>
     */
    inline const MitigationActionParams& GetActionParams() const{ return m_actionParams; }

    /**
     * <p>Defines the type of action and the parameters for that action.</p>
     */
    inline bool ActionParamsHasBeenSet() const { return m_actionParamsHasBeenSet; }

    /**
     * <p>Defines the type of action and the parameters for that action.</p>
     */
    inline void SetActionParams(const MitigationActionParams& value) { m_actionParamsHasBeenSet = true; m_actionParams = value; }

    /**
     * <p>Defines the type of action and the parameters for that action.</p>
     */
    inline void SetActionParams(MitigationActionParams&& value) { m_actionParamsHasBeenSet = true; m_actionParams = std::move(value); }

    /**
     * <p>Defines the type of action and the parameters for that action.</p>
     */
    inline UpdateMitigationActionRequest& WithActionParams(const MitigationActionParams& value) { SetActionParams(value); return *this;}

    /**
     * <p>Defines the type of action and the parameters for that action.</p>
     */
    inline UpdateMitigationActionRequest& WithActionParams(MitigationActionParams&& value) { SetActionParams(std::move(value)); return *this;}

  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    MitigationActionParams m_actionParams;
    bool m_actionParamsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
