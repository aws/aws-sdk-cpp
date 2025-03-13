/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/DataSourceSummary.h>
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
namespace BedrockAgent
{
namespace Model
{
  class ListDataSourcesResult
  {
  public:
    AWS_BEDROCKAGENT_API ListDataSourcesResult() = default;
    AWS_BEDROCKAGENT_API ListDataSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API ListDataSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects, each of which contains information about a data
     * source.</p>
     */
    inline const Aws::Vector<DataSourceSummary>& GetDataSourceSummaries() const { return m_dataSourceSummaries; }
    template<typename DataSourceSummariesT = Aws::Vector<DataSourceSummary>>
    void SetDataSourceSummaries(DataSourceSummariesT&& value) { m_dataSourceSummariesHasBeenSet = true; m_dataSourceSummaries = std::forward<DataSourceSummariesT>(value); }
    template<typename DataSourceSummariesT = Aws::Vector<DataSourceSummary>>
    ListDataSourcesResult& WithDataSourceSummaries(DataSourceSummariesT&& value) { SetDataSourceSummaries(std::forward<DataSourceSummariesT>(value)); return *this;}
    template<typename DataSourceSummariesT = DataSourceSummary>
    ListDataSourcesResult& AddDataSourceSummaries(DataSourceSummariesT&& value) { m_dataSourceSummariesHasBeenSet = true; m_dataSourceSummaries.emplace_back(std::forward<DataSourceSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, use this token when making another request in the
     * <code>nextToken</code> field to return the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataSourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataSourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataSourceSummary> m_dataSourceSummaries;
    bool m_dataSourceSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
