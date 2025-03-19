/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/ModelVersionSummary.h>
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
  class ListModelVersionsResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListModelVersionsResult() = default;
    AWS_LOOKOUTEQUIPMENT_API ListModelVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListModelVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the total number of results exceeds the limit that the response can
     * display, the response returns an opaque pagination token indicating where to
     * continue the listing of machine learning model versions. Use this token in the
     * <code>NextToken</code> field in the request to list the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information on the specified model version, including the created
     * time, model and dataset ARNs, and status.</p>  <p>If you don't supply the
     * <code>ModelName</code> request parameter, or if you supply the name of a model
     * that doesn't exist, <code>ListModelVersions</code> returns an empty array in
     * <code>ModelVersionSummaries</code>. </p> 
     */
    inline const Aws::Vector<ModelVersionSummary>& GetModelVersionSummaries() const { return m_modelVersionSummaries; }
    template<typename ModelVersionSummariesT = Aws::Vector<ModelVersionSummary>>
    void SetModelVersionSummaries(ModelVersionSummariesT&& value) { m_modelVersionSummariesHasBeenSet = true; m_modelVersionSummaries = std::forward<ModelVersionSummariesT>(value); }
    template<typename ModelVersionSummariesT = Aws::Vector<ModelVersionSummary>>
    ListModelVersionsResult& WithModelVersionSummaries(ModelVersionSummariesT&& value) { SetModelVersionSummaries(std::forward<ModelVersionSummariesT>(value)); return *this;}
    template<typename ModelVersionSummariesT = ModelVersionSummary>
    ListModelVersionsResult& AddModelVersionSummaries(ModelVersionSummariesT&& value) { m_modelVersionSummariesHasBeenSet = true; m_modelVersionSummaries.emplace_back(std::forward<ModelVersionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListModelVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ModelVersionSummary> m_modelVersionSummaries;
    bool m_modelVersionSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
