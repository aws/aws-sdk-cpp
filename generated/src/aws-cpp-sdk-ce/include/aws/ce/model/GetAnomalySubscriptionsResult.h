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
    AWS_COSTEXPLORER_API GetAnomalySubscriptionsResult();
    AWS_COSTEXPLORER_API GetAnomalySubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetAnomalySubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of cost anomaly subscriptions that includes the detailed metadata for
     * each one. </p>
     */
    inline const Aws::Vector<AnomalySubscription>& GetAnomalySubscriptions() const{ return m_anomalySubscriptions; }

    /**
     * <p>A list of cost anomaly subscriptions that includes the detailed metadata for
     * each one. </p>
     */
    inline void SetAnomalySubscriptions(const Aws::Vector<AnomalySubscription>& value) { m_anomalySubscriptions = value; }

    /**
     * <p>A list of cost anomaly subscriptions that includes the detailed metadata for
     * each one. </p>
     */
    inline void SetAnomalySubscriptions(Aws::Vector<AnomalySubscription>&& value) { m_anomalySubscriptions = std::move(value); }

    /**
     * <p>A list of cost anomaly subscriptions that includes the detailed metadata for
     * each one. </p>
     */
    inline GetAnomalySubscriptionsResult& WithAnomalySubscriptions(const Aws::Vector<AnomalySubscription>& value) { SetAnomalySubscriptions(value); return *this;}

    /**
     * <p>A list of cost anomaly subscriptions that includes the detailed metadata for
     * each one. </p>
     */
    inline GetAnomalySubscriptionsResult& WithAnomalySubscriptions(Aws::Vector<AnomalySubscription>&& value) { SetAnomalySubscriptions(std::move(value)); return *this;}

    /**
     * <p>A list of cost anomaly subscriptions that includes the detailed metadata for
     * each one. </p>
     */
    inline GetAnomalySubscriptionsResult& AddAnomalySubscriptions(const AnomalySubscription& value) { m_anomalySubscriptions.push_back(value); return *this; }

    /**
     * <p>A list of cost anomaly subscriptions that includes the detailed metadata for
     * each one. </p>
     */
    inline GetAnomalySubscriptionsResult& AddAnomalySubscriptions(AnomalySubscription&& value) { m_anomalySubscriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline GetAnomalySubscriptionsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline GetAnomalySubscriptionsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline GetAnomalySubscriptionsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<AnomalySubscription> m_anomalySubscriptions;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
