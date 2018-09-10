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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConfigurationAggregator.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{
  class AWS_CONFIGSERVICE_API DescribeConfigurationAggregatorsResult
  {
  public:
    DescribeConfigurationAggregatorsResult();
    DescribeConfigurationAggregatorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeConfigurationAggregatorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a ConfigurationAggregators object.</p>
     */
    inline const Aws::Vector<ConfigurationAggregator>& GetConfigurationAggregators() const{ return m_configurationAggregators; }

    /**
     * <p>Returns a ConfigurationAggregators object.</p>
     */
    inline void SetConfigurationAggregators(const Aws::Vector<ConfigurationAggregator>& value) { m_configurationAggregators = value; }

    /**
     * <p>Returns a ConfigurationAggregators object.</p>
     */
    inline void SetConfigurationAggregators(Aws::Vector<ConfigurationAggregator>&& value) { m_configurationAggregators = std::move(value); }

    /**
     * <p>Returns a ConfigurationAggregators object.</p>
     */
    inline DescribeConfigurationAggregatorsResult& WithConfigurationAggregators(const Aws::Vector<ConfigurationAggregator>& value) { SetConfigurationAggregators(value); return *this;}

    /**
     * <p>Returns a ConfigurationAggregators object.</p>
     */
    inline DescribeConfigurationAggregatorsResult& WithConfigurationAggregators(Aws::Vector<ConfigurationAggregator>&& value) { SetConfigurationAggregators(std::move(value)); return *this;}

    /**
     * <p>Returns a ConfigurationAggregators object.</p>
     */
    inline DescribeConfigurationAggregatorsResult& AddConfigurationAggregators(const ConfigurationAggregator& value) { m_configurationAggregators.push_back(value); return *this; }

    /**
     * <p>Returns a ConfigurationAggregators object.</p>
     */
    inline DescribeConfigurationAggregatorsResult& AddConfigurationAggregators(ConfigurationAggregator&& value) { m_configurationAggregators.push_back(std::move(value)); return *this; }


    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline DescribeConfigurationAggregatorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline DescribeConfigurationAggregatorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline DescribeConfigurationAggregatorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ConfigurationAggregator> m_configurationAggregators;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
