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
    AWS_IVSREALTIME_API ListIngestConfigurationsResult();
    AWS_IVSREALTIME_API ListIngestConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API ListIngestConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of the matching ingest configurations (summary information only).</p>
     */
    inline const Aws::Vector<IngestConfigurationSummary>& GetIngestConfigurations() const{ return m_ingestConfigurations; }
    inline void SetIngestConfigurations(const Aws::Vector<IngestConfigurationSummary>& value) { m_ingestConfigurations = value; }
    inline void SetIngestConfigurations(Aws::Vector<IngestConfigurationSummary>&& value) { m_ingestConfigurations = std::move(value); }
    inline ListIngestConfigurationsResult& WithIngestConfigurations(const Aws::Vector<IngestConfigurationSummary>& value) { SetIngestConfigurations(value); return *this;}
    inline ListIngestConfigurationsResult& WithIngestConfigurations(Aws::Vector<IngestConfigurationSummary>&& value) { SetIngestConfigurations(std::move(value)); return *this;}
    inline ListIngestConfigurationsResult& AddIngestConfigurations(const IngestConfigurationSummary& value) { m_ingestConfigurations.push_back(value); return *this; }
    inline ListIngestConfigurationsResult& AddIngestConfigurations(IngestConfigurationSummary&& value) { m_ingestConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more IngestConfigurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListIngestConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIngestConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIngestConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListIngestConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListIngestConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListIngestConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<IngestConfigurationSummary> m_ingestConfigurations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
