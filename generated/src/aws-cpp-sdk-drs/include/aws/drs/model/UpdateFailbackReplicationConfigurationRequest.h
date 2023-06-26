/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class UpdateFailbackReplicationConfigurationRequest : public DrsRequest
  {
  public:
    AWS_DRS_API UpdateFailbackReplicationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFailbackReplicationConfiguration"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    /**
     * <p>Configure bandwidth throttling for the outbound data transfer rate of the
     * Recovery Instance in Mbps.</p>
     */
    inline long long GetBandwidthThrottling() const{ return m_bandwidthThrottling; }

    /**
     * <p>Configure bandwidth throttling for the outbound data transfer rate of the
     * Recovery Instance in Mbps.</p>
     */
    inline bool BandwidthThrottlingHasBeenSet() const { return m_bandwidthThrottlingHasBeenSet; }

    /**
     * <p>Configure bandwidth throttling for the outbound data transfer rate of the
     * Recovery Instance in Mbps.</p>
     */
    inline void SetBandwidthThrottling(long long value) { m_bandwidthThrottlingHasBeenSet = true; m_bandwidthThrottling = value; }

    /**
     * <p>Configure bandwidth throttling for the outbound data transfer rate of the
     * Recovery Instance in Mbps.</p>
     */
    inline UpdateFailbackReplicationConfigurationRequest& WithBandwidthThrottling(long long value) { SetBandwidthThrottling(value); return *this;}


    /**
     * <p>The name of the Failback Replication Configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Failback Replication Configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Failback Replication Configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Failback Replication Configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Failback Replication Configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Failback Replication Configuration.</p>
     */
    inline UpdateFailbackReplicationConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Failback Replication Configuration.</p>
     */
    inline UpdateFailbackReplicationConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Failback Replication Configuration.</p>
     */
    inline UpdateFailbackReplicationConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the Recovery Instance.</p>
     */
    inline const Aws::String& GetRecoveryInstanceID() const{ return m_recoveryInstanceID; }

    /**
     * <p>The ID of the Recovery Instance.</p>
     */
    inline bool RecoveryInstanceIDHasBeenSet() const { return m_recoveryInstanceIDHasBeenSet; }

    /**
     * <p>The ID of the Recovery Instance.</p>
     */
    inline void SetRecoveryInstanceID(const Aws::String& value) { m_recoveryInstanceIDHasBeenSet = true; m_recoveryInstanceID = value; }

    /**
     * <p>The ID of the Recovery Instance.</p>
     */
    inline void SetRecoveryInstanceID(Aws::String&& value) { m_recoveryInstanceIDHasBeenSet = true; m_recoveryInstanceID = std::move(value); }

    /**
     * <p>The ID of the Recovery Instance.</p>
     */
    inline void SetRecoveryInstanceID(const char* value) { m_recoveryInstanceIDHasBeenSet = true; m_recoveryInstanceID.assign(value); }

    /**
     * <p>The ID of the Recovery Instance.</p>
     */
    inline UpdateFailbackReplicationConfigurationRequest& WithRecoveryInstanceID(const Aws::String& value) { SetRecoveryInstanceID(value); return *this;}

    /**
     * <p>The ID of the Recovery Instance.</p>
     */
    inline UpdateFailbackReplicationConfigurationRequest& WithRecoveryInstanceID(Aws::String&& value) { SetRecoveryInstanceID(std::move(value)); return *this;}

    /**
     * <p>The ID of the Recovery Instance.</p>
     */
    inline UpdateFailbackReplicationConfigurationRequest& WithRecoveryInstanceID(const char* value) { SetRecoveryInstanceID(value); return *this;}


    /**
     * <p>Whether to use Private IP for the failback replication of the Recovery
     * Instance.</p>
     */
    inline bool GetUsePrivateIP() const{ return m_usePrivateIP; }

    /**
     * <p>Whether to use Private IP for the failback replication of the Recovery
     * Instance.</p>
     */
    inline bool UsePrivateIPHasBeenSet() const { return m_usePrivateIPHasBeenSet; }

    /**
     * <p>Whether to use Private IP for the failback replication of the Recovery
     * Instance.</p>
     */
    inline void SetUsePrivateIP(bool value) { m_usePrivateIPHasBeenSet = true; m_usePrivateIP = value; }

    /**
     * <p>Whether to use Private IP for the failback replication of the Recovery
     * Instance.</p>
     */
    inline UpdateFailbackReplicationConfigurationRequest& WithUsePrivateIP(bool value) { SetUsePrivateIP(value); return *this;}

  private:

    long long m_bandwidthThrottling;
    bool m_bandwidthThrottlingHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_recoveryInstanceID;
    bool m_recoveryInstanceIDHasBeenSet = false;

    bool m_usePrivateIP;
    bool m_usePrivateIPHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
