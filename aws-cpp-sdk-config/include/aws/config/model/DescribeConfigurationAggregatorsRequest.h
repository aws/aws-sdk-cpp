/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CONFIGSERVICE_API DescribeConfigurationAggregatorsRequest : public ConfigServiceRequest
  {
  public:
    DescribeConfigurationAggregatorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationAggregators"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline DescribeConfigurationAggregatorsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline DescribeConfigurationAggregatorsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline DescribeConfigurationAggregatorsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of configuration aggregators returned on each page. The
     * default is maximum. If you specify 0, AWS Config uses the default.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of configuration aggregators returned on each page. The
     * default is maximum. If you specify 0, AWS Config uses the default.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of configuration aggregators returned on each page. The
     * default is maximum. If you specify 0, AWS Config uses the default.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of configuration aggregators returned on each page. The
     * default is maximum. If you specify 0, AWS Config uses the default.</p>
     */
    inline DescribeConfigurationAggregatorsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_configurationAggregatorNames;
    bool m_configurationAggregatorNamesHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
