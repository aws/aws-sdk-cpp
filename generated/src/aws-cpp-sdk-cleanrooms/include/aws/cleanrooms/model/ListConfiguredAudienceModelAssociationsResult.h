/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/ConfiguredAudienceModelAssociationSummary.h>
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
namespace CleanRooms
{
namespace Model
{
  class ListConfiguredAudienceModelAssociationsResult
  {
  public:
    AWS_CLEANROOMS_API ListConfiguredAudienceModelAssociationsResult();
    AWS_CLEANROOMS_API ListConfiguredAudienceModelAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListConfiguredAudienceModelAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summaries of the configured audience model associations that you
     * requested.</p>
     */
    inline const Aws::Vector<ConfiguredAudienceModelAssociationSummary>& GetConfiguredAudienceModelAssociationSummaries() const{ return m_configuredAudienceModelAssociationSummaries; }

    /**
     * <p>Summaries of the configured audience model associations that you
     * requested.</p>
     */
    inline void SetConfiguredAudienceModelAssociationSummaries(const Aws::Vector<ConfiguredAudienceModelAssociationSummary>& value) { m_configuredAudienceModelAssociationSummaries = value; }

    /**
     * <p>Summaries of the configured audience model associations that you
     * requested.</p>
     */
    inline void SetConfiguredAudienceModelAssociationSummaries(Aws::Vector<ConfiguredAudienceModelAssociationSummary>&& value) { m_configuredAudienceModelAssociationSummaries = std::move(value); }

    /**
     * <p>Summaries of the configured audience model associations that you
     * requested.</p>
     */
    inline ListConfiguredAudienceModelAssociationsResult& WithConfiguredAudienceModelAssociationSummaries(const Aws::Vector<ConfiguredAudienceModelAssociationSummary>& value) { SetConfiguredAudienceModelAssociationSummaries(value); return *this;}

    /**
     * <p>Summaries of the configured audience model associations that you
     * requested.</p>
     */
    inline ListConfiguredAudienceModelAssociationsResult& WithConfiguredAudienceModelAssociationSummaries(Aws::Vector<ConfiguredAudienceModelAssociationSummary>&& value) { SetConfiguredAudienceModelAssociationSummaries(std::move(value)); return *this;}

    /**
     * <p>Summaries of the configured audience model associations that you
     * requested.</p>
     */
    inline ListConfiguredAudienceModelAssociationsResult& AddConfiguredAudienceModelAssociationSummaries(const ConfiguredAudienceModelAssociationSummary& value) { m_configuredAudienceModelAssociationSummaries.push_back(value); return *this; }

    /**
     * <p>Summaries of the configured audience model associations that you
     * requested.</p>
     */
    inline ListConfiguredAudienceModelAssociationsResult& AddConfiguredAudienceModelAssociationSummaries(ConfiguredAudienceModelAssociationSummary&& value) { m_configuredAudienceModelAssociationSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token value provided to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token value provided to access the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token value provided to access the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token value provided to access the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token value provided to access the next page of results.</p>
     */
    inline ListConfiguredAudienceModelAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value provided to access the next page of results.</p>
     */
    inline ListConfiguredAudienceModelAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value provided to access the next page of results.</p>
     */
    inline ListConfiguredAudienceModelAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListConfiguredAudienceModelAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListConfiguredAudienceModelAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListConfiguredAudienceModelAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ConfiguredAudienceModelAssociationSummary> m_configuredAudienceModelAssociationSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
