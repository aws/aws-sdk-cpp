/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/OrganizationConformancePack.h>
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
  class DescribeOrganizationConformancePacksResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeOrganizationConformancePacksResult();
    AWS_CONFIGSERVICE_API DescribeOrganizationConformancePacksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeOrganizationConformancePacksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a list of OrganizationConformancePacks objects.</p>
     */
    inline const Aws::Vector<OrganizationConformancePack>& GetOrganizationConformancePacks() const{ return m_organizationConformancePacks; }

    /**
     * <p>Returns a list of OrganizationConformancePacks objects.</p>
     */
    inline void SetOrganizationConformancePacks(const Aws::Vector<OrganizationConformancePack>& value) { m_organizationConformancePacks = value; }

    /**
     * <p>Returns a list of OrganizationConformancePacks objects.</p>
     */
    inline void SetOrganizationConformancePacks(Aws::Vector<OrganizationConformancePack>&& value) { m_organizationConformancePacks = std::move(value); }

    /**
     * <p>Returns a list of OrganizationConformancePacks objects.</p>
     */
    inline DescribeOrganizationConformancePacksResult& WithOrganizationConformancePacks(const Aws::Vector<OrganizationConformancePack>& value) { SetOrganizationConformancePacks(value); return *this;}

    /**
     * <p>Returns a list of OrganizationConformancePacks objects.</p>
     */
    inline DescribeOrganizationConformancePacksResult& WithOrganizationConformancePacks(Aws::Vector<OrganizationConformancePack>&& value) { SetOrganizationConformancePacks(std::move(value)); return *this;}

    /**
     * <p>Returns a list of OrganizationConformancePacks objects.</p>
     */
    inline DescribeOrganizationConformancePacksResult& AddOrganizationConformancePacks(const OrganizationConformancePack& value) { m_organizationConformancePacks.push_back(value); return *this; }

    /**
     * <p>Returns a list of OrganizationConformancePacks objects.</p>
     */
    inline DescribeOrganizationConformancePacksResult& AddOrganizationConformancePacks(OrganizationConformancePack&& value) { m_organizationConformancePacks.push_back(std::move(value)); return *this; }


    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline DescribeOrganizationConformancePacksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline DescribeOrganizationConformancePacksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline DescribeOrganizationConformancePacksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<OrganizationConformancePack> m_organizationConformancePacks;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
