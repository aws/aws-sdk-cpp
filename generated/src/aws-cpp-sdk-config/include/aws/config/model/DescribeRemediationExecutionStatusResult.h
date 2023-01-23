/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/RemediationExecutionStatus.h>
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
namespace ConfigService
{
namespace Model
{
  class DescribeRemediationExecutionStatusResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeRemediationExecutionStatusResult();
    AWS_CONFIGSERVICE_API DescribeRemediationExecutionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeRemediationExecutionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a list of remediation execution statuses objects.</p>
     */
    inline const Aws::Vector<RemediationExecutionStatus>& GetRemediationExecutionStatuses() const{ return m_remediationExecutionStatuses; }

    /**
     * <p>Returns a list of remediation execution statuses objects.</p>
     */
    inline void SetRemediationExecutionStatuses(const Aws::Vector<RemediationExecutionStatus>& value) { m_remediationExecutionStatuses = value; }

    /**
     * <p>Returns a list of remediation execution statuses objects.</p>
     */
    inline void SetRemediationExecutionStatuses(Aws::Vector<RemediationExecutionStatus>&& value) { m_remediationExecutionStatuses = std::move(value); }

    /**
     * <p>Returns a list of remediation execution statuses objects.</p>
     */
    inline DescribeRemediationExecutionStatusResult& WithRemediationExecutionStatuses(const Aws::Vector<RemediationExecutionStatus>& value) { SetRemediationExecutionStatuses(value); return *this;}

    /**
     * <p>Returns a list of remediation execution statuses objects.</p>
     */
    inline DescribeRemediationExecutionStatusResult& WithRemediationExecutionStatuses(Aws::Vector<RemediationExecutionStatus>&& value) { SetRemediationExecutionStatuses(std::move(value)); return *this;}

    /**
     * <p>Returns a list of remediation execution statuses objects.</p>
     */
    inline DescribeRemediationExecutionStatusResult& AddRemediationExecutionStatuses(const RemediationExecutionStatus& value) { m_remediationExecutionStatuses.push_back(value); return *this; }

    /**
     * <p>Returns a list of remediation execution statuses objects.</p>
     */
    inline DescribeRemediationExecutionStatusResult& AddRemediationExecutionStatuses(RemediationExecutionStatus&& value) { m_remediationExecutionStatuses.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeRemediationExecutionStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeRemediationExecutionStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeRemediationExecutionStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RemediationExecutionStatus> m_remediationExecutionStatuses;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
