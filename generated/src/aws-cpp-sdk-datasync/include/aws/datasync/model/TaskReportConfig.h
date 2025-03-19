/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/ReportDestination.h>
#include <aws/datasync/model/ReportOutputType.h>
#include <aws/datasync/model/ReportLevel.h>
#include <aws/datasync/model/ObjectVersionIds.h>
#include <aws/datasync/model/ReportOverrides.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>Specifies how you want to configure a task report, which provides detailed
   * information about for your DataSync transfer.</p> <p>For more information, see
   * <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">Task
   * reports</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/TaskReportConfig">AWS
   * API Reference</a></p>
   */
  class TaskReportConfig
  {
  public:
    AWS_DATASYNC_API TaskReportConfig() = default;
    AWS_DATASYNC_API TaskReportConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API TaskReportConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the Amazon S3 bucket where DataSync uploads your task report. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html#task-report-access">Task
     * reports</a>.</p>
     */
    inline const ReportDestination& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = ReportDestination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = ReportDestination>
    TaskReportConfig& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of task report that you want:</p> <ul> <li> <p>
     * <code>SUMMARY_ONLY</code>: Provides necessary details about your task, including
     * the number of files, objects, and directories transferred and transfer
     * duration.</p> </li> <li> <p> <code>STANDARD</code>: Provides complete details
     * about your task, including a full list of files, objects, and directories that
     * were transferred, skipped, verified, and more.</p> </li> </ul>
     */
    inline ReportOutputType GetOutputType() const { return m_outputType; }
    inline bool OutputTypeHasBeenSet() const { return m_outputTypeHasBeenSet; }
    inline void SetOutputType(ReportOutputType value) { m_outputTypeHasBeenSet = true; m_outputType = value; }
    inline TaskReportConfig& WithOutputType(ReportOutputType value) { SetOutputType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether you want your task report to include only what went wrong
     * with your transfer or a list of what succeeded and didn't.</p> <ul> <li> <p>
     * <code>ERRORS_ONLY</code>: A report shows what DataSync was unable to transfer,
     * skip, verify, and delete.</p> </li> <li> <p> <code>SUCCESSES_AND_ERRORS</code>:
     * A report shows what DataSync was able and unable to transfer, skip, verify, and
     * delete.</p> </li> </ul>
     */
    inline ReportLevel GetReportLevel() const { return m_reportLevel; }
    inline bool ReportLevelHasBeenSet() const { return m_reportLevelHasBeenSet; }
    inline void SetReportLevel(ReportLevel value) { m_reportLevelHasBeenSet = true; m_reportLevel = value; }
    inline TaskReportConfig& WithReportLevel(ReportLevel value) { SetReportLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether your task report includes the new version of each object
     * transferred into an S3 bucket. This only applies if you <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/manage-versioning-examples.html">enable
     * versioning on your bucket</a>. Keep in mind that setting this to
     * <code>INCLUDE</code> can increase the duration of your task execution.</p>
     */
    inline ObjectVersionIds GetObjectVersionIds() const { return m_objectVersionIds; }
    inline bool ObjectVersionIdsHasBeenSet() const { return m_objectVersionIdsHasBeenSet; }
    inline void SetObjectVersionIds(ObjectVersionIds value) { m_objectVersionIdsHasBeenSet = true; m_objectVersionIds = value; }
    inline TaskReportConfig& WithObjectVersionIds(ObjectVersionIds value) { SetObjectVersionIds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customizes the reporting level for aspects of your task report. For example,
     * your report might generally only include errors, but you could specify that you
     * want a list of successes and errors just for the files that DataSync attempted
     * to delete in your destination location.</p>
     */
    inline const ReportOverrides& GetOverrides() const { return m_overrides; }
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }
    template<typename OverridesT = ReportOverrides>
    void SetOverrides(OverridesT&& value) { m_overridesHasBeenSet = true; m_overrides = std::forward<OverridesT>(value); }
    template<typename OverridesT = ReportOverrides>
    TaskReportConfig& WithOverrides(OverridesT&& value) { SetOverrides(std::forward<OverridesT>(value)); return *this;}
    ///@}
  private:

    ReportDestination m_destination;
    bool m_destinationHasBeenSet = false;

    ReportOutputType m_outputType{ReportOutputType::NOT_SET};
    bool m_outputTypeHasBeenSet = false;

    ReportLevel m_reportLevel{ReportLevel::NOT_SET};
    bool m_reportLevelHasBeenSet = false;

    ObjectVersionIds m_objectVersionIds{ObjectVersionIds::NOT_SET};
    bool m_objectVersionIdsHasBeenSet = false;

    ReportOverrides m_overrides;
    bool m_overridesHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
