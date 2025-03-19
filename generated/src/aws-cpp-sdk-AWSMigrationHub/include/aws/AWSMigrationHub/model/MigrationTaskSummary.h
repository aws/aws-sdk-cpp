/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class MigrationTaskSummary
  {
  public:
    AWS_MIGRATIONHUB_API MigrationTaskSummary() = default;
    AWS_MIGRATIONHUB_API MigrationTaskSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUB_API MigrationTaskSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An AWS resource used for access control. It should uniquely identify the
     * migration tool as it is used for all updates made by the tool.</p>
     */
    inline const Aws::String& GetProgressUpdateStream() const { return m_progressUpdateStream; }
    inline bool ProgressUpdateStreamHasBeenSet() const { return m_progressUpdateStreamHasBeenSet; }
    template<typename ProgressUpdateStreamT = Aws::String>
    void SetProgressUpdateStream(ProgressUpdateStreamT&& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = std::forward<ProgressUpdateStreamT>(value); }
    template<typename ProgressUpdateStreamT = Aws::String>
    MigrationTaskSummary& WithProgressUpdateStream(ProgressUpdateStreamT&& value) { SetProgressUpdateStream(std::forward<ProgressUpdateStreamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier that references the migration task. <i>Do not store
     * personal data in this field.</i> </p>
     */
    inline const Aws::String& GetMigrationTaskName() const { return m_migrationTaskName; }
    inline bool MigrationTaskNameHasBeenSet() const { return m_migrationTaskNameHasBeenSet; }
    template<typename MigrationTaskNameT = Aws::String>
    void SetMigrationTaskName(MigrationTaskNameT&& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = std::forward<MigrationTaskNameT>(value); }
    template<typename MigrationTaskNameT = Aws::String>
    MigrationTaskSummary& WithMigrationTaskName(MigrationTaskNameT&& value) { SetMigrationTaskName(std::forward<MigrationTaskNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the task.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline MigrationTaskSummary& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indication of the percentage completion of the task.</p>
     */
    inline int GetProgressPercent() const { return m_progressPercent; }
    inline bool ProgressPercentHasBeenSet() const { return m_progressPercentHasBeenSet; }
    inline void SetProgressPercent(int value) { m_progressPercentHasBeenSet = true; m_progressPercent = value; }
    inline MigrationTaskSummary& WithProgressPercent(int value) { SetProgressPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detail information of what is being done within the overall status state.</p>
     */
    inline const Aws::String& GetStatusDetail() const { return m_statusDetail; }
    inline bool StatusDetailHasBeenSet() const { return m_statusDetailHasBeenSet; }
    template<typename StatusDetailT = Aws::String>
    void SetStatusDetail(StatusDetailT&& value) { m_statusDetailHasBeenSet = true; m_statusDetail = std::forward<StatusDetailT>(value); }
    template<typename StatusDetailT = Aws::String>
    MigrationTaskSummary& WithStatusDetail(StatusDetailT&& value) { SetStatusDetail(std::forward<StatusDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the task was gathered.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const { return m_updateDateTime; }
    inline bool UpdateDateTimeHasBeenSet() const { return m_updateDateTimeHasBeenSet; }
    template<typename UpdateDateTimeT = Aws::Utils::DateTime>
    void SetUpdateDateTime(UpdateDateTimeT&& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = std::forward<UpdateDateTimeT>(value); }
    template<typename UpdateDateTimeT = Aws::Utils::DateTime>
    MigrationTaskSummary& WithUpdateDateTime(UpdateDateTimeT&& value) { SetUpdateDateTime(std::forward<UpdateDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_progressUpdateStream;
    bool m_progressUpdateStreamHasBeenSet = false;

    Aws::String m_migrationTaskName;
    bool m_migrationTaskNameHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_progressPercent{0};
    bool m_progressPercentHasBeenSet = false;

    Aws::String m_statusDetail;
    bool m_statusDetailHasBeenSet = false;

    Aws::Utils::DateTime m_updateDateTime{};
    bool m_updateDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
