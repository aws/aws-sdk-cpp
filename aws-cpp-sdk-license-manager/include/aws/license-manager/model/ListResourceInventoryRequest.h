/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/InventoryFilter.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class ListResourceInventoryRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API ListResourceInventoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourceInventory"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline ListResourceInventoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListResourceInventoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListResourceInventoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListResourceInventoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Filters to scope the results. The following filters and logical operators are
     * supported:</p> <ul> <li> <p> <code>account_id</code> - The ID of the Amazon Web
     * Services account that owns the resource. Logical operators are
     * <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>application_name</code> - The name of the application. Logical operators
     * are <code>EQUALS</code> | <code>BEGINS_WITH</code>.</p> </li> <li> <p>
     * <code>license_included</code> - The type of license included. Logical operators
     * are <code>EQUALS</code> | <code>NOT_EQUALS</code>. Possible values are
     * <code>sql-server-enterprise</code> | <code>sql-server-standard</code> |
     * <code>sql-server-web</code> | <code>windows-server-datacenter</code>.</p> </li>
     * <li> <p> <code>platform</code> - The platform of the resource. Logical operators
     * are <code>EQUALS</code> | <code>BEGINS_WITH</code>.</p> </li> <li> <p>
     * <code>resource_id</code> - The ID of the resource. Logical operators are
     * <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - The key/value combination of a tag assigned to
     * the resource. Logical operators are <code>EQUALS</code> (single account) or
     * <code>EQUALS</code> | <code>NOT_EQUALS</code> (cross account).</p> </li> </ul>
     */
    inline const Aws::Vector<InventoryFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters to scope the results. The following filters and logical operators are
     * supported:</p> <ul> <li> <p> <code>account_id</code> - The ID of the Amazon Web
     * Services account that owns the resource. Logical operators are
     * <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>application_name</code> - The name of the application. Logical operators
     * are <code>EQUALS</code> | <code>BEGINS_WITH</code>.</p> </li> <li> <p>
     * <code>license_included</code> - The type of license included. Logical operators
     * are <code>EQUALS</code> | <code>NOT_EQUALS</code>. Possible values are
     * <code>sql-server-enterprise</code> | <code>sql-server-standard</code> |
     * <code>sql-server-web</code> | <code>windows-server-datacenter</code>.</p> </li>
     * <li> <p> <code>platform</code> - The platform of the resource. Logical operators
     * are <code>EQUALS</code> | <code>BEGINS_WITH</code>.</p> </li> <li> <p>
     * <code>resource_id</code> - The ID of the resource. Logical operators are
     * <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - The key/value combination of a tag assigned to
     * the resource. Logical operators are <code>EQUALS</code> (single account) or
     * <code>EQUALS</code> | <code>NOT_EQUALS</code> (cross account).</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters to scope the results. The following filters and logical operators are
     * supported:</p> <ul> <li> <p> <code>account_id</code> - The ID of the Amazon Web
     * Services account that owns the resource. Logical operators are
     * <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>application_name</code> - The name of the application. Logical operators
     * are <code>EQUALS</code> | <code>BEGINS_WITH</code>.</p> </li> <li> <p>
     * <code>license_included</code> - The type of license included. Logical operators
     * are <code>EQUALS</code> | <code>NOT_EQUALS</code>. Possible values are
     * <code>sql-server-enterprise</code> | <code>sql-server-standard</code> |
     * <code>sql-server-web</code> | <code>windows-server-datacenter</code>.</p> </li>
     * <li> <p> <code>platform</code> - The platform of the resource. Logical operators
     * are <code>EQUALS</code> | <code>BEGINS_WITH</code>.</p> </li> <li> <p>
     * <code>resource_id</code> - The ID of the resource. Logical operators are
     * <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - The key/value combination of a tag assigned to
     * the resource. Logical operators are <code>EQUALS</code> (single account) or
     * <code>EQUALS</code> | <code>NOT_EQUALS</code> (cross account).</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<InventoryFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters to scope the results. The following filters and logical operators are
     * supported:</p> <ul> <li> <p> <code>account_id</code> - The ID of the Amazon Web
     * Services account that owns the resource. Logical operators are
     * <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>application_name</code> - The name of the application. Logical operators
     * are <code>EQUALS</code> | <code>BEGINS_WITH</code>.</p> </li> <li> <p>
     * <code>license_included</code> - The type of license included. Logical operators
     * are <code>EQUALS</code> | <code>NOT_EQUALS</code>. Possible values are
     * <code>sql-server-enterprise</code> | <code>sql-server-standard</code> |
     * <code>sql-server-web</code> | <code>windows-server-datacenter</code>.</p> </li>
     * <li> <p> <code>platform</code> - The platform of the resource. Logical operators
     * are <code>EQUALS</code> | <code>BEGINS_WITH</code>.</p> </li> <li> <p>
     * <code>resource_id</code> - The ID of the resource. Logical operators are
     * <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - The key/value combination of a tag assigned to
     * the resource. Logical operators are <code>EQUALS</code> (single account) or
     * <code>EQUALS</code> | <code>NOT_EQUALS</code> (cross account).</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<InventoryFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters to scope the results. The following filters and logical operators are
     * supported:</p> <ul> <li> <p> <code>account_id</code> - The ID of the Amazon Web
     * Services account that owns the resource. Logical operators are
     * <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>application_name</code> - The name of the application. Logical operators
     * are <code>EQUALS</code> | <code>BEGINS_WITH</code>.</p> </li> <li> <p>
     * <code>license_included</code> - The type of license included. Logical operators
     * are <code>EQUALS</code> | <code>NOT_EQUALS</code>. Possible values are
     * <code>sql-server-enterprise</code> | <code>sql-server-standard</code> |
     * <code>sql-server-web</code> | <code>windows-server-datacenter</code>.</p> </li>
     * <li> <p> <code>platform</code> - The platform of the resource. Logical operators
     * are <code>EQUALS</code> | <code>BEGINS_WITH</code>.</p> </li> <li> <p>
     * <code>resource_id</code> - The ID of the resource. Logical operators are
     * <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - The key/value combination of a tag assigned to
     * the resource. Logical operators are <code>EQUALS</code> (single account) or
     * <code>EQUALS</code> | <code>NOT_EQUALS</code> (cross account).</p> </li> </ul>
     */
    inline ListResourceInventoryRequest& WithFilters(const Aws::Vector<InventoryFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters to scope the results. The following filters and logical operators are
     * supported:</p> <ul> <li> <p> <code>account_id</code> - The ID of the Amazon Web
     * Services account that owns the resource. Logical operators are
     * <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>application_name</code> - The name of the application. Logical operators
     * are <code>EQUALS</code> | <code>BEGINS_WITH</code>.</p> </li> <li> <p>
     * <code>license_included</code> - The type of license included. Logical operators
     * are <code>EQUALS</code> | <code>NOT_EQUALS</code>. Possible values are
     * <code>sql-server-enterprise</code> | <code>sql-server-standard</code> |
     * <code>sql-server-web</code> | <code>windows-server-datacenter</code>.</p> </li>
     * <li> <p> <code>platform</code> - The platform of the resource. Logical operators
     * are <code>EQUALS</code> | <code>BEGINS_WITH</code>.</p> </li> <li> <p>
     * <code>resource_id</code> - The ID of the resource. Logical operators are
     * <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - The key/value combination of a tag assigned to
     * the resource. Logical operators are <code>EQUALS</code> (single account) or
     * <code>EQUALS</code> | <code>NOT_EQUALS</code> (cross account).</p> </li> </ul>
     */
    inline ListResourceInventoryRequest& WithFilters(Aws::Vector<InventoryFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Filters to scope the results. The following filters and logical operators are
     * supported:</p> <ul> <li> <p> <code>account_id</code> - The ID of the Amazon Web
     * Services account that owns the resource. Logical operators are
     * <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>application_name</code> - The name of the application. Logical operators
     * are <code>EQUALS</code> | <code>BEGINS_WITH</code>.</p> </li> <li> <p>
     * <code>license_included</code> - The type of license included. Logical operators
     * are <code>EQUALS</code> | <code>NOT_EQUALS</code>. Possible values are
     * <code>sql-server-enterprise</code> | <code>sql-server-standard</code> |
     * <code>sql-server-web</code> | <code>windows-server-datacenter</code>.</p> </li>
     * <li> <p> <code>platform</code> - The platform of the resource. Logical operators
     * are <code>EQUALS</code> | <code>BEGINS_WITH</code>.</p> </li> <li> <p>
     * <code>resource_id</code> - The ID of the resource. Logical operators are
     * <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - The key/value combination of a tag assigned to
     * the resource. Logical operators are <code>EQUALS</code> (single account) or
     * <code>EQUALS</code> | <code>NOT_EQUALS</code> (cross account).</p> </li> </ul>
     */
    inline ListResourceInventoryRequest& AddFilters(const InventoryFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Filters to scope the results. The following filters and logical operators are
     * supported:</p> <ul> <li> <p> <code>account_id</code> - The ID of the Amazon Web
     * Services account that owns the resource. Logical operators are
     * <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>application_name</code> - The name of the application. Logical operators
     * are <code>EQUALS</code> | <code>BEGINS_WITH</code>.</p> </li> <li> <p>
     * <code>license_included</code> - The type of license included. Logical operators
     * are <code>EQUALS</code> | <code>NOT_EQUALS</code>. Possible values are
     * <code>sql-server-enterprise</code> | <code>sql-server-standard</code> |
     * <code>sql-server-web</code> | <code>windows-server-datacenter</code>.</p> </li>
     * <li> <p> <code>platform</code> - The platform of the resource. Logical operators
     * are <code>EQUALS</code> | <code>BEGINS_WITH</code>.</p> </li> <li> <p>
     * <code>resource_id</code> - The ID of the resource. Logical operators are
     * <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - The key/value combination of a tag assigned to
     * the resource. Logical operators are <code>EQUALS</code> (single account) or
     * <code>EQUALS</code> | <code>NOT_EQUALS</code> (cross account).</p> </li> </ul>
     */
    inline ListResourceInventoryRequest& AddFilters(InventoryFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<InventoryFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
