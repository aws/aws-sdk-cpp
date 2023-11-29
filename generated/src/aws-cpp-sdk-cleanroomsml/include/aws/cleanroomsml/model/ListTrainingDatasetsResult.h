/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/TrainingDatasetSummary.h>
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
  class ListTrainingDatasetsResult
  {
  public:
    AWS_CLEANROOMSML_API ListTrainingDatasetsResult();
    AWS_CLEANROOMSML_API ListTrainingDatasetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListTrainingDatasetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListTrainingDatasetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListTrainingDatasetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListTrainingDatasetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The training datasets that match the request.</p>
     */
    inline const Aws::Vector<TrainingDatasetSummary>& GetTrainingDatasets() const{ return m_trainingDatasets; }

    /**
     * <p>The training datasets that match the request.</p>
     */
    inline void SetTrainingDatasets(const Aws::Vector<TrainingDatasetSummary>& value) { m_trainingDatasets = value; }

    /**
     * <p>The training datasets that match the request.</p>
     */
    inline void SetTrainingDatasets(Aws::Vector<TrainingDatasetSummary>&& value) { m_trainingDatasets = std::move(value); }

    /**
     * <p>The training datasets that match the request.</p>
     */
    inline ListTrainingDatasetsResult& WithTrainingDatasets(const Aws::Vector<TrainingDatasetSummary>& value) { SetTrainingDatasets(value); return *this;}

    /**
     * <p>The training datasets that match the request.</p>
     */
    inline ListTrainingDatasetsResult& WithTrainingDatasets(Aws::Vector<TrainingDatasetSummary>&& value) { SetTrainingDatasets(std::move(value)); return *this;}

    /**
     * <p>The training datasets that match the request.</p>
     */
    inline ListTrainingDatasetsResult& AddTrainingDatasets(const TrainingDatasetSummary& value) { m_trainingDatasets.push_back(value); return *this; }

    /**
     * <p>The training datasets that match the request.</p>
     */
    inline ListTrainingDatasetsResult& AddTrainingDatasets(TrainingDatasetSummary&& value) { m_trainingDatasets.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTrainingDatasetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTrainingDatasetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTrainingDatasetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<TrainingDatasetSummary> m_trainingDatasets;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
