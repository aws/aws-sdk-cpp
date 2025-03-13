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
    AWS_CONFIGSERVICE_API GetOrganizationConformancePackDetailedStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOrganizationConformancePackDetailedStatus"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of organization conformance pack for which you want status details
     * for member accounts.</p>
     */
    inline const Aws::String& GetOrganizationConformancePackName() const { return m_organizationConformancePackName; }
    inline bool OrganizationConformancePackNameHasBeenSet() const { return m_organizationConformancePackNameHasBeenSet; }
    template<typename OrganizationConformancePackNameT = Aws::String>
    void SetOrganizationConformancePackName(OrganizationConformancePackNameT&& value) { m_organizationConformancePackNameHasBeenSet = true; m_organizationConformancePackName = std::forward<OrganizationConformancePackNameT>(value); }
    template<typename OrganizationConformancePackNameT = Aws::String>
    GetOrganizationConformancePackDetailedStatusRequest& WithOrganizationConformancePackName(OrganizationConformancePackNameT&& value) { SetOrganizationConformancePackName(std::forward<OrganizationConformancePackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>OrganizationResourceDetailedStatusFilters</code> object.</p>
     */
    inline const OrganizationResourceDetailedStatusFilters& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = OrganizationResourceDetailedStatusFilters>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = OrganizationResourceDetailedStatusFilters>
    GetOrganizationConformancePackDetailedStatusRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of
     * <code>OrganizationConformancePackDetailedStatuses</code> returned on each page.
     * If you do not specify a number, Config uses the default. The default is 100.
     * </p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline GetOrganizationConformancePackDetailedStatusRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetOrganizationConformancePackDetailedStatusRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationConformancePackName;
    bool m_organizationConformancePackNameHasBeenSet = false;

    OrganizationResourceDetailedStatusFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
