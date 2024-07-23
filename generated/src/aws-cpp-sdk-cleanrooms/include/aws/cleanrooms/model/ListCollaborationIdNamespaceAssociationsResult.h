/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/CollaborationIdNamespaceAssociationSummary.h>
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
  class ListCollaborationIdNamespaceAssociationsResult
  {
  public:
    AWS_CLEANROOMS_API ListCollaborationIdNamespaceAssociationsResult();
    AWS_CLEANROOMS_API ListCollaborationIdNamespaceAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListCollaborationIdNamespaceAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value provided to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCollaborationIdNamespaceAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCollaborationIdNamespaceAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCollaborationIdNamespaceAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary information of the collaboration ID namespace associations that
     * you requested.</p>
     */
    inline const Aws::Vector<CollaborationIdNamespaceAssociationSummary>& GetCollaborationIdNamespaceAssociationSummaries() const{ return m_collaborationIdNamespaceAssociationSummaries; }
    inline void SetCollaborationIdNamespaceAssociationSummaries(const Aws::Vector<CollaborationIdNamespaceAssociationSummary>& value) { m_collaborationIdNamespaceAssociationSummaries = value; }
    inline void SetCollaborationIdNamespaceAssociationSummaries(Aws::Vector<CollaborationIdNamespaceAssociationSummary>&& value) { m_collaborationIdNamespaceAssociationSummaries = std::move(value); }
    inline ListCollaborationIdNamespaceAssociationsResult& WithCollaborationIdNamespaceAssociationSummaries(const Aws::Vector<CollaborationIdNamespaceAssociationSummary>& value) { SetCollaborationIdNamespaceAssociationSummaries(value); return *this;}
    inline ListCollaborationIdNamespaceAssociationsResult& WithCollaborationIdNamespaceAssociationSummaries(Aws::Vector<CollaborationIdNamespaceAssociationSummary>&& value) { SetCollaborationIdNamespaceAssociationSummaries(std::move(value)); return *this;}
    inline ListCollaborationIdNamespaceAssociationsResult& AddCollaborationIdNamespaceAssociationSummaries(const CollaborationIdNamespaceAssociationSummary& value) { m_collaborationIdNamespaceAssociationSummaries.push_back(value); return *this; }
    inline ListCollaborationIdNamespaceAssociationsResult& AddCollaborationIdNamespaceAssociationSummaries(CollaborationIdNamespaceAssociationSummary&& value) { m_collaborationIdNamespaceAssociationSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCollaborationIdNamespaceAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCollaborationIdNamespaceAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCollaborationIdNamespaceAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<CollaborationIdNamespaceAssociationSummary> m_collaborationIdNamespaceAssociationSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
