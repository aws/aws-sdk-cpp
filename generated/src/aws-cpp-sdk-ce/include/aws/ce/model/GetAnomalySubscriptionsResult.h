﻿/**
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
    AWS_COSTEXPLORER_API GetAnomalySubscriptionsResult();
    AWS_COSTEXPLORER_API GetAnomalySubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetAnomalySubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of cost anomaly subscriptions that includes the detailed metadata for
     * each one. </p>
     */
    inline const Aws::Vector<AnomalySubscription>& GetAnomalySubscriptions() const{ return m_anomalySubscriptions; }
    inline void SetAnomalySubscriptions(const Aws::Vector<AnomalySubscription>& value) { m_anomalySubscriptions = value; }
    inline void SetAnomalySubscriptions(Aws::Vector<AnomalySubscription>&& value) { m_anomalySubscriptions = std::move(value); }
    inline GetAnomalySubscriptionsResult& WithAnomalySubscriptions(const Aws::Vector<AnomalySubscription>& value) { SetAnomalySubscriptions(value); return *this;}
    inline GetAnomalySubscriptionsResult& WithAnomalySubscriptions(Aws::Vector<AnomalySubscription>&& value) { SetAnomalySubscriptions(std::move(value)); return *this;}
    inline GetAnomalySubscriptionsResult& AddAnomalySubscriptions(const AnomalySubscription& value) { m_anomalySubscriptions.push_back(value); return *this; }
    inline GetAnomalySubscriptionsResult& AddAnomalySubscriptions(AnomalySubscription&& value) { m_anomalySubscriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline GetAnomalySubscriptionsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline GetAnomalySubscriptionsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline GetAnomalySubscriptionsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAnomalySubscriptionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAnomalySubscriptionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAnomalySubscriptionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AnomalySubscription> m_anomalySubscriptions;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
