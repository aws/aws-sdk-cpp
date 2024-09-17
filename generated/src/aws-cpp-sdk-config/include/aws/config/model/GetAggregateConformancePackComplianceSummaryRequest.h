/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/AggregateConformancePackComplianceSummaryFilters.h>
#include <aws/config/model/AggregateConformancePackComplianceSummaryGroupKey.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class GetAggregateConformancePackComplianceSummaryRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API GetAggregateConformancePackComplianceSummaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAggregateConformancePackComplianceSummary"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline const Aws::String& GetConfigurationAggregatorName() const{ return m_configurationAggregatorName; }
    inline bool ConfigurationAggregatorNameHasBeenSet() const { return m_configurationAggregatorNameHasBeenSet; }
    inline void SetConfigurationAggregatorName(const Aws::String& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = value; }
    inline void SetConfigurationAggregatorName(Aws::String&& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = std::move(value); }
    inline void SetConfigurationAggregatorName(const char* value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName.assign(value); }
    inline GetAggregateConformancePackComplianceSummaryRequest& WithConfigurationAggregatorName(const Aws::String& value) { SetConfigurationAggregatorName(value); return *this;}
    inline GetAggregateConformancePackComplianceSummaryRequest& WithConfigurationAggregatorName(Aws::String&& value) { SetConfigurationAggregatorName(std::move(value)); return *this;}
    inline GetAggregateConformancePackComplianceSummaryRequest& WithConfigurationAggregatorName(const char* value) { SetConfigurationAggregatorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results based on the
     * <code>AggregateConformancePackComplianceSummaryFilters</code> object.</p>
     */
    inline const AggregateConformancePackComplianceSummaryFilters& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const AggregateConformancePackComplianceSummaryFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(AggregateConformancePackComplianceSummaryFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline GetAggregateConformancePackComplianceSummaryRequest& WithFilters(const AggregateConformancePackComplianceSummaryFilters& value) { SetFilters(value); return *this;}
    inline GetAggregateConformancePackComplianceSummaryRequest& WithFilters(AggregateConformancePackComplianceSummaryFilters&& value) { SetFilters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Groups the result based on Amazon Web Services account ID or Amazon Web
     * Services Region.</p>
     */
    inline const AggregateConformancePackComplianceSummaryGroupKey& GetGroupByKey() const{ return m_groupByKey; }
    inline bool GroupByKeyHasBeenSet() const { return m_groupByKeyHasBeenSet; }
    inline void SetGroupByKey(const AggregateConformancePackComplianceSummaryGroupKey& value) { m_groupByKeyHasBeenSet = true; m_groupByKey = value; }
    inline void SetGroupByKey(AggregateConformancePackComplianceSummaryGroupKey&& value) { m_groupByKeyHasBeenSet = true; m_groupByKey = std::move(value); }
    inline GetAggregateConformancePackComplianceSummaryRequest& WithGroupByKey(const AggregateConformancePackComplianceSummaryGroupKey& value) { SetGroupByKey(value); return *this;}
    inline GetAggregateConformancePackComplianceSummaryRequest& WithGroupByKey(AggregateConformancePackComplianceSummaryGroupKey&& value) { SetGroupByKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results returned on each page. The default is maximum.
     * If you specify 0, Config uses the default.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline GetAggregateConformancePackComplianceSummaryRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetAggregateConformancePackComplianceSummaryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetAggregateConformancePackComplianceSummaryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetAggregateConformancePackComplianceSummaryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_configurationAggregatorName;
    bool m_configurationAggregatorNameHasBeenSet = false;

    AggregateConformancePackComplianceSummaryFilters m_filters;
    bool m_filtersHasBeenSet = false;

    AggregateConformancePackComplianceSummaryGroupKey m_groupByKey;
    bool m_groupByKeyHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
