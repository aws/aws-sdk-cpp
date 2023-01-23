/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/OrganizationConfigRule.h>
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
  class DescribeOrganizationConfigRulesResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeOrganizationConfigRulesResult();
    AWS_CONFIGSERVICE_API DescribeOrganizationConfigRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeOrganizationConfigRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a list of <code>OrganizationConfigRule</code> objects.</p>
     */
    inline const Aws::Vector<OrganizationConfigRule>& GetOrganizationConfigRules() const{ return m_organizationConfigRules; }

    /**
     * <p>Returns a list of <code>OrganizationConfigRule</code> objects.</p>
     */
    inline void SetOrganizationConfigRules(const Aws::Vector<OrganizationConfigRule>& value) { m_organizationConfigRules = value; }

    /**
     * <p>Returns a list of <code>OrganizationConfigRule</code> objects.</p>
     */
    inline void SetOrganizationConfigRules(Aws::Vector<OrganizationConfigRule>&& value) { m_organizationConfigRules = std::move(value); }

    /**
     * <p>Returns a list of <code>OrganizationConfigRule</code> objects.</p>
     */
    inline DescribeOrganizationConfigRulesResult& WithOrganizationConfigRules(const Aws::Vector<OrganizationConfigRule>& value) { SetOrganizationConfigRules(value); return *this;}

    /**
     * <p>Returns a list of <code>OrganizationConfigRule</code> objects.</p>
     */
    inline DescribeOrganizationConfigRulesResult& WithOrganizationConfigRules(Aws::Vector<OrganizationConfigRule>&& value) { SetOrganizationConfigRules(std::move(value)); return *this;}

    /**
     * <p>Returns a list of <code>OrganizationConfigRule</code> objects.</p>
     */
    inline DescribeOrganizationConfigRulesResult& AddOrganizationConfigRules(const OrganizationConfigRule& value) { m_organizationConfigRules.push_back(value); return *this; }

    /**
     * <p>Returns a list of <code>OrganizationConfigRule</code> objects.</p>
     */
    inline DescribeOrganizationConfigRulesResult& AddOrganizationConfigRules(OrganizationConfigRule&& value) { m_organizationConfigRules.push_back(std::move(value)); return *this; }


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
    inline DescribeOrganizationConfigRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline DescribeOrganizationConfigRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline DescribeOrganizationConfigRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<OrganizationConfigRule> m_organizationConfigRules;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
