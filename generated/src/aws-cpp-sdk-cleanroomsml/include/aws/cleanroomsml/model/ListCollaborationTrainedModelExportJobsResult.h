/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/CollaborationTrainedModelExportJobSummary.h>
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
  class ListCollaborationTrainedModelExportJobsResult
  {
  public:
    AWS_CLEANROOMSML_API ListCollaborationTrainedModelExportJobsResult() = default;
    AWS_CLEANROOMSML_API ListCollaborationTrainedModelExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListCollaborationTrainedModelExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCollaborationTrainedModelExportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exports jobs that exist for the requested trained model in the requested
     * collaboration.</p>
     */
    inline const Aws::Vector<CollaborationTrainedModelExportJobSummary>& GetCollaborationTrainedModelExportJobs() const { return m_collaborationTrainedModelExportJobs; }
    template<typename CollaborationTrainedModelExportJobsT = Aws::Vector<CollaborationTrainedModelExportJobSummary>>
    void SetCollaborationTrainedModelExportJobs(CollaborationTrainedModelExportJobsT&& value) { m_collaborationTrainedModelExportJobsHasBeenSet = true; m_collaborationTrainedModelExportJobs = std::forward<CollaborationTrainedModelExportJobsT>(value); }
    template<typename CollaborationTrainedModelExportJobsT = Aws::Vector<CollaborationTrainedModelExportJobSummary>>
    ListCollaborationTrainedModelExportJobsResult& WithCollaborationTrainedModelExportJobs(CollaborationTrainedModelExportJobsT&& value) { SetCollaborationTrainedModelExportJobs(std::forward<CollaborationTrainedModelExportJobsT>(value)); return *this;}
    template<typename CollaborationTrainedModelExportJobsT = CollaborationTrainedModelExportJobSummary>
    ListCollaborationTrainedModelExportJobsResult& AddCollaborationTrainedModelExportJobs(CollaborationTrainedModelExportJobsT&& value) { m_collaborationTrainedModelExportJobsHasBeenSet = true; m_collaborationTrainedModelExportJobs.emplace_back(std::forward<CollaborationTrainedModelExportJobsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCollaborationTrainedModelExportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CollaborationTrainedModelExportJobSummary> m_collaborationTrainedModelExportJobs;
    bool m_collaborationTrainedModelExportJobsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
