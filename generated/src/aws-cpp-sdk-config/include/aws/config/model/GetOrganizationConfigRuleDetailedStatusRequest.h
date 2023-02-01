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
    AWS_CONFIGSERVICE_API GetOrganizationConfigRuleDetailedStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOrganizationConfigRuleDetailedStatus"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of your organization Config rule for which you want status details
     * for member accounts.</p>
     */
    inline const Aws::String& GetOrganizationConfigRuleName() const{ return m_organizationConfigRuleName; }

    /**
     * <p>The name of your organization Config rule for which you want status details
     * for member accounts.</p>
     */
    inline bool OrganizationConfigRuleNameHasBeenSet() const { return m_organizationConfigRuleNameHasBeenSet; }

    /**
     * <p>The name of your organization Config rule for which you want status details
     * for member accounts.</p>
     */
    inline void SetOrganizationConfigRuleName(const Aws::String& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = value; }

    /**
     * <p>The name of your organization Config rule for which you want status details
     * for member accounts.</p>
     */
    inline void SetOrganizationConfigRuleName(Aws::String&& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = std::move(value); }

    /**
     * <p>The name of your organization Config rule for which you want status details
     * for member accounts.</p>
     */
    inline void SetOrganizationConfigRuleName(const char* value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName.assign(value); }

    /**
     * <p>The name of your organization Config rule for which you want status details
     * for member accounts.</p>
     */
    inline GetOrganizationConfigRuleDetailedStatusRequest& WithOrganizationConfigRuleName(const Aws::String& value) { SetOrganizationConfigRuleName(value); return *this;}

    /**
     * <p>The name of your organization Config rule for which you want status details
     * for member accounts.</p>
     */
    inline GetOrganizationConfigRuleDetailedStatusRequest& WithOrganizationConfigRuleName(Aws::String&& value) { SetOrganizationConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of your organization Config rule for which you want status details
     * for member accounts.</p>
     */
    inline GetOrganizationConfigRuleDetailedStatusRequest& WithOrganizationConfigRuleName(const char* value) { SetOrganizationConfigRuleName(value); return *this;}


    /**
     * <p>A <code>StatusDetailFilters</code> object.</p>
     */
    inline const StatusDetailFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>A <code>StatusDetailFilters</code> object.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A <code>StatusDetailFilters</code> object.</p>
     */
    inline void SetFilters(const StatusDetailFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A <code>StatusDetailFilters</code> object.</p>
     */
    inline void SetFilters(StatusDetailFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A <code>StatusDetailFilters</code> object.</p>
     */
    inline GetOrganizationConfigRuleDetailedStatusRequest& WithFilters(const StatusDetailFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>A <code>StatusDetailFilters</code> object.</p>
     */
    inline GetOrganizationConfigRuleDetailedStatusRequest& WithFilters(StatusDetailFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>The maximum number of <code>OrganizationConfigRuleDetailedStatus</code>
     * returned on each page. If you do not specify a number, Config uses the default.
     * The default is 100.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of <code>OrganizationConfigRuleDetailedStatus</code>
     * returned on each page. If you do not specify a number, Config uses the default.
     * The default is 100.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of <code>OrganizationConfigRuleDetailedStatus</code>
     * returned on each page. If you do not specify a number, Config uses the default.
     * The default is 100.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of <code>OrganizationConfigRuleDetailedStatus</code>
     * returned on each page. If you do not specify a number, Config uses the default.
     * The default is 100.</p>
     */
    inline GetOrganizationConfigRuleDetailedStatusRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline GetOrganizationConfigRuleDetailedStatusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline GetOrganizationConfigRuleDetailedStatusRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline GetOrganizationConfigRuleDetailedStatusRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_organizationConfigRuleName;
    bool m_organizationConfigRuleNameHasBeenSet = false;

    StatusDetailFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
