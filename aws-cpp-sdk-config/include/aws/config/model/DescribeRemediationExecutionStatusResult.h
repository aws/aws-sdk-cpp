/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CONFIGSERVICE_API DescribeRemediationExecutionStatusResult
  {
  public:
    DescribeRemediationExecutionStatusResult();
    DescribeRemediationExecutionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRemediationExecutionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
