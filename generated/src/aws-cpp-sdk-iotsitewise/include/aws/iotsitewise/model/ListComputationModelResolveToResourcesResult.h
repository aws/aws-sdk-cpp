/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ComputationModelResolveToResourceSummary.h>
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
  class ListComputationModelResolveToResourcesResult
  {
  public:
    AWS_IOTSITEWISE_API ListComputationModelResolveToResourcesResult() = default;
    AWS_IOTSITEWISE_API ListComputationModelResolveToResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListComputationModelResolveToResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of summaries describing the distinct resources that this computation
     * model resolves to when actions were executed.</p>
     */
    inline const Aws::Vector<ComputationModelResolveToResourceSummary>& GetComputationModelResolveToResourceSummaries() const { return m_computationModelResolveToResourceSummaries; }
    template<typename ComputationModelResolveToResourceSummariesT = Aws::Vector<ComputationModelResolveToResourceSummary>>
    void SetComputationModelResolveToResourceSummaries(ComputationModelResolveToResourceSummariesT&& value) { m_computationModelResolveToResourceSummariesHasBeenSet = true; m_computationModelResolveToResourceSummaries = std::forward<ComputationModelResolveToResourceSummariesT>(value); }
    template<typename ComputationModelResolveToResourceSummariesT = Aws::Vector<ComputationModelResolveToResourceSummary>>
    ListComputationModelResolveToResourcesResult& WithComputationModelResolveToResourceSummaries(ComputationModelResolveToResourceSummariesT&& value) { SetComputationModelResolveToResourceSummaries(std::forward<ComputationModelResolveToResourceSummariesT>(value)); return *this;}
    template<typename ComputationModelResolveToResourceSummariesT = ComputationModelResolveToResourceSummary>
    ListComputationModelResolveToResourcesResult& AddComputationModelResolveToResourceSummaries(ComputationModelResolveToResourceSummariesT&& value) { m_computationModelResolveToResourceSummariesHasBeenSet = true; m_computationModelResolveToResourceSummaries.emplace_back(std::forward<ComputationModelResolveToResourceSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of paginated results, or null if there are no
     * additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListComputationModelResolveToResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListComputationModelResolveToResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ComputationModelResolveToResourceSummary> m_computationModelResolveToResourceSummaries;
    bool m_computationModelResolveToResourceSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
