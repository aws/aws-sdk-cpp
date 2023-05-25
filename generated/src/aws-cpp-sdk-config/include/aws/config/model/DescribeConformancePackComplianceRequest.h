/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConformancePackComplianceFilters.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class DescribeConformancePackComplianceRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConformancePackComplianceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConformancePackCompliance"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackName() const{ return m_conformancePackName; }

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline bool ConformancePackNameHasBeenSet() const { return m_conformancePackNameHasBeenSet; }

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline void SetConformancePackName(const Aws::String& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = value; }

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline void SetConformancePackName(Aws::String&& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = std::move(value); }

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline void SetConformancePackName(const char* value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName.assign(value); }

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline DescribeConformancePackComplianceRequest& WithConformancePackName(const Aws::String& value) { SetConformancePackName(value); return *this;}

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline DescribeConformancePackComplianceRequest& WithConformancePackName(Aws::String&& value) { SetConformancePackName(std::move(value)); return *this;}

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline DescribeConformancePackComplianceRequest& WithConformancePackName(const char* value) { SetConformancePackName(value); return *this;}


    /**
     * <p>A <code>ConformancePackComplianceFilters</code> object.</p>
     */
    inline const ConformancePackComplianceFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>A <code>ConformancePackComplianceFilters</code> object.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A <code>ConformancePackComplianceFilters</code> object.</p>
     */
    inline void SetFilters(const ConformancePackComplianceFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A <code>ConformancePackComplianceFilters</code> object.</p>
     */
    inline void SetFilters(ConformancePackComplianceFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A <code>ConformancePackComplianceFilters</code> object.</p>
     */
    inline DescribeConformancePackComplianceRequest& WithFilters(const ConformancePackComplianceFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>A <code>ConformancePackComplianceFilters</code> object.</p>
     */
    inline DescribeConformancePackComplianceRequest& WithFilters(ConformancePackComplianceFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>The maximum number of Config rules within a conformance pack are returned on
     * each page.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of Config rules within a conformance pack are returned on
     * each page.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of Config rules within a conformance pack are returned on
     * each page.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of Config rules within a conformance pack are returned on
     * each page.</p>
     */
    inline DescribeConformancePackComplianceRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline DescribeConformancePackComplianceRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline DescribeConformancePackComplianceRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline DescribeConformancePackComplianceRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_conformancePackName;
    bool m_conformancePackNameHasBeenSet = false;

    ConformancePackComplianceFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
