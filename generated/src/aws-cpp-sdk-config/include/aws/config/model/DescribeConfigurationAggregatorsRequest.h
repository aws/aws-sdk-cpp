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
    AWS_CONFIGSERVICE_API DescribeConfigurationAggregatorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationAggregators"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the configuration aggregators.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigurationAggregatorNames() const{ return m_configurationAggregatorNames; }

    /**
     * <p>The name of the configuration aggregators.</p>
     */
    inline bool ConfigurationAggregatorNamesHasBeenSet() const { return m_configurationAggregatorNamesHasBeenSet; }

    /**
     * <p>The name of the configuration aggregators.</p>
     */
    inline void SetConfigurationAggregatorNames(const Aws::Vector<Aws::String>& value) { m_configurationAggregatorNamesHasBeenSet = true; m_configurationAggregatorNames = value; }

    /**
     * <p>The name of the configuration aggregators.</p>
     */
    inline void SetConfigurationAggregatorNames(Aws::Vector<Aws::String>&& value) { m_configurationAggregatorNamesHasBeenSet = true; m_configurationAggregatorNames = std::move(value); }

    /**
     * <p>The name of the configuration aggregators.</p>
     */
    inline DescribeConfigurationAggregatorsRequest& WithConfigurationAggregatorNames(const Aws::Vector<Aws::String>& value) { SetConfigurationAggregatorNames(value); return *this;}

    /**
     * <p>The name of the configuration aggregators.</p>
     */
    inline DescribeConfigurationAggregatorsRequest& WithConfigurationAggregatorNames(Aws::Vector<Aws::String>&& value) { SetConfigurationAggregatorNames(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration aggregators.</p>
     */
    inline DescribeConfigurationAggregatorsRequest& AddConfigurationAggregatorNames(const Aws::String& value) { m_configurationAggregatorNamesHasBeenSet = true; m_configurationAggregatorNames.push_back(value); return *this; }

    /**
     * <p>The name of the configuration aggregators.</p>
     */
    inline DescribeConfigurationAggregatorsRequest& AddConfigurationAggregatorNames(Aws::String&& value) { m_configurationAggregatorNamesHasBeenSet = true; m_configurationAggregatorNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The name of the configuration aggregators.</p>
     */
    inline DescribeConfigurationAggregatorsRequest& AddConfigurationAggregatorNames(const char* value) { m_configurationAggregatorNamesHasBeenSet = true; m_configurationAggregatorNames.push_back(value); return *this; }


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
    inline DescribeConfigurationAggregatorsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeConfigurationAggregatorsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeConfigurationAggregatorsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of configuration aggregators returned on each page. The
     * default is maximum. If you specify 0, Config uses the default.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of configuration aggregators returned on each page. The
     * default is maximum. If you specify 0, Config uses the default.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of configuration aggregators returned on each page. The
     * default is maximum. If you specify 0, Config uses the default.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of configuration aggregators returned on each page. The
     * default is maximum. If you specify 0, Config uses the default.</p>
     */
    inline DescribeConfigurationAggregatorsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_configurationAggregatorNames;
    bool m_configurationAggregatorNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
