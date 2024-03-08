/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/MetadataTransferJobSummary.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class ListMetadataTransferJobsResult
  {
  public:
    AWS_IOTTWINMAKER_API ListMetadataTransferJobsResult();
    AWS_IOTTWINMAKER_API ListMetadataTransferJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API ListMetadataTransferJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The metadata transfer job summaries.</p>
     */
    inline const Aws::Vector<MetadataTransferJobSummary>& GetMetadataTransferJobSummaries() const{ return m_metadataTransferJobSummaries; }

    /**
     * <p>The metadata transfer job summaries.</p>
     */
    inline void SetMetadataTransferJobSummaries(const Aws::Vector<MetadataTransferJobSummary>& value) { m_metadataTransferJobSummaries = value; }

    /**
     * <p>The metadata transfer job summaries.</p>
     */
    inline void SetMetadataTransferJobSummaries(Aws::Vector<MetadataTransferJobSummary>&& value) { m_metadataTransferJobSummaries = std::move(value); }

    /**
     * <p>The metadata transfer job summaries.</p>
     */
    inline ListMetadataTransferJobsResult& WithMetadataTransferJobSummaries(const Aws::Vector<MetadataTransferJobSummary>& value) { SetMetadataTransferJobSummaries(value); return *this;}

    /**
     * <p>The metadata transfer job summaries.</p>
     */
    inline ListMetadataTransferJobsResult& WithMetadataTransferJobSummaries(Aws::Vector<MetadataTransferJobSummary>&& value) { SetMetadataTransferJobSummaries(std::move(value)); return *this;}

    /**
     * <p>The metadata transfer job summaries.</p>
     */
    inline ListMetadataTransferJobsResult& AddMetadataTransferJobSummaries(const MetadataTransferJobSummary& value) { m_metadataTransferJobSummaries.push_back(value); return *this; }

    /**
     * <p>The metadata transfer job summaries.</p>
     */
    inline ListMetadataTransferJobsResult& AddMetadataTransferJobSummaries(MetadataTransferJobSummary&& value) { m_metadataTransferJobSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ListMetadataTransferJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ListMetadataTransferJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ListMetadataTransferJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListMetadataTransferJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListMetadataTransferJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListMetadataTransferJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<MetadataTransferJobSummary> m_metadataTransferJobSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
