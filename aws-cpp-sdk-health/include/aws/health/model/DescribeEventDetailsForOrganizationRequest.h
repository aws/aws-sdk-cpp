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
    AWS_HEALTH_API DescribeEventDetailsForOrganizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEventDetailsForOrganization"; }

    AWS_HEALTH_API Aws::String SerializePayload() const override;

    AWS_HEALTH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A set of JSON elements that includes the <code>awsAccountId</code> and the
     * <code>eventArn</code>.</p>
     */
    inline const Aws::Vector<EventAccountFilter>& GetOrganizationEventDetailFilters() const{ return m_organizationEventDetailFilters; }

    /**
     * <p>A set of JSON elements that includes the <code>awsAccountId</code> and the
     * <code>eventArn</code>.</p>
     */
    inline bool OrganizationEventDetailFiltersHasBeenSet() const { return m_organizationEventDetailFiltersHasBeenSet; }

    /**
     * <p>A set of JSON elements that includes the <code>awsAccountId</code> and the
     * <code>eventArn</code>.</p>
     */
    inline void SetOrganizationEventDetailFilters(const Aws::Vector<EventAccountFilter>& value) { m_organizationEventDetailFiltersHasBeenSet = true; m_organizationEventDetailFilters = value; }

    /**
     * <p>A set of JSON elements that includes the <code>awsAccountId</code> and the
     * <code>eventArn</code>.</p>
     */
    inline void SetOrganizationEventDetailFilters(Aws::Vector<EventAccountFilter>&& value) { m_organizationEventDetailFiltersHasBeenSet = true; m_organizationEventDetailFilters = std::move(value); }

    /**
     * <p>A set of JSON elements that includes the <code>awsAccountId</code> and the
     * <code>eventArn</code>.</p>
     */
    inline DescribeEventDetailsForOrganizationRequest& WithOrganizationEventDetailFilters(const Aws::Vector<EventAccountFilter>& value) { SetOrganizationEventDetailFilters(value); return *this;}

    /**
     * <p>A set of JSON elements that includes the <code>awsAccountId</code> and the
     * <code>eventArn</code>.</p>
     */
    inline DescribeEventDetailsForOrganizationRequest& WithOrganizationEventDetailFilters(Aws::Vector<EventAccountFilter>&& value) { SetOrganizationEventDetailFilters(std::move(value)); return *this;}

    /**
     * <p>A set of JSON elements that includes the <code>awsAccountId</code> and the
     * <code>eventArn</code>.</p>
     */
    inline DescribeEventDetailsForOrganizationRequest& AddOrganizationEventDetailFilters(const EventAccountFilter& value) { m_organizationEventDetailFiltersHasBeenSet = true; m_organizationEventDetailFilters.push_back(value); return *this; }

    /**
     * <p>A set of JSON elements that includes the <code>awsAccountId</code> and the
     * <code>eventArn</code>.</p>
     */
    inline DescribeEventDetailsForOrganizationRequest& AddOrganizationEventDetailFilters(EventAccountFilter&& value) { m_organizationEventDetailFiltersHasBeenSet = true; m_organizationEventDetailFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The locale (language) to return information in. English (en) is the default
     * and the only supported value at this time.</p>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }

    /**
     * <p>The locale (language) to return information in. English (en) is the default
     * and the only supported value at this time.</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p>The locale (language) to return information in. English (en) is the default
     * and the only supported value at this time.</p>
     */
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>The locale (language) to return information in. English (en) is the default
     * and the only supported value at this time.</p>
     */
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p>The locale (language) to return information in. English (en) is the default
     * and the only supported value at this time.</p>
     */
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }

    /**
     * <p>The locale (language) to return information in. English (en) is the default
     * and the only supported value at this time.</p>
     */
    inline DescribeEventDetailsForOrganizationRequest& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}

    /**
     * <p>The locale (language) to return information in. English (en) is the default
     * and the only supported value at this time.</p>
     */
    inline DescribeEventDetailsForOrganizationRequest& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}

    /**
     * <p>The locale (language) to return information in. English (en) is the default
     * and the only supported value at this time.</p>
     */
    inline DescribeEventDetailsForOrganizationRequest& WithLocale(const char* value) { SetLocale(value); return *this;}

  private:

    Aws::Vector<EventAccountFilter> m_organizationEventDetailFilters;
    bool m_organizationEventDetailFiltersHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
