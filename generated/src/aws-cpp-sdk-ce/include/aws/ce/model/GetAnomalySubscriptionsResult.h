/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/AnomalySubscription.h>
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
namespace CostExplorer
{
namespace Model
{
  class GetAnomalySubscriptionsResult
  {
  public:
    AWS_COSTEXPLORER_API GetAnomalySubscriptionsResult() = default;
    AWS_COSTEXPLORER_API GetAnomalySubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetAnomalySubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of cost anomaly subscriptions that includes the detailed metadata for
     * each one. </p>
     */
    inline const Aws::Vector<AnomalySubscription>& GetAnomalySubscriptions() const { return m_anomalySubscriptions; }
    template<typename AnomalySubscriptionsT = Aws::Vector<AnomalySubscription>>
    void SetAnomalySubscriptions(AnomalySubscriptionsT&& value) { m_anomalySubscriptionsHasBeenSet = true; m_anomalySubscriptions = std::forward<AnomalySubscriptionsT>(value); }
    template<typename AnomalySubscriptionsT = Aws::Vector<AnomalySubscription>>
    GetAnomalySubscriptionsResult& WithAnomalySubscriptions(AnomalySubscriptionsT&& value) { SetAnomalySubscriptions(std::forward<AnomalySubscriptionsT>(value)); return *this;}
    template<typename AnomalySubscriptionsT = AnomalySubscription>
    GetAnomalySubscriptionsResult& AddAnomalySubscriptions(AnomalySubscriptionsT&& value) { m_anomalySubscriptionsHasBeenSet = true; m_anomalySubscriptions.emplace_back(std::forward<AnomalySubscriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetAnomalySubscriptionsResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAnomalySubscriptionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnomalySubscription> m_anomalySubscriptions;
    bool m_anomalySubscriptionsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
