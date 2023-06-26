/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class DescribeOrganizationConformancePacksRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DescribeOrganizationConformancePacksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeOrganizationConformancePacks"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name that you assign to an organization conformance pack.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationConformancePackNames() const{ return m_organizationConformancePackNames; }

    /**
     * <p>The name that you assign to an organization conformance pack.</p>
     */
    inline bool OrganizationConformancePackNamesHasBeenSet() const { return m_organizationConformancePackNamesHasBeenSet; }

    /**
     * <p>The name that you assign to an organization conformance pack.</p>
     */
    inline void SetOrganizationConformancePackNames(const Aws::Vector<Aws::String>& value) { m_organizationConformancePackNamesHasBeenSet = true; m_organizationConformancePackNames = value; }

    /**
     * <p>The name that you assign to an organization conformance pack.</p>
     */
    inline void SetOrganizationConformancePackNames(Aws::Vector<Aws::String>&& value) { m_organizationConformancePackNamesHasBeenSet = true; m_organizationConformancePackNames = std::move(value); }

    /**
     * <p>The name that you assign to an organization conformance pack.</p>
     */
    inline DescribeOrganizationConformancePacksRequest& WithOrganizationConformancePackNames(const Aws::Vector<Aws::String>& value) { SetOrganizationConformancePackNames(value); return *this;}

    /**
     * <p>The name that you assign to an organization conformance pack.</p>
     */
    inline DescribeOrganizationConformancePacksRequest& WithOrganizationConformancePackNames(Aws::Vector<Aws::String>&& value) { SetOrganizationConformancePackNames(std::move(value)); return *this;}

    /**
     * <p>The name that you assign to an organization conformance pack.</p>
     */
    inline DescribeOrganizationConformancePacksRequest& AddOrganizationConformancePackNames(const Aws::String& value) { m_organizationConformancePackNamesHasBeenSet = true; m_organizationConformancePackNames.push_back(value); return *this; }

    /**
     * <p>The name that you assign to an organization conformance pack.</p>
     */
    inline DescribeOrganizationConformancePacksRequest& AddOrganizationConformancePackNames(Aws::String&& value) { m_organizationConformancePackNamesHasBeenSet = true; m_organizationConformancePackNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The name that you assign to an organization conformance pack.</p>
     */
    inline DescribeOrganizationConformancePacksRequest& AddOrganizationConformancePackNames(const char* value) { m_organizationConformancePackNamesHasBeenSet = true; m_organizationConformancePackNames.push_back(value); return *this; }


    /**
     * <p>The maximum number of organization config packs returned on each page. If you
     * do no specify a number, Config uses the default. The default is 100.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of organization config packs returned on each page. If you
     * do no specify a number, Config uses the default. The default is 100.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of organization config packs returned on each page. If you
     * do no specify a number, Config uses the default. The default is 100.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of organization config packs returned on each page. If you
     * do no specify a number, Config uses the default. The default is 100.</p>
     */
    inline DescribeOrganizationConformancePacksRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline DescribeOrganizationConformancePacksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline DescribeOrganizationConformancePacksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline DescribeOrganizationConformancePacksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_organizationConformancePackNames;
    bool m_organizationConformancePackNamesHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
