/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/ReservationAggregates.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/UtilizationByTime.h>
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
  class AWS_COSTEXPLORER_API GetReservationUtilizationResult
  {
  public:
    GetReservationUtilizationResult();
    GetReservationUtilizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetReservationUtilizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The amount of time that you used your RIs.</p>
     */
    inline const Aws::Vector<UtilizationByTime>& GetUtilizationsByTime() const{ return m_utilizationsByTime; }

    /**
     * <p>The amount of time that you used your RIs.</p>
     */
    inline void SetUtilizationsByTime(const Aws::Vector<UtilizationByTime>& value) { m_utilizationsByTime = value; }

    /**
     * <p>The amount of time that you used your RIs.</p>
     */
    inline void SetUtilizationsByTime(Aws::Vector<UtilizationByTime>&& value) { m_utilizationsByTime = std::move(value); }

    /**
     * <p>The amount of time that you used your RIs.</p>
     */
    inline GetReservationUtilizationResult& WithUtilizationsByTime(const Aws::Vector<UtilizationByTime>& value) { SetUtilizationsByTime(value); return *this;}

    /**
     * <p>The amount of time that you used your RIs.</p>
     */
    inline GetReservationUtilizationResult& WithUtilizationsByTime(Aws::Vector<UtilizationByTime>&& value) { SetUtilizationsByTime(std::move(value)); return *this;}

    /**
     * <p>The amount of time that you used your RIs.</p>
     */
    inline GetReservationUtilizationResult& AddUtilizationsByTime(const UtilizationByTime& value) { m_utilizationsByTime.push_back(value); return *this; }

    /**
     * <p>The amount of time that you used your RIs.</p>
     */
    inline GetReservationUtilizationResult& AddUtilizationsByTime(UtilizationByTime&& value) { m_utilizationsByTime.push_back(std::move(value)); return *this; }


    /**
     * <p>The total amount of time that you used your RIs.</p>
     */
    inline const ReservationAggregates& GetTotal() const{ return m_total; }

    /**
     * <p>The total amount of time that you used your RIs.</p>
     */
    inline void SetTotal(const ReservationAggregates& value) { m_total = value; }

    /**
     * <p>The total amount of time that you used your RIs.</p>
     */
    inline void SetTotal(ReservationAggregates&& value) { m_total = std::move(value); }

    /**
     * <p>The total amount of time that you used your RIs.</p>
     */
    inline GetReservationUtilizationResult& WithTotal(const ReservationAggregates& value) { SetTotal(value); return *this;}

    /**
     * <p>The total amount of time that you used your RIs.</p>
     */
    inline GetReservationUtilizationResult& WithTotal(ReservationAggregates&& value) { SetTotal(std::move(value)); return *this;}


    /**
     * <p>The token for the next set of retrievable results. AWS provides the token
     * when the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token for the next set of retrievable results. AWS provides the token
     * when the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The token for the next set of retrievable results. AWS provides the token
     * when the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The token for the next set of retrievable results. AWS provides the token
     * when the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The token for the next set of retrievable results. AWS provides the token
     * when the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline GetReservationUtilizationResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token for the next set of retrievable results. AWS provides the token
     * when the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline GetReservationUtilizationResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of retrievable results. AWS provides the token
     * when the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline GetReservationUtilizationResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<UtilizationByTime> m_utilizationsByTime;

    ReservationAggregates m_total;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
