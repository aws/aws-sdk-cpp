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
  class DescribeConfigurationAggregatorsRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConfigurationAggregatorsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationAggregators"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the configuration aggregators.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigurationAggregatorNames() const { return m_configurationAggregatorNames; }
    inline bool ConfigurationAggregatorNamesHasBeenSet() const { return m_configurationAggregatorNamesHasBeenSet; }
    template<typename ConfigurationAggregatorNamesT = Aws::Vector<Aws::String>>
    void SetConfigurationAggregatorNames(ConfigurationAggregatorNamesT&& value) { m_configurationAggregatorNamesHasBeenSet = true; m_configurationAggregatorNames = std::forward<ConfigurationAggregatorNamesT>(value); }
    template<typename ConfigurationAggregatorNamesT = Aws::Vector<Aws::String>>
    DescribeConfigurationAggregatorsRequest& WithConfigurationAggregatorNames(ConfigurationAggregatorNamesT&& value) { SetConfigurationAggregatorNames(std::forward<ConfigurationAggregatorNamesT>(value)); return *this;}
    template<typename ConfigurationAggregatorNamesT = Aws::String>
    DescribeConfigurationAggregatorsRequest& AddConfigurationAggregatorNames(ConfigurationAggregatorNamesT&& value) { m_configurationAggregatorNamesHasBeenSet = true; m_configurationAggregatorNames.emplace_back(std::forward<ConfigurationAggregatorNamesT>(value)); return *this; }
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
    DescribeConfigurationAggregatorsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of configuration aggregators returned on each page. The
     * default is maximum. If you specify 0, Config uses the default.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeConfigurationAggregatorsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_configurationAggregatorNames;
    bool m_configurationAggregatorNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
