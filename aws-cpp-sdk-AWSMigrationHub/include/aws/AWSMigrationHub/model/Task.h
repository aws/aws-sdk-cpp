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
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/AWSMigrationHub/model/Status.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MigrationHub
{
namespace Model
{

  /**
   * <p>Task object encapsulating task information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/Task">AWS
   * API Reference</a></p>
   */
  class AWS_MIGRATIONHUB_API Task
  {
  public:
    Task();
    Task(Aws::Utils::Json::JsonView jsonValue);
    Task& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Status of the task - Not Started, In-Progress, Complete.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the task - Not Started, In-Progress, Complete.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of the task - Not Started, In-Progress, Complete.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of the task - Not Started, In-Progress, Complete.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of the task - Not Started, In-Progress, Complete.</p>
     */
    inline Task& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the task - Not Started, In-Progress, Complete.</p>
     */
    inline Task& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Details of task status as notified by a migration tool. A tool might use this
     * field to provide clarifying information about the status that is unique to that
     * tool or that explains an error state.</p>
     */
    inline const Aws::String& GetStatusDetail() const{ return m_statusDetail; }

    /**
     * <p>Details of task status as notified by a migration tool. A tool might use this
     * field to provide clarifying information about the status that is unique to that
     * tool or that explains an error state.</p>
     */
    inline bool StatusDetailHasBeenSet() const { return m_statusDetailHasBeenSet; }

    /**
     * <p>Details of task status as notified by a migration tool. A tool might use this
     * field to provide clarifying information about the status that is unique to that
     * tool or that explains an error state.</p>
     */
    inline void SetStatusDetail(const Aws::String& value) { m_statusDetailHasBeenSet = true; m_statusDetail = value; }

    /**
     * <p>Details of task status as notified by a migration tool. A tool might use this
     * field to provide clarifying information about the status that is unique to that
     * tool or that explains an error state.</p>
     */
    inline void SetStatusDetail(Aws::String&& value) { m_statusDetailHasBeenSet = true; m_statusDetail = std::move(value); }

    /**
     * <p>Details of task status as notified by a migration tool. A tool might use this
     * field to provide clarifying information about the status that is unique to that
     * tool or that explains an error state.</p>
     */
    inline void SetStatusDetail(const char* value) { m_statusDetailHasBeenSet = true; m_statusDetail.assign(value); }

    /**
     * <p>Details of task status as notified by a migration tool. A tool might use this
     * field to provide clarifying information about the status that is unique to that
     * tool or that explains an error state.</p>
     */
    inline Task& WithStatusDetail(const Aws::String& value) { SetStatusDetail(value); return *this;}

    /**
     * <p>Details of task status as notified by a migration tool. A tool might use this
     * field to provide clarifying information about the status that is unique to that
     * tool or that explains an error state.</p>
     */
    inline Task& WithStatusDetail(Aws::String&& value) { SetStatusDetail(std::move(value)); return *this;}

    /**
     * <p>Details of task status as notified by a migration tool. A tool might use this
     * field to provide clarifying information about the status that is unique to that
     * tool or that explains an error state.</p>
     */
    inline Task& WithStatusDetail(const char* value) { SetStatusDetail(value); return *this;}


    /**
     * <p>Indication of the percentage completion of the task.</p>
     */
    inline int GetProgressPercent() const{ return m_progressPercent; }

    /**
     * <p>Indication of the percentage completion of the task.</p>
     */
    inline bool ProgressPercentHasBeenSet() const { return m_progressPercentHasBeenSet; }

    /**
     * <p>Indication of the percentage completion of the task.</p>
     */
    inline void SetProgressPercent(int value) { m_progressPercentHasBeenSet = true; m_progressPercent = value; }

    /**
     * <p>Indication of the percentage completion of the task.</p>
     */
    inline Task& WithProgressPercent(int value) { SetProgressPercent(value); return *this;}

  private:

    Status m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusDetail;
    bool m_statusDetailHasBeenSet;

    int m_progressPercent;
    bool m_progressPercentHasBeenSet;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
