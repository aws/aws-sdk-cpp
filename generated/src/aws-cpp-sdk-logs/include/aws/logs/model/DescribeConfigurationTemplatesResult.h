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
    AWS_CLOUDWATCHLOGS_API DescribeConfigurationTemplatesResult();
    AWS_CLOUDWATCHLOGS_API DescribeConfigurationTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeConfigurationTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects, where each object describes one configuration template
     * that matches the filters that you specified in the request.</p>
     */
    inline const Aws::Vector<ConfigurationTemplate>& GetConfigurationTemplates() const{ return m_configurationTemplates; }
    inline void SetConfigurationTemplates(const Aws::Vector<ConfigurationTemplate>& value) { m_configurationTemplates = value; }
    inline void SetConfigurationTemplates(Aws::Vector<ConfigurationTemplate>&& value) { m_configurationTemplates = std::move(value); }
    inline DescribeConfigurationTemplatesResult& WithConfigurationTemplates(const Aws::Vector<ConfigurationTemplate>& value) { SetConfigurationTemplates(value); return *this;}
    inline DescribeConfigurationTemplatesResult& WithConfigurationTemplates(Aws::Vector<ConfigurationTemplate>&& value) { SetConfigurationTemplates(std::move(value)); return *this;}
    inline DescribeConfigurationTemplatesResult& AddConfigurationTemplates(const ConfigurationTemplate& value) { m_configurationTemplates.push_back(value); return *this; }
    inline DescribeConfigurationTemplatesResult& AddConfigurationTemplates(ConfigurationTemplate&& value) { m_configurationTemplates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeConfigurationTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeConfigurationTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeConfigurationTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeConfigurationTemplatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeConfigurationTemplatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeConfigurationTemplatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationTemplate> m_configurationTemplates;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
