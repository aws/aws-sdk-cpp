/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/CollaborationConfiguredModelAlgorithmAssociationSummary.h>
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
  class ListCollaborationConfiguredModelAlgorithmAssociationsResult
  {
  public:
    AWS_CLEANROOMSML_API ListCollaborationConfiguredModelAlgorithmAssociationsResult();
    AWS_CLEANROOMSML_API ListCollaborationConfiguredModelAlgorithmAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListCollaborationConfiguredModelAlgorithmAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCollaborationConfiguredModelAlgorithmAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCollaborationConfiguredModelAlgorithmAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCollaborationConfiguredModelAlgorithmAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configured model algorithm associations that belong to this
     * collaboration.</p>
     */
    inline const Aws::Vector<CollaborationConfiguredModelAlgorithmAssociationSummary>& GetCollaborationConfiguredModelAlgorithmAssociations() const{ return m_collaborationConfiguredModelAlgorithmAssociations; }
    inline void SetCollaborationConfiguredModelAlgorithmAssociations(const Aws::Vector<CollaborationConfiguredModelAlgorithmAssociationSummary>& value) { m_collaborationConfiguredModelAlgorithmAssociations = value; }
    inline void SetCollaborationConfiguredModelAlgorithmAssociations(Aws::Vector<CollaborationConfiguredModelAlgorithmAssociationSummary>&& value) { m_collaborationConfiguredModelAlgorithmAssociations = std::move(value); }
    inline ListCollaborationConfiguredModelAlgorithmAssociationsResult& WithCollaborationConfiguredModelAlgorithmAssociations(const Aws::Vector<CollaborationConfiguredModelAlgorithmAssociationSummary>& value) { SetCollaborationConfiguredModelAlgorithmAssociations(value); return *this;}
    inline ListCollaborationConfiguredModelAlgorithmAssociationsResult& WithCollaborationConfiguredModelAlgorithmAssociations(Aws::Vector<CollaborationConfiguredModelAlgorithmAssociationSummary>&& value) { SetCollaborationConfiguredModelAlgorithmAssociations(std::move(value)); return *this;}
    inline ListCollaborationConfiguredModelAlgorithmAssociationsResult& AddCollaborationConfiguredModelAlgorithmAssociations(const CollaborationConfiguredModelAlgorithmAssociationSummary& value) { m_collaborationConfiguredModelAlgorithmAssociations.push_back(value); return *this; }
    inline ListCollaborationConfiguredModelAlgorithmAssociationsResult& AddCollaborationConfiguredModelAlgorithmAssociations(CollaborationConfiguredModelAlgorithmAssociationSummary&& value) { m_collaborationConfiguredModelAlgorithmAssociations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCollaborationConfiguredModelAlgorithmAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCollaborationConfiguredModelAlgorithmAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCollaborationConfiguredModelAlgorithmAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<CollaborationConfiguredModelAlgorithmAssociationSummary> m_collaborationConfiguredModelAlgorithmAssociations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
