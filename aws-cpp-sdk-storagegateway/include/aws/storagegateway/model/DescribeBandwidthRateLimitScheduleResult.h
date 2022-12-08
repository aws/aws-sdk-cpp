/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/BandwidthRateLimitInterval.h>
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
namespace StorageGateway
{
namespace Model
{
  class DescribeBandwidthRateLimitScheduleResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeBandwidthRateLimitScheduleResult();
    AWS_STORAGEGATEWAY_API DescribeBandwidthRateLimitScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeBandwidthRateLimitScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    
    inline DescribeBandwidthRateLimitScheduleResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline DescribeBandwidthRateLimitScheduleResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline DescribeBandwidthRateLimitScheduleResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p> An array that contains the bandwidth rate limit intervals for a tape or
     * volume gateway. </p>
     */
    inline const Aws::Vector<BandwidthRateLimitInterval>& GetBandwidthRateLimitIntervals() const{ return m_bandwidthRateLimitIntervals; }

    /**
     * <p> An array that contains the bandwidth rate limit intervals for a tape or
     * volume gateway. </p>
     */
    inline void SetBandwidthRateLimitIntervals(const Aws::Vector<BandwidthRateLimitInterval>& value) { m_bandwidthRateLimitIntervals = value; }

    /**
     * <p> An array that contains the bandwidth rate limit intervals for a tape or
     * volume gateway. </p>
     */
    inline void SetBandwidthRateLimitIntervals(Aws::Vector<BandwidthRateLimitInterval>&& value) { m_bandwidthRateLimitIntervals = std::move(value); }

    /**
     * <p> An array that contains the bandwidth rate limit intervals for a tape or
     * volume gateway. </p>
     */
    inline DescribeBandwidthRateLimitScheduleResult& WithBandwidthRateLimitIntervals(const Aws::Vector<BandwidthRateLimitInterval>& value) { SetBandwidthRateLimitIntervals(value); return *this;}

    /**
     * <p> An array that contains the bandwidth rate limit intervals for a tape or
     * volume gateway. </p>
     */
    inline DescribeBandwidthRateLimitScheduleResult& WithBandwidthRateLimitIntervals(Aws::Vector<BandwidthRateLimitInterval>&& value) { SetBandwidthRateLimitIntervals(std::move(value)); return *this;}

    /**
     * <p> An array that contains the bandwidth rate limit intervals for a tape or
     * volume gateway. </p>
     */
    inline DescribeBandwidthRateLimitScheduleResult& AddBandwidthRateLimitIntervals(const BandwidthRateLimitInterval& value) { m_bandwidthRateLimitIntervals.push_back(value); return *this; }

    /**
     * <p> An array that contains the bandwidth rate limit intervals for a tape or
     * volume gateway. </p>
     */
    inline DescribeBandwidthRateLimitScheduleResult& AddBandwidthRateLimitIntervals(BandwidthRateLimitInterval&& value) { m_bandwidthRateLimitIntervals.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_gatewayARN;

    Aws::Vector<BandwidthRateLimitInterval> m_bandwidthRateLimitIntervals;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
