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
    AWS_CLEANROOMSML_API ListTrainedModelsResult();
    AWS_CLEANROOMSML_API ListTrainedModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListTrainedModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTrainedModelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTrainedModelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTrainedModelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of trained models.</p>
     */
    inline const Aws::Vector<TrainedModelSummary>& GetTrainedModels() const{ return m_trainedModels; }
    inline void SetTrainedModels(const Aws::Vector<TrainedModelSummary>& value) { m_trainedModels = value; }
    inline void SetTrainedModels(Aws::Vector<TrainedModelSummary>&& value) { m_trainedModels = std::move(value); }
    inline ListTrainedModelsResult& WithTrainedModels(const Aws::Vector<TrainedModelSummary>& value) { SetTrainedModels(value); return *this;}
    inline ListTrainedModelsResult& WithTrainedModels(Aws::Vector<TrainedModelSummary>&& value) { SetTrainedModels(std::move(value)); return *this;}
    inline ListTrainedModelsResult& AddTrainedModels(const TrainedModelSummary& value) { m_trainedModels.push_back(value); return *this; }
    inline ListTrainedModelsResult& AddTrainedModels(TrainedModelSummary&& value) { m_trainedModels.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTrainedModelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTrainedModelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTrainedModelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<TrainedModelSummary> m_trainedModels;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
