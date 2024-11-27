/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConfigurationRecorderSummary.h>
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
  class ListConfigurationRecordersResult
  {
  public:
    AWS_CONFIGSERVICE_API ListConfigurationRecordersResult();
    AWS_CONFIGSERVICE_API ListConfigurationRecordersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API ListConfigurationRecordersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>ConfigurationRecorderSummary</code> objects that
     * includes.</p>
     */
    inline const Aws::Vector<ConfigurationRecorderSummary>& GetConfigurationRecorderSummaries() const{ return m_configurationRecorderSummaries; }
    inline void SetConfigurationRecorderSummaries(const Aws::Vector<ConfigurationRecorderSummary>& value) { m_configurationRecorderSummaries = value; }
    inline void SetConfigurationRecorderSummaries(Aws::Vector<ConfigurationRecorderSummary>&& value) { m_configurationRecorderSummaries = std::move(value); }
    inline ListConfigurationRecordersResult& WithConfigurationRecorderSummaries(const Aws::Vector<ConfigurationRecorderSummary>& value) { SetConfigurationRecorderSummaries(value); return *this;}
    inline ListConfigurationRecordersResult& WithConfigurationRecorderSummaries(Aws::Vector<ConfigurationRecorderSummary>&& value) { SetConfigurationRecorderSummaries(std::move(value)); return *this;}
    inline ListConfigurationRecordersResult& AddConfigurationRecorderSummaries(const ConfigurationRecorderSummary& value) { m_configurationRecorderSummaries.push_back(value); return *this; }
    inline ListConfigurationRecordersResult& AddConfigurationRecorderSummaries(ConfigurationRecorderSummary&& value) { m_configurationRecorderSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>NextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListConfigurationRecordersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListConfigurationRecordersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListConfigurationRecordersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListConfigurationRecordersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListConfigurationRecordersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListConfigurationRecordersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationRecorderSummary> m_configurationRecorderSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
