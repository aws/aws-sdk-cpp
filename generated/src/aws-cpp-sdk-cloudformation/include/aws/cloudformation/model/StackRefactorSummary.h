/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/StackRefactorExecutionStatus.h>
#include <aws/cloudformation/model/StackRefactorStatus.h>
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
   * <p>The summary of a stack refactor operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackRefactorSummary">AWS
   * API Reference</a></p>
   */
  class StackRefactorSummary
  {
  public:
    AWS_CLOUDFORMATION_API StackRefactorSummary();
    AWS_CLOUDFORMATION_API StackRefactorSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackRefactorSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID associated with the stack refactor created from the
     * <a>CreateStackRefactor</a> action.</p>
     */
    inline const Aws::String& GetStackRefactorId() const{ return m_stackRefactorId; }
    inline bool StackRefactorIdHasBeenSet() const { return m_stackRefactorIdHasBeenSet; }
    inline void SetStackRefactorId(const Aws::String& value) { m_stackRefactorIdHasBeenSet = true; m_stackRefactorId = value; }
    inline void SetStackRefactorId(Aws::String&& value) { m_stackRefactorIdHasBeenSet = true; m_stackRefactorId = std::move(value); }
    inline void SetStackRefactorId(const char* value) { m_stackRefactorIdHasBeenSet = true; m_stackRefactorId.assign(value); }
    inline StackRefactorSummary& WithStackRefactorId(const Aws::String& value) { SetStackRefactorId(value); return *this;}
    inline StackRefactorSummary& WithStackRefactorId(Aws::String&& value) { SetStackRefactorId(std::move(value)); return *this;}
    inline StackRefactorSummary& WithStackRefactorId(const char* value) { SetStackRefactorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description to help you identify the refactor.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline StackRefactorSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline StackRefactorSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline StackRefactorSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation status that's provided after calling the
     * <a>ExecuteStackRefactor</a> action.</p>
     */
    inline const StackRefactorExecutionStatus& GetExecutionStatus() const{ return m_executionStatus; }
    inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }
    inline void SetExecutionStatus(const StackRefactorExecutionStatus& value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }
    inline void SetExecutionStatus(StackRefactorExecutionStatus&& value) { m_executionStatusHasBeenSet = true; m_executionStatus = std::move(value); }
    inline StackRefactorSummary& WithExecutionStatus(const StackRefactorExecutionStatus& value) { SetExecutionStatus(value); return *this;}
    inline StackRefactorSummary& WithExecutionStatus(StackRefactorExecutionStatus&& value) { SetExecutionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed explanation for the stack refactor
     * <code>ExecutionStatus</code>.</p>
     */
    inline const Aws::String& GetExecutionStatusReason() const{ return m_executionStatusReason; }
    inline bool ExecutionStatusReasonHasBeenSet() const { return m_executionStatusReasonHasBeenSet; }
    inline void SetExecutionStatusReason(const Aws::String& value) { m_executionStatusReasonHasBeenSet = true; m_executionStatusReason = value; }
    inline void SetExecutionStatusReason(Aws::String&& value) { m_executionStatusReasonHasBeenSet = true; m_executionStatusReason = std::move(value); }
    inline void SetExecutionStatusReason(const char* value) { m_executionStatusReasonHasBeenSet = true; m_executionStatusReason.assign(value); }
    inline StackRefactorSummary& WithExecutionStatusReason(const Aws::String& value) { SetExecutionStatusReason(value); return *this;}
    inline StackRefactorSummary& WithExecutionStatusReason(Aws::String&& value) { SetExecutionStatusReason(std::move(value)); return *this;}
    inline StackRefactorSummary& WithExecutionStatusReason(const char* value) { SetExecutionStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack refactor operation status that's provided after calling the
     * <a>CreateStackRefactor</a> action.</p>
     */
    inline const StackRefactorStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StackRefactorStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StackRefactorStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline StackRefactorSummary& WithStatus(const StackRefactorStatus& value) { SetStatus(value); return *this;}
    inline StackRefactorSummary& WithStatus(StackRefactorStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed explanation for the stack refactor <code>Status</code>.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline StackRefactorSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline StackRefactorSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline StackRefactorSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}
  private:

    Aws::String m_stackRefactorId;
    bool m_stackRefactorIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    StackRefactorExecutionStatus m_executionStatus;
    bool m_executionStatusHasBeenSet = false;

    Aws::String m_executionStatusReason;
    bool m_executionStatusReasonHasBeenSet = false;

    StackRefactorStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
