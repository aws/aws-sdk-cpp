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
   * <p>Describes information used to specify a lifecycle hook for an Auto Scaling
   * group.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
   * EC2 Auto Scaling lifecycle hooks</a> in the <i>Amazon EC2 Auto Scaling User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/LifecycleHookSpecification">AWS
   * API Reference</a></p>
   */
  class LifecycleHookSpecification
  {
  public:
    AWS_AUTOSCALING_API LifecycleHookSpecification() = default;
    AWS_AUTOSCALING_API LifecycleHookSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API LifecycleHookSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    LifecycleHookSpecification& WithLifecycleHookName(LifecycleHookNameT&& value) { SetLifecycleHookName(std::forward<LifecycleHookNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle transition. For Auto Scaling groups, there are two major
     * lifecycle transitions.</p> <ul> <li> <p>To create a lifecycle hook for scale-out
     * events, specify <code>autoscaling:EC2_INSTANCE_LAUNCHING</code>.</p> </li> <li>
     * <p>To create a lifecycle hook for scale-in events, specify
     * <code>autoscaling:EC2_INSTANCE_TERMINATING</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetLifecycleTransition() const { return m_lifecycleTransition; }
    inline bool LifecycleTransitionHasBeenSet() const { return m_lifecycleTransitionHasBeenSet; }
    template<typename LifecycleTransitionT = Aws::String>
    void SetLifecycleTransition(LifecycleTransitionT&& value) { m_lifecycleTransitionHasBeenSet = true; m_lifecycleTransition = std::forward<LifecycleTransitionT>(value); }
    template<typename LifecycleTransitionT = Aws::String>
    LifecycleHookSpecification& WithLifecycleTransition(LifecycleTransitionT&& value) { SetLifecycleTransition(std::forward<LifecycleTransitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information that you want to include any time Amazon EC2 Auto
     * Scaling sends a message to the notification target.</p>
     */
    inline const Aws::String& GetNotificationMetadata() const { return m_notificationMetadata; }
    inline bool NotificationMetadataHasBeenSet() const { return m_notificationMetadataHasBeenSet; }
    template<typename NotificationMetadataT = Aws::String>
    void SetNotificationMetadata(NotificationMetadataT&& value) { m_notificationMetadataHasBeenSet = true; m_notificationMetadata = std::forward<NotificationMetadataT>(value); }
    template<typename NotificationMetadataT = Aws::String>
    LifecycleHookSpecification& WithNotificationMetadata(NotificationMetadataT&& value) { SetNotificationMetadata(std::forward<NotificationMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum time, in seconds, that can elapse before the lifecycle hook times
     * out. The range is from <code>30</code> to <code>7200</code> seconds. The default
     * value is <code>3600</code> seconds (1 hour).</p>
     */
    inline int GetHeartbeatTimeout() const { return m_heartbeatTimeout; }
    inline bool HeartbeatTimeoutHasBeenSet() const { return m_heartbeatTimeoutHasBeenSet; }
    inline void SetHeartbeatTimeout(int value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout = value; }
    inline LifecycleHookSpecification& WithHeartbeatTimeout(int value) { SetHeartbeatTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action the Auto Scaling group takes when the lifecycle hook timeout
     * elapses or if an unexpected failure occurs. The default value is
     * <code>ABANDON</code>.</p> <p>Valid values: <code>CONTINUE</code> |
     * <code>ABANDON</code> </p>
     */
    inline const Aws::String& GetDefaultResult() const { return m_defaultResult; }
    inline bool DefaultResultHasBeenSet() const { return m_defaultResultHasBeenSet; }
    template<typename DefaultResultT = Aws::String>
    void SetDefaultResult(DefaultResultT&& value) { m_defaultResultHasBeenSet = true; m_defaultResult = std::forward<DefaultResultT>(value); }
    template<typename DefaultResultT = Aws::String>
    LifecycleHookSpecification& WithDefaultResult(DefaultResultT&& value) { SetDefaultResult(std::forward<DefaultResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the notification target that Amazon EC2
     * Auto Scaling sends notifications to when an instance is in a wait state for the
     * lifecycle hook. You can specify an Amazon SNS topic or an Amazon SQS queue.</p>
     */
    inline const Aws::String& GetNotificationTargetARN() const { return m_notificationTargetARN; }
    inline bool NotificationTargetARNHasBeenSet() const { return m_notificationTargetARNHasBeenSet; }
    template<typename NotificationTargetARNT = Aws::String>
    void SetNotificationTargetARN(NotificationTargetARNT&& value) { m_notificationTargetARNHasBeenSet = true; m_notificationTargetARN = std::forward<NotificationTargetARNT>(value); }
    template<typename NotificationTargetARNT = Aws::String>
    LifecycleHookSpecification& WithNotificationTargetARN(NotificationTargetARNT&& value) { SetNotificationTargetARN(std::forward<NotificationTargetARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the
     * specified notification target. For information about creating this role, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/prepare-for-lifecycle-notifications.html">Prepare
     * to add a lifecycle hook to your Auto Scaling group</a> in the <i>Amazon EC2 Auto
     * Scaling User Guide</i>.</p> <p>Valid only if the notification target is an
     * Amazon SNS topic or an Amazon SQS queue.</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    LifecycleHookSpecification& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lifecycleHookName;
    bool m_lifecycleHookNameHasBeenSet = false;

    Aws::String m_lifecycleTransition;
    bool m_lifecycleTransitionHasBeenSet = false;

    Aws::String m_notificationMetadata;
    bool m_notificationMetadataHasBeenSet = false;

    int m_heartbeatTimeout{0};
    bool m_heartbeatTimeoutHasBeenSet = false;

    Aws::String m_defaultResult;
    bool m_defaultResultHasBeenSet = false;

    Aws::String m_notificationTargetARN;
    bool m_notificationTargetARNHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
