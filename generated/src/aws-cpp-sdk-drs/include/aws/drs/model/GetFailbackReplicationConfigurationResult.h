/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
namespace drs
{
namespace Model
{
  class GetFailbackReplicationConfigurationResult
  {
  public:
    AWS_DRS_API GetFailbackReplicationConfigurationResult() = default;
    AWS_DRS_API GetFailbackReplicationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API GetFailbackReplicationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Configure bandwidth throttling for the outbound data transfer rate of the
     * Recovery Instance in Mbps.</p>
     */
    inline long long GetBandwidthThrottling() const { return m_bandwidthThrottling; }
    inline void SetBandwidthThrottling(long long value) { m_bandwidthThrottlingHasBeenSet = true; m_bandwidthThrottling = value; }
    inline GetFailbackReplicationConfigurationResult& WithBandwidthThrottling(long long value) { SetBandwidthThrottling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Failback Replication Configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetFailbackReplicationConfigurationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Recovery Instance.</p>
     */
    inline const Aws::String& GetRecoveryInstanceID() const { return m_recoveryInstanceID; }
    template<typename RecoveryInstanceIDT = Aws::String>
    void SetRecoveryInstanceID(RecoveryInstanceIDT&& value) { m_recoveryInstanceIDHasBeenSet = true; m_recoveryInstanceID = std::forward<RecoveryInstanceIDT>(value); }
    template<typename RecoveryInstanceIDT = Aws::String>
    GetFailbackReplicationConfigurationResult& WithRecoveryInstanceID(RecoveryInstanceIDT&& value) { SetRecoveryInstanceID(std::forward<RecoveryInstanceIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to use Private IP for the failback replication of the Recovery
     * Instance.</p>
     */
    inline bool GetUsePrivateIP() const { return m_usePrivateIP; }
    inline void SetUsePrivateIP(bool value) { m_usePrivateIPHasBeenSet = true; m_usePrivateIP = value; }
    inline GetFailbackReplicationConfigurationResult& WithUsePrivateIP(bool value) { SetUsePrivateIP(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFailbackReplicationConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
