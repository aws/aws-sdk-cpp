/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/MpaSessionStatus.h>
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
   * <p>Contains information about the latest update to an MPA approval team
   * association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/LatestMpaApprovalTeamUpdate">AWS
   * API Reference</a></p>
   */
  class LatestMpaApprovalTeamUpdate
  {
  public:
    AWS_BACKUP_API LatestMpaApprovalTeamUpdate() = default;
    AWS_BACKUP_API LatestMpaApprovalTeamUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API LatestMpaApprovalTeamUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the MPA session associated with this update.</p>
     */
    inline const Aws::String& GetMpaSessionArn() const { return m_mpaSessionArn; }
    inline bool MpaSessionArnHasBeenSet() const { return m_mpaSessionArnHasBeenSet; }
    template<typename MpaSessionArnT = Aws::String>
    void SetMpaSessionArn(MpaSessionArnT&& value) { m_mpaSessionArnHasBeenSet = true; m_mpaSessionArn = std::forward<MpaSessionArnT>(value); }
    template<typename MpaSessionArnT = Aws::String>
    LatestMpaApprovalTeamUpdate& WithMpaSessionArn(MpaSessionArnT&& value) { SetMpaSessionArn(std::forward<MpaSessionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the MPA approval team update.</p>
     */
    inline MpaSessionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MpaSessionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LatestMpaApprovalTeamUpdate& WithStatus(MpaSessionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message describing the current status of the MPA approval team update.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    LatestMpaApprovalTeamUpdate& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the MPA approval team update was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetInitiationDate() const { return m_initiationDate; }
    inline bool InitiationDateHasBeenSet() const { return m_initiationDateHasBeenSet; }
    template<typename InitiationDateT = Aws::Utils::DateTime>
    void SetInitiationDate(InitiationDateT&& value) { m_initiationDateHasBeenSet = true; m_initiationDate = std::forward<InitiationDateT>(value); }
    template<typename InitiationDateT = Aws::Utils::DateTime>
    LatestMpaApprovalTeamUpdate& WithInitiationDate(InitiationDateT&& value) { SetInitiationDate(std::forward<InitiationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the MPA approval team update will expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiryDate() const { return m_expiryDate; }
    inline bool ExpiryDateHasBeenSet() const { return m_expiryDateHasBeenSet; }
    template<typename ExpiryDateT = Aws::Utils::DateTime>
    void SetExpiryDate(ExpiryDateT&& value) { m_expiryDateHasBeenSet = true; m_expiryDate = std::forward<ExpiryDateT>(value); }
    template<typename ExpiryDateT = Aws::Utils::DateTime>
    LatestMpaApprovalTeamUpdate& WithExpiryDate(ExpiryDateT&& value) { SetExpiryDate(std::forward<ExpiryDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mpaSessionArn;
    bool m_mpaSessionArnHasBeenSet = false;

    MpaSessionStatus m_status{MpaSessionStatus::NOT_SET};
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
