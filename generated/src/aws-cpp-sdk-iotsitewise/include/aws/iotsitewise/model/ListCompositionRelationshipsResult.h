/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/CompositionRelationshipSummary.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class ListCompositionRelationshipsResult
  {
  public:
    AWS_IOTSITEWISE_API ListCompositionRelationshipsResult();
    AWS_IOTSITEWISE_API ListCompositionRelationshipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListCompositionRelationshipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that summarizes each composition relationship.</p>
     */
    inline const Aws::Vector<CompositionRelationshipSummary>& GetCompositionRelationshipSummaries() const{ return m_compositionRelationshipSummaries; }

    /**
     * <p>A list that summarizes each composition relationship.</p>
     */
    inline void SetCompositionRelationshipSummaries(const Aws::Vector<CompositionRelationshipSummary>& value) { m_compositionRelationshipSummaries = value; }

    /**
     * <p>A list that summarizes each composition relationship.</p>
     */
    inline void SetCompositionRelationshipSummaries(Aws::Vector<CompositionRelationshipSummary>&& value) { m_compositionRelationshipSummaries = std::move(value); }

    /**
     * <p>A list that summarizes each composition relationship.</p>
     */
    inline ListCompositionRelationshipsResult& WithCompositionRelationshipSummaries(const Aws::Vector<CompositionRelationshipSummary>& value) { SetCompositionRelationshipSummaries(value); return *this;}

    /**
     * <p>A list that summarizes each composition relationship.</p>
     */
    inline ListCompositionRelationshipsResult& WithCompositionRelationshipSummaries(Aws::Vector<CompositionRelationshipSummary>&& value) { SetCompositionRelationshipSummaries(std::move(value)); return *this;}

    /**
     * <p>A list that summarizes each composition relationship.</p>
     */
    inline ListCompositionRelationshipsResult& AddCompositionRelationshipSummaries(const CompositionRelationshipSummary& value) { m_compositionRelationshipSummaries.push_back(value); return *this; }

    /**
     * <p>A list that summarizes each composition relationship.</p>
     */
    inline ListCompositionRelationshipsResult& AddCompositionRelationshipSummaries(CompositionRelationshipSummary&& value) { m_compositionRelationshipSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListCompositionRelationshipsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListCompositionRelationshipsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListCompositionRelationshipsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCompositionRelationshipsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCompositionRelationshipsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCompositionRelationshipsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<CompositionRelationshipSummary> m_compositionRelationshipSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
