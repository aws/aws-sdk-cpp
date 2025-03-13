/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/StatusDetailFilters.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class GetOrganizationConfigRuleDetailedStatusRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API GetOrganizationConfigRuleDetailedStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOrganizationConfigRuleDetailedStatus"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of your organization Config rule for which you want status details
     * for member accounts.</p>
     */
    inline const Aws::String& GetOrganizationConfigRuleName() const { return m_organizationConfigRuleName; }
    inline bool OrganizationConfigRuleNameHasBeenSet() const { return m_organizationConfigRuleNameHasBeenSet; }
    template<typename OrganizationConfigRuleNameT = Aws::String>
    void SetOrganizationConfigRuleName(OrganizationConfigRuleNameT&& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = std::forward<OrganizationConfigRuleNameT>(value); }
    template<typename OrganizationConfigRuleNameT = Aws::String>
    GetOrganizationConfigRuleDetailedStatusRequest& WithOrganizationConfigRuleName(OrganizationConfigRuleNameT&& value) { SetOrganizationConfigRuleName(std::forward<OrganizationConfigRuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>StatusDetailFilters</code> object.</p>
     */
    inline const StatusDetailFilters& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = StatusDetailFilters>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = StatusDetailFilters>
    GetOrganizationConfigRuleDetailedStatusRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of <code>OrganizationConfigRuleDetailedStatus</code>
     * returned on each page. If you do not specify a number, Config uses the default.
     * The default is 100.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline GetOrganizationConfigRuleDetailedStatusRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetOrganizationConfigRuleDetailedStatusRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationConfigRuleName;
    bool m_organizationConfigRuleNameHasBeenSet = false;

    StatusDetailFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
