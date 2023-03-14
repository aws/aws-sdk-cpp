/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/Coverage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/CoverageByTime.h>
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
  class GetReservationCoverageResult
  {
  public:
    AWS_COSTEXPLORER_API GetReservationCoverageResult();
    AWS_COSTEXPLORER_API GetReservationCoverageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetReservationCoverageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The amount of time that your reservations covered.</p>
     */
    inline const Aws::Vector<CoverageByTime>& GetCoveragesByTime() const{ return m_coveragesByTime; }

    /**
     * <p>The amount of time that your reservations covered.</p>
     */
    inline void SetCoveragesByTime(const Aws::Vector<CoverageByTime>& value) { m_coveragesByTime = value; }

    /**
     * <p>The amount of time that your reservations covered.</p>
     */
    inline void SetCoveragesByTime(Aws::Vector<CoverageByTime>&& value) { m_coveragesByTime = std::move(value); }

    /**
     * <p>The amount of time that your reservations covered.</p>
     */
    inline GetReservationCoverageResult& WithCoveragesByTime(const Aws::Vector<CoverageByTime>& value) { SetCoveragesByTime(value); return *this;}

    /**
     * <p>The amount of time that your reservations covered.</p>
     */
    inline GetReservationCoverageResult& WithCoveragesByTime(Aws::Vector<CoverageByTime>&& value) { SetCoveragesByTime(std::move(value)); return *this;}

    /**
     * <p>The amount of time that your reservations covered.</p>
     */
    inline GetReservationCoverageResult& AddCoveragesByTime(const CoverageByTime& value) { m_coveragesByTime.push_back(value); return *this; }

    /**
     * <p>The amount of time that your reservations covered.</p>
     */
    inline GetReservationCoverageResult& AddCoveragesByTime(CoverageByTime&& value) { m_coveragesByTime.push_back(std::move(value)); return *this; }


    /**
     * <p>The total amount of instance usage that a reservation covered.</p>
     */
    inline const Coverage& GetTotal() const{ return m_total; }

    /**
     * <p>The total amount of instance usage that a reservation covered.</p>
     */
    inline void SetTotal(const Coverage& value) { m_total = value; }

    /**
     * <p>The total amount of instance usage that a reservation covered.</p>
     */
    inline void SetTotal(Coverage&& value) { m_total = std::move(value); }

    /**
     * <p>The total amount of instance usage that a reservation covered.</p>
     */
    inline GetReservationCoverageResult& WithTotal(const Coverage& value) { SetTotal(value); return *this;}

    /**
     * <p>The total amount of instance usage that a reservation covered.</p>
     */
    inline GetReservationCoverageResult& WithTotal(Coverage&& value) { SetTotal(std::move(value)); return *this;}


    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline GetReservationCoverageResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline GetReservationCoverageResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline GetReservationCoverageResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetReservationCoverageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetReservationCoverageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetReservationCoverageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<CoverageByTime> m_coveragesByTime;

    Coverage m_total;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
