/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/CollaborationConfiguredAudienceModelAssociationSummary.h>
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
  class ListCollaborationConfiguredAudienceModelAssociationsResult
  {
  public:
    AWS_CLEANROOMS_API ListCollaborationConfiguredAudienceModelAssociationsResult();
    AWS_CLEANROOMS_API ListCollaborationConfiguredAudienceModelAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListCollaborationConfiguredAudienceModelAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The metadata of the configured audience model association within a
     * collaboration.</p>
     */
    inline const Aws::Vector<CollaborationConfiguredAudienceModelAssociationSummary>& GetCollaborationConfiguredAudienceModelAssociationSummaries() const{ return m_collaborationConfiguredAudienceModelAssociationSummaries; }

    /**
     * <p>The metadata of the configured audience model association within a
     * collaboration.</p>
     */
    inline void SetCollaborationConfiguredAudienceModelAssociationSummaries(const Aws::Vector<CollaborationConfiguredAudienceModelAssociationSummary>& value) { m_collaborationConfiguredAudienceModelAssociationSummaries = value; }

    /**
     * <p>The metadata of the configured audience model association within a
     * collaboration.</p>
     */
    inline void SetCollaborationConfiguredAudienceModelAssociationSummaries(Aws::Vector<CollaborationConfiguredAudienceModelAssociationSummary>&& value) { m_collaborationConfiguredAudienceModelAssociationSummaries = std::move(value); }

    /**
     * <p>The metadata of the configured audience model association within a
     * collaboration.</p>
     */
    inline ListCollaborationConfiguredAudienceModelAssociationsResult& WithCollaborationConfiguredAudienceModelAssociationSummaries(const Aws::Vector<CollaborationConfiguredAudienceModelAssociationSummary>& value) { SetCollaborationConfiguredAudienceModelAssociationSummaries(value); return *this;}

    /**
     * <p>The metadata of the configured audience model association within a
     * collaboration.</p>
     */
    inline ListCollaborationConfiguredAudienceModelAssociationsResult& WithCollaborationConfiguredAudienceModelAssociationSummaries(Aws::Vector<CollaborationConfiguredAudienceModelAssociationSummary>&& value) { SetCollaborationConfiguredAudienceModelAssociationSummaries(std::move(value)); return *this;}

    /**
     * <p>The metadata of the configured audience model association within a
     * collaboration.</p>
     */
    inline ListCollaborationConfiguredAudienceModelAssociationsResult& AddCollaborationConfiguredAudienceModelAssociationSummaries(const CollaborationConfiguredAudienceModelAssociationSummary& value) { m_collaborationConfiguredAudienceModelAssociationSummaries.push_back(value); return *this; }

    /**
     * <p>The metadata of the configured audience model association within a
     * collaboration.</p>
     */
    inline ListCollaborationConfiguredAudienceModelAssociationsResult& AddCollaborationConfiguredAudienceModelAssociationSummaries(CollaborationConfiguredAudienceModelAssociationSummary&& value) { m_collaborationConfiguredAudienceModelAssociationSummaries.push_back(std::move(value)); return *this; }


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
    inline ListCollaborationConfiguredAudienceModelAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListCollaborationConfiguredAudienceModelAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListCollaborationConfiguredAudienceModelAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCollaborationConfiguredAudienceModelAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCollaborationConfiguredAudienceModelAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCollaborationConfiguredAudienceModelAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<CollaborationConfiguredAudienceModelAssociationSummary> m_collaborationConfiguredAudienceModelAssociationSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
