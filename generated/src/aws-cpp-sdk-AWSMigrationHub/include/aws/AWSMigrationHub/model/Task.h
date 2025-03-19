/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Task
  {
  public:
    AWS_MIGRATIONHUB_API Task() = default;
    AWS_MIGRATIONHUB_API Task(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUB_API Task& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Status of the task - Not Started, In-Progress, Complete.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline Task& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of task status as notified by a migration tool. A tool might use this
     * field to provide clarifying information about the status that is unique to that
     * tool or that explains an error state.</p>
     */
    inline const Aws::String& GetStatusDetail() const { return m_statusDetail; }
    inline bool StatusDetailHasBeenSet() const { return m_statusDetailHasBeenSet; }
    template<typename StatusDetailT = Aws::String>
    void SetStatusDetail(StatusDetailT&& value) { m_statusDetailHasBeenSet = true; m_statusDetail = std::forward<StatusDetailT>(value); }
    template<typename StatusDetailT = Aws::String>
    Task& WithStatusDetail(StatusDetailT&& value) { SetStatusDetail(std::forward<StatusDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indication of the percentage completion of the task.</p>
     */
    inline int GetProgressPercent() const { return m_progressPercent; }
    inline bool ProgressPercentHasBeenSet() const { return m_progressPercentHasBeenSet; }
    inline void SetProgressPercent(int value) { m_progressPercentHasBeenSet = true; m_progressPercent = value; }
    inline Task& WithProgressPercent(int value) { SetProgressPercent(value); return *this;}
    ///@}
  private:

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusDetail;
    bool m_statusDetailHasBeenSet = false;

    int m_progressPercent{0};
    bool m_progressPercentHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
