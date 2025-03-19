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
    AWS_DRS_API UpdateFailbackReplicationConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFailbackReplicationConfiguration"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Configure bandwidth throttling for the outbound data transfer rate of the
     * Recovery Instance in Mbps.</p>
     */
    inline long long GetBandwidthThrottling() const { return m_bandwidthThrottling; }
    inline bool BandwidthThrottlingHasBeenSet() const { return m_bandwidthThrottlingHasBeenSet; }
    inline void SetBandwidthThrottling(long long value) { m_bandwidthThrottlingHasBeenSet = true; m_bandwidthThrottling = value; }
    inline UpdateFailbackReplicationConfigurationRequest& WithBandwidthThrottling(long long value) { SetBandwidthThrottling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Failback Replication Configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateFailbackReplicationConfigurationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Recovery Instance.</p>
     */
    inline const Aws::String& GetRecoveryInstanceID() const { return m_recoveryInstanceID; }
    inline bool RecoveryInstanceIDHasBeenSet() const { return m_recoveryInstanceIDHasBeenSet; }
    template<typename RecoveryInstanceIDT = Aws::String>
    void SetRecoveryInstanceID(RecoveryInstanceIDT&& value) { m_recoveryInstanceIDHasBeenSet = true; m_recoveryInstanceID = std::forward<RecoveryInstanceIDT>(value); }
    template<typename RecoveryInstanceIDT = Aws::String>
    UpdateFailbackReplicationConfigurationRequest& WithRecoveryInstanceID(RecoveryInstanceIDT&& value) { SetRecoveryInstanceID(std::forward<RecoveryInstanceIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to use Private IP for the failback replication of the Recovery
     * Instance.</p>
     */
    inline bool GetUsePrivateIP() const { return m_usePrivateIP; }
    inline bool UsePrivateIPHasBeenSet() const { return m_usePrivateIPHasBeenSet; }
    inline void SetUsePrivateIP(bool value) { m_usePrivateIPHasBeenSet = true; m_usePrivateIP = value; }
    inline UpdateFailbackReplicationConfigurationRequest& WithUsePrivateIP(bool value) { SetUsePrivateIP(value); return *this;}
    ///@}
  private:

    long long m_bandwidthThrottling{0};
    bool m_bandwidthThrottlingHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_recoveryInstanceID;
    bool m_recoveryInstanceIDHasBeenSet = false;

    bool m_usePrivateIP{false};
    bool m_usePrivateIPHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
