/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/TrainedModelSummary.h>
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
  class ListTrainedModelsResult
  {
  public:
    AWS_CLEANROOMSML_API ListTrainedModelsResult() = default;
    AWS_CLEANROOMSML_API ListTrainedModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListTrainedModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTrainedModelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of trained models.</p>
     */
    inline const Aws::Vector<TrainedModelSummary>& GetTrainedModels() const { return m_trainedModels; }
    template<typename TrainedModelsT = Aws::Vector<TrainedModelSummary>>
    void SetTrainedModels(TrainedModelsT&& value) { m_trainedModelsHasBeenSet = true; m_trainedModels = std::forward<TrainedModelsT>(value); }
    template<typename TrainedModelsT = Aws::Vector<TrainedModelSummary>>
    ListTrainedModelsResult& WithTrainedModels(TrainedModelsT&& value) { SetTrainedModels(std::forward<TrainedModelsT>(value)); return *this;}
    template<typename TrainedModelsT = TrainedModelSummary>
    ListTrainedModelsResult& AddTrainedModels(TrainedModelsT&& value) { m_trainedModelsHasBeenSet = true; m_trainedModels.emplace_back(std::forward<TrainedModelsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTrainedModelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<TrainedModelSummary> m_trainedModels;
    bool m_trainedModelsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
