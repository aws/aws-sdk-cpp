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
   * <p>Summary information about data set contents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatasetContentSummary">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API DatasetContentSummary
  {
  public:
    DatasetContentSummary();
    DatasetContentSummary(Aws::Utils::Json::JsonView jsonValue);
    DatasetContentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of the data set contents.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the data set contents.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the data set contents.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the data set contents.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the data set contents.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the data set contents.</p>
     */
    inline DatasetContentSummary& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the data set contents.</p>
     */
    inline DatasetContentSummary& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the data set contents.</p>
     */
    inline DatasetContentSummary& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The status of the data set contents.</p>
     */
    inline const DatasetContentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the data set contents.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the data set contents.</p>
     */
    inline void SetStatus(const DatasetContentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the data set contents.</p>
     */
    inline void SetStatus(DatasetContentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the data set contents.</p>
     */
    inline DatasetContentSummary& WithStatus(const DatasetContentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the data set contents.</p>
     */
    inline DatasetContentSummary& WithStatus(DatasetContentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The actual time the creation of the data set contents was started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The actual time the creation of the data set contents was started.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The actual time the creation of the data set contents was started.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The actual time the creation of the data set contents was started.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The actual time the creation of the data set contents was started.</p>
     */
    inline DatasetContentSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The actual time the creation of the data set contents was started.</p>
     */
    inline DatasetContentSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time the creation of the data set contents was scheduled to start.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduleTime() const{ return m_scheduleTime; }

    /**
     * <p>The time the creation of the data set contents was scheduled to start.</p>
     */
    inline bool ScheduleTimeHasBeenSet() const { return m_scheduleTimeHasBeenSet; }

    /**
     * <p>The time the creation of the data set contents was scheduled to start.</p>
     */
    inline void SetScheduleTime(const Aws::Utils::DateTime& value) { m_scheduleTimeHasBeenSet = true; m_scheduleTime = value; }

    /**
     * <p>The time the creation of the data set contents was scheduled to start.</p>
     */
    inline void SetScheduleTime(Aws::Utils::DateTime&& value) { m_scheduleTimeHasBeenSet = true; m_scheduleTime = std::move(value); }

    /**
     * <p>The time the creation of the data set contents was scheduled to start.</p>
     */
    inline DatasetContentSummary& WithScheduleTime(const Aws::Utils::DateTime& value) { SetScheduleTime(value); return *this;}

    /**
     * <p>The time the creation of the data set contents was scheduled to start.</p>
     */
    inline DatasetContentSummary& WithScheduleTime(Aws::Utils::DateTime&& value) { SetScheduleTime(std::move(value)); return *this;}

  private:

    Aws::String m_version;
    bool m_versionHasBeenSet;

    DatasetContentStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_scheduleTime;
    bool m_scheduleTimeHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
