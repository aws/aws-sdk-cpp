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
    AWS_COSTEXPLORER_API GetApproximateUsageRecordsResult() = default;
    AWS_COSTEXPLORER_API GetApproximateUsageRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetApproximateUsageRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The service metadata for the service or services in the response.</p>
     */
    inline const Aws::Map<Aws::String, long long>& GetServices() const { return m_services; }
    template<typename ServicesT = Aws::Map<Aws::String, long long>>
    void SetServices(ServicesT&& value) { m_servicesHasBeenSet = true; m_services = std::forward<ServicesT>(value); }
    template<typename ServicesT = Aws::Map<Aws::String, long long>>
    GetApproximateUsageRecordsResult& WithServices(ServicesT&& value) { SetServices(std::forward<ServicesT>(value)); return *this;}
    inline GetApproximateUsageRecordsResult& AddServices(Aws::String key, long long value) {
      m_servicesHasBeenSet = true; m_services.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The total number of usage records for all services in the services list.</p>
     */
    inline long long GetTotalRecords() const { return m_totalRecords; }
    inline void SetTotalRecords(long long value) { m_totalRecordsHasBeenSet = true; m_totalRecords = value; }
    inline GetApproximateUsageRecordsResult& WithTotalRecords(long long value) { SetTotalRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lookback period that's used for the estimation.</p>
     */
    inline const DateInterval& GetLookbackPeriod() const { return m_lookbackPeriod; }
    template<typename LookbackPeriodT = DateInterval>
    void SetLookbackPeriod(LookbackPeriodT&& value) { m_lookbackPeriodHasBeenSet = true; m_lookbackPeriod = std::forward<LookbackPeriodT>(value); }
    template<typename LookbackPeriodT = DateInterval>
    GetApproximateUsageRecordsResult& WithLookbackPeriod(LookbackPeriodT&& value) { SetLookbackPeriod(std::forward<LookbackPeriodT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetApproximateUsageRecordsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, long long> m_services;
    bool m_servicesHasBeenSet = false;

    long long m_totalRecords{0};
    bool m_totalRecordsHasBeenSet = false;

    DateInterval m_lookbackPeriod;
    bool m_lookbackPeriodHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
