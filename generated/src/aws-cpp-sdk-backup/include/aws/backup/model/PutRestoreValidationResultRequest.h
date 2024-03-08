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
    AWS_BACKUP_API PutRestoreValidationResultRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRestoreValidationResult"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    /**
     * <p>This is a unique identifier of a restore job within Backup.</p>
     */
    inline const Aws::String& GetRestoreJobId() const{ return m_restoreJobId; }

    /**
     * <p>This is a unique identifier of a restore job within Backup.</p>
     */
    inline bool RestoreJobIdHasBeenSet() const { return m_restoreJobIdHasBeenSet; }

    /**
     * <p>This is a unique identifier of a restore job within Backup.</p>
     */
    inline void SetRestoreJobId(const Aws::String& value) { m_restoreJobIdHasBeenSet = true; m_restoreJobId = value; }

    /**
     * <p>This is a unique identifier of a restore job within Backup.</p>
     */
    inline void SetRestoreJobId(Aws::String&& value) { m_restoreJobIdHasBeenSet = true; m_restoreJobId = std::move(value); }

    /**
     * <p>This is a unique identifier of a restore job within Backup.</p>
     */
    inline void SetRestoreJobId(const char* value) { m_restoreJobIdHasBeenSet = true; m_restoreJobId.assign(value); }

    /**
     * <p>This is a unique identifier of a restore job within Backup.</p>
     */
    inline PutRestoreValidationResultRequest& WithRestoreJobId(const Aws::String& value) { SetRestoreJobId(value); return *this;}

    /**
     * <p>This is a unique identifier of a restore job within Backup.</p>
     */
    inline PutRestoreValidationResultRequest& WithRestoreJobId(Aws::String&& value) { SetRestoreJobId(std::move(value)); return *this;}

    /**
     * <p>This is a unique identifier of a restore job within Backup.</p>
     */
    inline PutRestoreValidationResultRequest& WithRestoreJobId(const char* value) { SetRestoreJobId(value); return *this;}


    /**
     * <p>This is the status of your restore validation.</p>
     */
    inline const RestoreValidationStatus& GetValidationStatus() const{ return m_validationStatus; }

    /**
     * <p>This is the status of your restore validation.</p>
     */
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }

    /**
     * <p>This is the status of your restore validation.</p>
     */
    inline void SetValidationStatus(const RestoreValidationStatus& value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }

    /**
     * <p>This is the status of your restore validation.</p>
     */
    inline void SetValidationStatus(RestoreValidationStatus&& value) { m_validationStatusHasBeenSet = true; m_validationStatus = std::move(value); }

    /**
     * <p>This is the status of your restore validation.</p>
     */
    inline PutRestoreValidationResultRequest& WithValidationStatus(const RestoreValidationStatus& value) { SetValidationStatus(value); return *this;}

    /**
     * <p>This is the status of your restore validation.</p>
     */
    inline PutRestoreValidationResultRequest& WithValidationStatus(RestoreValidationStatus&& value) { SetValidationStatus(std::move(value)); return *this;}


    /**
     * <p>This is an optional message string you can input to describe the validation
     * status for the restore test validation.</p>
     */
    inline const Aws::String& GetValidationStatusMessage() const{ return m_validationStatusMessage; }

    /**
     * <p>This is an optional message string you can input to describe the validation
     * status for the restore test validation.</p>
     */
    inline bool ValidationStatusMessageHasBeenSet() const { return m_validationStatusMessageHasBeenSet; }

    /**
     * <p>This is an optional message string you can input to describe the validation
     * status for the restore test validation.</p>
     */
    inline void SetValidationStatusMessage(const Aws::String& value) { m_validationStatusMessageHasBeenSet = true; m_validationStatusMessage = value; }

    /**
     * <p>This is an optional message string you can input to describe the validation
     * status for the restore test validation.</p>
     */
    inline void SetValidationStatusMessage(Aws::String&& value) { m_validationStatusMessageHasBeenSet = true; m_validationStatusMessage = std::move(value); }

    /**
     * <p>This is an optional message string you can input to describe the validation
     * status for the restore test validation.</p>
     */
    inline void SetValidationStatusMessage(const char* value) { m_validationStatusMessageHasBeenSet = true; m_validationStatusMessage.assign(value); }

    /**
     * <p>This is an optional message string you can input to describe the validation
     * status for the restore test validation.</p>
     */
    inline PutRestoreValidationResultRequest& WithValidationStatusMessage(const Aws::String& value) { SetValidationStatusMessage(value); return *this;}

    /**
     * <p>This is an optional message string you can input to describe the validation
     * status for the restore test validation.</p>
     */
    inline PutRestoreValidationResultRequest& WithValidationStatusMessage(Aws::String&& value) { SetValidationStatusMessage(std::move(value)); return *this;}

    /**
     * <p>This is an optional message string you can input to describe the validation
     * status for the restore test validation.</p>
     */
    inline PutRestoreValidationResultRequest& WithValidationStatusMessage(const char* value) { SetValidationStatusMessage(value); return *this;}

  private:

    Aws::String m_restoreJobId;
    bool m_restoreJobIdHasBeenSet = false;

    RestoreValidationStatus m_validationStatus;
    bool m_validationStatusHasBeenSet = false;

    Aws::String m_validationStatusMessage;
    bool m_validationStatusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
