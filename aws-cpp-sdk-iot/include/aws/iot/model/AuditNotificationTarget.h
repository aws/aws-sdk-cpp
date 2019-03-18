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
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Information about the targets to which audit notifications are
   * sent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AuditNotificationTarget">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API AuditNotificationTarget
  {
  public:
    AuditNotificationTarget();
    AuditNotificationTarget(Aws::Utils::Json::JsonView jsonValue);
    AuditNotificationTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the target (SNS topic) to which audit notifications are sent.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The ARN of the target (SNS topic) to which audit notifications are sent.</p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p>The ARN of the target (SNS topic) to which audit notifications are sent.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The ARN of the target (SNS topic) to which audit notifications are sent.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The ARN of the target (SNS topic) to which audit notifications are sent.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The ARN of the target (SNS topic) to which audit notifications are sent.</p>
     */
    inline AuditNotificationTarget& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The ARN of the target (SNS topic) to which audit notifications are sent.</p>
     */
    inline AuditNotificationTarget& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the target (SNS topic) to which audit notifications are sent.</p>
     */
    inline AuditNotificationTarget& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p>The ARN of the role that grants permission to send notifications to the
     * target.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role that grants permission to send notifications to the
     * target.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the role that grants permission to send notifications to the
     * target.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the role that grants permission to send notifications to the
     * target.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role that grants permission to send notifications to the
     * target.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role that grants permission to send notifications to the
     * target.</p>
     */
    inline AuditNotificationTarget& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that grants permission to send notifications to the
     * target.</p>
     */
    inline AuditNotificationTarget& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that grants permission to send notifications to the
     * target.</p>
     */
    inline AuditNotificationTarget& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>True if notifications to the target are enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>True if notifications to the target are enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>True if notifications to the target are enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>True if notifications to the target are enabled.</p>
     */
    inline AuditNotificationTarget& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
