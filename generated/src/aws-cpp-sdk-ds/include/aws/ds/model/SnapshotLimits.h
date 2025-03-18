/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>

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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains manual snapshot limit information for a directory.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/SnapshotLimits">AWS
   * API Reference</a></p>
   */
  class SnapshotLimits
  {
  public:
    AWS_DIRECTORYSERVICE_API SnapshotLimits() = default;
    AWS_DIRECTORYSERVICE_API SnapshotLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API SnapshotLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of manual snapshots allowed.</p>
     */
    inline int GetManualSnapshotsLimit() const { return m_manualSnapshotsLimit; }
    inline bool ManualSnapshotsLimitHasBeenSet() const { return m_manualSnapshotsLimitHasBeenSet; }
    inline void SetManualSnapshotsLimit(int value) { m_manualSnapshotsLimitHasBeenSet = true; m_manualSnapshotsLimit = value; }
    inline SnapshotLimits& WithManualSnapshotsLimit(int value) { SetManualSnapshotsLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current number of manual snapshots of the directory.</p>
     */
    inline int GetManualSnapshotsCurrentCount() const { return m_manualSnapshotsCurrentCount; }
    inline bool ManualSnapshotsCurrentCountHasBeenSet() const { return m_manualSnapshotsCurrentCountHasBeenSet; }
    inline void SetManualSnapshotsCurrentCount(int value) { m_manualSnapshotsCurrentCountHasBeenSet = true; m_manualSnapshotsCurrentCount = value; }
    inline SnapshotLimits& WithManualSnapshotsCurrentCount(int value) { SetManualSnapshotsCurrentCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the manual snapshot limit has been reached.</p>
     */
    inline bool GetManualSnapshotsLimitReached() const { return m_manualSnapshotsLimitReached; }
    inline bool ManualSnapshotsLimitReachedHasBeenSet() const { return m_manualSnapshotsLimitReachedHasBeenSet; }
    inline void SetManualSnapshotsLimitReached(bool value) { m_manualSnapshotsLimitReachedHasBeenSet = true; m_manualSnapshotsLimitReached = value; }
    inline SnapshotLimits& WithManualSnapshotsLimitReached(bool value) { SetManualSnapshotsLimitReached(value); return *this;}
    ///@}
  private:

    int m_manualSnapshotsLimit{0};
    bool m_manualSnapshotsLimitHasBeenSet = false;

    int m_manualSnapshotsCurrentCount{0};
    bool m_manualSnapshotsCurrentCountHasBeenSet = false;

    bool m_manualSnapshotsLimitReached{false};
    bool m_manualSnapshotsLimitReachedHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
