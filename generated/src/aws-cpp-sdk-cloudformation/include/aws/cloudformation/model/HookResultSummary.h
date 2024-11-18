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
    AWS_CLOUDFORMATION_API HookResultSummary();
    AWS_CLOUDFORMATION_API HookResultSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API HookResultSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The exact point in the provisioning logic where the Hook runs.</p>
     */
    inline const HookInvocationPoint& GetInvocationPoint() const{ return m_invocationPoint; }
    inline bool InvocationPointHasBeenSet() const { return m_invocationPointHasBeenSet; }
    inline void SetInvocationPoint(const HookInvocationPoint& value) { m_invocationPointHasBeenSet = true; m_invocationPoint = value; }
    inline void SetInvocationPoint(HookInvocationPoint&& value) { m_invocationPointHasBeenSet = true; m_invocationPoint = std::move(value); }
    inline HookResultSummary& WithInvocationPoint(const HookInvocationPoint& value) { SetInvocationPoint(value); return *this;}
    inline HookResultSummary& WithInvocationPoint(HookInvocationPoint&& value) { SetInvocationPoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure mode of the invocation. The following are potential modes:</p>
     * <ul> <li> <p> <code>FAIL</code>: If the hook invocation returns a failure, then
     * the requested target operation should fail.</p> </li> <li> <p>
     * <code>WARN</code>: If the hook invocation returns a failure, then the requested
     * target operation should warn.</p> </li> </ul>
     */
    inline const HookFailureMode& GetFailureMode() const{ return m_failureMode; }
    inline bool FailureModeHasBeenSet() const { return m_failureModeHasBeenSet; }
    inline void SetFailureMode(const HookFailureMode& value) { m_failureModeHasBeenSet = true; m_failureMode = value; }
    inline void SetFailureMode(HookFailureMode&& value) { m_failureModeHasBeenSet = true; m_failureMode = std::move(value); }
    inline HookResultSummary& WithFailureMode(const HookFailureMode& value) { SetFailureMode(value); return *this;}
    inline HookResultSummary& WithFailureMode(HookFailureMode&& value) { SetFailureMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type name of the Hook being invoked.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline HookResultSummary& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline HookResultSummary& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline HookResultSummary& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Hook being invoked.</p>
     */
    inline const Aws::String& GetTypeVersionId() const{ return m_typeVersionId; }
    inline bool TypeVersionIdHasBeenSet() const { return m_typeVersionIdHasBeenSet; }
    inline void SetTypeVersionId(const Aws::String& value) { m_typeVersionIdHasBeenSet = true; m_typeVersionId = value; }
    inline void SetTypeVersionId(Aws::String&& value) { m_typeVersionIdHasBeenSet = true; m_typeVersionId = std::move(value); }
    inline void SetTypeVersionId(const char* value) { m_typeVersionIdHasBeenSet = true; m_typeVersionId.assign(value); }
    inline HookResultSummary& WithTypeVersionId(const Aws::String& value) { SetTypeVersionId(value); return *this;}
    inline HookResultSummary& WithTypeVersionId(Aws::String&& value) { SetTypeVersionId(std::move(value)); return *this;}
    inline HookResultSummary& WithTypeVersionId(const char* value) { SetTypeVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Hook type configuration.</p>
     */
    inline const Aws::String& GetTypeConfigurationVersionId() const{ return m_typeConfigurationVersionId; }
    inline bool TypeConfigurationVersionIdHasBeenSet() const { return m_typeConfigurationVersionIdHasBeenSet; }
    inline void SetTypeConfigurationVersionId(const Aws::String& value) { m_typeConfigurationVersionIdHasBeenSet = true; m_typeConfigurationVersionId = value; }
    inline void SetTypeConfigurationVersionId(Aws::String&& value) { m_typeConfigurationVersionIdHasBeenSet = true; m_typeConfigurationVersionId = std::move(value); }
    inline void SetTypeConfigurationVersionId(const char* value) { m_typeConfigurationVersionIdHasBeenSet = true; m_typeConfigurationVersionId.assign(value); }
    inline HookResultSummary& WithTypeConfigurationVersionId(const Aws::String& value) { SetTypeConfigurationVersionId(value); return *this;}
    inline HookResultSummary& WithTypeConfigurationVersionId(Aws::String&& value) { SetTypeConfigurationVersionId(std::move(value)); return *this;}
    inline HookResultSummary& WithTypeConfigurationVersionId(const char* value) { SetTypeConfigurationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Hook invocation.</p>
     */
    inline const HookStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const HookStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(HookStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline HookResultSummary& WithStatus(const HookStatus& value) { SetStatus(value); return *this;}
    inline HookResultSummary& WithStatus(HookStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the Hook results status. For example, if the Hook result is
     * in a <code>FAILED</code> state, this may contain additional information for the
     * <code>FAILED</code> state.</p>
     */
    inline const Aws::String& GetHookStatusReason() const{ return m_hookStatusReason; }
    inline bool HookStatusReasonHasBeenSet() const { return m_hookStatusReasonHasBeenSet; }
    inline void SetHookStatusReason(const Aws::String& value) { m_hookStatusReasonHasBeenSet = true; m_hookStatusReason = value; }
    inline void SetHookStatusReason(Aws::String&& value) { m_hookStatusReasonHasBeenSet = true; m_hookStatusReason = std::move(value); }
    inline void SetHookStatusReason(const char* value) { m_hookStatusReasonHasBeenSet = true; m_hookStatusReason.assign(value); }
    inline HookResultSummary& WithHookStatusReason(const Aws::String& value) { SetHookStatusReason(value); return *this;}
    inline HookResultSummary& WithHookStatusReason(Aws::String&& value) { SetHookStatusReason(std::move(value)); return *this;}
    inline HookResultSummary& WithHookStatusReason(const char* value) { SetHookStatusReason(value); return *this;}
    ///@}
  private:

    HookInvocationPoint m_invocationPoint;
    bool m_invocationPointHasBeenSet = false;

    HookFailureMode m_failureMode;
    bool m_failureModeHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_typeVersionId;
    bool m_typeVersionIdHasBeenSet = false;

    Aws::String m_typeConfigurationVersionId;
    bool m_typeConfigurationVersionIdHasBeenSet = false;

    HookStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_hookStatusReason;
    bool m_hookStatusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
