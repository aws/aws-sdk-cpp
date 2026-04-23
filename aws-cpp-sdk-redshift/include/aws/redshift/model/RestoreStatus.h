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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes the status of a cluster restore action. Returns null if the cluster
   * was not created by restoring a snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RestoreStatus">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API RestoreStatus
  {
  public:
    RestoreStatus();
    RestoreStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    RestoreStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The status of the restore action. Returns starting, restoring, completed, or
     * failed.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the restore action. Returns starting, restoring, completed, or
     * failed.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the restore action. Returns starting, restoring, completed, or
     * failed.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the restore action. Returns starting, restoring, completed, or
     * failed.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the restore action. Returns starting, restoring, completed, or
     * failed.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the restore action. Returns starting, restoring, completed, or
     * failed.</p>
     */
    inline RestoreStatus& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the restore action. Returns starting, restoring, completed, or
     * failed.</p>
     */
    inline RestoreStatus& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the restore action. Returns starting, restoring, completed, or
     * failed.</p>
     */
    inline RestoreStatus& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The number of megabytes per second being transferred from the backup storage.
     * Returns the average rate for a completed backup.</p>
     */
    inline double GetCurrentRestoreRateInMegaBytesPerSecond() const{ return m_currentRestoreRateInMegaBytesPerSecond; }

    /**
     * <p>The number of megabytes per second being transferred from the backup storage.
     * Returns the average rate for a completed backup.</p>
     */
    inline bool CurrentRestoreRateInMegaBytesPerSecondHasBeenSet() const { return m_currentRestoreRateInMegaBytesPerSecondHasBeenSet; }

    /**
     * <p>The number of megabytes per second being transferred from the backup storage.
     * Returns the average rate for a completed backup.</p>
     */
    inline void SetCurrentRestoreRateInMegaBytesPerSecond(double value) { m_currentRestoreRateInMegaBytesPerSecondHasBeenSet = true; m_currentRestoreRateInMegaBytesPerSecond = value; }

    /**
     * <p>The number of megabytes per second being transferred from the backup storage.
     * Returns the average rate for a completed backup.</p>
     */
    inline RestoreStatus& WithCurrentRestoreRateInMegaBytesPerSecond(double value) { SetCurrentRestoreRateInMegaBytesPerSecond(value); return *this;}


    /**
     * <p>The size of the set of snapshot data used to restore the cluster.</p>
     */
    inline long long GetSnapshotSizeInMegaBytes() const{ return m_snapshotSizeInMegaBytes; }

    /**
     * <p>The size of the set of snapshot data used to restore the cluster.</p>
     */
    inline bool SnapshotSizeInMegaBytesHasBeenSet() const { return m_snapshotSizeInMegaBytesHasBeenSet; }

    /**
     * <p>The size of the set of snapshot data used to restore the cluster.</p>
     */
    inline void SetSnapshotSizeInMegaBytes(long long value) { m_snapshotSizeInMegaBytesHasBeenSet = true; m_snapshotSizeInMegaBytes = value; }

    /**
     * <p>The size of the set of snapshot data used to restore the cluster.</p>
     */
    inline RestoreStatus& WithSnapshotSizeInMegaBytes(long long value) { SetSnapshotSizeInMegaBytes(value); return *this;}


    /**
     * <p>The number of megabytes that have been transferred from snapshot storage.</p>
     */
    inline long long GetProgressInMegaBytes() const{ return m_progressInMegaBytes; }

    /**
     * <p>The number of megabytes that have been transferred from snapshot storage.</p>
     */
    inline bool ProgressInMegaBytesHasBeenSet() const { return m_progressInMegaBytesHasBeenSet; }

    /**
     * <p>The number of megabytes that have been transferred from snapshot storage.</p>
     */
    inline void SetProgressInMegaBytes(long long value) { m_progressInMegaBytesHasBeenSet = true; m_progressInMegaBytes = value; }

    /**
     * <p>The number of megabytes that have been transferred from snapshot storage.</p>
     */
    inline RestoreStatus& WithProgressInMegaBytes(long long value) { SetProgressInMegaBytes(value); return *this;}


    /**
     * <p>The amount of time an in-progress restore has been running, or the amount of
     * time it took a completed restore to finish.</p>
     */
    inline long long GetElapsedTimeInSeconds() const{ return m_elapsedTimeInSeconds; }

    /**
     * <p>The amount of time an in-progress restore has been running, or the amount of
     * time it took a completed restore to finish.</p>
     */
    inline bool ElapsedTimeInSecondsHasBeenSet() const { return m_elapsedTimeInSecondsHasBeenSet; }

    /**
     * <p>The amount of time an in-progress restore has been running, or the amount of
     * time it took a completed restore to finish.</p>
     */
    inline void SetElapsedTimeInSeconds(long long value) { m_elapsedTimeInSecondsHasBeenSet = true; m_elapsedTimeInSeconds = value; }

    /**
     * <p>The amount of time an in-progress restore has been running, or the amount of
     * time it took a completed restore to finish.</p>
     */
    inline RestoreStatus& WithElapsedTimeInSeconds(long long value) { SetElapsedTimeInSeconds(value); return *this;}


    /**
     * <p>The estimate of the time remaining before the restore will complete. Returns
     * 0 for a completed restore.</p>
     */
    inline long long GetEstimatedTimeToCompletionInSeconds() const{ return m_estimatedTimeToCompletionInSeconds; }

    /**
     * <p>The estimate of the time remaining before the restore will complete. Returns
     * 0 for a completed restore.</p>
     */
    inline bool EstimatedTimeToCompletionInSecondsHasBeenSet() const { return m_estimatedTimeToCompletionInSecondsHasBeenSet; }

    /**
     * <p>The estimate of the time remaining before the restore will complete. Returns
     * 0 for a completed restore.</p>
     */
    inline void SetEstimatedTimeToCompletionInSeconds(long long value) { m_estimatedTimeToCompletionInSecondsHasBeenSet = true; m_estimatedTimeToCompletionInSeconds = value; }

    /**
     * <p>The estimate of the time remaining before the restore will complete. Returns
     * 0 for a completed restore.</p>
     */
    inline RestoreStatus& WithEstimatedTimeToCompletionInSeconds(long long value) { SetEstimatedTimeToCompletionInSeconds(value); return *this;}

  private:

    Aws::String m_status;
    bool m_statusHasBeenSet;

    double m_currentRestoreRateInMegaBytesPerSecond;
    bool m_currentRestoreRateInMegaBytesPerSecondHasBeenSet;

    long long m_snapshotSizeInMegaBytes;
    bool m_snapshotSizeInMegaBytesHasBeenSet;

    long long m_progressInMegaBytes;
    bool m_progressInMegaBytesHasBeenSet;

    long long m_elapsedTimeInSeconds;
    bool m_elapsedTimeInSecondsHasBeenSet;

    long long m_estimatedTimeToCompletionInSeconds;
    bool m_estimatedTimeToCompletionInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
