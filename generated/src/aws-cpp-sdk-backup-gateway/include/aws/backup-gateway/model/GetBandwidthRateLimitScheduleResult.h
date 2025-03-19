/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup-gateway/model/BandwidthRateLimitInterval.h>
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
namespace BackupGateway
{
namespace Model
{
  class GetBandwidthRateLimitScheduleResult
  {
  public:
    AWS_BACKUPGATEWAY_API GetBandwidthRateLimitScheduleResult() = default;
    AWS_BACKUPGATEWAY_API GetBandwidthRateLimitScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPGATEWAY_API GetBandwidthRateLimitScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array containing bandwidth rate limit schedule intervals for a gateway.
     * When no bandwidth rate limit intervals have been scheduled, the array is
     * empty.</p>
     */
    inline const Aws::Vector<BandwidthRateLimitInterval>& GetBandwidthRateLimitIntervals() const { return m_bandwidthRateLimitIntervals; }
    template<typename BandwidthRateLimitIntervalsT = Aws::Vector<BandwidthRateLimitInterval>>
    void SetBandwidthRateLimitIntervals(BandwidthRateLimitIntervalsT&& value) { m_bandwidthRateLimitIntervalsHasBeenSet = true; m_bandwidthRateLimitIntervals = std::forward<BandwidthRateLimitIntervalsT>(value); }
    template<typename BandwidthRateLimitIntervalsT = Aws::Vector<BandwidthRateLimitInterval>>
    GetBandwidthRateLimitScheduleResult& WithBandwidthRateLimitIntervals(BandwidthRateLimitIntervalsT&& value) { SetBandwidthRateLimitIntervals(std::forward<BandwidthRateLimitIntervalsT>(value)); return *this;}
    template<typename BandwidthRateLimitIntervalsT = BandwidthRateLimitInterval>
    GetBandwidthRateLimitScheduleResult& AddBandwidthRateLimitIntervals(BandwidthRateLimitIntervalsT&& value) { m_bandwidthRateLimitIntervalsHasBeenSet = true; m_bandwidthRateLimitIntervals.emplace_back(std::forward<BandwidthRateLimitIntervalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_BGW_ListGateways.html">
     * <code>ListGateways</code> </a> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetGatewayArn() const { return m_gatewayArn; }
    template<typename GatewayArnT = Aws::String>
    void SetGatewayArn(GatewayArnT&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::forward<GatewayArnT>(value); }
    template<typename GatewayArnT = Aws::String>
    GetBandwidthRateLimitScheduleResult& WithGatewayArn(GatewayArnT&& value) { SetGatewayArn(std::forward<GatewayArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBandwidthRateLimitScheduleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BandwidthRateLimitInterval> m_bandwidthRateLimitIntervals;
    bool m_bandwidthRateLimitIntervalsHasBeenSet = false;

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
