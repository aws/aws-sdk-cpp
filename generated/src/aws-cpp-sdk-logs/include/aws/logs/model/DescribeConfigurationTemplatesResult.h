/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/ConfigurationTemplate.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class DescribeConfigurationTemplatesResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeConfigurationTemplatesResult() = default;
    AWS_CLOUDWATCHLOGS_API DescribeConfigurationTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeConfigurationTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects, where each object describes one configuration template
     * that matches the filters that you specified in the request.</p>
     */
    inline const Aws::Vector<ConfigurationTemplate>& GetConfigurationTemplates() const { return m_configurationTemplates; }
    template<typename ConfigurationTemplatesT = Aws::Vector<ConfigurationTemplate>>
    void SetConfigurationTemplates(ConfigurationTemplatesT&& value) { m_configurationTemplatesHasBeenSet = true; m_configurationTemplates = std::forward<ConfigurationTemplatesT>(value); }
    template<typename ConfigurationTemplatesT = Aws::Vector<ConfigurationTemplate>>
    DescribeConfigurationTemplatesResult& WithConfigurationTemplates(ConfigurationTemplatesT&& value) { SetConfigurationTemplates(std::forward<ConfigurationTemplatesT>(value)); return *this;}
    template<typename ConfigurationTemplatesT = ConfigurationTemplate>
    DescribeConfigurationTemplatesResult& AddConfigurationTemplates(ConfigurationTemplatesT&& value) { m_configurationTemplatesHasBeenSet = true; m_configurationTemplates.emplace_back(std::forward<ConfigurationTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeConfigurationTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConfigurationTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationTemplate> m_configurationTemplates;
    bool m_configurationTemplatesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
