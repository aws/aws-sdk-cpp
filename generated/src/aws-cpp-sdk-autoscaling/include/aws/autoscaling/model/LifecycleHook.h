/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes a lifecycle hook. A lifecycle hook lets you create solutions that
   * are aware of events in the Auto Scaling instance lifecycle, and then perform a
   * custom action on instances when the corresponding lifecycle event
   * occurs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/LifecycleHook">AWS
   * API Reference</a></p>
   */
  class LifecycleHook
  {
  public:
    AWS_AUTOSCALING_API LifecycleHook() = default;
    AWS_AUTOSCALING_API LifecycleHook(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API LifecycleHook& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the lifecycle hook.</p>
     */
    inline const Aws::String& GetLifecycleHookName() const { return m_lifecycleHookName; }
    inline bool LifecycleHookNameHasBeenSet() const { return m_lifecycleHookNameHasBeenSet; }
    template<typename LifecycleHookNameT = Aws::String>
    void SetLifecycleHookName(LifecycleHookNameT&& value) { m_lifecycleHookNameHasBeenSet = true; m_lifecycleHookName = std::forward<LifecycleHookNameT>(value); }
    template<typename LifecycleHookNameT = Aws::String>
    LifecycleHook& WithLifecycleHookName(LifecycleHookNameT&& value) { SetLifecycleHookName(std::forward<LifecycleHookNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Auto Scaling group for the lifecycle hook.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const { return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    template<typename AutoScalingGroupNameT = Aws::String>
    void SetAutoScalingGroupName(AutoScalingGroupNameT&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::forward<AutoScalingGroupNameT>(value); }
    template<typename AutoScalingGroupNameT = Aws::String>
    LifecycleHook& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle transition.</p> <p>Valid values:
     * <code>autoscaling:EC2_INSTANCE_LAUNCHING</code> |
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code> </p>
     */
    inline const Aws::String& GetLifecycleTransition() const { return m_lifecycleTransition; }
    inline bool LifecycleTransitionHasBeenSet() const { return m_lifecycleTransitionHasBeenSet; }
    template<typename LifecycleTransitionT = Aws::String>
    void SetLifecycleTransition(LifecycleTransitionT&& value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition = std::forward<LifecycleTransitionT>(value); }
    template<typename LifecycleTransitionT = Aws::String>
    LifecycleHook& WithLifecycleTransition(LifecycleTransitionT&& value) { SetLifecycleTransition(std::forward<LifecycleTransitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to
     * when an instance is in a wait state for the lifecycle hook.</p>
     */
    inline const Aws::String& GetNotificationTargetARN() const { return m_notificationTargetARN; }
    inline bool NotificationTargetARNHasBeenSet() const { return m_notificationTargetARNHasBeenSet; }
    template<typename NotificationTargetARNT = Aws::String>
    void SetNotificationTargetARN(NotificationTargetARNT&& value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN = std::forward<NotificationTargetARNT>(value); }
    template<typename NotificationTargetARNT = Aws::String>
    LifecycleHook& WithNotificationTargetARN(NotificationTargetARNT&& value) { SetNotificationTargetARN(std::forward<NotificationTargetARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target (an Amazon SNS topic or an Amazon SQS queue).</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    LifecycleHook& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information that is included any time Amazon EC2 Auto Scaling
     * sends a message to the notification target.</p>
     */
    inline const Aws::String& GetNotificationMetadata() const { return m_notificationMetadata; }
    inline bool NotificationMetadataHasBeenSet() const { return m_notificationMetadataHasBeenSet; }
    template<typename NotificationMetadataT = Aws::String>
    void SetNotificationMetadata(NotificationMetadataT&& value) { m_notificationMetadataHasBeenSet = true; m_notificationMetadata = std::forward<NotificationMetadataT>(value); }
    template<typename NotificationMetadataT = Aws::String>
    LifecycleHook& WithNotificationMetadata(NotificationMetadataT&& value) { SetNotificationMetadata(std::forward<NotificationMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum time, in seconds, that can elapse before the lifecycle hook times
     * out. If the lifecycle hook times out, Amazon EC2 Auto Scaling performs the
     * action that you specified in the <code>DefaultResult</code> property.</p>
     */
    inline int GetHeartbeatTimeout() const { return m_heartbeatTimeout; }
    inline bool HeartbeatTimeoutHasBeenSet() const { return m_heartbeatTimeoutHasBeenSet; }
    inline void SetHeartbeatTimeout(int value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout = value; }
    inline LifecycleHook& WithHeartbeatTimeout(int value) { SetHeartbeatTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum time, in seconds, that an instance can remain in a wait state.
     * The maximum is 172800 seconds (48 hours) or 100 times
     * <code>HeartbeatTimeout</code>, whichever is smaller.</p>
     */
    inline int GetGlobalTimeout() const { return m_globalTimeout; }
    inline bool GlobalTimeoutHasBeenSet() const { return m_globalTimeoutHasBeenSet; }
    inline void SetGlobalTimeout(int value) { m_globalTimeoutHasBeenSet = true; m_globalTimeout = value; }
    inline LifecycleHook& WithGlobalTimeout(int value) { SetGlobalTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs.</p> <p>Valid values:
     * <code>CONTINUE</code> | <code>ABANDON</code> </p>
     */
    inline const Aws::String& GetDefaultResult() const { return m_defaultResult; }
    inline bool DefaultResultHasBeenSet() const { return m_defaultResultHasBeenSet; }
    template<typename DefaultResultT = Aws::String>
    void SetDefaultResult(DefaultResultT&& value) { m_defaultResultHasBeenSet = true; m_defaultResult = std::forward<DefaultResultT>(value); }
    template<typename DefaultResultT = Aws::String>
    LifecycleHook& WithDefaultResult(DefaultResultT&& value) { SetDefaultResult(std::forward<DefaultResultT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lifecycleHookName;
    bool m_lifecycleHookNameHasBeenSet = false;

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::String m_lifecycleTransition;
    bool m_lifecycleTransitionHasBeenSet = false;

    Aws::String m_notificationTargetARN;
    bool m_notificationTargetARNHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Aws::String m_notificationMetadata;
    bool m_notificationMetadataHasBeenSet = false;

    int m_heartbeatTimeout{0};
    bool m_heartbeatTimeoutHasBeenSet = false;

    int m_globalTimeout{0};
    bool m_globalTimeoutHasBeenSet = false;

    Aws::String m_defaultResult;
    bool m_defaultResultHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
