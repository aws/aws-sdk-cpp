﻿/**
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
   * minimum of 90 days. Therefore, on the console, the “expire after days” setting
   * must be 90 days greater than the “transition to cold after days” setting. The
   * “transition to cold after days” setting cannot be changed after a backup has
   * been transitioned to cold.</p> <p>Only Amazon EFS file system backups can be
   * transitioned to cold storage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/Lifecycle">AWS
   * API Reference</a></p>
   */
  class AWS_BACKUP_API Lifecycle
  {
  public:
    Lifecycle();
    Lifecycle(Aws::Utils::Json::JsonView jsonValue);
    Lifecycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_moveToColdStorageAfterDaysHasBeenSet;

    long long m_deleteAfterDays;
    bool m_deleteAfterDaysHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
