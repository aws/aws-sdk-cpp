/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/OrganizationResourceDetailedStatusFilters.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class GetOrganizationConformancePackDetailedStatusRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API GetOrganizationConformancePackDetailedStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOrganizationConformancePackDetailedStatus"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of organization conformance pack for which you want status details
     * for member accounts.</p>
     */
    inline const Aws::String& GetOrganizationConformancePackName() const{ return m_organizationConformancePackName; }

    /**
     * <p>The name of organization conformance pack for which you want status details
     * for member accounts.</p>
     */
    inline bool OrganizationConformancePackNameHasBeenSet() const { return m_organizationConformancePackNameHasBeenSet; }

    /**
     * <p>The name of organization conformance pack for which you want status details
     * for member accounts.</p>
     */
    inline void SetOrganizationConformancePackName(const Aws::String& value) { m_organizationConformancePackNameHasBeenSet = true; m_organizationConformancePackName = value; }

    /**
     * <p>The name of organization conformance pack for which you want status details
     * for member accounts.</p>
     */
    inline void SetOrganizationConformancePackName(Aws::String&& value) { m_organizationConformancePackNameHasBeenSet = true; m_organizationConformancePackName = std::move(value); }

    /**
     * <p>The name of organization conformance pack for which you want status details
     * for member accounts.</p>
     */
    inline void SetOrganizationConformancePackName(const char* value) { m_organizationConformancePackNameHasBeenSet = true; m_organizationConformancePackName.assign(value); }

    /**
     * <p>The name of organization conformance pack for which you want status details
     * for member accounts.</p>
     */
    inline GetOrganizationConformancePackDetailedStatusRequest& WithOrganizationConformancePackName(const Aws::String& value) { SetOrganizationConformancePackName(value); return *this;}

    /**
     * <p>The name of organization conformance pack for which you want status details
     * for member accounts.</p>
     */
    inline GetOrganizationConformancePackDetailedStatusRequest& WithOrganizationConformancePackName(Aws::String&& value) { SetOrganizationConformancePackName(std::move(value)); return *this;}

    /**
     * <p>The name of organization conformance pack for which you want status details
     * for member accounts.</p>
     */
    inline GetOrganizationConformancePackDetailedStatusRequest& WithOrganizationConformancePackName(const char* value) { SetOrganizationConformancePackName(value); return *this;}


    /**
     * <p>An <code>OrganizationResourceDetailedStatusFilters</code> object.</p>
     */
    inline const OrganizationResourceDetailedStatusFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>An <code>OrganizationResourceDetailedStatusFilters</code> object.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An <code>OrganizationResourceDetailedStatusFilters</code> object.</p>
     */
    inline void SetFilters(const OrganizationResourceDetailedStatusFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An <code>OrganizationResourceDetailedStatusFilters</code> object.</p>
     */
    inline void SetFilters(OrganizationResourceDetailedStatusFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An <code>OrganizationResourceDetailedStatusFilters</code> object.</p>
     */
    inline GetOrganizationConformancePackDetailedStatusRequest& WithFilters(const OrganizationResourceDetailedStatusFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>An <code>OrganizationResourceDetailedStatusFilters</code> object.</p>
     */
    inline GetOrganizationConformancePackDetailedStatusRequest& WithFilters(OrganizationResourceDetailedStatusFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>The maximum number of
     * <code>OrganizationConformancePackDetailedStatuses</code> returned on each page.
     * If you do not specify a number, Config uses the default. The default is 100.
     * </p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of
     * <code>OrganizationConformancePackDetailedStatuses</code> returned on each page.
     * If you do not specify a number, Config uses the default. The default is 100.
     * </p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of
     * <code>OrganizationConformancePackDetailedStatuses</code> returned on each page.
     * If you do not specify a number, Config uses the default. The default is 100.
     * </p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of
     * <code>OrganizationConformancePackDetailedStatuses</code> returned on each page.
     * If you do not specify a number, Config uses the default. The default is 100.
     * </p>
     */
    inline GetOrganizationConformancePackDetailedStatusRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response. </p>
     */
    inline GetOrganizationConformancePackDetailedStatusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response. </p>
     */
    inline GetOrganizationConformancePackDetailedStatusRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response. </p>
     */
    inline GetOrganizationConformancePackDetailedStatusRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_organizationConformancePackName;
    bool m_organizationConformancePackNameHasBeenSet = false;

    OrganizationResourceDetailedStatusFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
