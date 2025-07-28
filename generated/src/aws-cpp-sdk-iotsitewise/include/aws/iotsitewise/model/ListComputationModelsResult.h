/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ComputationModelSummary.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class ListComputationModelsResult
  {
  public:
    AWS_IOTSITEWISE_API ListComputationModelsResult() = default;
    AWS_IOTSITEWISE_API ListComputationModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListComputationModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list summarizing each computation model.</p>
     */
    inline const Aws::Vector<ComputationModelSummary>& GetComputationModelSummaries() const { return m_computationModelSummaries; }
    template<typename ComputationModelSummariesT = Aws::Vector<ComputationModelSummary>>
    void SetComputationModelSummaries(ComputationModelSummariesT&& value) { m_computationModelSummariesHasBeenSet = true; m_computationModelSummaries = std::forward<ComputationModelSummariesT>(value); }
    template<typename ComputationModelSummariesT = Aws::Vector<ComputationModelSummary>>
    ListComputationModelsResult& WithComputationModelSummaries(ComputationModelSummariesT&& value) { SetComputationModelSummaries(std::forward<ComputationModelSummariesT>(value)); return *this;}
    template<typename ComputationModelSummariesT = ComputationModelSummary>
    ListComputationModelsResult& AddComputationModelSummaries(ComputationModelSummariesT&& value) { m_computationModelSummariesHasBeenSet = true; m_computationModelSummaries.emplace_back(std::forward<ComputationModelSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListComputationModelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListComputationModelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ComputationModelSummary> m_computationModelSummaries;
    bool m_computationModelSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
