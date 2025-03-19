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
    AWS_CLEANROOMSML_API ListTrainingDatasetsResult() = default;
    AWS_CLEANROOMSML_API ListTrainingDatasetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListTrainingDatasetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTrainingDatasetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The training datasets that match the request.</p>
     */
    inline const Aws::Vector<TrainingDatasetSummary>& GetTrainingDatasets() const { return m_trainingDatasets; }
    template<typename TrainingDatasetsT = Aws::Vector<TrainingDatasetSummary>>
    void SetTrainingDatasets(TrainingDatasetsT&& value) { m_trainingDatasetsHasBeenSet = true; m_trainingDatasets = std::forward<TrainingDatasetsT>(value); }
    template<typename TrainingDatasetsT = Aws::Vector<TrainingDatasetSummary>>
    ListTrainingDatasetsResult& WithTrainingDatasets(TrainingDatasetsT&& value) { SetTrainingDatasets(std::forward<TrainingDatasetsT>(value)); return *this;}
    template<typename TrainingDatasetsT = TrainingDatasetSummary>
    ListTrainingDatasetsResult& AddTrainingDatasets(TrainingDatasetsT&& value) { m_trainingDatasetsHasBeenSet = true; m_trainingDatasets.emplace_back(std::forward<TrainingDatasetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTrainingDatasetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<TrainingDatasetSummary> m_trainingDatasets;
    bool m_trainingDatasetsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
