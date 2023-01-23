/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/MemberAccountStatus.h>
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
  class GetOrganizationConfigRuleDetailedStatusResult
  {
  public:
    AWS_CONFIGSERVICE_API GetOrganizationConfigRuleDetailedStatusResult();
    AWS_CONFIGSERVICE_API GetOrganizationConfigRuleDetailedStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetOrganizationConfigRuleDetailedStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>MemberAccountStatus</code> objects.</p>
     */
    inline const Aws::Vector<MemberAccountStatus>& GetOrganizationConfigRuleDetailedStatus() const{ return m_organizationConfigRuleDetailedStatus; }

    /**
     * <p>A list of <code>MemberAccountStatus</code> objects.</p>
     */
    inline void SetOrganizationConfigRuleDetailedStatus(const Aws::Vector<MemberAccountStatus>& value) { m_organizationConfigRuleDetailedStatus = value; }

    /**
     * <p>A list of <code>MemberAccountStatus</code> objects.</p>
     */
    inline void SetOrganizationConfigRuleDetailedStatus(Aws::Vector<MemberAccountStatus>&& value) { m_organizationConfigRuleDetailedStatus = std::move(value); }

    /**
     * <p>A list of <code>MemberAccountStatus</code> objects.</p>
     */
    inline GetOrganizationConfigRuleDetailedStatusResult& WithOrganizationConfigRuleDetailedStatus(const Aws::Vector<MemberAccountStatus>& value) { SetOrganizationConfigRuleDetailedStatus(value); return *this;}

    /**
     * <p>A list of <code>MemberAccountStatus</code> objects.</p>
     */
    inline GetOrganizationConfigRuleDetailedStatusResult& WithOrganizationConfigRuleDetailedStatus(Aws::Vector<MemberAccountStatus>&& value) { SetOrganizationConfigRuleDetailedStatus(std::move(value)); return *this;}

    /**
     * <p>A list of <code>MemberAccountStatus</code> objects.</p>
     */
    inline GetOrganizationConfigRuleDetailedStatusResult& AddOrganizationConfigRuleDetailedStatus(const MemberAccountStatus& value) { m_organizationConfigRuleDetailedStatus.push_back(value); return *this; }

    /**
     * <p>A list of <code>MemberAccountStatus</code> objects.</p>
     */
    inline GetOrganizationConfigRuleDetailedStatusResult& AddOrganizationConfigRuleDetailedStatus(MemberAccountStatus&& value) { m_organizationConfigRuleDetailedStatus.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline GetOrganizationConfigRuleDetailedStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline GetOrganizationConfigRuleDetailedStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline GetOrganizationConfigRuleDetailedStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MemberAccountStatus> m_organizationConfigRuleDetailedStatus;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
