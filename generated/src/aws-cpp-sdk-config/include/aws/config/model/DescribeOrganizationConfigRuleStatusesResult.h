/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/OrganizationConfigRuleStatus.h>
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
  class DescribeOrganizationConfigRuleStatusesResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeOrganizationConfigRuleStatusesResult();
    AWS_CONFIGSERVICE_API DescribeOrganizationConfigRuleStatusesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeOrganizationConfigRuleStatusesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>OrganizationConfigRuleStatus</code> objects.</p>
     */
    inline const Aws::Vector<OrganizationConfigRuleStatus>& GetOrganizationConfigRuleStatuses() const{ return m_organizationConfigRuleStatuses; }

    /**
     * <p>A list of <code>OrganizationConfigRuleStatus</code> objects.</p>
     */
    inline void SetOrganizationConfigRuleStatuses(const Aws::Vector<OrganizationConfigRuleStatus>& value) { m_organizationConfigRuleStatuses = value; }

    /**
     * <p>A list of <code>OrganizationConfigRuleStatus</code> objects.</p>
     */
    inline void SetOrganizationConfigRuleStatuses(Aws::Vector<OrganizationConfigRuleStatus>&& value) { m_organizationConfigRuleStatuses = std::move(value); }

    /**
     * <p>A list of <code>OrganizationConfigRuleStatus</code> objects.</p>
     */
    inline DescribeOrganizationConfigRuleStatusesResult& WithOrganizationConfigRuleStatuses(const Aws::Vector<OrganizationConfigRuleStatus>& value) { SetOrganizationConfigRuleStatuses(value); return *this;}

    /**
     * <p>A list of <code>OrganizationConfigRuleStatus</code> objects.</p>
     */
    inline DescribeOrganizationConfigRuleStatusesResult& WithOrganizationConfigRuleStatuses(Aws::Vector<OrganizationConfigRuleStatus>&& value) { SetOrganizationConfigRuleStatuses(std::move(value)); return *this;}

    /**
     * <p>A list of <code>OrganizationConfigRuleStatus</code> objects.</p>
     */
    inline DescribeOrganizationConfigRuleStatusesResult& AddOrganizationConfigRuleStatuses(const OrganizationConfigRuleStatus& value) { m_organizationConfigRuleStatuses.push_back(value); return *this; }

    /**
     * <p>A list of <code>OrganizationConfigRuleStatus</code> objects.</p>
     */
    inline DescribeOrganizationConfigRuleStatusesResult& AddOrganizationConfigRuleStatuses(OrganizationConfigRuleStatus&& value) { m_organizationConfigRuleStatuses.push_back(std::move(value)); return *this; }


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
    inline DescribeOrganizationConfigRuleStatusesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline DescribeOrganizationConfigRuleStatusesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline DescribeOrganizationConfigRuleStatusesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<OrganizationConfigRuleStatus> m_organizationConfigRuleStatuses;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
