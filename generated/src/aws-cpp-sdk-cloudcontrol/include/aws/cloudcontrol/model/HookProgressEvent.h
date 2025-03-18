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
    AWS_CLOUDCONTROLAPI_API HookProgressEvent() = default;
    AWS_CLOUDCONTROLAPI_API HookProgressEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDCONTROLAPI_API HookProgressEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDCONTROLAPI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type name of the Hook being invoked.</p>
     */
    inline const Aws::String& GetHookTypeName() const { return m_hookTypeName; }
    inline bool HookTypeNameHasBeenSet() const { return m_hookTypeNameHasBeenSet; }
    template<typename HookTypeNameT = Aws::String>
    void SetHookTypeName(HookTypeNameT&& value) { m_hookTypeNameHasBeenSet = true; m_hookTypeName = std::forward<HookTypeNameT>(value); }
    template<typename HookTypeNameT = Aws::String>
    HookProgressEvent& WithHookTypeName(HookTypeNameT&& value) { SetHookTypeName(std::forward<HookTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type version of the Hook being invoked.</p>
     */
    inline const Aws::String& GetHookTypeVersionId() const { return m_hookTypeVersionId; }
    inline bool HookTypeVersionIdHasBeenSet() const { return m_hookTypeVersionIdHasBeenSet; }
    template<typename HookTypeVersionIdT = Aws::String>
    void SetHookTypeVersionId(HookTypeVersionIdT&& value) { m_hookTypeVersionIdHasBeenSet = true; m_hookTypeVersionId = std::forward<HookTypeVersionIdT>(value); }
    template<typename HookTypeVersionIdT = Aws::String>
    HookProgressEvent& WithHookTypeVersionId(HookTypeVersionIdT&& value) { SetHookTypeVersionId(std::forward<HookTypeVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Hook being invoked.</p>
     */
    inline const Aws::String& GetHookTypeArn() const { return m_hookTypeArn; }
    inline bool HookTypeArnHasBeenSet() const { return m_hookTypeArnHasBeenSet; }
    template<typename HookTypeArnT = Aws::String>
    void SetHookTypeArn(HookTypeArnT&& value) { m_hookTypeArnHasBeenSet = true; m_hookTypeArn = std::forward<HookTypeArnT>(value); }
    template<typename HookTypeArnT = Aws::String>
    HookProgressEvent& WithHookTypeArn(HookTypeArnT&& value) { SetHookTypeArn(std::forward<HookTypeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>States whether the Hook is invoked before or after resource provisioning.</p>
     */
    inline const Aws::String& GetInvocationPoint() const { return m_invocationPoint; }
    inline bool InvocationPointHasBeenSet() const { return m_invocationPointHasBeenSet; }
    template<typename InvocationPointT = Aws::String>
    void SetInvocationPoint(InvocationPointT&& value) { m_invocationPointHasBeenSet = true; m_invocationPoint = std::forward<InvocationPointT>(value); }
    template<typename InvocationPointT = Aws::String>
    HookProgressEvent& WithInvocationPoint(InvocationPointT&& value) { SetInvocationPoint(std::forward<InvocationPointT>(value)); return *this;}
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
    inline const Aws::String& GetHookStatus() const { return m_hookStatus; }
    inline bool HookStatusHasBeenSet() const { return m_hookStatusHasBeenSet; }
    template<typename HookStatusT = Aws::String>
    void SetHookStatus(HookStatusT&& value) { m_hookStatusHasBeenSet = true; m_hookStatus = std::forward<HookStatusT>(value); }
    template<typename HookStatusT = Aws::String>
    HookProgressEvent& WithHookStatus(HookStatusT&& value) { SetHookStatus(std::forward<HookStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the Hook invocation request initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetHookEventTime() const { return m_hookEventTime; }
    inline bool HookEventTimeHasBeenSet() const { return m_hookEventTimeHasBeenSet; }
    template<typename HookEventTimeT = Aws::Utils::DateTime>
    void SetHookEventTime(HookEventTimeT&& value) { m_hookEventTimeHasBeenSet = true; m_hookEventTime = std::forward<HookEventTimeT>(value); }
    template<typename HookEventTimeT = Aws::Utils::DateTime>
    HookProgressEvent& WithHookEventTime(HookEventTimeT&& value) { SetHookEventTime(std::forward<HookEventTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message explaining the current Hook status.</p>
     */
    inline const Aws::String& GetHookStatusMessage() const { return m_hookStatusMessage; }
    inline bool HookStatusMessageHasBeenSet() const { return m_hookStatusMessageHasBeenSet; }
    template<typename HookStatusMessageT = Aws::String>
    void SetHookStatusMessage(HookStatusMessageT&& value) { m_hookStatusMessageHasBeenSet = true; m_hookStatusMessage = std::forward<HookStatusMessageT>(value); }
    template<typename HookStatusMessageT = Aws::String>
    HookProgressEvent& WithHookStatusMessage(HookStatusMessageT&& value) { SetHookStatusMessage(std::forward<HookStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure mode of the invocation. The following are the potential
     * statuses:</p> <ul> <li> <p> <code>FAIL</code>: This will fail the Hook
     * invocation and the request associated with it.</p> </li> <li> <p>
     * <code>WARN</code>: This will fail the Hook invocation, but not the request
     * associated with it.</p> </li> </ul>
     */
    inline const Aws::String& GetFailureMode() const { return m_failureMode; }
    inline bool FailureModeHasBeenSet() const { return m_failureModeHasBeenSet; }
    template<typename FailureModeT = Aws::String>
    void SetFailureMode(FailureModeT&& value) { m_failureModeHasBeenSet = true; m_failureMode = std::forward<FailureModeT>(value); }
    template<typename FailureModeT = Aws::String>
    HookProgressEvent& WithFailureMode(FailureModeT&& value) { SetFailureMode(std::forward<FailureModeT>(value)); return *this;}
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

    Aws::Utils::DateTime m_hookEventTime{};
    bool m_hookEventTimeHasBeenSet = false;

    Aws::String m_hookStatusMessage;
    bool m_hookStatusMessageHasBeenSet = false;

    Aws::String m_failureMode;
    bool m_failureModeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
