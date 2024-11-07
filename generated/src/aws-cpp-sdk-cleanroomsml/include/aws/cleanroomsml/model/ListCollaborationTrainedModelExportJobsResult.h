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
    AWS_CLEANROOMSML_API ListCollaborationTrainedModelExportJobsResult();
    AWS_CLEANROOMSML_API ListCollaborationTrainedModelExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListCollaborationTrainedModelExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCollaborationTrainedModelExportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCollaborationTrainedModelExportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCollaborationTrainedModelExportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exports jobs that exist for the requested trained model in the requested
     * collaboration.</p>
     */
    inline const Aws::Vector<CollaborationTrainedModelExportJobSummary>& GetCollaborationTrainedModelExportJobs() const{ return m_collaborationTrainedModelExportJobs; }
    inline void SetCollaborationTrainedModelExportJobs(const Aws::Vector<CollaborationTrainedModelExportJobSummary>& value) { m_collaborationTrainedModelExportJobs = value; }
    inline void SetCollaborationTrainedModelExportJobs(Aws::Vector<CollaborationTrainedModelExportJobSummary>&& value) { m_collaborationTrainedModelExportJobs = std::move(value); }
    inline ListCollaborationTrainedModelExportJobsResult& WithCollaborationTrainedModelExportJobs(const Aws::Vector<CollaborationTrainedModelExportJobSummary>& value) { SetCollaborationTrainedModelExportJobs(value); return *this;}
    inline ListCollaborationTrainedModelExportJobsResult& WithCollaborationTrainedModelExportJobs(Aws::Vector<CollaborationTrainedModelExportJobSummary>&& value) { SetCollaborationTrainedModelExportJobs(std::move(value)); return *this;}
    inline ListCollaborationTrainedModelExportJobsResult& AddCollaborationTrainedModelExportJobs(const CollaborationTrainedModelExportJobSummary& value) { m_collaborationTrainedModelExportJobs.push_back(value); return *this; }
    inline ListCollaborationTrainedModelExportJobsResult& AddCollaborationTrainedModelExportJobs(CollaborationTrainedModelExportJobSummary&& value) { m_collaborationTrainedModelExportJobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCollaborationTrainedModelExportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCollaborationTrainedModelExportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCollaborationTrainedModelExportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<CollaborationTrainedModelExportJobSummary> m_collaborationTrainedModelExportJobs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
