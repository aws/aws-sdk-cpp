/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/ModelSummary.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class ListModelsResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListModelsResult() = default;
    AWS_LOOKOUTEQUIPMENT_API ListModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * machine learning models. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information on the specified model, including created time, model
     * and dataset ARNs, and status. </p>
     */
    inline const Aws::Vector<ModelSummary>& GetModelSummaries() const { return m_modelSummaries; }
    template<typename ModelSummariesT = Aws::Vector<ModelSummary>>
    void SetModelSummaries(ModelSummariesT&& value) { m_modelSummariesHasBeenSet = true; m_modelSummaries = std::forward<ModelSummariesT>(value); }
    template<typename ModelSummariesT = Aws::Vector<ModelSummary>>
    ListModelsResult& WithModelSummaries(ModelSummariesT&& value) { SetModelSummaries(std::forward<ModelSummariesT>(value)); return *this;}
    template<typename ModelSummariesT = ModelSummary>
    ListModelsResult& AddModelSummaries(ModelSummariesT&& value) { m_modelSummariesHasBeenSet = true; m_modelSummaries.emplace_back(std::forward<ModelSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListModelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ModelSummary> m_modelSummaries;
    bool m_modelSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
