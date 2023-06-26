/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConfigRuleComplianceSummaryFilters.h>
#include <aws/config/model/ConfigRuleComplianceSummaryGroupKey.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class GetAggregateConfigRuleComplianceSummaryRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API GetAggregateConfigRuleComplianceSummaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAggregateConfigRuleComplianceSummary"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline const Aws::String& GetConfigurationAggregatorName() const{ return m_configurationAggregatorName; }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline bool ConfigurationAggregatorNameHasBeenSet() const { return m_configurationAggregatorNameHasBeenSet; }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(const Aws::String& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = value; }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(Aws::String&& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = std::move(value); }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(const char* value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName.assign(value); }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryRequest& WithConfigurationAggregatorName(const Aws::String& value) { SetConfigurationAggregatorName(value); return *this;}

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryRequest& WithConfigurationAggregatorName(Aws::String&& value) { SetConfigurationAggregatorName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryRequest& WithConfigurationAggregatorName(const char* value) { SetConfigurationAggregatorName(value); return *this;}


    /**
     * <p>Filters the results based on the ConfigRuleComplianceSummaryFilters
     * object.</p>
     */
    inline const ConfigRuleComplianceSummaryFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters the results based on the ConfigRuleComplianceSummaryFilters
     * object.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters the results based on the ConfigRuleComplianceSummaryFilters
     * object.</p>
     */
    inline void SetFilters(const ConfigRuleComplianceSummaryFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters the results based on the ConfigRuleComplianceSummaryFilters
     * object.</p>
     */
    inline void SetFilters(ConfigRuleComplianceSummaryFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters the results based on the ConfigRuleComplianceSummaryFilters
     * object.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryRequest& WithFilters(const ConfigRuleComplianceSummaryFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters the results based on the ConfigRuleComplianceSummaryFilters
     * object.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryRequest& WithFilters(ConfigRuleComplianceSummaryFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>Groups the result based on ACCOUNT_ID or AWS_REGION.</p>
     */
    inline const ConfigRuleComplianceSummaryGroupKey& GetGroupByKey() const{ return m_groupByKey; }

    /**
     * <p>Groups the result based on ACCOUNT_ID or AWS_REGION.</p>
     */
    inline bool GroupByKeyHasBeenSet() const { return m_groupByKeyHasBeenSet; }

    /**
     * <p>Groups the result based on ACCOUNT_ID or AWS_REGION.</p>
     */
    inline void SetGroupByKey(const ConfigRuleComplianceSummaryGroupKey& value) { m_groupByKeyHasBeenSet = true; m_groupByKey = value; }

    /**
     * <p>Groups the result based on ACCOUNT_ID or AWS_REGION.</p>
     */
    inline void SetGroupByKey(ConfigRuleComplianceSummaryGroupKey&& value) { m_groupByKeyHasBeenSet = true; m_groupByKey = std::move(value); }

    /**
     * <p>Groups the result based on ACCOUNT_ID or AWS_REGION.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryRequest& WithGroupByKey(const ConfigRuleComplianceSummaryGroupKey& value) { SetGroupByKey(value); return *this;}

    /**
     * <p>Groups the result based on ACCOUNT_ID or AWS_REGION.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryRequest& WithGroupByKey(ConfigRuleComplianceSummaryGroupKey&& value) { SetGroupByKey(std::move(value)); return *this;}


    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 1000. You cannot specify a number greater than 1000. If you specify 0, Config
     * uses the default.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 1000. You cannot specify a number greater than 1000. If you specify 0, Config
     * uses the default.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 1000. You cannot specify a number greater than 1000. If you specify 0, Config
     * uses the default.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 1000. You cannot specify a number greater than 1000. If you specify 0, Config
     * uses the default.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_configurationAggregatorName;
    bool m_configurationAggregatorNameHasBeenSet = false;

    ConfigRuleComplianceSummaryFilters m_filters;
    bool m_filtersHasBeenSet = false;

    ConfigRuleComplianceSummaryGroupKey m_groupByKey;
    bool m_groupByKeyHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
