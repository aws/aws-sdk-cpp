/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudControlApi
{
namespace Model
{

  /**
   * <p>Represents the current status of applicable Hooks for a resource operation
   * request. It contains list of Hook invocation information for the resource
   * specified in the request since the same target can invoke multiple Hooks. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-manage-requests.html">Managing
   * resource operation requests with Amazon Web Services Cloud Control API
   * </a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/HookProgressEvent">AWS
   * API Reference</a></p>
   */
  class HookProgressEvent
  {
  public:
    AWS_CLOUDCONTROLAPI_API HookProgressEvent();
    AWS_CLOUDCONTROLAPI_API HookProgressEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDCONTROLAPI_API HookProgressEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDCONTROLAPI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type name of the Hook being invoked.</p>
     */
    inline const Aws::String& GetHookTypeName() const{ return m_hookTypeName; }
    inline bool HookTypeNameHasBeenSet() const { return m_hookTypeNameHasBeenSet; }
    inline void SetHookTypeName(const Aws::String& value) { m_hookTypeNameHasBeenSet = true; m_hookTypeName = value; }
    inline void SetHookTypeName(Aws::String&& value) { m_hookTypeNameHasBeenSet = true; m_hookTypeName = std::move(value); }
    inline void SetHookTypeName(const char* value) { m_hookTypeNameHasBeenSet = true; m_hookTypeName.assign(value); }
    inline HookProgressEvent& WithHookTypeName(const Aws::String& value) { SetHookTypeName(value); return *this;}
    inline HookProgressEvent& WithHookTypeName(Aws::String&& value) { SetHookTypeName(std::move(value)); return *this;}
    inline HookProgressEvent& WithHookTypeName(const char* value) { SetHookTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type version of the Hook being invoked.</p>
     */
    inline const Aws::String& GetHookTypeVersionId() const{ return m_hookTypeVersionId; }
    inline bool HookTypeVersionIdHasBeenSet() const { return m_hookTypeVersionIdHasBeenSet; }
    inline void SetHookTypeVersionId(const Aws::String& value) { m_hookTypeVersionIdHasBeenSet = true; m_hookTypeVersionId = value; }
    inline void SetHookTypeVersionId(Aws::String&& value) { m_hookTypeVersionIdHasBeenSet = true; m_hookTypeVersionId = std::move(value); }
    inline void SetHookTypeVersionId(const char* value) { m_hookTypeVersionIdHasBeenSet = true; m_hookTypeVersionId.assign(value); }
    inline HookProgressEvent& WithHookTypeVersionId(const Aws::String& value) { SetHookTypeVersionId(value); return *this;}
    inline HookProgressEvent& WithHookTypeVersionId(Aws::String&& value) { SetHookTypeVersionId(std::move(value)); return *this;}
    inline HookProgressEvent& WithHookTypeVersionId(const char* value) { SetHookTypeVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Hook being invoked.</p>
     */
    inline const Aws::String& GetHookTypeArn() const{ return m_hookTypeArn; }
    inline bool HookTypeArnHasBeenSet() const { return m_hookTypeArnHasBeenSet; }
    inline void SetHookTypeArn(const Aws::String& value) { m_hookTypeArnHasBeenSet = true; m_hookTypeArn = value; }
    inline void SetHookTypeArn(Aws::String&& value) { m_hookTypeArnHasBeenSet = true; m_hookTypeArn = std::move(value); }
    inline void SetHookTypeArn(const char* value) { m_hookTypeArnHasBeenSet = true; m_hookTypeArn.assign(value); }
    inline HookProgressEvent& WithHookTypeArn(const Aws::String& value) { SetHookTypeArn(value); return *this;}
    inline HookProgressEvent& WithHookTypeArn(Aws::String&& value) { SetHookTypeArn(std::move(value)); return *this;}
    inline HookProgressEvent& WithHookTypeArn(const char* value) { SetHookTypeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>States whether the Hook is invoked before or after resource provisioning.</p>
     */
    inline const Aws::String& GetInvocationPoint() const{ return m_invocationPoint; }
    inline bool InvocationPointHasBeenSet() const { return m_invocationPointHasBeenSet; }
    inline void SetInvocationPoint(const Aws::String& value) { m_invocationPointHasBeenSet = true; m_invocationPoint = value; }
    inline void SetInvocationPoint(Aws::String&& value) { m_invocationPointHasBeenSet = true; m_invocationPoint = std::move(value); }
    inline void SetInvocationPoint(const char* value) { m_invocationPointHasBeenSet = true; m_invocationPoint.assign(value); }
    inline HookProgressEvent& WithInvocationPoint(const Aws::String& value) { SetInvocationPoint(value); return *this;}
    inline HookProgressEvent& WithInvocationPoint(Aws::String&& value) { SetInvocationPoint(std::move(value)); return *this;}
    inline HookProgressEvent& WithInvocationPoint(const char* value) { SetInvocationPoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Hook invocation. The following are potential statuses:</p>
     * <ul> <li> <p> <code>HOOK_PENDING</code>: The Hook was added to the invocation
     * plan, but not yet invoked.</p> </li> <li> <p> <code>HOOK_IN_PROGRESS</code>: The
     * Hook was invoked, but hasn't completed.</p> </li> <li> <p>
     * <code>HOOK_COMPLETE_SUCCEEDED</code>: The Hook invocation is complete with a
     * successful result.</p> </li> <li> <p> <code>HOOK_COMPLETE_FAILED</code>: The
     * Hook invocation is complete with a failed result.</p> </li> <li> <p>
     * <code>HOOK_FAILED</code>: The Hook invocation didn't complete successfully.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetHookStatus() const{ return m_hookStatus; }
    inline bool HookStatusHasBeenSet() const { return m_hookStatusHasBeenSet; }
    inline void SetHookStatus(const Aws::String& value) { m_hookStatusHasBeenSet = true; m_hookStatus = value; }
    inline void SetHookStatus(Aws::String&& value) { m_hookStatusHasBeenSet = true; m_hookStatus = std::move(value); }
    inline void SetHookStatus(const char* value) { m_hookStatusHasBeenSet = true; m_hookStatus.assign(value); }
    inline HookProgressEvent& WithHookStatus(const Aws::String& value) { SetHookStatus(value); return *this;}
    inline HookProgressEvent& WithHookStatus(Aws::String&& value) { SetHookStatus(std::move(value)); return *this;}
    inline HookProgressEvent& WithHookStatus(const char* value) { SetHookStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the Hook invocation request initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetHookEventTime() const{ return m_hookEventTime; }
    inline bool HookEventTimeHasBeenSet() const { return m_hookEventTimeHasBeenSet; }
    inline void SetHookEventTime(const Aws::Utils::DateTime& value) { m_hookEventTimeHasBeenSet = true; m_hookEventTime = value; }
    inline void SetHookEventTime(Aws::Utils::DateTime&& value) { m_hookEventTimeHasBeenSet = true; m_hookEventTime = std::move(value); }
    inline HookProgressEvent& WithHookEventTime(const Aws::Utils::DateTime& value) { SetHookEventTime(value); return *this;}
    inline HookProgressEvent& WithHookEventTime(Aws::Utils::DateTime&& value) { SetHookEventTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message explaining the current Hook status.</p>
     */
    inline const Aws::String& GetHookStatusMessage() const{ return m_hookStatusMessage; }
    inline bool HookStatusMessageHasBeenSet() const { return m_hookStatusMessageHasBeenSet; }
    inline void SetHookStatusMessage(const Aws::String& value) { m_hookStatusMessageHasBeenSet = true; m_hookStatusMessage = value; }
    inline void SetHookStatusMessage(Aws::String&& value) { m_hookStatusMessageHasBeenSet = true; m_hookStatusMessage = std::move(value); }
    inline void SetHookStatusMessage(const char* value) { m_hookStatusMessageHasBeenSet = true; m_hookStatusMessage.assign(value); }
    inline HookProgressEvent& WithHookStatusMessage(const Aws::String& value) { SetHookStatusMessage(value); return *this;}
    inline HookProgressEvent& WithHookStatusMessage(Aws::String&& value) { SetHookStatusMessage(std::move(value)); return *this;}
    inline HookProgressEvent& WithHookStatusMessage(const char* value) { SetHookStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure mode of the invocation. The following are the potential
     * statuses:</p> <ul> <li> <p> <code>FAIL</code>: This will fail the Hook
     * invocation and the request associated with it.</p> </li> <li> <p>
     * <code>WARN</code>: This will fail the Hook invocation, but not the request
     * associated with it.</p> </li> </ul>
     */
    inline const Aws::String& GetFailureMode() const{ return m_failureMode; }
    inline bool FailureModeHasBeenSet() const { return m_failureModeHasBeenSet; }
    inline void SetFailureMode(const Aws::String& value) { m_failureModeHasBeenSet = true; m_failureMode = value; }
    inline void SetFailureMode(Aws::String&& value) { m_failureModeHasBeenSet = true; m_failureMode = std::move(value); }
    inline void SetFailureMode(const char* value) { m_failureModeHasBeenSet = true; m_failureMode.assign(value); }
    inline HookProgressEvent& WithFailureMode(const Aws::String& value) { SetFailureMode(value); return *this;}
    inline HookProgressEvent& WithFailureMode(Aws::String&& value) { SetFailureMode(std::move(value)); return *this;}
    inline HookProgressEvent& WithFailureMode(const char* value) { SetFailureMode(value); return *this;}
    ///@}
  private:

    Aws::String m_hookTypeName;
    bool m_hookTypeNameHasBeenSet = false;

    Aws::String m_hookTypeVersionId;
    bool m_hookTypeVersionIdHasBeenSet = false;

    Aws::String m_hookTypeArn;
    bool m_hookTypeArnHasBeenSet = false;

    Aws::String m_invocationPoint;
    bool m_invocationPointHasBeenSet = false;

    Aws::String m_hookStatus;
    bool m_hookStatusHasBeenSet = false;

    Aws::Utils::DateTime m_hookEventTime;
    bool m_hookEventTimeHasBeenSet = false;

    Aws::String m_hookStatusMessage;
    bool m_hookStatusMessageHasBeenSet = false;

    Aws::String m_failureMode;
    bool m_failureModeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
