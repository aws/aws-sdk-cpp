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
    AWS_CONFIGSERVICE_API GetAggregateConfigRuleComplianceSummaryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAggregateConfigRuleComplianceSummary"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline const Aws::String& GetConfigurationAggregatorName() const { return m_configurationAggregatorName; }
    inline bool ConfigurationAggregatorNameHasBeenSet() const { return m_configurationAggregatorNameHasBeenSet; }
    template<typename ConfigurationAggregatorNameT = Aws::String>
    void SetConfigurationAggregatorName(ConfigurationAggregatorNameT&& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = std::forward<ConfigurationAggregatorNameT>(value); }
    template<typename ConfigurationAggregatorNameT = Aws::String>
    GetAggregateConfigRuleComplianceSummaryRequest& WithConfigurationAggregatorName(ConfigurationAggregatorNameT&& value) { SetConfigurationAggregatorName(std::forward<ConfigurationAggregatorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results based on the ConfigRuleComplianceSummaryFilters
     * object.</p>
     */
    inline const ConfigRuleComplianceSummaryFilters& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = ConfigRuleComplianceSummaryFilters>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = ConfigRuleComplianceSummaryFilters>
    GetAggregateConfigRuleComplianceSummaryRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Groups the result based on ACCOUNT_ID or AWS_REGION.</p>
     */
    inline ConfigRuleComplianceSummaryGroupKey GetGroupByKey() const { return m_groupByKey; }
    inline bool GroupByKeyHasBeenSet() const { return m_groupByKeyHasBeenSet; }
    inline void SetGroupByKey(ConfigRuleComplianceSummaryGroupKey value) { m_groupByKeyHasBeenSet = true; m_groupByKey = value; }
    inline GetAggregateConfigRuleComplianceSummaryRequest& WithGroupByKey(ConfigRuleComplianceSummaryGroupKey value) { SetGroupByKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 1000. You cannot specify a number greater than 1000. If you specify 0, Config
     * uses the default.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline GetAggregateConfigRuleComplianceSummaryRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetAggregateConfigRuleComplianceSummaryRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationAggregatorName;
    bool m_configurationAggregatorNameHasBeenSet = false;

    ConfigRuleComplianceSummaryFilters m_filters;
    bool m_filtersHasBeenSet = false;

    ConfigRuleComplianceSummaryGroupKey m_groupByKey{ConfigRuleComplianceSummaryGroupKey::NOT_SET};
    bool m_groupByKeyHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
