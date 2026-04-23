/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * storage and when it expires. AWS Backup transitions and expires backups
   * automatically according to the lifecycle that you define. </p> <p>Backups
   * transitioned to cold storage must be stored in cold storage for a minimum of 90
   * days. Therefore, the “expire after days” setting must be 90 days greater than
   * the “transition to cold after days” setting. The “transition to cold after days”
   * setting cannot be changed after a backup has been transitioned to cold.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/CalculatedLifecycle">AWS
   * API Reference</a></p>
   */
  class AWS_BACKUP_API CalculatedLifecycle
  {
  public:
    CalculatedLifecycle();
    CalculatedLifecycle(Aws::Utils::Json::JsonView jsonValue);
    CalculatedLifecycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A timestamp that specifies when to transition a recovery point to cold
     * storage.</p>
     */
    inline const Aws::Utils::DateTime& GetMoveToColdStorageAt() const{ return m_moveToColdStorageAt; }

    /**
     * <p>A timestamp that specifies when to transition a recovery point to cold
     * storage.</p>
     */
    inline bool MoveToColdStorageAtHasBeenSet() const { return m_moveToColdStorageAtHasBeenSet; }

    /**
     * <p>A timestamp that specifies when to transition a recovery point to cold
     * storage.</p>
     */
    inline void SetMoveToColdStorageAt(const Aws::Utils::DateTime& value) { m_moveToColdStorageAtHasBeenSet = true; m_moveToColdStorageAt = value; }

    /**
     * <p>A timestamp that specifies when to transition a recovery point to cold
     * storage.</p>
     */
    inline void SetMoveToColdStorageAt(Aws::Utils::DateTime&& value) { m_moveToColdStorageAtHasBeenSet = true; m_moveToColdStorageAt = std::move(value); }

    /**
     * <p>A timestamp that specifies when to transition a recovery point to cold
     * storage.</p>
     */
    inline CalculatedLifecycle& WithMoveToColdStorageAt(const Aws::Utils::DateTime& value) { SetMoveToColdStorageAt(value); return *this;}

    /**
     * <p>A timestamp that specifies when to transition a recovery point to cold
     * storage.</p>
     */
    inline CalculatedLifecycle& WithMoveToColdStorageAt(Aws::Utils::DateTime&& value) { SetMoveToColdStorageAt(std::move(value)); return *this;}


    /**
     * <p>A timestamp that specifies when to delete a recovery point.</p>
     */
    inline const Aws::Utils::DateTime& GetDeleteAt() const{ return m_deleteAt; }

    /**
     * <p>A timestamp that specifies when to delete a recovery point.</p>
     */
    inline bool DeleteAtHasBeenSet() const { return m_deleteAtHasBeenSet; }

    /**
     * <p>A timestamp that specifies when to delete a recovery point.</p>
     */
    inline void SetDeleteAt(const Aws::Utils::DateTime& value) { m_deleteAtHasBeenSet = true; m_deleteAt = value; }

    /**
     * <p>A timestamp that specifies when to delete a recovery point.</p>
     */
    inline void SetDeleteAt(Aws::Utils::DateTime&& value) { m_deleteAtHasBeenSet = true; m_deleteAt = std::move(value); }

    /**
     * <p>A timestamp that specifies when to delete a recovery point.</p>
     */
    inline CalculatedLifecycle& WithDeleteAt(const Aws::Utils::DateTime& value) { SetDeleteAt(value); return *this;}

    /**
     * <p>A timestamp that specifies when to delete a recovery point.</p>
     */
    inline CalculatedLifecycle& WithDeleteAt(Aws::Utils::DateTime&& value) { SetDeleteAt(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_moveToColdStorageAt;
    bool m_moveToColdStorageAtHasBeenSet;

    Aws::Utils::DateTime m_deleteAt;
    bool m_deleteAtHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
