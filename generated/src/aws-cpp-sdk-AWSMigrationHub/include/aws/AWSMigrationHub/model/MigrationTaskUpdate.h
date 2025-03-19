/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/AWSMigrationHub/model/UpdateType.h>
#include <aws/AWSMigrationHub/model/Task.h>
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
   * <p>A migration-task progress update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/MigrationTaskUpdate">AWS
   * API Reference</a></p>
   */
  class MigrationTaskUpdate
  {
  public:
    AWS_MIGRATIONHUB_API MigrationTaskUpdate() = default;
    AWS_MIGRATIONHUB_API MigrationTaskUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUB_API MigrationTaskUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp for the update.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const { return m_updateDateTime; }
    inline bool UpdateDateTimeHasBeenSet() const { return m_updateDateTimeHasBeenSet; }
    template<typename UpdateDateTimeT = Aws::Utils::DateTime>
    void SetUpdateDateTime(UpdateDateTimeT&& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = std::forward<UpdateDateTimeT>(value); }
    template<typename UpdateDateTimeT = Aws::Utils::DateTime>
    MigrationTaskUpdate& WithUpdateDateTime(UpdateDateTimeT&& value) { SetUpdateDateTime(std::forward<UpdateDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the update.</p>
     */
    inline UpdateType GetUpdateType() const { return m_updateType; }
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }
    inline void SetUpdateType(UpdateType value) { m_updateTypeHasBeenSet = true; m_updateType = value; }
    inline MigrationTaskUpdate& WithUpdateType(UpdateType value) { SetUpdateType(value); return *this;}
    ///@}

    ///@{
    
    inline const Task& GetMigrationTaskState() const { return m_migrationTaskState; }
    inline bool MigrationTaskStateHasBeenSet() const { return m_migrationTaskStateHasBeenSet; }
    template<typename MigrationTaskStateT = Task>
    void SetMigrationTaskState(MigrationTaskStateT&& value) { m_migrationTaskStateHasBeenSet = true; m_migrationTaskState = std::forward<MigrationTaskStateT>(value); }
    template<typename MigrationTaskStateT = Task>
    MigrationTaskUpdate& WithMigrationTaskState(MigrationTaskStateT&& value) { SetMigrationTaskState(std::forward<MigrationTaskStateT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_updateDateTime{};
    bool m_updateDateTimeHasBeenSet = false;

    UpdateType m_updateType{UpdateType::NOT_SET};
    bool m_updateTypeHasBeenSet = false;

    Task m_migrationTaskState;
    bool m_migrationTaskStateHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
