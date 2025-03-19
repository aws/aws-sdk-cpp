/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/IngestionJobSummary.h>
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
  class ListIngestionJobsResult
  {
  public:
    AWS_BEDROCKAGENT_API ListIngestionJobsResult() = default;
    AWS_BEDROCKAGENT_API ListIngestionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API ListIngestionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of data ingestion jobs with information about each job.</p>
     */
    inline const Aws::Vector<IngestionJobSummary>& GetIngestionJobSummaries() const { return m_ingestionJobSummaries; }
    template<typename IngestionJobSummariesT = Aws::Vector<IngestionJobSummary>>
    void SetIngestionJobSummaries(IngestionJobSummariesT&& value) { m_ingestionJobSummariesHasBeenSet = true; m_ingestionJobSummaries = std::forward<IngestionJobSummariesT>(value); }
    template<typename IngestionJobSummariesT = Aws::Vector<IngestionJobSummary>>
    ListIngestionJobsResult& WithIngestionJobSummaries(IngestionJobSummariesT&& value) { SetIngestionJobSummaries(std::forward<IngestionJobSummariesT>(value)); return *this;}
    template<typename IngestionJobSummariesT = IngestionJobSummary>
    ListIngestionJobsResult& AddIngestionJobSummaries(IngestionJobSummariesT&& value) { m_ingestionJobSummariesHasBeenSet = true; m_ingestionJobSummaries.emplace_back(std::forward<IngestionJobSummariesT>(value)); return *this; }
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
    ListIngestionJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIngestionJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IngestionJobSummary> m_ingestionJobSummaries;
    bool m_ingestionJobSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
