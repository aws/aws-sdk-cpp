/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkLink
{
namespace Model
{
  class AWS_WORKLINK_API DescribeAuditStreamConfigurationResult
  {
  public:
    DescribeAuditStreamConfigurationResult();
    DescribeAuditStreamConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAuditStreamConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the Amazon Kinesis data stream that will receive the audit
     * events.</p>
     */
    inline const Aws::String& GetAuditStreamArn() const{ return m_auditStreamArn; }

    /**
     * <p>The ARN of the Amazon Kinesis data stream that will receive the audit
     * events.</p>
     */
    inline void SetAuditStreamArn(const Aws::String& value) { m_auditStreamArn = value; }

    /**
     * <p>The ARN of the Amazon Kinesis data stream that will receive the audit
     * events.</p>
     */
    inline void SetAuditStreamArn(Aws::String&& value) { m_auditStreamArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon Kinesis data stream that will receive the audit
     * events.</p>
     */
    inline void SetAuditStreamArn(const char* value) { m_auditStreamArn.assign(value); }

    /**
     * <p>The ARN of the Amazon Kinesis data stream that will receive the audit
     * events.</p>
     */
    inline DescribeAuditStreamConfigurationResult& WithAuditStreamArn(const Aws::String& value) { SetAuditStreamArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon Kinesis data stream that will receive the audit
     * events.</p>
     */
    inline DescribeAuditStreamConfigurationResult& WithAuditStreamArn(Aws::String&& value) { SetAuditStreamArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon Kinesis data stream that will receive the audit
     * events.</p>
     */
    inline DescribeAuditStreamConfigurationResult& WithAuditStreamArn(const char* value) { SetAuditStreamArn(value); return *this;}

  private:

    Aws::String m_auditStreamArn;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
