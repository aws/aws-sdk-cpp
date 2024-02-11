/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/ReportLevel.h>
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
   * <p>Specifies the level of detail for a particular aspect of your DataSync <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">task
   * report</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ReportOverride">AWS
   * API Reference</a></p>
   */
  class ReportOverride
  {
  public:
    AWS_DATASYNC_API ReportOverride();
    AWS_DATASYNC_API ReportOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API ReportOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether your task report includes errors only or successes and
     * errors.</p> <p>For example, your report might mostly include only what didn't go
     * well in your transfer (<code>ERRORS_ONLY</code>). At the same time, you want to
     * verify that your <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">task
     * filter</a> is working correctly. In this situation, you can get a list of what
     * files DataSync successfully skipped and if something transferred that you didn't
     * to transfer (<code>SUCCESSES_AND_ERRORS</code>).</p>
     */
    inline const ReportLevel& GetReportLevel() const{ return m_reportLevel; }

    /**
     * <p>Specifies whether your task report includes errors only or successes and
     * errors.</p> <p>For example, your report might mostly include only what didn't go
     * well in your transfer (<code>ERRORS_ONLY</code>). At the same time, you want to
     * verify that your <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">task
     * filter</a> is working correctly. In this situation, you can get a list of what
     * files DataSync successfully skipped and if something transferred that you didn't
     * to transfer (<code>SUCCESSES_AND_ERRORS</code>).</p>
     */
    inline bool ReportLevelHasBeenSet() const { return m_reportLevelHasBeenSet; }

    /**
     * <p>Specifies whether your task report includes errors only or successes and
     * errors.</p> <p>For example, your report might mostly include only what didn't go
     * well in your transfer (<code>ERRORS_ONLY</code>). At the same time, you want to
     * verify that your <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">task
     * filter</a> is working correctly. In this situation, you can get a list of what
     * files DataSync successfully skipped and if something transferred that you didn't
     * to transfer (<code>SUCCESSES_AND_ERRORS</code>).</p>
     */
    inline void SetReportLevel(const ReportLevel& value) { m_reportLevelHasBeenSet = true; m_reportLevel = value; }

    /**
     * <p>Specifies whether your task report includes errors only or successes and
     * errors.</p> <p>For example, your report might mostly include only what didn't go
     * well in your transfer (<code>ERRORS_ONLY</code>). At the same time, you want to
     * verify that your <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">task
     * filter</a> is working correctly. In this situation, you can get a list of what
     * files DataSync successfully skipped and if something transferred that you didn't
     * to transfer (<code>SUCCESSES_AND_ERRORS</code>).</p>
     */
    inline void SetReportLevel(ReportLevel&& value) { m_reportLevelHasBeenSet = true; m_reportLevel = std::move(value); }

    /**
     * <p>Specifies whether your task report includes errors only or successes and
     * errors.</p> <p>For example, your report might mostly include only what didn't go
     * well in your transfer (<code>ERRORS_ONLY</code>). At the same time, you want to
     * verify that your <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">task
     * filter</a> is working correctly. In this situation, you can get a list of what
     * files DataSync successfully skipped and if something transferred that you didn't
     * to transfer (<code>SUCCESSES_AND_ERRORS</code>).</p>
     */
    inline ReportOverride& WithReportLevel(const ReportLevel& value) { SetReportLevel(value); return *this;}

    /**
     * <p>Specifies whether your task report includes errors only or successes and
     * errors.</p> <p>For example, your report might mostly include only what didn't go
     * well in your transfer (<code>ERRORS_ONLY</code>). At the same time, you want to
     * verify that your <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">task
     * filter</a> is working correctly. In this situation, you can get a list of what
     * files DataSync successfully skipped and if something transferred that you didn't
     * to transfer (<code>SUCCESSES_AND_ERRORS</code>).</p>
     */
    inline ReportOverride& WithReportLevel(ReportLevel&& value) { SetReportLevel(std::move(value)); return *this;}

  private:

    ReportLevel m_reportLevel;
    bool m_reportLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
