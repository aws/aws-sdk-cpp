/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/AWSMigrationHub/model/Task.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/AWSMigrationHub/model/ResourceAttribute.h>
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
   * <p>Represents a migration task in a migration tool.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/MigrationTask">AWS
   * API Reference</a></p>
   */
  class MigrationTask
  {
  public:
    AWS_MIGRATIONHUB_API MigrationTask() = default;
    AWS_MIGRATIONHUB_API MigrationTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUB_API MigrationTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A name that identifies the vendor of the migration tool being used.</p>
     */
    inline const Aws::String& GetProgressUpdateStream() const { return m_progressUpdateStream; }
    inline bool ProgressUpdateStreamHasBeenSet() const { return m_progressUpdateStreamHasBeenSet; }
    template<typename ProgressUpdateStreamT = Aws::String>
    void SetProgressUpdateStream(ProgressUpdateStreamT&& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = std::forward<ProgressUpdateStreamT>(value); }
    template<typename ProgressUpdateStreamT = Aws::String>
    MigrationTask& WithProgressUpdateStream(ProgressUpdateStreamT&& value) { SetProgressUpdateStream(std::forward<ProgressUpdateStreamT>(value)); return *this;}
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
    MigrationTask& WithMigrationTaskName(MigrationTaskNameT&& value) { SetMigrationTaskName(std::forward<MigrationTaskNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Task object encapsulating task information.</p>
     */
    inline const Task& GetTask() const { return m_task; }
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }
    template<typename TaskT = Task>
    void SetTask(TaskT&& value) { m_taskHasBeenSet = true; m_task = std::forward<TaskT>(value); }
    template<typename TaskT = Task>
    MigrationTask& WithTask(TaskT&& value) { SetTask(std::forward<TaskT>(value)); return *this;}
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
    MigrationTask& WithUpdateDateTime(UpdateDateTimeT&& value) { SetUpdateDateTime(std::forward<UpdateDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the resource that is being migrated. This data will be used
     * to map the task to a resource in the Application Discovery Service
     * repository.</p>
     */
    inline const Aws::Vector<ResourceAttribute>& GetResourceAttributeList() const { return m_resourceAttributeList; }
    inline bool ResourceAttributeListHasBeenSet() const { return m_resourceAttributeListHasBeenSet; }
    template<typename ResourceAttributeListT = Aws::Vector<ResourceAttribute>>
    void SetResourceAttributeList(ResourceAttributeListT&& value) { m_resourceAttributeListHasBeenSet = true; m_resourceAttributeList = std::forward<ResourceAttributeListT>(value); }
    template<typename ResourceAttributeListT = Aws::Vector<ResourceAttribute>>
    MigrationTask& WithResourceAttributeList(ResourceAttributeListT&& value) { SetResourceAttributeList(std::forward<ResourceAttributeListT>(value)); return *this;}
    template<typename ResourceAttributeListT = ResourceAttribute>
    MigrationTask& AddResourceAttributeList(ResourceAttributeListT&& value) { m_resourceAttributeListHasBeenSet = true; m_resourceAttributeList.emplace_back(std::forward<ResourceAttributeListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_progressUpdateStream;
    bool m_progressUpdateStreamHasBeenSet = false;

    Aws::String m_migrationTaskName;
    bool m_migrationTaskNameHasBeenSet = false;

    Task m_task;
    bool m_taskHasBeenSet = false;

    Aws::Utils::DateTime m_updateDateTime{};
    bool m_updateDateTimeHasBeenSet = false;

    Aws::Vector<ResourceAttribute> m_resourceAttributeList;
    bool m_resourceAttributeListHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
