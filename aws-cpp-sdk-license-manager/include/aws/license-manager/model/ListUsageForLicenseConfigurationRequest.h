/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/Filter.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class ListUsageForLicenseConfigurationRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API ListUsageForLicenseConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListUsageForLicenseConfiguration"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline const Aws::String& GetLicenseConfigurationArn() const{ return m_licenseConfigurationArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline bool LicenseConfigurationArnHasBeenSet() const { return m_licenseConfigurationArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(const Aws::String& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(Aws::String&& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(const char* value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline ListUsageForLicenseConfigurationRequest& WithLicenseConfigurationArn(const Aws::String& value) { SetLicenseConfigurationArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline ListUsageForLicenseConfigurationRequest& WithLicenseConfigurationArn(Aws::String&& value) { SetLicenseConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline ListUsageForLicenseConfigurationRequest& WithLicenseConfigurationArn(const char* value) { SetLicenseConfigurationArn(value); return *this;}


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
    inline ListUsageForLicenseConfigurationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListUsageForLicenseConfigurationRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListUsageForLicenseConfigurationRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListUsageForLicenseConfigurationRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Filters to scope the results. The following filters and logical operators are
     * supported:</p> <ul> <li> <p> <code>resourceArn</code> - The ARN of the license
     * configuration resource. Logical operators are <code>EQUALS</code> |
     * <code>NOT_EQUALS</code>.</p> </li> <li> <p> <code>resourceType</code> - The
     * resource type (<code>EC2_INSTANCE</code> | <code>EC2_HOST</code> |
     * <code>EC2_AMI</code> | <code>SYSTEMS_MANAGER_MANAGED_INSTANCE</code>). Logical
     * operators are <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>resourceAccount</code> - The ID of the account that owns the resource.
     * Logical operators are <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters to scope the results. The following filters and logical operators are
     * supported:</p> <ul> <li> <p> <code>resourceArn</code> - The ARN of the license
     * configuration resource. Logical operators are <code>EQUALS</code> |
     * <code>NOT_EQUALS</code>.</p> </li> <li> <p> <code>resourceType</code> - The
     * resource type (<code>EC2_INSTANCE</code> | <code>EC2_HOST</code> |
     * <code>EC2_AMI</code> | <code>SYSTEMS_MANAGER_MANAGED_INSTANCE</code>). Logical
     * operators are <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>resourceAccount</code> - The ID of the account that owns the resource.
     * Logical operators are <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li>
     * </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters to scope the results. The following filters and logical operators are
     * supported:</p> <ul> <li> <p> <code>resourceArn</code> - The ARN of the license
     * configuration resource. Logical operators are <code>EQUALS</code> |
     * <code>NOT_EQUALS</code>.</p> </li> <li> <p> <code>resourceType</code> - The
     * resource type (<code>EC2_INSTANCE</code> | <code>EC2_HOST</code> |
     * <code>EC2_AMI</code> | <code>SYSTEMS_MANAGER_MANAGED_INSTANCE</code>). Logical
     * operators are <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>resourceAccount</code> - The ID of the account that owns the resource.
     * Logical operators are <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li>
     * </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters to scope the results. The following filters and logical operators are
     * supported:</p> <ul> <li> <p> <code>resourceArn</code> - The ARN of the license
     * configuration resource. Logical operators are <code>EQUALS</code> |
     * <code>NOT_EQUALS</code>.</p> </li> <li> <p> <code>resourceType</code> - The
     * resource type (<code>EC2_INSTANCE</code> | <code>EC2_HOST</code> |
     * <code>EC2_AMI</code> | <code>SYSTEMS_MANAGER_MANAGED_INSTANCE</code>). Logical
     * operators are <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>resourceAccount</code> - The ID of the account that owns the resource.
     * Logical operators are <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li>
     * </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters to scope the results. The following filters and logical operators are
     * supported:</p> <ul> <li> <p> <code>resourceArn</code> - The ARN of the license
     * configuration resource. Logical operators are <code>EQUALS</code> |
     * <code>NOT_EQUALS</code>.</p> </li> <li> <p> <code>resourceType</code> - The
     * resource type (<code>EC2_INSTANCE</code> | <code>EC2_HOST</code> |
     * <code>EC2_AMI</code> | <code>SYSTEMS_MANAGER_MANAGED_INSTANCE</code>). Logical
     * operators are <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>resourceAccount</code> - The ID of the account that owns the resource.
     * Logical operators are <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li>
     * </ul>
     */
    inline ListUsageForLicenseConfigurationRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters to scope the results. The following filters and logical operators are
     * supported:</p> <ul> <li> <p> <code>resourceArn</code> - The ARN of the license
     * configuration resource. Logical operators are <code>EQUALS</code> |
     * <code>NOT_EQUALS</code>.</p> </li> <li> <p> <code>resourceType</code> - The
     * resource type (<code>EC2_INSTANCE</code> | <code>EC2_HOST</code> |
     * <code>EC2_AMI</code> | <code>SYSTEMS_MANAGER_MANAGED_INSTANCE</code>). Logical
     * operators are <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>resourceAccount</code> - The ID of the account that owns the resource.
     * Logical operators are <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li>
     * </ul>
     */
    inline ListUsageForLicenseConfigurationRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Filters to scope the results. The following filters and logical operators are
     * supported:</p> <ul> <li> <p> <code>resourceArn</code> - The ARN of the license
     * configuration resource. Logical operators are <code>EQUALS</code> |
     * <code>NOT_EQUALS</code>.</p> </li> <li> <p> <code>resourceType</code> - The
     * resource type (<code>EC2_INSTANCE</code> | <code>EC2_HOST</code> |
     * <code>EC2_AMI</code> | <code>SYSTEMS_MANAGER_MANAGED_INSTANCE</code>). Logical
     * operators are <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>resourceAccount</code> - The ID of the account that owns the resource.
     * Logical operators are <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li>
     * </ul>
     */
    inline ListUsageForLicenseConfigurationRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Filters to scope the results. The following filters and logical operators are
     * supported:</p> <ul> <li> <p> <code>resourceArn</code> - The ARN of the license
     * configuration resource. Logical operators are <code>EQUALS</code> |
     * <code>NOT_EQUALS</code>.</p> </li> <li> <p> <code>resourceType</code> - The
     * resource type (<code>EC2_INSTANCE</code> | <code>EC2_HOST</code> |
     * <code>EC2_AMI</code> | <code>SYSTEMS_MANAGER_MANAGED_INSTANCE</code>). Logical
     * operators are <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li> <li> <p>
     * <code>resourceAccount</code> - The ID of the account that owns the resource.
     * Logical operators are <code>EQUALS</code> | <code>NOT_EQUALS</code>.</p> </li>
     * </ul>
     */
    inline ListUsageForLicenseConfigurationRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_licenseConfigurationArn;
    bool m_licenseConfigurationArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
