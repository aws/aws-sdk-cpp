/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/ConfiguredAudienceModelSummary.h>
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
  class ListConfiguredAudienceModelsResult
  {
  public:
    AWS_CLEANROOMSML_API ListConfiguredAudienceModelsResult();
    AWS_CLEANROOMSML_API ListConfiguredAudienceModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListConfiguredAudienceModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The configured audience models.</p>
     */
    inline const Aws::Vector<ConfiguredAudienceModelSummary>& GetConfiguredAudienceModels() const{ return m_configuredAudienceModels; }

    /**
     * <p>The configured audience models.</p>
     */
    inline void SetConfiguredAudienceModels(const Aws::Vector<ConfiguredAudienceModelSummary>& value) { m_configuredAudienceModels = value; }

    /**
     * <p>The configured audience models.</p>
     */
    inline void SetConfiguredAudienceModels(Aws::Vector<ConfiguredAudienceModelSummary>&& value) { m_configuredAudienceModels = std::move(value); }

    /**
     * <p>The configured audience models.</p>
     */
    inline ListConfiguredAudienceModelsResult& WithConfiguredAudienceModels(const Aws::Vector<ConfiguredAudienceModelSummary>& value) { SetConfiguredAudienceModels(value); return *this;}

    /**
     * <p>The configured audience models.</p>
     */
    inline ListConfiguredAudienceModelsResult& WithConfiguredAudienceModels(Aws::Vector<ConfiguredAudienceModelSummary>&& value) { SetConfiguredAudienceModels(std::move(value)); return *this;}

    /**
     * <p>The configured audience models.</p>
     */
    inline ListConfiguredAudienceModelsResult& AddConfiguredAudienceModels(const ConfiguredAudienceModelSummary& value) { m_configuredAudienceModels.push_back(value); return *this; }

    /**
     * <p>The configured audience models.</p>
     */
    inline ListConfiguredAudienceModelsResult& AddConfiguredAudienceModels(ConfiguredAudienceModelSummary&& value) { m_configuredAudienceModels.push_back(std::move(value)); return *this; }


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
    inline ListConfiguredAudienceModelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListConfiguredAudienceModelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListConfiguredAudienceModelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListConfiguredAudienceModelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListConfiguredAudienceModelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListConfiguredAudienceModelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ConfiguredAudienceModelSummary> m_configuredAudienceModels;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
