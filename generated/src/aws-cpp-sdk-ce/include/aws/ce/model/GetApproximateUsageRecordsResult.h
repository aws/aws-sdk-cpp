/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ce/model/DateInterval.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetApproximateUsageRecordsResult
  {
  public:
    AWS_COSTEXPLORER_API GetApproximateUsageRecordsResult();
    AWS_COSTEXPLORER_API GetApproximateUsageRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetApproximateUsageRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The service metadata for the service or services in the response.</p>
     */
    inline const Aws::Map<Aws::String, long long>& GetServices() const{ return m_services; }

    /**
     * <p>The service metadata for the service or services in the response.</p>
     */
    inline void SetServices(const Aws::Map<Aws::String, long long>& value) { m_services = value; }

    /**
     * <p>The service metadata for the service or services in the response.</p>
     */
    inline void SetServices(Aws::Map<Aws::String, long long>&& value) { m_services = std::move(value); }

    /**
     * <p>The service metadata for the service or services in the response.</p>
     */
    inline GetApproximateUsageRecordsResult& WithServices(const Aws::Map<Aws::String, long long>& value) { SetServices(value); return *this;}

    /**
     * <p>The service metadata for the service or services in the response.</p>
     */
    inline GetApproximateUsageRecordsResult& WithServices(Aws::Map<Aws::String, long long>&& value) { SetServices(std::move(value)); return *this;}

    /**
     * <p>The service metadata for the service or services in the response.</p>
     */
    inline GetApproximateUsageRecordsResult& AddServices(const Aws::String& key, long long value) { m_services.emplace(key, value); return *this; }

    /**
     * <p>The service metadata for the service or services in the response.</p>
     */
    inline GetApproximateUsageRecordsResult& AddServices(Aws::String&& key, long long value) { m_services.emplace(std::move(key), value); return *this; }

    /**
     * <p>The service metadata for the service or services in the response.</p>
     */
    inline GetApproximateUsageRecordsResult& AddServices(const char* key, long long value) { m_services.emplace(key, value); return *this; }


    /**
     * <p>The total number of usage records for all services in the services list.</p>
     */
    inline long long GetTotalRecords() const{ return m_totalRecords; }

    /**
     * <p>The total number of usage records for all services in the services list.</p>
     */
    inline void SetTotalRecords(long long value) { m_totalRecords = value; }

    /**
     * <p>The total number of usage records for all services in the services list.</p>
     */
    inline GetApproximateUsageRecordsResult& WithTotalRecords(long long value) { SetTotalRecords(value); return *this;}


    /**
     * <p>The lookback period that's used for the estimation.</p>
     */
    inline const DateInterval& GetLookbackPeriod() const{ return m_lookbackPeriod; }

    /**
     * <p>The lookback period that's used for the estimation.</p>
     */
    inline void SetLookbackPeriod(const DateInterval& value) { m_lookbackPeriod = value; }

    /**
     * <p>The lookback period that's used for the estimation.</p>
     */
    inline void SetLookbackPeriod(DateInterval&& value) { m_lookbackPeriod = std::move(value); }

    /**
     * <p>The lookback period that's used for the estimation.</p>
     */
    inline GetApproximateUsageRecordsResult& WithLookbackPeriod(const DateInterval& value) { SetLookbackPeriod(value); return *this;}

    /**
     * <p>The lookback period that's used for the estimation.</p>
     */
    inline GetApproximateUsageRecordsResult& WithLookbackPeriod(DateInterval&& value) { SetLookbackPeriod(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetApproximateUsageRecordsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetApproximateUsageRecordsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetApproximateUsageRecordsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Map<Aws::String, long long> m_services;

    long long m_totalRecords;

    DateInterval m_lookbackPeriod;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
