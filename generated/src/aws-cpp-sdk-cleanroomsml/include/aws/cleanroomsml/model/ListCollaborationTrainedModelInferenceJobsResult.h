/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/CollaborationTrainedModelInferenceJobSummary.h>
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
  class ListCollaborationTrainedModelInferenceJobsResult
  {
  public:
    AWS_CLEANROOMSML_API ListCollaborationTrainedModelInferenceJobsResult() = default;
    AWS_CLEANROOMSML_API ListCollaborationTrainedModelInferenceJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListCollaborationTrainedModelInferenceJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCollaborationTrainedModelInferenceJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trained model inference jobs that you are interested in.</p>
     */
    inline const Aws::Vector<CollaborationTrainedModelInferenceJobSummary>& GetCollaborationTrainedModelInferenceJobs() const { return m_collaborationTrainedModelInferenceJobs; }
    template<typename CollaborationTrainedModelInferenceJobsT = Aws::Vector<CollaborationTrainedModelInferenceJobSummary>>
    void SetCollaborationTrainedModelInferenceJobs(CollaborationTrainedModelInferenceJobsT&& value) { m_collaborationTrainedModelInferenceJobsHasBeenSet = true; m_collaborationTrainedModelInferenceJobs = std::forward<CollaborationTrainedModelInferenceJobsT>(value); }
    template<typename CollaborationTrainedModelInferenceJobsT = Aws::Vector<CollaborationTrainedModelInferenceJobSummary>>
    ListCollaborationTrainedModelInferenceJobsResult& WithCollaborationTrainedModelInferenceJobs(CollaborationTrainedModelInferenceJobsT&& value) { SetCollaborationTrainedModelInferenceJobs(std::forward<CollaborationTrainedModelInferenceJobsT>(value)); return *this;}
    template<typename CollaborationTrainedModelInferenceJobsT = CollaborationTrainedModelInferenceJobSummary>
    ListCollaborationTrainedModelInferenceJobsResult& AddCollaborationTrainedModelInferenceJobs(CollaborationTrainedModelInferenceJobsT&& value) { m_collaborationTrainedModelInferenceJobsHasBeenSet = true; m_collaborationTrainedModelInferenceJobs.emplace_back(std::forward<CollaborationTrainedModelInferenceJobsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCollaborationTrainedModelInferenceJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CollaborationTrainedModelInferenceJobSummary> m_collaborationTrainedModelInferenceJobs;
    bool m_collaborationTrainedModelInferenceJobsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
