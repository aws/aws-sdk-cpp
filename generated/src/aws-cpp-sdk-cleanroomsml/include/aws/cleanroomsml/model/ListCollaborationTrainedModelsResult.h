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
    AWS_CLEANROOMSML_API ListCollaborationTrainedModelsResult() = default;
    AWS_CLEANROOMSML_API ListCollaborationTrainedModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListCollaborationTrainedModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCollaborationTrainedModelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trained models in the collaboration that you requested.</p>
     */
    inline const Aws::Vector<CollaborationTrainedModelSummary>& GetCollaborationTrainedModels() const { return m_collaborationTrainedModels; }
    template<typename CollaborationTrainedModelsT = Aws::Vector<CollaborationTrainedModelSummary>>
    void SetCollaborationTrainedModels(CollaborationTrainedModelsT&& value) { m_collaborationTrainedModelsHasBeenSet = true; m_collaborationTrainedModels = std::forward<CollaborationTrainedModelsT>(value); }
    template<typename CollaborationTrainedModelsT = Aws::Vector<CollaborationTrainedModelSummary>>
    ListCollaborationTrainedModelsResult& WithCollaborationTrainedModels(CollaborationTrainedModelsT&& value) { SetCollaborationTrainedModels(std::forward<CollaborationTrainedModelsT>(value)); return *this;}
    template<typename CollaborationTrainedModelsT = CollaborationTrainedModelSummary>
    ListCollaborationTrainedModelsResult& AddCollaborationTrainedModels(CollaborationTrainedModelsT&& value) { m_collaborationTrainedModelsHasBeenSet = true; m_collaborationTrainedModels.emplace_back(std::forward<CollaborationTrainedModelsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCollaborationTrainedModelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CollaborationTrainedModelSummary> m_collaborationTrainedModels;
    bool m_collaborationTrainedModelsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
