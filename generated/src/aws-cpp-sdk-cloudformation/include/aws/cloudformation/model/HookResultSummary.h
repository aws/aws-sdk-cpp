/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/HookInvocationPoint.h>
#include <aws/cloudformation/model/HookFailureMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/HookStatus.h>
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
     * <p>The exact point in the provisioning logic where the Hook runs.</p>
     */
    inline HookInvocationPoint GetInvocationPoint() const { return m_invocationPoint; }
    inline bool InvocationPointHasBeenSet() const { return m_invocationPointHasBeenSet; }
    inline void SetInvocationPoint(HookInvocationPoint value) { m_invocationPointHasBeenSet = true; m_invocationPoint = value; }
    inline HookResultSummary& WithInvocationPoint(HookInvocationPoint value) { SetInvocationPoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure mode of the invocation. The following are potential modes:</p>
     * <ul> <li> <p> <code>FAIL</code>: If the hook invocation returns a failure, then
     * the requested target operation should fail.</p> </li> <li> <p>
     * <code>WARN</code>: If the hook invocation returns a failure, then the requested
     * target operation should warn.</p> </li> </ul>
     */
    inline HookFailureMode GetFailureMode() const { return m_failureMode; }
    inline bool FailureModeHasBeenSet() const { return m_failureModeHasBeenSet; }
    inline void SetFailureMode(HookFailureMode value) { m_failureModeHasBeenSet = true; m_failureMode = value; }
    inline HookResultSummary& WithFailureMode(HookFailureMode value) { SetFailureMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type name of the Hook being invoked.</p>
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
     * <p>The version of the Hook being invoked.</p>
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
     * <p>The version of the Hook type configuration.</p>
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
     * <p>The state of the Hook invocation.</p>
     */
    inline HookStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(HookStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline HookResultSummary& WithStatus(HookStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the Hook results status. For example, if the Hook result is
     * in a <code>FAILED</code> state, this may contain additional information for the
     * <code>FAILED</code> state.</p>
     */
    inline const Aws::String& GetHookStatusReason() const { return m_hookStatusReason; }
    inline bool HookStatusReasonHasBeenSet() const { return m_hookStatusReasonHasBeenSet; }
    template<typename HookStatusReasonT = Aws::String>
    void SetHookStatusReason(HookStatusReasonT&& value) { m_hookStatusReasonHasBeenSet = true; m_hookStatusReason = std::forward<HookStatusReasonT>(value); }
    template<typename HookStatusReasonT = Aws::String>
    HookResultSummary& WithHookStatusReason(HookStatusReasonT&& value) { SetHookStatusReason(std::forward<HookStatusReasonT>(value)); return *this;}
    ///@}
  private:

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
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
