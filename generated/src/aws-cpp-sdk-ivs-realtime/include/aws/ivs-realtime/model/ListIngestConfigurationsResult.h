/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/IngestConfigurationSummary.h>
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
namespace ivsrealtime
{
namespace Model
{
  class ListIngestConfigurationsResult
  {
  public:
    AWS_IVSREALTIME_API ListIngestConfigurationsResult() = default;
    AWS_IVSREALTIME_API ListIngestConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API ListIngestConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of the matching ingest configurations (summary information only).</p>
     */
    inline const Aws::Vector<IngestConfigurationSummary>& GetIngestConfigurations() const { return m_ingestConfigurations; }
    template<typename IngestConfigurationsT = Aws::Vector<IngestConfigurationSummary>>
    void SetIngestConfigurations(IngestConfigurationsT&& value) { m_ingestConfigurationsHasBeenSet = true; m_ingestConfigurations = std::forward<IngestConfigurationsT>(value); }
    template<typename IngestConfigurationsT = Aws::Vector<IngestConfigurationSummary>>
    ListIngestConfigurationsResult& WithIngestConfigurations(IngestConfigurationsT&& value) { SetIngestConfigurations(std::forward<IngestConfigurationsT>(value)); return *this;}
    template<typename IngestConfigurationsT = IngestConfigurationSummary>
    ListIngestConfigurationsResult& AddIngestConfigurations(IngestConfigurationsT&& value) { m_ingestConfigurationsHasBeenSet = true; m_ingestConfigurations.emplace_back(std::forward<IngestConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more IngestConfigurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIngestConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIngestConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IngestConfigurationSummary> m_ingestConfigurations;
    bool m_ingestConfigurationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
