/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/health/model/EventScopeCode.h>
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
namespace Health
{
namespace Model
{
  class DescribeAffectedAccountsForOrganizationResult
  {
  public:
    AWS_HEALTH_API DescribeAffectedAccountsForOrganizationResult();
    AWS_HEALTH_API DescribeAffectedAccountsForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTH_API DescribeAffectedAccountsForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A JSON set of elements of the affected accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAffectedAccounts() const{ return m_affectedAccounts; }

    /**
     * <p>A JSON set of elements of the affected accounts.</p>
     */
    inline void SetAffectedAccounts(const Aws::Vector<Aws::String>& value) { m_affectedAccounts = value; }

    /**
     * <p>A JSON set of elements of the affected accounts.</p>
     */
    inline void SetAffectedAccounts(Aws::Vector<Aws::String>&& value) { m_affectedAccounts = std::move(value); }

    /**
     * <p>A JSON set of elements of the affected accounts.</p>
     */
    inline DescribeAffectedAccountsForOrganizationResult& WithAffectedAccounts(const Aws::Vector<Aws::String>& value) { SetAffectedAccounts(value); return *this;}

    /**
     * <p>A JSON set of elements of the affected accounts.</p>
     */
    inline DescribeAffectedAccountsForOrganizationResult& WithAffectedAccounts(Aws::Vector<Aws::String>&& value) { SetAffectedAccounts(std::move(value)); return *this;}

    /**
     * <p>A JSON set of elements of the affected accounts.</p>
     */
    inline DescribeAffectedAccountsForOrganizationResult& AddAffectedAccounts(const Aws::String& value) { m_affectedAccounts.push_back(value); return *this; }

    /**
     * <p>A JSON set of elements of the affected accounts.</p>
     */
    inline DescribeAffectedAccountsForOrganizationResult& AddAffectedAccounts(Aws::String&& value) { m_affectedAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>A JSON set of elements of the affected accounts.</p>
     */
    inline DescribeAffectedAccountsForOrganizationResult& AddAffectedAccounts(const char* value) { m_affectedAccounts.push_back(value); return *this; }


    /**
     * <p>This parameter specifies if the Health event is a public Amazon Web Services
     * service event or an account-specific event.</p> <ul> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>PUBLIC</code>, then the
     * <code>affectedAccounts</code> value is always empty.</p> </li> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>ACCOUNT_SPECIFIC</code>, then the
     * <code>affectedAccounts</code> value lists the affected Amazon Web Services
     * accounts in your organization. For example, if an event affects a service such
     * as Amazon Elastic Compute Cloud and you have Amazon Web Services accounts that
     * use that service, those account IDs appear in the response.</p> </li> <li> <p>If
     * the <code>eventScopeCode</code> value is <code>NONE</code>, then the
     * <code>eventArn</code> that you specified in the request is invalid or doesn't
     * exist.</p> </li> </ul>
     */
    inline const EventScopeCode& GetEventScopeCode() const{ return m_eventScopeCode; }

    /**
     * <p>This parameter specifies if the Health event is a public Amazon Web Services
     * service event or an account-specific event.</p> <ul> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>PUBLIC</code>, then the
     * <code>affectedAccounts</code> value is always empty.</p> </li> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>ACCOUNT_SPECIFIC</code>, then the
     * <code>affectedAccounts</code> value lists the affected Amazon Web Services
     * accounts in your organization. For example, if an event affects a service such
     * as Amazon Elastic Compute Cloud and you have Amazon Web Services accounts that
     * use that service, those account IDs appear in the response.</p> </li> <li> <p>If
     * the <code>eventScopeCode</code> value is <code>NONE</code>, then the
     * <code>eventArn</code> that you specified in the request is invalid or doesn't
     * exist.</p> </li> </ul>
     */
    inline void SetEventScopeCode(const EventScopeCode& value) { m_eventScopeCode = value; }

    /**
     * <p>This parameter specifies if the Health event is a public Amazon Web Services
     * service event or an account-specific event.</p> <ul> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>PUBLIC</code>, then the
     * <code>affectedAccounts</code> value is always empty.</p> </li> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>ACCOUNT_SPECIFIC</code>, then the
     * <code>affectedAccounts</code> value lists the affected Amazon Web Services
     * accounts in your organization. For example, if an event affects a service such
     * as Amazon Elastic Compute Cloud and you have Amazon Web Services accounts that
     * use that service, those account IDs appear in the response.</p> </li> <li> <p>If
     * the <code>eventScopeCode</code> value is <code>NONE</code>, then the
     * <code>eventArn</code> that you specified in the request is invalid or doesn't
     * exist.</p> </li> </ul>
     */
    inline void SetEventScopeCode(EventScopeCode&& value) { m_eventScopeCode = std::move(value); }

    /**
     * <p>This parameter specifies if the Health event is a public Amazon Web Services
     * service event or an account-specific event.</p> <ul> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>PUBLIC</code>, then the
     * <code>affectedAccounts</code> value is always empty.</p> </li> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>ACCOUNT_SPECIFIC</code>, then the
     * <code>affectedAccounts</code> value lists the affected Amazon Web Services
     * accounts in your organization. For example, if an event affects a service such
     * as Amazon Elastic Compute Cloud and you have Amazon Web Services accounts that
     * use that service, those account IDs appear in the response.</p> </li> <li> <p>If
     * the <code>eventScopeCode</code> value is <code>NONE</code>, then the
     * <code>eventArn</code> that you specified in the request is invalid or doesn't
     * exist.</p> </li> </ul>
     */
    inline DescribeAffectedAccountsForOrganizationResult& WithEventScopeCode(const EventScopeCode& value) { SetEventScopeCode(value); return *this;}

    /**
     * <p>This parameter specifies if the Health event is a public Amazon Web Services
     * service event or an account-specific event.</p> <ul> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>PUBLIC</code>, then the
     * <code>affectedAccounts</code> value is always empty.</p> </li> <li> <p>If the
     * <code>eventScopeCode</code> value is <code>ACCOUNT_SPECIFIC</code>, then the
     * <code>affectedAccounts</code> value lists the affected Amazon Web Services
     * accounts in your organization. For example, if an event affects a service such
     * as Amazon Elastic Compute Cloud and you have Amazon Web Services accounts that
     * use that service, those account IDs appear in the response.</p> </li> <li> <p>If
     * the <code>eventScopeCode</code> value is <code>NONE</code>, then the
     * <code>eventArn</code> that you specified in the request is invalid or doesn't
     * exist.</p> </li> </ul>
     */
    inline DescribeAffectedAccountsForOrganizationResult& WithEventScopeCode(EventScopeCode&& value) { SetEventScopeCode(std::move(value)); return *this;}


    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeAffectedAccountsForOrganizationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeAffectedAccountsForOrganizationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeAffectedAccountsForOrganizationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_affectedAccounts;

    EventScopeCode m_eventScopeCode;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
