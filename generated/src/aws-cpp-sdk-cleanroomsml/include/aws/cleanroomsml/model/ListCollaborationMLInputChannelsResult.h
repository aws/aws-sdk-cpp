/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/CollaborationMLInputChannelSummary.h>
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
  class ListCollaborationMLInputChannelsResult
  {
  public:
    AWS_CLEANROOMSML_API ListCollaborationMLInputChannelsResult();
    AWS_CLEANROOMSML_API ListCollaborationMLInputChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListCollaborationMLInputChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCollaborationMLInputChannelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCollaborationMLInputChannelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCollaborationMLInputChannelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of ML input channels that you wanted.</p>
     */
    inline const Aws::Vector<CollaborationMLInputChannelSummary>& GetCollaborationMLInputChannelsList() const{ return m_collaborationMLInputChannelsList; }
    inline void SetCollaborationMLInputChannelsList(const Aws::Vector<CollaborationMLInputChannelSummary>& value) { m_collaborationMLInputChannelsList = value; }
    inline void SetCollaborationMLInputChannelsList(Aws::Vector<CollaborationMLInputChannelSummary>&& value) { m_collaborationMLInputChannelsList = std::move(value); }
    inline ListCollaborationMLInputChannelsResult& WithCollaborationMLInputChannelsList(const Aws::Vector<CollaborationMLInputChannelSummary>& value) { SetCollaborationMLInputChannelsList(value); return *this;}
    inline ListCollaborationMLInputChannelsResult& WithCollaborationMLInputChannelsList(Aws::Vector<CollaborationMLInputChannelSummary>&& value) { SetCollaborationMLInputChannelsList(std::move(value)); return *this;}
    inline ListCollaborationMLInputChannelsResult& AddCollaborationMLInputChannelsList(const CollaborationMLInputChannelSummary& value) { m_collaborationMLInputChannelsList.push_back(value); return *this; }
    inline ListCollaborationMLInputChannelsResult& AddCollaborationMLInputChannelsList(CollaborationMLInputChannelSummary&& value) { m_collaborationMLInputChannelsList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCollaborationMLInputChannelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCollaborationMLInputChannelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCollaborationMLInputChannelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<CollaborationMLInputChannelSummary> m_collaborationMLInputChannelsList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
