/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/backup-gateway/BackupGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup-gateway/model/BandwidthRateLimitInterval.h>
#include <utility>

namespace Aws
{
namespace BackupGateway
{
namespace Model
{

  /**
   */
  class PutBandwidthRateLimitScheduleRequest : public BackupGatewayRequest
  {
  public:
    AWS_BACKUPGATEWAY_API PutBandwidthRateLimitScheduleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutBandwidthRateLimitSchedule"; }

    AWS_BACKUPGATEWAY_API Aws::String SerializePayload() const override;

    AWS_BACKUPGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array containing bandwidth rate limit schedule intervals for a gateway.
     * When no bandwidth rate limit intervals have been scheduled, the array is
     * empty.</p>
     */
    inline const Aws::Vector<BandwidthRateLimitInterval>& GetBandwidthRateLimitIntervals() const { return m_bandwidthRateLimitIntervals; }
    inline bool BandwidthRateLimitIntervalsHasBeenSet() const { return m_bandwidthRateLimitIntervalsHasBeenSet; }
    template<typename BandwidthRateLimitIntervalsT = Aws::Vector<BandwidthRateLimitInterval>>
    void SetBandwidthRateLimitIntervals(BandwidthRateLimitIntervalsT&& value) { m_bandwidthRateLimitIntervalsHasBeenSet = true; m_bandwidthRateLimitIntervals = std::forward<BandwidthRateLimitIntervalsT>(value); }
    template<typename BandwidthRateLimitIntervalsT = Aws::Vector<BandwidthRateLimitInterval>>
    PutBandwidthRateLimitScheduleRequest& WithBandwidthRateLimitIntervals(BandwidthRateLimitIntervalsT&& value) { SetBandwidthRateLimitIntervals(std::forward<BandwidthRateLimitIntervalsT>(value)); return *this;}
    template<typename BandwidthRateLimitIntervalsT = BandwidthRateLimitInterval>
    PutBandwidthRateLimitScheduleRequest& AddBandwidthRateLimitIntervals(BandwidthRateLimitIntervalsT&& value) { m_bandwidthRateLimitIntervalsHasBeenSet = true; m_bandwidthRateLimitIntervals.emplace_back(std::forward<BandwidthRateLimitIntervalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_BGW_ListGateways.html">
     * <code>ListGateways</code> </a> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetGatewayArn() const { return m_gatewayArn; }
    inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }
    template<typename GatewayArnT = Aws::String>
    void SetGatewayArn(GatewayArnT&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::forward<GatewayArnT>(value); }
    template<typename GatewayArnT = Aws::String>
    PutBandwidthRateLimitScheduleRequest& WithGatewayArn(GatewayArnT&& value) { SetGatewayArn(std::forward<GatewayArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BandwidthRateLimitInterval> m_bandwidthRateLimitIntervals;
    bool m_bandwidthRateLimitIntervalsHasBeenSet = false;

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
