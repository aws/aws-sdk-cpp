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
  class AWS_DIRECTORYSERVICE_API SnapshotLimits
  {
  public:
    SnapshotLimits();
    SnapshotLimits(Aws::Utils::Json::JsonView jsonValue);
    SnapshotLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of manual snapshots allowed.</p>
     */
    inline int GetManualSnapshotsLimit() const{ return m_manualSnapshotsLimit; }

    /**
     * <p>The maximum number of manual snapshots allowed.</p>
     */
    inline bool ManualSnapshotsLimitHasBeenSet() const { return m_manualSnapshotsLimitHasBeenSet; }

    /**
     * <p>The maximum number of manual snapshots allowed.</p>
     */
    inline void SetManualSnapshotsLimit(int value) { m_manualSnapshotsLimitHasBeenSet = true; m_manualSnapshotsLimit = value; }

    /**
     * <p>The maximum number of manual snapshots allowed.</p>
     */
    inline SnapshotLimits& WithManualSnapshotsLimit(int value) { SetManualSnapshotsLimit(value); return *this;}


    /**
     * <p>The current number of manual snapshots of the directory.</p>
     */
    inline int GetManualSnapshotsCurrentCount() const{ return m_manualSnapshotsCurrentCount; }

    /**
     * <p>The current number of manual snapshots of the directory.</p>
     */
    inline bool ManualSnapshotsCurrentCountHasBeenSet() const { return m_manualSnapshotsCurrentCountHasBeenSet; }

    /**
     * <p>The current number of manual snapshots of the directory.</p>
     */
    inline void SetManualSnapshotsCurrentCount(int value) { m_manualSnapshotsCurrentCountHasBeenSet = true; m_manualSnapshotsCurrentCount = value; }

    /**
     * <p>The current number of manual snapshots of the directory.</p>
     */
    inline SnapshotLimits& WithManualSnapshotsCurrentCount(int value) { SetManualSnapshotsCurrentCount(value); return *this;}


    /**
     * <p>Indicates if the manual snapshot limit has been reached.</p>
     */
    inline bool GetManualSnapshotsLimitReached() const{ return m_manualSnapshotsLimitReached; }

    /**
     * <p>Indicates if the manual snapshot limit has been reached.</p>
     */
    inline bool ManualSnapshotsLimitReachedHasBeenSet() const { return m_manualSnapshotsLimitReachedHasBeenSet; }

    /**
     * <p>Indicates if the manual snapshot limit has been reached.</p>
     */
    inline void SetManualSnapshotsLimitReached(bool value) { m_manualSnapshotsLimitReachedHasBeenSet = true; m_manualSnapshotsLimitReached = value; }

    /**
     * <p>Indicates if the manual snapshot limit has been reached.</p>
     */
    inline SnapshotLimits& WithManualSnapshotsLimitReached(bool value) { SetManualSnapshotsLimitReached(value); return *this;}

  private:

    int m_manualSnapshotsLimit;
    bool m_manualSnapshotsLimitHasBeenSet;

    int m_manualSnapshotsCurrentCount;
    bool m_manualSnapshotsCurrentCountHasBeenSet;

    bool m_manualSnapshotsLimitReached;
    bool m_manualSnapshotsLimitReachedHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
