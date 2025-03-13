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
    AWS_CONFIGSERVICE_API ListConfigurationRecordersResult() = default;
    AWS_CONFIGSERVICE_API ListConfigurationRecordersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API ListConfigurationRecordersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>ConfigurationRecorderSummary</code> objects that
     * includes.</p>
     */
    inline const Aws::Vector<ConfigurationRecorderSummary>& GetConfigurationRecorderSummaries() const { return m_configurationRecorderSummaries; }
    template<typename ConfigurationRecorderSummariesT = Aws::Vector<ConfigurationRecorderSummary>>
    void SetConfigurationRecorderSummaries(ConfigurationRecorderSummariesT&& value) { m_configurationRecorderSummariesHasBeenSet = true; m_configurationRecorderSummaries = std::forward<ConfigurationRecorderSummariesT>(value); }
    template<typename ConfigurationRecorderSummariesT = Aws::Vector<ConfigurationRecorderSummary>>
    ListConfigurationRecordersResult& WithConfigurationRecorderSummaries(ConfigurationRecorderSummariesT&& value) { SetConfigurationRecorderSummaries(std::forward<ConfigurationRecorderSummariesT>(value)); return *this;}
    template<typename ConfigurationRecorderSummariesT = ConfigurationRecorderSummary>
    ListConfigurationRecordersResult& AddConfigurationRecorderSummaries(ConfigurationRecorderSummariesT&& value) { m_configurationRecorderSummariesHasBeenSet = true; m_configurationRecorderSummaries.emplace_back(std::forward<ConfigurationRecorderSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>NextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConfigurationRecordersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConfigurationRecordersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationRecorderSummary> m_configurationRecorderSummaries;
    bool m_configurationRecorderSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
