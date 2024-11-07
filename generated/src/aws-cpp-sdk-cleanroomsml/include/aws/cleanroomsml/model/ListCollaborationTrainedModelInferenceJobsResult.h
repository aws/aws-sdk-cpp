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
    AWS_CLEANROOMSML_API ListCollaborationTrainedModelInferenceJobsResult();
    AWS_CLEANROOMSML_API ListCollaborationTrainedModelInferenceJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListCollaborationTrainedModelInferenceJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCollaborationTrainedModelInferenceJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCollaborationTrainedModelInferenceJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCollaborationTrainedModelInferenceJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trained model inference jobs that you are interested in.</p>
     */
    inline const Aws::Vector<CollaborationTrainedModelInferenceJobSummary>& GetCollaborationTrainedModelInferenceJobs() const{ return m_collaborationTrainedModelInferenceJobs; }
    inline void SetCollaborationTrainedModelInferenceJobs(const Aws::Vector<CollaborationTrainedModelInferenceJobSummary>& value) { m_collaborationTrainedModelInferenceJobs = value; }
    inline void SetCollaborationTrainedModelInferenceJobs(Aws::Vector<CollaborationTrainedModelInferenceJobSummary>&& value) { m_collaborationTrainedModelInferenceJobs = std::move(value); }
    inline ListCollaborationTrainedModelInferenceJobsResult& WithCollaborationTrainedModelInferenceJobs(const Aws::Vector<CollaborationTrainedModelInferenceJobSummary>& value) { SetCollaborationTrainedModelInferenceJobs(value); return *this;}
    inline ListCollaborationTrainedModelInferenceJobsResult& WithCollaborationTrainedModelInferenceJobs(Aws::Vector<CollaborationTrainedModelInferenceJobSummary>&& value) { SetCollaborationTrainedModelInferenceJobs(std::move(value)); return *this;}
    inline ListCollaborationTrainedModelInferenceJobsResult& AddCollaborationTrainedModelInferenceJobs(const CollaborationTrainedModelInferenceJobSummary& value) { m_collaborationTrainedModelInferenceJobs.push_back(value); return *this; }
    inline ListCollaborationTrainedModelInferenceJobsResult& AddCollaborationTrainedModelInferenceJobs(CollaborationTrainedModelInferenceJobSummary&& value) { m_collaborationTrainedModelInferenceJobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCollaborationTrainedModelInferenceJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCollaborationTrainedModelInferenceJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCollaborationTrainedModelInferenceJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<CollaborationTrainedModelInferenceJobSummary> m_collaborationTrainedModelInferenceJobs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
