/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/ServiceLevelObjectiveSummary.h>
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
namespace ApplicationSignals
{
namespace Model
{
  class ListServiceLevelObjectivesResult
  {
  public:
    AWS_APPLICATIONSIGNALS_API ListServiceLevelObjectivesResult() = default;
    AWS_APPLICATIONSIGNALS_API ListServiceLevelObjectivesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONSIGNALS_API ListServiceLevelObjectivesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures, where each structure contains information about one
     * SLO.</p>
     */
    inline const Aws::Vector<ServiceLevelObjectiveSummary>& GetSloSummaries() const { return m_sloSummaries; }
    template<typename SloSummariesT = Aws::Vector<ServiceLevelObjectiveSummary>>
    void SetSloSummaries(SloSummariesT&& value) { m_sloSummariesHasBeenSet = true; m_sloSummaries = std::forward<SloSummariesT>(value); }
    template<typename SloSummariesT = Aws::Vector<ServiceLevelObjectiveSummary>>
    ListServiceLevelObjectivesResult& WithSloSummaries(SloSummariesT&& value) { SetSloSummaries(std::forward<SloSummariesT>(value)); return *this;}
    template<typename SloSummariesT = ServiceLevelObjectiveSummary>
    ListServiceLevelObjectivesResult& AddSloSummaries(SloSummariesT&& value) { m_sloSummariesHasBeenSet = true; m_sloSummaries.emplace_back(std::forward<SloSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Include this value in your next use of this API to get next set of service
     * level objectives.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServiceLevelObjectivesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListServiceLevelObjectivesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceLevelObjectiveSummary> m_sloSummaries;
    bool m_sloSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
