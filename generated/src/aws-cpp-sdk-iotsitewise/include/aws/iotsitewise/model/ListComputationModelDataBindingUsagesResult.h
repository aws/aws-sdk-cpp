/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ComputationModelDataBindingUsageSummary.h>
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
  class ListComputationModelDataBindingUsagesResult
  {
  public:
    AWS_IOTSITEWISE_API ListComputationModelDataBindingUsagesResult() = default;
    AWS_IOTSITEWISE_API ListComputationModelDataBindingUsagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListComputationModelDataBindingUsagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of summaries describing the data binding usages across computation
     * models. Each summary includes the computation model IDs and the matched data
     * binding details.</p>
     */
    inline const Aws::Vector<ComputationModelDataBindingUsageSummary>& GetDataBindingUsageSummaries() const { return m_dataBindingUsageSummaries; }
    template<typename DataBindingUsageSummariesT = Aws::Vector<ComputationModelDataBindingUsageSummary>>
    void SetDataBindingUsageSummaries(DataBindingUsageSummariesT&& value) { m_dataBindingUsageSummariesHasBeenSet = true; m_dataBindingUsageSummaries = std::forward<DataBindingUsageSummariesT>(value); }
    template<typename DataBindingUsageSummariesT = Aws::Vector<ComputationModelDataBindingUsageSummary>>
    ListComputationModelDataBindingUsagesResult& WithDataBindingUsageSummaries(DataBindingUsageSummariesT&& value) { SetDataBindingUsageSummaries(std::forward<DataBindingUsageSummariesT>(value)); return *this;}
    template<typename DataBindingUsageSummariesT = ComputationModelDataBindingUsageSummary>
    ListComputationModelDataBindingUsagesResult& AddDataBindingUsageSummaries(DataBindingUsageSummariesT&& value) { m_dataBindingUsageSummariesHasBeenSet = true; m_dataBindingUsageSummaries.emplace_back(std::forward<DataBindingUsageSummariesT>(value)); return *this; }
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
    ListComputationModelDataBindingUsagesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListComputationModelDataBindingUsagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ComputationModelDataBindingUsageSummary> m_dataBindingUsageSummaries;
    bool m_dataBindingUsageSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
