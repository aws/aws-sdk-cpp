/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
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
   * <p>Contains <code>DeleteAt</code> and <code>MoveToColdStorageAt</code>
   * timestamps, which are used to specify a lifecycle for a recovery point.</p>
   * <p>The lifecycle defines when a protected resource is transitioned to cold
   * storage and when it expires. Backup transitions and expires backups
   * automatically according to the lifecycle that you define.</p> <p>Backups
   * transitioned to cold storage must be stored in cold storage for a minimum of 90
   * days. Therefore, the “retention” setting must be 90 days greater than the
   * “transition to cold after days” setting. The “transition to cold after days”
   * setting cannot be changed after a backup has been transitioned to cold.</p>
   * <p>Resource types that can transition to cold storage are listed in the <a
   * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/backup-feature-availability.html#features-by-resource">Feature
   * availability by resource</a> table. Backup ignores this expression for other
   * resource types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CalculatedLifecycle">AWS
   * API Reference</a></p>
   */
  class CalculatedLifecycle
  {
  public:
    AWS_BACKUP_API CalculatedLifecycle() = default;
    AWS_BACKUP_API CalculatedLifecycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API CalculatedLifecycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A timestamp that specifies when to transition a recovery point to cold
     * storage.</p>
     */
    inline const Aws::Utils::DateTime& GetMoveToColdStorageAt() const { return m_moveToColdStorageAt; }
    inline bool MoveToColdStorageAtHasBeenSet() const { return m_moveToColdStorageAtHasBeenSet; }
    template<typename MoveToColdStorageAtT = Aws::Utils::DateTime>
    void SetMoveToColdStorageAt(MoveToColdStorageAtT&& value) { m_moveToColdStorageAtHasBeenSet = true; m_moveToColdStorageAt = std::forward<MoveToColdStorageAtT>(value); }
    template<typename MoveToColdStorageAtT = Aws::Utils::DateTime>
    CalculatedLifecycle& WithMoveToColdStorageAt(MoveToColdStorageAtT&& value) { SetMoveToColdStorageAt(std::forward<MoveToColdStorageAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that specifies when to delete a recovery point.</p>
     */
    inline const Aws::Utils::DateTime& GetDeleteAt() const { return m_deleteAt; }
    inline bool DeleteAtHasBeenSet() const { return m_deleteAtHasBeenSet; }
    template<typename DeleteAtT = Aws::Utils::DateTime>
    void SetDeleteAt(DeleteAtT&& value) { m_deleteAtHasBeenSet = true; m_deleteAt = std::forward<DeleteAtT>(value); }
    template<typename DeleteAtT = Aws::Utils::DateTime>
    CalculatedLifecycle& WithDeleteAt(DeleteAtT&& value) { SetDeleteAt(std::forward<DeleteAtT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_moveToColdStorageAt{};
    bool m_moveToColdStorageAtHasBeenSet = false;

    Aws::Utils::DateTime m_deleteAt{};
    bool m_deleteAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
