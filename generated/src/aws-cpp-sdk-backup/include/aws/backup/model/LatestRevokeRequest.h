/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/MpaRevokeSessionStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>Contains information about the latest request to revoke access to a backup
   * vault.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/LatestRevokeRequest">AWS
   * API Reference</a></p>
   */
  class LatestRevokeRequest
  {
  public:
    AWS_BACKUP_API LatestRevokeRequest() = default;
    AWS_BACKUP_API LatestRevokeRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API LatestRevokeRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the MPA session associated with this revoke request.</p>
     */
    inline const Aws::String& GetMpaSessionArn() const { return m_mpaSessionArn; }
    inline bool MpaSessionArnHasBeenSet() const { return m_mpaSessionArnHasBeenSet; }
    template<typename MpaSessionArnT = Aws::String>
    void SetMpaSessionArn(MpaSessionArnT&& value) { m_mpaSessionArnHasBeenSet = true; m_mpaSessionArn = std::forward<MpaSessionArnT>(value); }
    template<typename MpaSessionArnT = Aws::String>
    LatestRevokeRequest& WithMpaSessionArn(MpaSessionArnT&& value) { SetMpaSessionArn(std::forward<MpaSessionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the revoke request.</p>
     */
    inline MpaRevokeSessionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MpaRevokeSessionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LatestRevokeRequest& WithStatus(MpaRevokeSessionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message describing the current status of the revoke request.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    LatestRevokeRequest& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the revoke request was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetInitiationDate() const { return m_initiationDate; }
    inline bool InitiationDateHasBeenSet() const { return m_initiationDateHasBeenSet; }
    template<typename InitiationDateT = Aws::Utils::DateTime>
    void SetInitiationDate(InitiationDateT&& value) { m_initiationDateHasBeenSet = true; m_initiationDate = std::forward<InitiationDateT>(value); }
    template<typename InitiationDateT = Aws::Utils::DateTime>
    LatestRevokeRequest& WithInitiationDate(InitiationDateT&& value) { SetInitiationDate(std::forward<InitiationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the revoke request will expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiryDate() const { return m_expiryDate; }
    inline bool ExpiryDateHasBeenSet() const { return m_expiryDateHasBeenSet; }
    template<typename ExpiryDateT = Aws::Utils::DateTime>
    void SetExpiryDate(ExpiryDateT&& value) { m_expiryDateHasBeenSet = true; m_expiryDate = std::forward<ExpiryDateT>(value); }
    template<typename ExpiryDateT = Aws::Utils::DateTime>
    LatestRevokeRequest& WithExpiryDate(ExpiryDateT&& value) { SetExpiryDate(std::forward<ExpiryDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mpaSessionArn;
    bool m_mpaSessionArnHasBeenSet = false;

    MpaRevokeSessionStatus m_status{MpaRevokeSessionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_initiationDate{};
    bool m_initiationDateHasBeenSet = false;

    Aws::Utils::DateTime m_expiryDate{};
    bool m_expiryDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
