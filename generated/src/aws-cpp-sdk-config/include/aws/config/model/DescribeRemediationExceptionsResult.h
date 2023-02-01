/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/RemediationException.h>
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
  class DescribeRemediationExceptionsResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeRemediationExceptionsResult();
    AWS_CONFIGSERVICE_API DescribeRemediationExceptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeRemediationExceptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a list of remediation exception objects.</p>
     */
    inline const Aws::Vector<RemediationException>& GetRemediationExceptions() const{ return m_remediationExceptions; }

    /**
     * <p>Returns a list of remediation exception objects.</p>
     */
    inline void SetRemediationExceptions(const Aws::Vector<RemediationException>& value) { m_remediationExceptions = value; }

    /**
     * <p>Returns a list of remediation exception objects.</p>
     */
    inline void SetRemediationExceptions(Aws::Vector<RemediationException>&& value) { m_remediationExceptions = std::move(value); }

    /**
     * <p>Returns a list of remediation exception objects.</p>
     */
    inline DescribeRemediationExceptionsResult& WithRemediationExceptions(const Aws::Vector<RemediationException>& value) { SetRemediationExceptions(value); return *this;}

    /**
     * <p>Returns a list of remediation exception objects.</p>
     */
    inline DescribeRemediationExceptionsResult& WithRemediationExceptions(Aws::Vector<RemediationException>&& value) { SetRemediationExceptions(std::move(value)); return *this;}

    /**
     * <p>Returns a list of remediation exception objects.</p>
     */
    inline DescribeRemediationExceptionsResult& AddRemediationExceptions(const RemediationException& value) { m_remediationExceptions.push_back(value); return *this; }

    /**
     * <p>Returns a list of remediation exception objects.</p>
     */
    inline DescribeRemediationExceptionsResult& AddRemediationExceptions(RemediationException&& value) { m_remediationExceptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline DescribeRemediationExceptionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline DescribeRemediationExceptionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline DescribeRemediationExceptionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RemediationException> m_remediationExceptions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
