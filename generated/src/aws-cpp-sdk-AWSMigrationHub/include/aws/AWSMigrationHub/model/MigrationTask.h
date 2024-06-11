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
    AWS_MIGRATIONHUB_API MigrationTask();
    AWS_MIGRATIONHUB_API MigrationTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUB_API MigrationTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A name that identifies the vendor of the migration tool being used.</p>
     */
    inline const Aws::String& GetProgressUpdateStream() const{ return m_progressUpdateStream; }
    inline bool ProgressUpdateStreamHasBeenSet() const { return m_progressUpdateStreamHasBeenSet; }
    inline void SetProgressUpdateStream(const Aws::String& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = value; }
    inline void SetProgressUpdateStream(Aws::String&& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = std::move(value); }
    inline void SetProgressUpdateStream(const char* value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream.assign(value); }
    inline MigrationTask& WithProgressUpdateStream(const Aws::String& value) { SetProgressUpdateStream(value); return *this;}
    inline MigrationTask& WithProgressUpdateStream(Aws::String&& value) { SetProgressUpdateStream(std::move(value)); return *this;}
    inline MigrationTask& WithProgressUpdateStream(const char* value) { SetProgressUpdateStream(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier that references the migration task. <i>Do not store
     * personal data in this field.</i> </p>
     */
    inline const Aws::String& GetMigrationTaskName() const{ return m_migrationTaskName; }
    inline bool MigrationTaskNameHasBeenSet() const { return m_migrationTaskNameHasBeenSet; }
    inline void SetMigrationTaskName(const Aws::String& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = value; }
    inline void SetMigrationTaskName(Aws::String&& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = std::move(value); }
    inline void SetMigrationTaskName(const char* value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName.assign(value); }
    inline MigrationTask& WithMigrationTaskName(const Aws::String& value) { SetMigrationTaskName(value); return *this;}
    inline MigrationTask& WithMigrationTaskName(Aws::String&& value) { SetMigrationTaskName(std::move(value)); return *this;}
    inline MigrationTask& WithMigrationTaskName(const char* value) { SetMigrationTaskName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Task object encapsulating task information.</p>
     */
    inline const Task& GetTask() const{ return m_task; }
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }
    inline void SetTask(const Task& value) { m_taskHasBeenSet = true; m_task = value; }
    inline void SetTask(Task&& value) { m_taskHasBeenSet = true; m_task = std::move(value); }
    inline MigrationTask& WithTask(const Task& value) { SetTask(value); return *this;}
    inline MigrationTask& WithTask(Task&& value) { SetTask(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the task was gathered.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }
    inline bool UpdateDateTimeHasBeenSet() const { return m_updateDateTimeHasBeenSet; }
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = value; }
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = std::move(value); }
    inline MigrationTask& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}
    inline MigrationTask& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the resource that is being migrated. This data will be used
     * to map the task to a resource in the Application Discovery Service
     * repository.</p>
     */
    inline const Aws::Vector<ResourceAttribute>& GetResourceAttributeList() const{ return m_resourceAttributeList; }
    inline bool ResourceAttributeListHasBeenSet() const { return m_resourceAttributeListHasBeenSet; }
    inline void SetResourceAttributeList(const Aws::Vector<ResourceAttribute>& value) { m_resourceAttributeListHasBeenSet = true; m_resourceAttributeList = value; }
    inline void SetResourceAttributeList(Aws::Vector<ResourceAttribute>&& value) { m_resourceAttributeListHasBeenSet = true; m_resourceAttributeList = std::move(value); }
    inline MigrationTask& WithResourceAttributeList(const Aws::Vector<ResourceAttribute>& value) { SetResourceAttributeList(value); return *this;}
    inline MigrationTask& WithResourceAttributeList(Aws::Vector<ResourceAttribute>&& value) { SetResourceAttributeList(std::move(value)); return *this;}
    inline MigrationTask& AddResourceAttributeList(const ResourceAttribute& value) { m_resourceAttributeListHasBeenSet = true; m_resourceAttributeList.push_back(value); return *this; }
    inline MigrationTask& AddResourceAttributeList(ResourceAttribute&& value) { m_resourceAttributeListHasBeenSet = true; m_resourceAttributeList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_progressUpdateStream;
    bool m_progressUpdateStreamHasBeenSet = false;

    Aws::String m_migrationTaskName;
    bool m_migrationTaskNameHasBeenSet = false;

    Task m_task;
    bool m_taskHasBeenSet = false;

    Aws::Utils::DateTime m_updateDateTime;
    bool m_updateDateTimeHasBeenSet = false;

    Aws::Vector<ResourceAttribute> m_resourceAttributeList;
    bool m_resourceAttributeListHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
