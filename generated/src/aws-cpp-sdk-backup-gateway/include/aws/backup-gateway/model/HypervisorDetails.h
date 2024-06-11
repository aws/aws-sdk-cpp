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
    AWS_BACKUPGATEWAY_API HypervisorDetails();
    AWS_BACKUPGATEWAY_API HypervisorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API HypervisorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The server host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }
    inline HypervisorDetails& WithHost(const Aws::String& value) { SetHost(value); return *this;}
    inline HypervisorDetails& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}
    inline HypervisorDetails& WithHost(const char* value) { SetHost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline const Aws::String& GetHypervisorArn() const{ return m_hypervisorArn; }
    inline bool HypervisorArnHasBeenSet() const { return m_hypervisorArnHasBeenSet; }
    inline void SetHypervisorArn(const Aws::String& value) { m_hypervisorArnHasBeenSet = true; m_hypervisorArn = value; }
    inline void SetHypervisorArn(Aws::String&& value) { m_hypervisorArnHasBeenSet = true; m_hypervisorArn = std::move(value); }
    inline void SetHypervisorArn(const char* value) { m_hypervisorArnHasBeenSet = true; m_hypervisorArn.assign(value); }
    inline HypervisorDetails& WithHypervisorArn(const Aws::String& value) { SetHypervisorArn(value); return *this;}
    inline HypervisorDetails& WithHypervisorArn(Aws::String&& value) { SetHypervisorArn(std::move(value)); return *this;}
    inline HypervisorDetails& WithHypervisorArn(const char* value) { SetHypervisorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS used to encrypt the hypervisor.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline HypervisorDetails& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline HypervisorDetails& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline HypervisorDetails& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the time when the most recent successful sync of metadata
     * occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulMetadataSyncTime() const{ return m_lastSuccessfulMetadataSyncTime; }
    inline bool LastSuccessfulMetadataSyncTimeHasBeenSet() const { return m_lastSuccessfulMetadataSyncTimeHasBeenSet; }
    inline void SetLastSuccessfulMetadataSyncTime(const Aws::Utils::DateTime& value) { m_lastSuccessfulMetadataSyncTimeHasBeenSet = true; m_lastSuccessfulMetadataSyncTime = value; }
    inline void SetLastSuccessfulMetadataSyncTime(Aws::Utils::DateTime&& value) { m_lastSuccessfulMetadataSyncTimeHasBeenSet = true; m_lastSuccessfulMetadataSyncTime = std::move(value); }
    inline HypervisorDetails& WithLastSuccessfulMetadataSyncTime(const Aws::Utils::DateTime& value) { SetLastSuccessfulMetadataSyncTime(value); return *this;}
    inline HypervisorDetails& WithLastSuccessfulMetadataSyncTime(Aws::Utils::DateTime&& value) { SetLastSuccessfulMetadataSyncTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the most recent status for the indicated metadata sync.</p>
     */
    inline const SyncMetadataStatus& GetLatestMetadataSyncStatus() const{ return m_latestMetadataSyncStatus; }
    inline bool LatestMetadataSyncStatusHasBeenSet() const { return m_latestMetadataSyncStatusHasBeenSet; }
    inline void SetLatestMetadataSyncStatus(const SyncMetadataStatus& value) { m_latestMetadataSyncStatusHasBeenSet = true; m_latestMetadataSyncStatus = value; }
    inline void SetLatestMetadataSyncStatus(SyncMetadataStatus&& value) { m_latestMetadataSyncStatusHasBeenSet = true; m_latestMetadataSyncStatus = std::move(value); }
    inline HypervisorDetails& WithLatestMetadataSyncStatus(const SyncMetadataStatus& value) { SetLatestMetadataSyncStatus(value); return *this;}
    inline HypervisorDetails& WithLatestMetadataSyncStatus(SyncMetadataStatus&& value) { SetLatestMetadataSyncStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the most recent status for the indicated metadata sync.</p>
     */
    inline const Aws::String& GetLatestMetadataSyncStatusMessage() const{ return m_latestMetadataSyncStatusMessage; }
    inline bool LatestMetadataSyncStatusMessageHasBeenSet() const { return m_latestMetadataSyncStatusMessageHasBeenSet; }
    inline void SetLatestMetadataSyncStatusMessage(const Aws::String& value) { m_latestMetadataSyncStatusMessageHasBeenSet = true; m_latestMetadataSyncStatusMessage = value; }
    inline void SetLatestMetadataSyncStatusMessage(Aws::String&& value) { m_latestMetadataSyncStatusMessageHasBeenSet = true; m_latestMetadataSyncStatusMessage = std::move(value); }
    inline void SetLatestMetadataSyncStatusMessage(const char* value) { m_latestMetadataSyncStatusMessageHasBeenSet = true; m_latestMetadataSyncStatusMessage.assign(value); }
    inline HypervisorDetails& WithLatestMetadataSyncStatusMessage(const Aws::String& value) { SetLatestMetadataSyncStatusMessage(value); return *this;}
    inline HypervisorDetails& WithLatestMetadataSyncStatusMessage(Aws::String&& value) { SetLatestMetadataSyncStatusMessage(std::move(value)); return *this;}
    inline HypervisorDetails& WithLatestMetadataSyncStatusMessage(const char* value) { SetLatestMetadataSyncStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the group of gateways within the requested
     * log.</p>
     */
    inline const Aws::String& GetLogGroupArn() const{ return m_logGroupArn; }
    inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }
    inline void SetLogGroupArn(const Aws::String& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = value; }
    inline void SetLogGroupArn(Aws::String&& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = std::move(value); }
    inline void SetLogGroupArn(const char* value) { m_logGroupArnHasBeenSet = true; m_logGroupArn.assign(value); }
    inline HypervisorDetails& WithLogGroupArn(const Aws::String& value) { SetLogGroupArn(value); return *this;}
    inline HypervisorDetails& WithLogGroupArn(Aws::String&& value) { SetLogGroupArn(std::move(value)); return *this;}
    inline HypervisorDetails& WithLogGroupArn(const char* value) { SetLogGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the name of the specified hypervisor.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline HypervisorDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline HypervisorDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline HypervisorDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the current state of the specified hypervisor.</p> <p>The possible
     * states are <code>PENDING</code>, <code>ONLINE</code>, <code>OFFLINE</code>, or
     * <code>ERROR</code>.</p>
     */
    inline const HypervisorState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const HypervisorState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(HypervisorState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline HypervisorDetails& WithState(const HypervisorState& value) { SetState(value); return *this;}
    inline HypervisorDetails& WithState(HypervisorState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    Aws::String m_hypervisorArn;
    bool m_hypervisorArnHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulMetadataSyncTime;
    bool m_lastSuccessfulMetadataSyncTimeHasBeenSet = false;

    SyncMetadataStatus m_latestMetadataSyncStatus;
    bool m_latestMetadataSyncStatusHasBeenSet = false;

    Aws::String m_latestMetadataSyncStatusMessage;
    bool m_latestMetadataSyncStatusMessageHasBeenSet = false;

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    HypervisorState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
