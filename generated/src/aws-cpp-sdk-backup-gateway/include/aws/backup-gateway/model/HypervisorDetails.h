/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup-gateway/model/SyncMetadataStatus.h>
#include <aws/backup-gateway/model/HypervisorState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BackupGateway
{
namespace Model
{

  /**
   * <p>These are the details of the specified hypervisor. A hypervisor is hardware,
   * software, or firmware that creates and manages virtual machines, and allocates
   * resources to them.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/HypervisorDetails">AWS
   * API Reference</a></p>
   */
  class HypervisorDetails
  {
  public:
    AWS_BACKUPGATEWAY_API HypervisorDetails() = default;
    AWS_BACKUPGATEWAY_API HypervisorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API HypervisorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The server host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline const Aws::String& GetHost() const { return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    template<typename HostT = Aws::String>
    void SetHost(HostT&& value) { m_hostHasBeenSet = true; m_host = std::forward<HostT>(value); }
    template<typename HostT = Aws::String>
    HypervisorDetails& WithHost(HostT&& value) { SetHost(std::forward<HostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline const Aws::String& GetHypervisorArn() const { return m_hypervisorArn; }
    inline bool HypervisorArnHasBeenSet() const { return m_hypervisorArnHasBeenSet; }
    template<typename HypervisorArnT = Aws::String>
    void SetHypervisorArn(HypervisorArnT&& value) { m_hypervisorArnHasBeenSet = true; m_hypervisorArn = std::forward<HypervisorArnT>(value); }
    template<typename HypervisorArnT = Aws::String>
    HypervisorDetails& WithHypervisorArn(HypervisorArnT&& value) { SetHypervisorArn(std::forward<HypervisorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS used to encrypt the hypervisor.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    HypervisorDetails& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the time when the most recent successful sync of metadata
     * occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulMetadataSyncTime() const { return m_lastSuccessfulMetadataSyncTime; }
    inline bool LastSuccessfulMetadataSyncTimeHasBeenSet() const { return m_lastSuccessfulMetadataSyncTimeHasBeenSet; }
    template<typename LastSuccessfulMetadataSyncTimeT = Aws::Utils::DateTime>
    void SetLastSuccessfulMetadataSyncTime(LastSuccessfulMetadataSyncTimeT&& value) { m_lastSuccessfulMetadataSyncTimeHasBeenSet = true; m_lastSuccessfulMetadataSyncTime = std::forward<LastSuccessfulMetadataSyncTimeT>(value); }
    template<typename LastSuccessfulMetadataSyncTimeT = Aws::Utils::DateTime>
    HypervisorDetails& WithLastSuccessfulMetadataSyncTime(LastSuccessfulMetadataSyncTimeT&& value) { SetLastSuccessfulMetadataSyncTime(std::forward<LastSuccessfulMetadataSyncTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the most recent status for the indicated metadata sync.</p>
     */
    inline SyncMetadataStatus GetLatestMetadataSyncStatus() const { return m_latestMetadataSyncStatus; }
    inline bool LatestMetadataSyncStatusHasBeenSet() const { return m_latestMetadataSyncStatusHasBeenSet; }
    inline void SetLatestMetadataSyncStatus(SyncMetadataStatus value) { m_latestMetadataSyncStatusHasBeenSet = true; m_latestMetadataSyncStatus = value; }
    inline HypervisorDetails& WithLatestMetadataSyncStatus(SyncMetadataStatus value) { SetLatestMetadataSyncStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the most recent status for the indicated metadata sync.</p>
     */
    inline const Aws::String& GetLatestMetadataSyncStatusMessage() const { return m_latestMetadataSyncStatusMessage; }
    inline bool LatestMetadataSyncStatusMessageHasBeenSet() const { return m_latestMetadataSyncStatusMessageHasBeenSet; }
    template<typename LatestMetadataSyncStatusMessageT = Aws::String>
    void SetLatestMetadataSyncStatusMessage(LatestMetadataSyncStatusMessageT&& value) { m_latestMetadataSyncStatusMessageHasBeenSet = true; m_latestMetadataSyncStatusMessage = std::forward<LatestMetadataSyncStatusMessageT>(value); }
    template<typename LatestMetadataSyncStatusMessageT = Aws::String>
    HypervisorDetails& WithLatestMetadataSyncStatusMessage(LatestMetadataSyncStatusMessageT&& value) { SetLatestMetadataSyncStatusMessage(std::forward<LatestMetadataSyncStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the group of gateways within the requested
     * log.</p>
     */
    inline const Aws::String& GetLogGroupArn() const { return m_logGroupArn; }
    inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }
    template<typename LogGroupArnT = Aws::String>
    void SetLogGroupArn(LogGroupArnT&& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = std::forward<LogGroupArnT>(value); }
    template<typename LogGroupArnT = Aws::String>
    HypervisorDetails& WithLogGroupArn(LogGroupArnT&& value) { SetLogGroupArn(std::forward<LogGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the name of the specified hypervisor.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    HypervisorDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the current state of the specified hypervisor.</p> <p>The possible
     * states are <code>PENDING</code>, <code>ONLINE</code>, <code>OFFLINE</code>, or
     * <code>ERROR</code>.</p>
     */
    inline HypervisorState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(HypervisorState value) { m_stateHasBeenSet = true; m_state = value; }
    inline HypervisorDetails& WithState(HypervisorState value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    Aws::String m_hypervisorArn;
    bool m_hypervisorArnHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulMetadataSyncTime{};
    bool m_lastSuccessfulMetadataSyncTimeHasBeenSet = false;

    SyncMetadataStatus m_latestMetadataSyncStatus{SyncMetadataStatus::NOT_SET};
    bool m_latestMetadataSyncStatusHasBeenSet = false;

    Aws::String m_latestMetadataSyncStatusMessage;
    bool m_latestMetadataSyncStatusMessageHasBeenSet = false;

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    HypervisorState m_state{HypervisorState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
