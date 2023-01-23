/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about the backup plan and rule that Backup used to
   * initiate the recovery point backup.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RecoveryPointCreator">AWS
   * API Reference</a></p>
   */
  class RecoveryPointCreator
  {
  public:
    AWS_BACKUP_API RecoveryPointCreator();
    AWS_BACKUP_API RecoveryPointCreator(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RecoveryPointCreator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline const Aws::String& GetBackupPlanId() const{ return m_backupPlanId; }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline bool BackupPlanIdHasBeenSet() const { return m_backupPlanIdHasBeenSet; }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline void SetBackupPlanId(const Aws::String& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = value; }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline void SetBackupPlanId(Aws::String&& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = std::move(value); }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline void SetBackupPlanId(const char* value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId.assign(value); }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline RecoveryPointCreator& WithBackupPlanId(const Aws::String& value) { SetBackupPlanId(value); return *this;}

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline RecoveryPointCreator& WithBackupPlanId(Aws::String&& value) { SetBackupPlanId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline RecoveryPointCreator& WithBackupPlanId(const char* value) { SetBackupPlanId(value); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:plan:8F81F553-3A74-4A3F-B93D-B3360DC80C50</code>.</p>
     */
    inline const Aws::String& GetBackupPlanArn() const{ return m_backupPlanArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:plan:8F81F553-3A74-4A3F-B93D-B3360DC80C50</code>.</p>
     */
    inline bool BackupPlanArnHasBeenSet() const { return m_backupPlanArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:plan:8F81F553-3A74-4A3F-B93D-B3360DC80C50</code>.</p>
     */
    inline void SetBackupPlanArn(const Aws::String& value) { m_backupPlanArnHasBeenSet = true; m_backupPlanArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:plan:8F81F553-3A74-4A3F-B93D-B3360DC80C50</code>.</p>
     */
    inline void SetBackupPlanArn(Aws::String&& value) { m_backupPlanArnHasBeenSet = true; m_backupPlanArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:plan:8F81F553-3A74-4A3F-B93D-B3360DC80C50</code>.</p>
     */
    inline void SetBackupPlanArn(const char* value) { m_backupPlanArnHasBeenSet = true; m_backupPlanArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:plan:8F81F553-3A74-4A3F-B93D-B3360DC80C50</code>.</p>
     */
    inline RecoveryPointCreator& WithBackupPlanArn(const Aws::String& value) { SetBackupPlanArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:plan:8F81F553-3A74-4A3F-B93D-B3360DC80C50</code>.</p>
     */
    inline RecoveryPointCreator& WithBackupPlanArn(Aws::String&& value) { SetBackupPlanArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:plan:8F81F553-3A74-4A3F-B93D-B3360DC80C50</code>.</p>
     */
    inline RecoveryPointCreator& WithBackupPlanArn(const char* value) { SetBackupPlanArn(value); return *this;}


    /**
     * <p>Version IDs are unique, randomly generated, Unicode, UTF-8 encoded strings
     * that are at most 1,024 bytes long. They cannot be edited.</p>
     */
    inline const Aws::String& GetBackupPlanVersion() const{ return m_backupPlanVersion; }

    /**
     * <p>Version IDs are unique, randomly generated, Unicode, UTF-8 encoded strings
     * that are at most 1,024 bytes long. They cannot be edited.</p>
     */
    inline bool BackupPlanVersionHasBeenSet() const { return m_backupPlanVersionHasBeenSet; }

    /**
     * <p>Version IDs are unique, randomly generated, Unicode, UTF-8 encoded strings
     * that are at most 1,024 bytes long. They cannot be edited.</p>
     */
    inline void SetBackupPlanVersion(const Aws::String& value) { m_backupPlanVersionHasBeenSet = true; m_backupPlanVersion = value; }

    /**
     * <p>Version IDs are unique, randomly generated, Unicode, UTF-8 encoded strings
     * that are at most 1,024 bytes long. They cannot be edited.</p>
     */
    inline void SetBackupPlanVersion(Aws::String&& value) { m_backupPlanVersionHasBeenSet = true; m_backupPlanVersion = std::move(value); }

    /**
     * <p>Version IDs are unique, randomly generated, Unicode, UTF-8 encoded strings
     * that are at most 1,024 bytes long. They cannot be edited.</p>
     */
    inline void SetBackupPlanVersion(const char* value) { m_backupPlanVersionHasBeenSet = true; m_backupPlanVersion.assign(value); }

    /**
     * <p>Version IDs are unique, randomly generated, Unicode, UTF-8 encoded strings
     * that are at most 1,024 bytes long. They cannot be edited.</p>
     */
    inline RecoveryPointCreator& WithBackupPlanVersion(const Aws::String& value) { SetBackupPlanVersion(value); return *this;}

    /**
     * <p>Version IDs are unique, randomly generated, Unicode, UTF-8 encoded strings
     * that are at most 1,024 bytes long. They cannot be edited.</p>
     */
    inline RecoveryPointCreator& WithBackupPlanVersion(Aws::String&& value) { SetBackupPlanVersion(std::move(value)); return *this;}

    /**
     * <p>Version IDs are unique, randomly generated, Unicode, UTF-8 encoded strings
     * that are at most 1,024 bytes long. They cannot be edited.</p>
     */
    inline RecoveryPointCreator& WithBackupPlanVersion(const char* value) { SetBackupPlanVersion(value); return *this;}


    /**
     * <p>Uniquely identifies a rule used to schedule the backup of a selection of
     * resources.</p>
     */
    inline const Aws::String& GetBackupRuleId() const{ return m_backupRuleId; }

    /**
     * <p>Uniquely identifies a rule used to schedule the backup of a selection of
     * resources.</p>
     */
    inline bool BackupRuleIdHasBeenSet() const { return m_backupRuleIdHasBeenSet; }

    /**
     * <p>Uniquely identifies a rule used to schedule the backup of a selection of
     * resources.</p>
     */
    inline void SetBackupRuleId(const Aws::String& value) { m_backupRuleIdHasBeenSet = true; m_backupRuleId = value; }

    /**
     * <p>Uniquely identifies a rule used to schedule the backup of a selection of
     * resources.</p>
     */
    inline void SetBackupRuleId(Aws::String&& value) { m_backupRuleIdHasBeenSet = true; m_backupRuleId = std::move(value); }

    /**
     * <p>Uniquely identifies a rule used to schedule the backup of a selection of
     * resources.</p>
     */
    inline void SetBackupRuleId(const char* value) { m_backupRuleIdHasBeenSet = true; m_backupRuleId.assign(value); }

    /**
     * <p>Uniquely identifies a rule used to schedule the backup of a selection of
     * resources.</p>
     */
    inline RecoveryPointCreator& WithBackupRuleId(const Aws::String& value) { SetBackupRuleId(value); return *this;}

    /**
     * <p>Uniquely identifies a rule used to schedule the backup of a selection of
     * resources.</p>
     */
    inline RecoveryPointCreator& WithBackupRuleId(Aws::String&& value) { SetBackupRuleId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies a rule used to schedule the backup of a selection of
     * resources.</p>
     */
    inline RecoveryPointCreator& WithBackupRuleId(const char* value) { SetBackupRuleId(value); return *this;}

  private:

    Aws::String m_backupPlanId;
    bool m_backupPlanIdHasBeenSet = false;

    Aws::String m_backupPlanArn;
    bool m_backupPlanArnHasBeenSet = false;

    Aws::String m_backupPlanVersion;
    bool m_backupPlanVersionHasBeenSet = false;

    Aws::String m_backupRuleId;
    bool m_backupRuleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
