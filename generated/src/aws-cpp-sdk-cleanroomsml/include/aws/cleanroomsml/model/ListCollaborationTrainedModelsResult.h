/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/CollaborationTrainedModelSummary.h>
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
  class ListCollaborationTrainedModelsResult
  {
  public:
    AWS_CLEANROOMSML_API ListCollaborationTrainedModelsResult();
    AWS_CLEANROOMSML_API ListCollaborationTrainedModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListCollaborationTrainedModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCollaborationTrainedModelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCollaborationTrainedModelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCollaborationTrainedModelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trained models in the collaboration that you requested.</p>
     */
    inline const Aws::Vector<CollaborationTrainedModelSummary>& GetCollaborationTrainedModels() const{ return m_collaborationTrainedModels; }
    inline void SetCollaborationTrainedModels(const Aws::Vector<CollaborationTrainedModelSummary>& value) { m_collaborationTrainedModels = value; }
    inline void SetCollaborationTrainedModels(Aws::Vector<CollaborationTrainedModelSummary>&& value) { m_collaborationTrainedModels = std::move(value); }
    inline ListCollaborationTrainedModelsResult& WithCollaborationTrainedModels(const Aws::Vector<CollaborationTrainedModelSummary>& value) { SetCollaborationTrainedModels(value); return *this;}
    inline ListCollaborationTrainedModelsResult& WithCollaborationTrainedModels(Aws::Vector<CollaborationTrainedModelSummary>&& value) { SetCollaborationTrainedModels(std::move(value)); return *this;}
    inline ListCollaborationTrainedModelsResult& AddCollaborationTrainedModels(const CollaborationTrainedModelSummary& value) { m_collaborationTrainedModels.push_back(value); return *this; }
    inline ListCollaborationTrainedModelsResult& AddCollaborationTrainedModels(CollaborationTrainedModelSummary&& value) { m_collaborationTrainedModels.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCollaborationTrainedModelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCollaborationTrainedModelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCollaborationTrainedModelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<CollaborationTrainedModelSummary> m_collaborationTrainedModels;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
