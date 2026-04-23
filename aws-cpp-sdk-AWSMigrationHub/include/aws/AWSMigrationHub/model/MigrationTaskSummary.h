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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/AWSMigrationHub/model/Status.h>
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
namespace MigrationHub
{
namespace Model
{

  /**
   * <p>MigrationTaskSummary includes <code>MigrationTaskName</code>,
   * <code>ProgressPercent</code>, <code>ProgressUpdateStream</code>,
   * <code>Status</code>, and <code>UpdateDateTime</code> for each
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/MigrationTaskSummary">AWS
   * API Reference</a></p>
   */
  class AWS_MIGRATIONHUB_API MigrationTaskSummary
  {
  public:
    MigrationTaskSummary();
    MigrationTaskSummary(Aws::Utils::Json::JsonView jsonValue);
    MigrationTaskSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An AWS resource used for access control. It should uniquely identify the
     * migration tool as it is used for all updates made by the tool.</p>
     */
    inline const Aws::String& GetProgressUpdateStream() const{ return m_progressUpdateStream; }

    /**
     * <p>An AWS resource used for access control. It should uniquely identify the
     * migration tool as it is used for all updates made by the tool.</p>
     */
    inline bool ProgressUpdateStreamHasBeenSet() const { return m_progressUpdateStreamHasBeenSet; }

    /**
     * <p>An AWS resource used for access control. It should uniquely identify the
     * migration tool as it is used for all updates made by the tool.</p>
     */
    inline void SetProgressUpdateStream(const Aws::String& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = value; }

    /**
     * <p>An AWS resource used for access control. It should uniquely identify the
     * migration tool as it is used for all updates made by the tool.</p>
     */
    inline void SetProgressUpdateStream(Aws::String&& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = std::move(value); }

    /**
     * <p>An AWS resource used for access control. It should uniquely identify the
     * migration tool as it is used for all updates made by the tool.</p>
     */
    inline void SetProgressUpdateStream(const char* value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream.assign(value); }

    /**
     * <p>An AWS resource used for access control. It should uniquely identify the
     * migration tool as it is used for all updates made by the tool.</p>
     */
    inline MigrationTaskSummary& WithProgressUpdateStream(const Aws::String& value) { SetProgressUpdateStream(value); return *this;}

    /**
     * <p>An AWS resource used for access control. It should uniquely identify the
     * migration tool as it is used for all updates made by the tool.</p>
     */
    inline MigrationTaskSummary& WithProgressUpdateStream(Aws::String&& value) { SetProgressUpdateStream(std::move(value)); return *this;}

    /**
     * <p>An AWS resource used for access control. It should uniquely identify the
     * migration tool as it is used for all updates made by the tool.</p>
     */
    inline MigrationTaskSummary& WithProgressUpdateStream(const char* value) { SetProgressUpdateStream(value); return *this;}


    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline const Aws::String& GetMigrationTaskName() const{ return m_migrationTaskName; }

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline bool MigrationTaskNameHasBeenSet() const { return m_migrationTaskNameHasBeenSet; }

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline void SetMigrationTaskName(const Aws::String& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = value; }

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline void SetMigrationTaskName(Aws::String&& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = std::move(value); }

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline void SetMigrationTaskName(const char* value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName.assign(value); }

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline MigrationTaskSummary& WithMigrationTaskName(const Aws::String& value) { SetMigrationTaskName(value); return *this;}

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline MigrationTaskSummary& WithMigrationTaskName(Aws::String&& value) { SetMigrationTaskName(std::move(value)); return *this;}

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline MigrationTaskSummary& WithMigrationTaskName(const char* value) { SetMigrationTaskName(value); return *this;}


    /**
     * <p>Status of the task.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the task.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of the task.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of the task.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of the task.</p>
     */
    inline MigrationTaskSummary& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the task.</p>
     */
    inline MigrationTaskSummary& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline int GetProgressPercent() const{ return m_progressPercent; }

    /**
     * <p/>
     */
    inline bool ProgressPercentHasBeenSet() const { return m_progressPercentHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetProgressPercent(int value) { m_progressPercentHasBeenSet = true; m_progressPercent = value; }

    /**
     * <p/>
     */
    inline MigrationTaskSummary& WithProgressPercent(int value) { SetProgressPercent(value); return *this;}


    /**
     * <p>Detail information of what is being done within the overall status state.</p>
     */
    inline const Aws::String& GetStatusDetail() const{ return m_statusDetail; }

    /**
     * <p>Detail information of what is being done within the overall status state.</p>
     */
    inline bool StatusDetailHasBeenSet() const { return m_statusDetailHasBeenSet; }

    /**
     * <p>Detail information of what is being done within the overall status state.</p>
     */
    inline void SetStatusDetail(const Aws::String& value) { m_statusDetailHasBeenSet = true; m_statusDetail = value; }

    /**
     * <p>Detail information of what is being done within the overall status state.</p>
     */
    inline void SetStatusDetail(Aws::String&& value) { m_statusDetailHasBeenSet = true; m_statusDetail = std::move(value); }

    /**
     * <p>Detail information of what is being done within the overall status state.</p>
     */
    inline void SetStatusDetail(const char* value) { m_statusDetailHasBeenSet = true; m_statusDetail.assign(value); }

    /**
     * <p>Detail information of what is being done within the overall status state.</p>
     */
    inline MigrationTaskSummary& WithStatusDetail(const Aws::String& value) { SetStatusDetail(value); return *this;}

    /**
     * <p>Detail information of what is being done within the overall status state.</p>
     */
    inline MigrationTaskSummary& WithStatusDetail(Aws::String&& value) { SetStatusDetail(std::move(value)); return *this;}

    /**
     * <p>Detail information of what is being done within the overall status state.</p>
     */
    inline MigrationTaskSummary& WithStatusDetail(const char* value) { SetStatusDetail(value); return *this;}


    /**
     * <p>The timestamp when the task was gathered.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }

    /**
     * <p>The timestamp when the task was gathered.</p>
     */
    inline bool UpdateDateTimeHasBeenSet() const { return m_updateDateTimeHasBeenSet; }

    /**
     * <p>The timestamp when the task was gathered.</p>
     */
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = value; }

    /**
     * <p>The timestamp when the task was gathered.</p>
     */
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = std::move(value); }

    /**
     * <p>The timestamp when the task was gathered.</p>
     */
    inline MigrationTaskSummary& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}

    /**
     * <p>The timestamp when the task was gathered.</p>
     */
    inline MigrationTaskSummary& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_progressUpdateStream;
    bool m_progressUpdateStreamHasBeenSet;

    Aws::String m_migrationTaskName;
    bool m_migrationTaskNameHasBeenSet;

    Status m_status;
    bool m_statusHasBeenSet;

    int m_progressPercent;
    bool m_progressPercentHasBeenSet;

    Aws::String m_statusDetail;
    bool m_statusDetailHasBeenSet;

    Aws::Utils::DateTime m_updateDateTime;
    bool m_updateDateTimeHasBeenSet;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
