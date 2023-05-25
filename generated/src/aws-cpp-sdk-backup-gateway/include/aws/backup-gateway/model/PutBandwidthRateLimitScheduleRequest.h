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
    AWS_BACKUPGATEWAY_API PutBandwidthRateLimitScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutBandwidthRateLimitSchedule"; }

    AWS_BACKUPGATEWAY_API Aws::String SerializePayload() const override;

    AWS_BACKUPGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array containing bandwidth rate limit schedule intervals for a gateway.
     * When no bandwidth rate limit intervals have been scheduled, the array is
     * empty.</p>
     */
    inline const Aws::Vector<BandwidthRateLimitInterval>& GetBandwidthRateLimitIntervals() const{ return m_bandwidthRateLimitIntervals; }

    /**
     * <p>An array containing bandwidth rate limit schedule intervals for a gateway.
     * When no bandwidth rate limit intervals have been scheduled, the array is
     * empty.</p>
     */
    inline bool BandwidthRateLimitIntervalsHasBeenSet() const { return m_bandwidthRateLimitIntervalsHasBeenSet; }

    /**
     * <p>An array containing bandwidth rate limit schedule intervals for a gateway.
     * When no bandwidth rate limit intervals have been scheduled, the array is
     * empty.</p>
     */
    inline void SetBandwidthRateLimitIntervals(const Aws::Vector<BandwidthRateLimitInterval>& value) { m_bandwidthRateLimitIntervalsHasBeenSet = true; m_bandwidthRateLimitIntervals = value; }

    /**
     * <p>An array containing bandwidth rate limit schedule intervals for a gateway.
     * When no bandwidth rate limit intervals have been scheduled, the array is
     * empty.</p>
     */
    inline void SetBandwidthRateLimitIntervals(Aws::Vector<BandwidthRateLimitInterval>&& value) { m_bandwidthRateLimitIntervalsHasBeenSet = true; m_bandwidthRateLimitIntervals = std::move(value); }

    /**
     * <p>An array containing bandwidth rate limit schedule intervals for a gateway.
     * When no bandwidth rate limit intervals have been scheduled, the array is
     * empty.</p>
     */
    inline PutBandwidthRateLimitScheduleRequest& WithBandwidthRateLimitIntervals(const Aws::Vector<BandwidthRateLimitInterval>& value) { SetBandwidthRateLimitIntervals(value); return *this;}

    /**
     * <p>An array containing bandwidth rate limit schedule intervals for a gateway.
     * When no bandwidth rate limit intervals have been scheduled, the array is
     * empty.</p>
     */
    inline PutBandwidthRateLimitScheduleRequest& WithBandwidthRateLimitIntervals(Aws::Vector<BandwidthRateLimitInterval>&& value) { SetBandwidthRateLimitIntervals(std::move(value)); return *this;}

    /**
     * <p>An array containing bandwidth rate limit schedule intervals for a gateway.
     * When no bandwidth rate limit intervals have been scheduled, the array is
     * empty.</p>
     */
    inline PutBandwidthRateLimitScheduleRequest& AddBandwidthRateLimitIntervals(const BandwidthRateLimitInterval& value) { m_bandwidthRateLimitIntervalsHasBeenSet = true; m_bandwidthRateLimitIntervals.push_back(value); return *this; }

    /**
     * <p>An array containing bandwidth rate limit schedule intervals for a gateway.
     * When no bandwidth rate limit intervals have been scheduled, the array is
     * empty.</p>
     */
    inline PutBandwidthRateLimitScheduleRequest& AddBandwidthRateLimitIntervals(BandwidthRateLimitInterval&& value) { m_bandwidthRateLimitIntervalsHasBeenSet = true; m_bandwidthRateLimitIntervals.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_BGW_ListGateways.html">
     * <code>ListGateways</code> </a> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetGatewayArn() const{ return m_gatewayArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_BGW_ListGateways.html">
     * <code>ListGateways</code> </a> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_BGW_ListGateways.html">
     * <code>ListGateways</code> </a> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline void SetGatewayArn(const Aws::String& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_BGW_ListGateways.html">
     * <code>ListGateways</code> </a> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline void SetGatewayArn(Aws::String&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_BGW_ListGateways.html">
     * <code>ListGateways</code> </a> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline void SetGatewayArn(const char* value) { m_gatewayArnHasBeenSet = true; m_gatewayArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_BGW_ListGateways.html">
     * <code>ListGateways</code> </a> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline PutBandwidthRateLimitScheduleRequest& WithGatewayArn(const Aws::String& value) { SetGatewayArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_BGW_ListGateways.html">
     * <code>ListGateways</code> </a> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline PutBandwidthRateLimitScheduleRequest& WithGatewayArn(Aws::String&& value) { SetGatewayArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_BGW_ListGateways.html">
     * <code>ListGateways</code> </a> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline PutBandwidthRateLimitScheduleRequest& WithGatewayArn(const char* value) { SetGatewayArn(value); return *this;}

  private:

    Aws::Vector<BandwidthRateLimitInterval> m_bandwidthRateLimitIntervals;
    bool m_bandwidthRateLimitIntervalsHasBeenSet = false;

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
