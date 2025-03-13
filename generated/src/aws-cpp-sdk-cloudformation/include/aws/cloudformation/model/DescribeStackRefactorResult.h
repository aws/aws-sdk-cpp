/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/StackRefactorExecutionStatus.h>
#include <aws/cloudformation/model/StackRefactorStatus.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{
  class DescribeStackRefactorResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeStackRefactorResult() = default;
    AWS_CLOUDFORMATION_API DescribeStackRefactorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeStackRefactorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A description to help you identify the refactor.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeStackRefactorResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID associated with the stack refactor created from the
     * <a>CreateStackRefactor</a> action.</p>
     */
    inline const Aws::String& GetStackRefactorId() const { return m_stackRefactorId; }
    template<typename StackRefactorIdT = Aws::String>
    void SetStackRefactorId(StackRefactorIdT&& value) { m_stackRefactorIdHasBeenSet = true; m_stackRefactorId = std::forward<StackRefactorIdT>(value); }
    template<typename StackRefactorIdT = Aws::String>
    DescribeStackRefactorResult& WithStackRefactorId(StackRefactorIdT&& value) { SetStackRefactorId(std::forward<StackRefactorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for each stack.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStackIds() const { return m_stackIds; }
    template<typename StackIdsT = Aws::Vector<Aws::String>>
    void SetStackIds(StackIdsT&& value) { m_stackIdsHasBeenSet = true; m_stackIds = std::forward<StackIdsT>(value); }
    template<typename StackIdsT = Aws::Vector<Aws::String>>
    DescribeStackRefactorResult& WithStackIds(StackIdsT&& value) { SetStackIds(std::forward<StackIdsT>(value)); return *this;}
    template<typename StackIdsT = Aws::String>
    DescribeStackRefactorResult& AddStackIds(StackIdsT&& value) { m_stackIdsHasBeenSet = true; m_stackIds.emplace_back(std::forward<StackIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The stack refactor execution operation status that's provided after calling
     * the <a>ExecuteStackRefactor</a> action.</p>
     */
    inline StackRefactorExecutionStatus GetExecutionStatus() const { return m_executionStatus; }
    inline void SetExecutionStatus(StackRefactorExecutionStatus value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }
    inline DescribeStackRefactorResult& WithExecutionStatus(StackRefactorExecutionStatus value) { SetExecutionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed explanation for the stack refactor
     * <code>ExecutionStatus</code>.</p>
     */
    inline const Aws::String& GetExecutionStatusReason() const { return m_executionStatusReason; }
    template<typename ExecutionStatusReasonT = Aws::String>
    void SetExecutionStatusReason(ExecutionStatusReasonT&& value) { m_executionStatusReasonHasBeenSet = true; m_executionStatusReason = std::forward<ExecutionStatusReasonT>(value); }
    template<typename ExecutionStatusReasonT = Aws::String>
    DescribeStackRefactorResult& WithExecutionStatusReason(ExecutionStatusReasonT&& value) { SetExecutionStatusReason(std::forward<ExecutionStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack refactor operation status that's provided after calling the
     * <a>CreateStackRefactor</a> action.</p>
     */
    inline StackRefactorStatus GetStatus() const { return m_status; }
    inline void SetStatus(StackRefactorStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeStackRefactorResult& WithStatus(StackRefactorStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed explanation for the stack refactor operation
     * <code>Status</code>.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    DescribeStackRefactorResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeStackRefactorResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_stackRefactorId;
    bool m_stackRefactorIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_stackIds;
    bool m_stackIdsHasBeenSet = false;

    StackRefactorExecutionStatus m_executionStatus{StackRefactorExecutionStatus::NOT_SET};
    bool m_executionStatusHasBeenSet = false;

    Aws::String m_executionStatusReason;
    bool m_executionStatusReasonHasBeenSet = false;

    StackRefactorStatus m_status{StackRefactorStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
