/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/RetrainingSchedulerSummary.h>
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
  class ListRetrainingSchedulersResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListRetrainingSchedulersResult() = default;
    AWS_LOOKOUTEQUIPMENT_API ListRetrainingSchedulersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListRetrainingSchedulersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides information on the specified retraining scheduler, including the
     * model name, model ARN, status, and start date. </p>
     */
    inline const Aws::Vector<RetrainingSchedulerSummary>& GetRetrainingSchedulerSummaries() const { return m_retrainingSchedulerSummaries; }
    template<typename RetrainingSchedulerSummariesT = Aws::Vector<RetrainingSchedulerSummary>>
    void SetRetrainingSchedulerSummaries(RetrainingSchedulerSummariesT&& value) { m_retrainingSchedulerSummariesHasBeenSet = true; m_retrainingSchedulerSummaries = std::forward<RetrainingSchedulerSummariesT>(value); }
    template<typename RetrainingSchedulerSummariesT = Aws::Vector<RetrainingSchedulerSummary>>
    ListRetrainingSchedulersResult& WithRetrainingSchedulerSummaries(RetrainingSchedulerSummariesT&& value) { SetRetrainingSchedulerSummaries(std::forward<RetrainingSchedulerSummariesT>(value)); return *this;}
    template<typename RetrainingSchedulerSummariesT = RetrainingSchedulerSummary>
    ListRetrainingSchedulersResult& AddRetrainingSchedulerSummaries(RetrainingSchedulerSummariesT&& value) { m_retrainingSchedulerSummariesHasBeenSet = true; m_retrainingSchedulerSummaries.emplace_back(std::forward<RetrainingSchedulerSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the number of results exceeds the maximum, this pagination token is
     * returned. Use this token in the request to show the next page of retraining
     * schedulers.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRetrainingSchedulersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRetrainingSchedulersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RetrainingSchedulerSummary> m_retrainingSchedulerSummaries;
    bool m_retrainingSchedulerSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
