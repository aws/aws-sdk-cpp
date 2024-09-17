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
    AWS_IOTANALYTICS_API DatasetContentSummary();
    AWS_IOTANALYTICS_API DatasetContentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatasetContentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the dataset contents.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline DatasetContentSummary& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline DatasetContentSummary& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline DatasetContentSummary& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the dataset contents.</p>
     */
    inline const DatasetContentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DatasetContentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DatasetContentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DatasetContentSummary& WithStatus(const DatasetContentStatus& value) { SetStatus(value); return *this;}
    inline DatasetContentSummary& WithStatus(DatasetContentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual time the creation of the dataset contents was started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline DatasetContentSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DatasetContentSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the creation of the dataset contents was scheduled to start.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduleTime() const{ return m_scheduleTime; }
    inline bool ScheduleTimeHasBeenSet() const { return m_scheduleTimeHasBeenSet; }
    inline void SetScheduleTime(const Aws::Utils::DateTime& value) { m_scheduleTimeHasBeenSet = true; m_scheduleTime = value; }
    inline void SetScheduleTime(Aws::Utils::DateTime&& value) { m_scheduleTimeHasBeenSet = true; m_scheduleTime = std::move(value); }
    inline DatasetContentSummary& WithScheduleTime(const Aws::Utils::DateTime& value) { SetScheduleTime(value); return *this;}
    inline DatasetContentSummary& WithScheduleTime(Aws::Utils::DateTime&& value) { SetScheduleTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the dataset content status was updated to SUCCEEDED or FAILED.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }
    inline DatasetContentSummary& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}
    inline DatasetContentSummary& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    DatasetContentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_scheduleTime;
    bool m_scheduleTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
