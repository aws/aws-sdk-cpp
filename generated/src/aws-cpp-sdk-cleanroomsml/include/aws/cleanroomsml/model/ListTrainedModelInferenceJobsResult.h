/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/TrainedModelInferenceJobSummary.h>
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
  class ListTrainedModelInferenceJobsResult
  {
  public:
    AWS_CLEANROOMSML_API ListTrainedModelInferenceJobsResult();
    AWS_CLEANROOMSML_API ListTrainedModelInferenceJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListTrainedModelInferenceJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTrainedModelInferenceJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTrainedModelInferenceJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTrainedModelInferenceJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the requested trained model inference jobs.</p>
     */
    inline const Aws::Vector<TrainedModelInferenceJobSummary>& GetTrainedModelInferenceJobs() const{ return m_trainedModelInferenceJobs; }
    inline void SetTrainedModelInferenceJobs(const Aws::Vector<TrainedModelInferenceJobSummary>& value) { m_trainedModelInferenceJobs = value; }
    inline void SetTrainedModelInferenceJobs(Aws::Vector<TrainedModelInferenceJobSummary>&& value) { m_trainedModelInferenceJobs = std::move(value); }
    inline ListTrainedModelInferenceJobsResult& WithTrainedModelInferenceJobs(const Aws::Vector<TrainedModelInferenceJobSummary>& value) { SetTrainedModelInferenceJobs(value); return *this;}
    inline ListTrainedModelInferenceJobsResult& WithTrainedModelInferenceJobs(Aws::Vector<TrainedModelInferenceJobSummary>&& value) { SetTrainedModelInferenceJobs(std::move(value)); return *this;}
    inline ListTrainedModelInferenceJobsResult& AddTrainedModelInferenceJobs(const TrainedModelInferenceJobSummary& value) { m_trainedModelInferenceJobs.push_back(value); return *this; }
    inline ListTrainedModelInferenceJobsResult& AddTrainedModelInferenceJobs(TrainedModelInferenceJobSummary&& value) { m_trainedModelInferenceJobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTrainedModelInferenceJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTrainedModelInferenceJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTrainedModelInferenceJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<TrainedModelInferenceJobSummary> m_trainedModelInferenceJobs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
