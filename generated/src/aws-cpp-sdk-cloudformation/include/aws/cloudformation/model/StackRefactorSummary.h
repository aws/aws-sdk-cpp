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
    AWS_CLOUDFORMATION_API StackRefactorSummary() = default;
    AWS_CLOUDFORMATION_API StackRefactorSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackRefactorSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID associated with the stack refactor created from the
     * <a>CreateStackRefactor</a> action.</p>
     */
    inline const Aws::String& GetStackRefactorId() const { return m_stackRefactorId; }
    inline bool StackRefactorIdHasBeenSet() const { return m_stackRefactorIdHasBeenSet; }
    template<typename StackRefactorIdT = Aws::String>
    void SetStackRefactorId(StackRefactorIdT&& value) { m_stackRefactorIdHasBeenSet = true; m_stackRefactorId = std::forward<StackRefactorIdT>(value); }
    template<typename StackRefactorIdT = Aws::String>
    StackRefactorSummary& WithStackRefactorId(StackRefactorIdT&& value) { SetStackRefactorId(std::forward<StackRefactorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description to help you identify the refactor.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StackRefactorSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation status that's provided after calling the
     * <a>ExecuteStackRefactor</a> action.</p>
     */
    inline StackRefactorExecutionStatus GetExecutionStatus() const { return m_executionStatus; }
    inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }
    inline void SetExecutionStatus(StackRefactorExecutionStatus value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }
    inline StackRefactorSummary& WithExecutionStatus(StackRefactorExecutionStatus value) { SetExecutionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed explanation for the stack refactor
     * <code>ExecutionStatus</code>.</p>
     */
    inline const Aws::String& GetExecutionStatusReason() const { return m_executionStatusReason; }
    inline bool ExecutionStatusReasonHasBeenSet() const { return m_executionStatusReasonHasBeenSet; }
    template<typename ExecutionStatusReasonT = Aws::String>
    void SetExecutionStatusReason(ExecutionStatusReasonT&& value) { m_executionStatusReasonHasBeenSet = true; m_executionStatusReason = std::forward<ExecutionStatusReasonT>(value); }
    template<typename ExecutionStatusReasonT = Aws::String>
    StackRefactorSummary& WithExecutionStatusReason(ExecutionStatusReasonT&& value) { SetExecutionStatusReason(std::forward<ExecutionStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack refactor operation status that's provided after calling the
     * <a>CreateStackRefactor</a> action.</p>
     */
    inline StackRefactorStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StackRefactorStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StackRefactorSummary& WithStatus(StackRefactorStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed explanation for the stack refactor <code>Status</code>.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    StackRefactorSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackRefactorId;
    bool m_stackRefactorIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    StackRefactorExecutionStatus m_executionStatus{StackRefactorExecutionStatus::NOT_SET};
    bool m_executionStatusHasBeenSet = false;

    Aws::String m_executionStatusReason;
    bool m_executionStatusReasonHasBeenSet = false;

    StackRefactorStatus m_status{StackRefactorStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
