/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/HealthRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/model/EventAccountFilter.h>
#include <utility>

namespace Aws
{
namespace Health
{
namespace Model
{

  /**
   */
  class DescribeEventDetailsForOrganizationRequest : public HealthRequest
  {
  public:
    AWS_HEALTH_API DescribeEventDetailsForOrganizationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEventDetailsForOrganization"; }

    AWS_HEALTH_API Aws::String SerializePayload() const override;

    AWS_HEALTH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A set of JSON elements that includes the <code>awsAccountId</code> and the
     * <code>eventArn</code>.</p>
     */
    inline const Aws::Vector<EventAccountFilter>& GetOrganizationEventDetailFilters() const { return m_organizationEventDetailFilters; }
    inline bool OrganizationEventDetailFiltersHasBeenSet() const { return m_organizationEventDetailFiltersHasBeenSet; }
    template<typename OrganizationEventDetailFiltersT = Aws::Vector<EventAccountFilter>>
    void SetOrganizationEventDetailFilters(OrganizationEventDetailFiltersT&& value) { m_organizationEventDetailFiltersHasBeenSet = true; m_organizationEventDetailFilters = std::forward<OrganizationEventDetailFiltersT>(value); }
    template<typename OrganizationEventDetailFiltersT = Aws::Vector<EventAccountFilter>>
    DescribeEventDetailsForOrganizationRequest& WithOrganizationEventDetailFilters(OrganizationEventDetailFiltersT&& value) { SetOrganizationEventDetailFilters(std::forward<OrganizationEventDetailFiltersT>(value)); return *this;}
    template<typename OrganizationEventDetailFiltersT = EventAccountFilter>
    DescribeEventDetailsForOrganizationRequest& AddOrganizationEventDetailFilters(OrganizationEventDetailFiltersT&& value) { m_organizationEventDetailFiltersHasBeenSet = true; m_organizationEventDetailFilters.emplace_back(std::forward<OrganizationEventDetailFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The locale (language) to return information in. English (en) is the default
     * and the only supported value at this time.</p>
     */
    inline const Aws::String& GetLocale() const { return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    template<typename LocaleT = Aws::String>
    void SetLocale(LocaleT&& value) { m_localeHasBeenSet = true; m_locale = std::forward<LocaleT>(value); }
    template<typename LocaleT = Aws::String>
    DescribeEventDetailsForOrganizationRequest& WithLocale(LocaleT&& value) { SetLocale(std::forward<LocaleT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventAccountFilter> m_organizationEventDetailFilters;
    bool m_organizationEventDetailFiltersHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
