/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/HookInvocationPoint.h>
#include <aws/cloudformation/model/HookFailureMode.h>
#include <aws/cloudformation/model/HookStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/ListHookResultsTargetType.h>
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
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>Describes a Hook invocation, its status, and the reason for its
   * status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/HookResultSummary">AWS
   * API Reference</a></p>
   */
  class HookResultSummary
  {
  public:
    AWS_CLOUDFORMATION_API HookResultSummary() = default;
    AWS_CLOUDFORMATION_API HookResultSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API HookResultSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier for this Hook invocation result.</p>
     */
    inline const Aws::String& GetHookResultId() const { return m_hookResultId; }
    inline bool HookResultIdHasBeenSet() const { return m_hookResultIdHasBeenSet; }
    template<typename HookResultIdT = Aws::String>
    void SetHookResultId(HookResultIdT&& value) { m_hookResultIdHasBeenSet = true; m_hookResultId = std::forward<HookResultIdT>(value); }
    template<typename HookResultIdT = Aws::String>
    HookResultSummary& WithHookResultId(HookResultIdT&& value) { SetHookResultId(std::forward<HookResultIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific point in the provisioning process where the Hook is invoked.</p>
     */
    inline HookInvocationPoint GetInvocationPoint() const { return m_invocationPoint; }
    inline bool InvocationPointHasBeenSet() const { return m_invocationPointHasBeenSet; }
    inline void SetInvocationPoint(HookInvocationPoint value) { m_invocationPointHasBeenSet = true; m_invocationPoint = value; }
    inline HookResultSummary& WithInvocationPoint(HookInvocationPoint value) { SetInvocationPoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure mode of the invocation.</p>
     */
    inline HookFailureMode GetFailureMode() const { return m_failureMode; }
    inline bool FailureModeHasBeenSet() const { return m_failureModeHasBeenSet; }
    inline void SetFailureMode(HookFailureMode value) { m_failureModeHasBeenSet = true; m_failureMode = value; }
    inline HookResultSummary& WithFailureMode(HookFailureMode value) { SetFailureMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Hook that was invoked.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    HookResultSummary& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Hook that was invoked.</p>
     */
    inline const Aws::String& GetTypeVersionId() const { return m_typeVersionId; }
    inline bool TypeVersionIdHasBeenSet() const { return m_typeVersionIdHasBeenSet; }
    template<typename TypeVersionIdT = Aws::String>
    void SetTypeVersionId(TypeVersionIdT&& value) { m_typeVersionIdHasBeenSet = true; m_typeVersionId = std::forward<TypeVersionIdT>(value); }
    template<typename TypeVersionIdT = Aws::String>
    HookResultSummary& WithTypeVersionId(TypeVersionIdT&& value) { SetTypeVersionId(std::forward<TypeVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Hook configuration.</p>
     */
    inline const Aws::String& GetTypeConfigurationVersionId() const { return m_typeConfigurationVersionId; }
    inline bool TypeConfigurationVersionIdHasBeenSet() const { return m_typeConfigurationVersionIdHasBeenSet; }
    template<typename TypeConfigurationVersionIdT = Aws::String>
    void SetTypeConfigurationVersionId(TypeConfigurationVersionIdT&& value) { m_typeConfigurationVersionIdHasBeenSet = true; m_typeConfigurationVersionId = std::forward<TypeConfigurationVersionIdT>(value); }
    template<typename TypeConfigurationVersionIdT = Aws::String>
    HookResultSummary& WithTypeConfigurationVersionId(TypeConfigurationVersionIdT&& value) { SetTypeConfigurationVersionId(std::forward<TypeConfigurationVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Hook invocation. The following statuses are possible:</p>
     * <ul> <li> <p> <code>HOOK_IN_PROGRESS</code>: The Hook is currently running.</p>
     * </li> <li> <p> <code>HOOK_COMPLETE_SUCCEEDED</code>: The Hook completed
     * successfully.</p> </li> <li> <p> <code>HOOK_COMPLETE_FAILED</code>: The Hook
     * completed but failed validation.</p> </li> <li> <p> <code>HOOK_FAILED</code>:
     * The Hook encountered an error during execution.</p> </li> </ul>
     */
    inline HookStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(HookStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline HookResultSummary& WithStatus(HookStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the Hook results status. For example, if the Hook result is
     * in a failed state, this may contain additional information for the failed
     * state.</p>
     */
    inline const Aws::String& GetHookStatusReason() const { return m_hookStatusReason; }
    inline bool HookStatusReasonHasBeenSet() const { return m_hookStatusReasonHasBeenSet; }
    template<typename HookStatusReasonT = Aws::String>
    void SetHookStatusReason(HookStatusReasonT&& value) { m_hookStatusReasonHasBeenSet = true; m_hookStatusReason = std::forward<HookStatusReasonT>(value); }
    template<typename HookStatusReasonT = Aws::String>
    HookResultSummary& WithHookStatusReason(HookStatusReasonT&& value) { SetHookStatusReason(std::forward<HookStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the Hook was invoked.</p> <p>Only shown in responses when
     * the request does not specify <code>TargetType</code> and <code>TargetId</code>
     * filters.</p>
     */
    inline const Aws::Utils::DateTime& GetInvokedAt() const { return m_invokedAt; }
    inline bool InvokedAtHasBeenSet() const { return m_invokedAtHasBeenSet; }
    template<typename InvokedAtT = Aws::Utils::DateTime>
    void SetInvokedAt(InvokedAtT&& value) { m_invokedAtHasBeenSet = true; m_invokedAt = std::forward<InvokedAtT>(value); }
    template<typename InvokedAtT = Aws::Utils::DateTime>
    HookResultSummary& WithInvokedAt(InvokedAtT&& value) { SetInvokedAt(std::forward<InvokedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target type that the Hook was invoked against.</p>
     */
    inline ListHookResultsTargetType GetTargetType() const { return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(ListHookResultsTargetType value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline HookResultSummary& WithTargetType(ListHookResultsTargetType value) { SetTargetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Hook invocation target.</p>
     */
    inline const Aws::String& GetTargetId() const { return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    template<typename TargetIdT = Aws::String>
    void SetTargetId(TargetIdT&& value) { m_targetIdHasBeenSet = true; m_targetId = std::forward<TargetIdT>(value); }
    template<typename TargetIdT = Aws::String>
    HookResultSummary& WithTargetId(TargetIdT&& value) { SetTargetId(std::forward<TargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Hook that was invoked.</p>
     */
    inline const Aws::String& GetTypeArn() const { return m_typeArn; }
    inline bool TypeArnHasBeenSet() const { return m_typeArnHasBeenSet; }
    template<typename TypeArnT = Aws::String>
    void SetTypeArn(TypeArnT&& value) { m_typeArnHasBeenSet = true; m_typeArn = std::forward<TypeArnT>(value); }
    template<typename TypeArnT = Aws::String>
    HookResultSummary& WithTypeArn(TypeArnT&& value) { SetTypeArn(std::forward<TypeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the target stack or request token of the Cloud Control API
     * operation.</p> <p>Only shown in responses when the request does not specify
     * <code>TargetType</code> and <code>TargetId</code> filters.</p>
     */
    inline const Aws::String& GetHookExecutionTarget() const { return m_hookExecutionTarget; }
    inline bool HookExecutionTargetHasBeenSet() const { return m_hookExecutionTargetHasBeenSet; }
    template<typename HookExecutionTargetT = Aws::String>
    void SetHookExecutionTarget(HookExecutionTargetT&& value) { m_hookExecutionTargetHasBeenSet = true; m_hookExecutionTarget = std::forward<HookExecutionTargetT>(value); }
    template<typename HookExecutionTargetT = Aws::String>
    HookResultSummary& WithHookExecutionTarget(HookExecutionTargetT&& value) { SetHookExecutionTarget(std::forward<HookExecutionTargetT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hookResultId;
    bool m_hookResultIdHasBeenSet = false;

    HookInvocationPoint m_invocationPoint{HookInvocationPoint::NOT_SET};
    bool m_invocationPointHasBeenSet = false;

    HookFailureMode m_failureMode{HookFailureMode::NOT_SET};
    bool m_failureModeHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_typeVersionId;
    bool m_typeVersionIdHasBeenSet = false;

    Aws::String m_typeConfigurationVersionId;
    bool m_typeConfigurationVersionIdHasBeenSet = false;

    HookStatus m_status{HookStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_hookStatusReason;
    bool m_hookStatusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_invokedAt{};
    bool m_invokedAtHasBeenSet = false;

    ListHookResultsTargetType m_targetType{ListHookResultsTargetType::NOT_SET};
    bool m_targetTypeHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    Aws::String m_typeArn;
    bool m_typeArnHasBeenSet = false;

    Aws::String m_hookExecutionTarget;
    bool m_hookExecutionTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
