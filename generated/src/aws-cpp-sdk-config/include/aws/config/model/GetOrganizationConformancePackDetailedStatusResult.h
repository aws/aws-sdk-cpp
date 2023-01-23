/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/OrganizationConformancePackDetailedStatus.h>
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
  class GetOrganizationConformancePackDetailedStatusResult
  {
  public:
    AWS_CONFIGSERVICE_API GetOrganizationConformancePackDetailedStatusResult();
    AWS_CONFIGSERVICE_API GetOrganizationConformancePackDetailedStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetOrganizationConformancePackDetailedStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>OrganizationConformancePackDetailedStatus</code> objects.
     * </p>
     */
    inline const Aws::Vector<OrganizationConformancePackDetailedStatus>& GetOrganizationConformancePackDetailedStatuses() const{ return m_organizationConformancePackDetailedStatuses; }

    /**
     * <p>A list of <code>OrganizationConformancePackDetailedStatus</code> objects.
     * </p>
     */
    inline void SetOrganizationConformancePackDetailedStatuses(const Aws::Vector<OrganizationConformancePackDetailedStatus>& value) { m_organizationConformancePackDetailedStatuses = value; }

    /**
     * <p>A list of <code>OrganizationConformancePackDetailedStatus</code> objects.
     * </p>
     */
    inline void SetOrganizationConformancePackDetailedStatuses(Aws::Vector<OrganizationConformancePackDetailedStatus>&& value) { m_organizationConformancePackDetailedStatuses = std::move(value); }

    /**
     * <p>A list of <code>OrganizationConformancePackDetailedStatus</code> objects.
     * </p>
     */
    inline GetOrganizationConformancePackDetailedStatusResult& WithOrganizationConformancePackDetailedStatuses(const Aws::Vector<OrganizationConformancePackDetailedStatus>& value) { SetOrganizationConformancePackDetailedStatuses(value); return *this;}

    /**
     * <p>A list of <code>OrganizationConformancePackDetailedStatus</code> objects.
     * </p>
     */
    inline GetOrganizationConformancePackDetailedStatusResult& WithOrganizationConformancePackDetailedStatuses(Aws::Vector<OrganizationConformancePackDetailedStatus>&& value) { SetOrganizationConformancePackDetailedStatuses(std::move(value)); return *this;}

    /**
     * <p>A list of <code>OrganizationConformancePackDetailedStatus</code> objects.
     * </p>
     */
    inline GetOrganizationConformancePackDetailedStatusResult& AddOrganizationConformancePackDetailedStatuses(const OrganizationConformancePackDetailedStatus& value) { m_organizationConformancePackDetailedStatuses.push_back(value); return *this; }

    /**
     * <p>A list of <code>OrganizationConformancePackDetailedStatus</code> objects.
     * </p>
     */
    inline GetOrganizationConformancePackDetailedStatusResult& AddOrganizationConformancePackDetailedStatuses(OrganizationConformancePackDetailedStatus&& value) { m_organizationConformancePackDetailedStatuses.push_back(std::move(value)); return *this; }


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
    inline GetOrganizationConformancePackDetailedStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response. </p>
     */
    inline GetOrganizationConformancePackDetailedStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response. </p>
     */
    inline GetOrganizationConformancePackDetailedStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<OrganizationConformancePackDetailedStatus> m_organizationConformancePackDetailedStatuses;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
