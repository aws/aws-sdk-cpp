/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeConfigurationAggregatorsResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConfigurationAggregatorsResult() = default;
    AWS_CONFIGSERVICE_API DescribeConfigurationAggregatorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeConfigurationAggregatorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a ConfigurationAggregators object.</p>
     */
    inline const Aws::Vector<ConfigurationAggregator>& GetConfigurationAggregators() const { return m_configurationAggregators; }
    template<typename ConfigurationAggregatorsT = Aws::Vector<ConfigurationAggregator>>
    void SetConfigurationAggregators(ConfigurationAggregatorsT&& value) { m_configurationAggregatorsHasBeenSet = true; m_configurationAggregators = std::forward<ConfigurationAggregatorsT>(value); }
    template<typename ConfigurationAggregatorsT = Aws::Vector<ConfigurationAggregator>>
    DescribeConfigurationAggregatorsResult& WithConfigurationAggregators(ConfigurationAggregatorsT&& value) { SetConfigurationAggregators(std::forward<ConfigurationAggregatorsT>(value)); return *this;}
    template<typename ConfigurationAggregatorsT = ConfigurationAggregator>
    DescribeConfigurationAggregatorsResult& AddConfigurationAggregators(ConfigurationAggregatorsT&& value) { m_configurationAggregatorsHasBeenSet = true; m_configurationAggregators.emplace_back(std::forward<ConfigurationAggregatorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeConfigurationAggregatorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConfigurationAggregatorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationAggregator> m_configurationAggregators;
    bool m_configurationAggregatorsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
