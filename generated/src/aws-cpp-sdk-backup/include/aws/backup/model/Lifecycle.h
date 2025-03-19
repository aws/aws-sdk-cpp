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
   * <p>Specifies the time period, in days, before a recovery point transitions to
   * cold storage or is deleted.</p> <p>Backups transitioned to cold storage must be
   * stored in cold storage for a minimum of 90 days. Therefore, on the console, the
   * retention setting must be 90 days greater than the transition to cold after days
   * setting. The transition to cold after days setting can't be changed after a
   * backup has been transitioned to cold.</p> <p>Resource types that can transition
   * to cold storage are listed in the <a
   * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/backup-feature-availability.html#features-by-resource">Feature
   * availability by resource</a> table. Backup ignores this expression for other
   * resource types.</p> <p>To remove the existing lifecycle and retention periods
   * and keep your recovery points indefinitely, specify -1 for
   * <code>MoveToColdStorageAfterDays</code> and
   * <code>DeleteAfterDays</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/Lifecycle">AWS
   * API Reference</a></p>
   */
  class Lifecycle
  {
  public:
    AWS_BACKUP_API Lifecycle() = default;
    AWS_BACKUP_API Lifecycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Lifecycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of days after creation that a recovery point is moved to cold
     * storage.</p>
     */
    inline long long GetMoveToColdStorageAfterDays() const { return m_moveToColdStorageAfterDays; }
    inline bool MoveToColdStorageAfterDaysHasBeenSet() const { return m_moveToColdStorageAfterDaysHasBeenSet; }
    inline void SetMoveToColdStorageAfterDays(long long value) { m_moveToColdStorageAfterDaysHasBeenSet = true; m_moveToColdStorageAfterDays = value; }
    inline Lifecycle& WithMoveToColdStorageAfterDays(long long value) { SetMoveToColdStorageAfterDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days after creation that a recovery point is deleted. This
     * value must be at least 90 days after the number of days specified in
     * <code>MoveToColdStorageAfterDays</code>.</p>
     */
    inline long long GetDeleteAfterDays() const { return m_deleteAfterDays; }
    inline bool DeleteAfterDaysHasBeenSet() const { return m_deleteAfterDaysHasBeenSet; }
    inline void SetDeleteAfterDays(long long value) { m_deleteAfterDaysHasBeenSet = true; m_deleteAfterDays = value; }
    inline Lifecycle& WithDeleteAfterDays(long long value) { SetDeleteAfterDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the value is true, your backup plan transitions supported resources to
     * archive (cold) storage tier in accordance with your lifecycle settings.</p>
     */
    inline bool GetOptInToArchiveForSupportedResources() const { return m_optInToArchiveForSupportedResources; }
    inline bool OptInToArchiveForSupportedResourcesHasBeenSet() const { return m_optInToArchiveForSupportedResourcesHasBeenSet; }
    inline void SetOptInToArchiveForSupportedResources(bool value) { m_optInToArchiveForSupportedResourcesHasBeenSet = true; m_optInToArchiveForSupportedResources = value; }
    inline Lifecycle& WithOptInToArchiveForSupportedResources(bool value) { SetOptInToArchiveForSupportedResources(value); return *this;}
    ///@}
  private:

    long long m_moveToColdStorageAfterDays{0};
    bool m_moveToColdStorageAfterDaysHasBeenSet = false;

    long long m_deleteAfterDays{0};
    bool m_deleteAfterDaysHasBeenSet = false;

    bool m_optInToArchiveForSupportedResources{false};
    bool m_optInToArchiveForSupportedResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
