/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/RestoreValidationStatus.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class PutRestoreValidationResultRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API PutRestoreValidationResultRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRestoreValidationResult"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>This is a unique identifier of a restore job within Backup.</p>
     */
    inline const Aws::String& GetRestoreJobId() const { return m_restoreJobId; }
    inline bool RestoreJobIdHasBeenSet() const { return m_restoreJobIdHasBeenSet; }
    template<typename RestoreJobIdT = Aws::String>
    void SetRestoreJobId(RestoreJobIdT&& value) { m_restoreJobIdHasBeenSet = true; m_restoreJobId = std::forward<RestoreJobIdT>(value); }
    template<typename RestoreJobIdT = Aws::String>
    PutRestoreValidationResultRequest& WithRestoreJobId(RestoreJobIdT&& value) { SetRestoreJobId(std::forward<RestoreJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of your restore validation.</p>
     */
    inline RestoreValidationStatus GetValidationStatus() const { return m_validationStatus; }
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }
    inline void SetValidationStatus(RestoreValidationStatus value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }
    inline PutRestoreValidationResultRequest& WithValidationStatus(RestoreValidationStatus value) { SetValidationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is an optional message string you can input to describe the validation
     * status for the restore test validation.</p>
     */
    inline const Aws::String& GetValidationStatusMessage() const { return m_validationStatusMessage; }
    inline bool ValidationStatusMessageHasBeenSet() const { return m_validationStatusMessageHasBeenSet; }
    template<typename ValidationStatusMessageT = Aws::String>
    void SetValidationStatusMessage(ValidationStatusMessageT&& value) { m_validationStatusMessageHasBeenSet = true; m_validationStatusMessage = std::forward<ValidationStatusMessageT>(value); }
    template<typename ValidationStatusMessageT = Aws::String>
    PutRestoreValidationResultRequest& WithValidationStatusMessage(ValidationStatusMessageT&& value) { SetValidationStatusMessage(std::forward<ValidationStatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_restoreJobId;
    bool m_restoreJobIdHasBeenSet = false;

    RestoreValidationStatus m_validationStatus{RestoreValidationStatus::NOT_SET};
    bool m_validationStatusHasBeenSet = false;

    Aws::String m_validationStatusMessage;
    bool m_validationStatusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
