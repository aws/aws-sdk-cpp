/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/AudienceModelSummary.h>
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
namespace CleanRoomsML
{
namespace Model
{
  class ListAudienceModelsResult
  {
  public:
    AWS_CLEANROOMSML_API ListAudienceModelsResult();
    AWS_CLEANROOMSML_API ListAudienceModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListAudienceModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The audience models that match the request.</p>
     */
    inline const Aws::Vector<AudienceModelSummary>& GetAudienceModels() const{ return m_audienceModels; }

    /**
     * <p>The audience models that match the request.</p>
     */
    inline void SetAudienceModels(const Aws::Vector<AudienceModelSummary>& value) { m_audienceModels = value; }

    /**
     * <p>The audience models that match the request.</p>
     */
    inline void SetAudienceModels(Aws::Vector<AudienceModelSummary>&& value) { m_audienceModels = std::move(value); }

    /**
     * <p>The audience models that match the request.</p>
     */
    inline ListAudienceModelsResult& WithAudienceModels(const Aws::Vector<AudienceModelSummary>& value) { SetAudienceModels(value); return *this;}

    /**
     * <p>The audience models that match the request.</p>
     */
    inline ListAudienceModelsResult& WithAudienceModels(Aws::Vector<AudienceModelSummary>&& value) { SetAudienceModels(std::move(value)); return *this;}

    /**
     * <p>The audience models that match the request.</p>
     */
    inline ListAudienceModelsResult& AddAudienceModels(const AudienceModelSummary& value) { m_audienceModels.push_back(value); return *this; }

    /**
     * <p>The audience models that match the request.</p>
     */
    inline ListAudienceModelsResult& AddAudienceModels(AudienceModelSummary&& value) { m_audienceModels.push_back(std::move(value)); return *this; }


    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListAudienceModelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListAudienceModelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListAudienceModelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAudienceModelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAudienceModelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAudienceModelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AudienceModelSummary> m_audienceModels;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
