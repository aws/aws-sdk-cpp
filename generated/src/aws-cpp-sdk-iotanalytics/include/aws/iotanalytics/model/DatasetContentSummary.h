/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/DatasetContentStatus.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Summary information about dataset contents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatasetContentSummary">AWS
   * API Reference</a></p>
   */
  class DatasetContentSummary
  {
  public:
    AWS_IOTANALYTICS_API DatasetContentSummary() = default;
    AWS_IOTANALYTICS_API DatasetContentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatasetContentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the dataset contents.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    DatasetContentSummary& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the dataset contents.</p>
     */
    inline const DatasetContentStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = DatasetContentStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = DatasetContentStatus>
    DatasetContentSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual time the creation of the dataset contents was started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DatasetContentSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the creation of the dataset contents was scheduled to start.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduleTime() const { return m_scheduleTime; }
    inline bool ScheduleTimeHasBeenSet() const { return m_scheduleTimeHasBeenSet; }
    template<typename ScheduleTimeT = Aws::Utils::DateTime>
    void SetScheduleTime(ScheduleTimeT&& value) { m_scheduleTimeHasBeenSet = true; m_scheduleTime = std::forward<ScheduleTimeT>(value); }
    template<typename ScheduleTimeT = Aws::Utils::DateTime>
    DatasetContentSummary& WithScheduleTime(ScheduleTimeT&& value) { SetScheduleTime(std::forward<ScheduleTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the dataset content status was updated to SUCCEEDED or FAILED.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    DatasetContentSummary& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    DatasetContentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_scheduleTime{};
    bool m_scheduleTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime{};
    bool m_completionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
