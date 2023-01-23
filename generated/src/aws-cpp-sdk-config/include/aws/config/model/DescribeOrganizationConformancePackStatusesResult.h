/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/OrganizationConformancePackStatus.h>
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
  class DescribeOrganizationConformancePackStatusesResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeOrganizationConformancePackStatusesResult();
    AWS_CONFIGSERVICE_API DescribeOrganizationConformancePackStatusesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeOrganizationConformancePackStatusesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>OrganizationConformancePackStatus</code> objects. </p>
     */
    inline const Aws::Vector<OrganizationConformancePackStatus>& GetOrganizationConformancePackStatuses() const{ return m_organizationConformancePackStatuses; }

    /**
     * <p>A list of <code>OrganizationConformancePackStatus</code> objects. </p>
     */
    inline void SetOrganizationConformancePackStatuses(const Aws::Vector<OrganizationConformancePackStatus>& value) { m_organizationConformancePackStatuses = value; }

    /**
     * <p>A list of <code>OrganizationConformancePackStatus</code> objects. </p>
     */
    inline void SetOrganizationConformancePackStatuses(Aws::Vector<OrganizationConformancePackStatus>&& value) { m_organizationConformancePackStatuses = std::move(value); }

    /**
     * <p>A list of <code>OrganizationConformancePackStatus</code> objects. </p>
     */
    inline DescribeOrganizationConformancePackStatusesResult& WithOrganizationConformancePackStatuses(const Aws::Vector<OrganizationConformancePackStatus>& value) { SetOrganizationConformancePackStatuses(value); return *this;}

    /**
     * <p>A list of <code>OrganizationConformancePackStatus</code> objects. </p>
     */
    inline DescribeOrganizationConformancePackStatusesResult& WithOrganizationConformancePackStatuses(Aws::Vector<OrganizationConformancePackStatus>&& value) { SetOrganizationConformancePackStatuses(std::move(value)); return *this;}

    /**
     * <p>A list of <code>OrganizationConformancePackStatus</code> objects. </p>
     */
    inline DescribeOrganizationConformancePackStatusesResult& AddOrganizationConformancePackStatuses(const OrganizationConformancePackStatus& value) { m_organizationConformancePackStatuses.push_back(value); return *this; }

    /**
     * <p>A list of <code>OrganizationConformancePackStatus</code> objects. </p>
     */
    inline DescribeOrganizationConformancePackStatusesResult& AddOrganizationConformancePackStatuses(OrganizationConformancePackStatus&& value) { m_organizationConformancePackStatuses.push_back(std::move(value)); return *this; }


    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response. </p>
     */
    inline DescribeOrganizationConformancePackStatusesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response. </p>
     */
    inline DescribeOrganizationConformancePackStatusesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response. </p>
     */
    inline DescribeOrganizationConformancePackStatusesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<OrganizationConformancePackStatus> m_organizationConformancePackStatuses;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
