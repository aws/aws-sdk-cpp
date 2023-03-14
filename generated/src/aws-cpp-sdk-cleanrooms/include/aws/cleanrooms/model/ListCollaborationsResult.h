/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/CollaborationSummary.h>
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
  class ListCollaborationsResult
  {
  public:
    AWS_CLEANROOMS_API ListCollaborationsResult();
    AWS_CLEANROOMS_API ListCollaborationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListCollaborationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListCollaborationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListCollaborationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListCollaborationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of collaborations.</p>
     */
    inline const Aws::Vector<CollaborationSummary>& GetCollaborationList() const{ return m_collaborationList; }

    /**
     * <p>The list of collaborations.</p>
     */
    inline void SetCollaborationList(const Aws::Vector<CollaborationSummary>& value) { m_collaborationList = value; }

    /**
     * <p>The list of collaborations.</p>
     */
    inline void SetCollaborationList(Aws::Vector<CollaborationSummary>&& value) { m_collaborationList = std::move(value); }

    /**
     * <p>The list of collaborations.</p>
     */
    inline ListCollaborationsResult& WithCollaborationList(const Aws::Vector<CollaborationSummary>& value) { SetCollaborationList(value); return *this;}

    /**
     * <p>The list of collaborations.</p>
     */
    inline ListCollaborationsResult& WithCollaborationList(Aws::Vector<CollaborationSummary>&& value) { SetCollaborationList(std::move(value)); return *this;}

    /**
     * <p>The list of collaborations.</p>
     */
    inline ListCollaborationsResult& AddCollaborationList(const CollaborationSummary& value) { m_collaborationList.push_back(value); return *this; }

    /**
     * <p>The list of collaborations.</p>
     */
    inline ListCollaborationsResult& AddCollaborationList(CollaborationSummary&& value) { m_collaborationList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCollaborationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCollaborationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCollaborationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<CollaborationSummary> m_collaborationList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
