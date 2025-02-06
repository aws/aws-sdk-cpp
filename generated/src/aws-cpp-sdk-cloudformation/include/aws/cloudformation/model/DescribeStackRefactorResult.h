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
    AWS_CLOUDFORMATION_API DescribeStackRefactorResult();
    AWS_CLOUDFORMATION_API DescribeStackRefactorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeStackRefactorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A description to help you identify the refactor.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeStackRefactorResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeStackRefactorResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeStackRefactorResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID associated with the stack refactor created from the
     * <a>CreateStackRefactor</a> action.</p>
     */
    inline const Aws::String& GetStackRefactorId() const{ return m_stackRefactorId; }
    inline void SetStackRefactorId(const Aws::String& value) { m_stackRefactorId = value; }
    inline void SetStackRefactorId(Aws::String&& value) { m_stackRefactorId = std::move(value); }
    inline void SetStackRefactorId(const char* value) { m_stackRefactorId.assign(value); }
    inline DescribeStackRefactorResult& WithStackRefactorId(const Aws::String& value) { SetStackRefactorId(value); return *this;}
    inline DescribeStackRefactorResult& WithStackRefactorId(Aws::String&& value) { SetStackRefactorId(std::move(value)); return *this;}
    inline DescribeStackRefactorResult& WithStackRefactorId(const char* value) { SetStackRefactorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for each stack.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStackIds() const{ return m_stackIds; }
    inline void SetStackIds(const Aws::Vector<Aws::String>& value) { m_stackIds = value; }
    inline void SetStackIds(Aws::Vector<Aws::String>&& value) { m_stackIds = std::move(value); }
    inline DescribeStackRefactorResult& WithStackIds(const Aws::Vector<Aws::String>& value) { SetStackIds(value); return *this;}
    inline DescribeStackRefactorResult& WithStackIds(Aws::Vector<Aws::String>&& value) { SetStackIds(std::move(value)); return *this;}
    inline DescribeStackRefactorResult& AddStackIds(const Aws::String& value) { m_stackIds.push_back(value); return *this; }
    inline DescribeStackRefactorResult& AddStackIds(Aws::String&& value) { m_stackIds.push_back(std::move(value)); return *this; }
    inline DescribeStackRefactorResult& AddStackIds(const char* value) { m_stackIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The stack refactor execution operation status that's provided after calling
     * the <a>ExecuteStackRefactor</a> action.</p>
     */
    inline const StackRefactorExecutionStatus& GetExecutionStatus() const{ return m_executionStatus; }
    inline void SetExecutionStatus(const StackRefactorExecutionStatus& value) { m_executionStatus = value; }
    inline void SetExecutionStatus(StackRefactorExecutionStatus&& value) { m_executionStatus = std::move(value); }
    inline DescribeStackRefactorResult& WithExecutionStatus(const StackRefactorExecutionStatus& value) { SetExecutionStatus(value); return *this;}
    inline DescribeStackRefactorResult& WithExecutionStatus(StackRefactorExecutionStatus&& value) { SetExecutionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed explanation for the stack refactor
     * <code>ExecutionStatus</code>.</p>
     */
    inline const Aws::String& GetExecutionStatusReason() const{ return m_executionStatusReason; }
    inline void SetExecutionStatusReason(const Aws::String& value) { m_executionStatusReason = value; }
    inline void SetExecutionStatusReason(Aws::String&& value) { m_executionStatusReason = std::move(value); }
    inline void SetExecutionStatusReason(const char* value) { m_executionStatusReason.assign(value); }
    inline DescribeStackRefactorResult& WithExecutionStatusReason(const Aws::String& value) { SetExecutionStatusReason(value); return *this;}
    inline DescribeStackRefactorResult& WithExecutionStatusReason(Aws::String&& value) { SetExecutionStatusReason(std::move(value)); return *this;}
    inline DescribeStackRefactorResult& WithExecutionStatusReason(const char* value) { SetExecutionStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack refactor operation status that's provided after calling the
     * <a>CreateStackRefactor</a> action.</p>
     */
    inline const StackRefactorStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const StackRefactorStatus& value) { m_status = value; }
    inline void SetStatus(StackRefactorStatus&& value) { m_status = std::move(value); }
    inline DescribeStackRefactorResult& WithStatus(const StackRefactorStatus& value) { SetStatus(value); return *this;}
    inline DescribeStackRefactorResult& WithStatus(StackRefactorStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed explanation for the stack refactor operation
     * <code>Status</code>.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline DescribeStackRefactorResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline DescribeStackRefactorResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline DescribeStackRefactorResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeStackRefactorResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeStackRefactorResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;

    Aws::String m_stackRefactorId;

    Aws::Vector<Aws::String> m_stackIds;

    StackRefactorExecutionStatus m_executionStatus;

    Aws::String m_executionStatusReason;

    StackRefactorStatus m_status;

    Aws::String m_statusReason;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
