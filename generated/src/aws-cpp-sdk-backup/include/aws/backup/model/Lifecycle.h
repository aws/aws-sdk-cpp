/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>

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
   * <p>Contains an array of <code>Transition</code> objects specifying how long in
   * days before a recovery point transitions to cold storage or is deleted.</p>
   * <p>Backups transitioned to cold storage must be stored in cold storage for a
   * minimum of 90 days. Therefore, on the console, the “retention” setting must be
   * 90 days greater than the “transition to cold after days” setting. The
   * “transition to cold after days” setting cannot be changed after a backup has
   * been transitioned to cold.</p> <p>Resource types that are able to be
   * transitioned to cold storage are listed in the "Lifecycle to cold storage"
   * section of the <a
   * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html#features-by-resource">
   * Feature availability by resource</a> table. Backup ignores this expression for
   * other resource types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/Lifecycle">AWS
   * API Reference</a></p>
   */
  class Lifecycle
  {
  public:
    AWS_BACKUP_API Lifecycle();
    AWS_BACKUP_API Lifecycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Lifecycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the number of days after creation that a recovery point is moved to
     * cold storage.</p>
     */
    inline long long GetMoveToColdStorageAfterDays() const{ return m_moveToColdStorageAfterDays; }

    /**
     * <p>Specifies the number of days after creation that a recovery point is moved to
     * cold storage.</p>
     */
    inline bool MoveToColdStorageAfterDaysHasBeenSet() const { return m_moveToColdStorageAfterDaysHasBeenSet; }

    /**
     * <p>Specifies the number of days after creation that a recovery point is moved to
     * cold storage.</p>
     */
    inline void SetMoveToColdStorageAfterDays(long long value) { m_moveToColdStorageAfterDaysHasBeenSet = true; m_moveToColdStorageAfterDays = value; }

    /**
     * <p>Specifies the number of days after creation that a recovery point is moved to
     * cold storage.</p>
     */
    inline Lifecycle& WithMoveToColdStorageAfterDays(long long value) { SetMoveToColdStorageAfterDays(value); return *this;}


    /**
     * <p>Specifies the number of days after creation that a recovery point is deleted.
     * Must be greater than 90 days plus <code>MoveToColdStorageAfterDays</code>.</p>
     */
    inline long long GetDeleteAfterDays() const{ return m_deleteAfterDays; }

    /**
     * <p>Specifies the number of days after creation that a recovery point is deleted.
     * Must be greater than 90 days plus <code>MoveToColdStorageAfterDays</code>.</p>
     */
    inline bool DeleteAfterDaysHasBeenSet() const { return m_deleteAfterDaysHasBeenSet; }

    /**
     * <p>Specifies the number of days after creation that a recovery point is deleted.
     * Must be greater than 90 days plus <code>MoveToColdStorageAfterDays</code>.</p>
     */
    inline void SetDeleteAfterDays(long long value) { m_deleteAfterDaysHasBeenSet = true; m_deleteAfterDays = value; }

    /**
     * <p>Specifies the number of days after creation that a recovery point is deleted.
     * Must be greater than 90 days plus <code>MoveToColdStorageAfterDays</code>.</p>
     */
    inline Lifecycle& WithDeleteAfterDays(long long value) { SetDeleteAfterDays(value); return *this;}

  private:

    long long m_moveToColdStorageAfterDays;
    bool m_moveToColdStorageAfterDaysHasBeenSet = false;

    long long m_deleteAfterDays;
    bool m_deleteAfterDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
