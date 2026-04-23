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
  class AWS_MIGRATIONHUB_API MigrationTask
  {
  public:
    MigrationTask();
    MigrationTask(Aws::Utils::Json::JsonView jsonValue);
    MigrationTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A name that identifies the vendor of the migration tool being used.</p>
     */
    inline const Aws::String& GetProgressUpdateStream() const{ return m_progressUpdateStream; }

    /**
     * <p>A name that identifies the vendor of the migration tool being used.</p>
     */
    inline bool ProgressUpdateStreamHasBeenSet() const { return m_progressUpdateStreamHasBeenSet; }

    /**
     * <p>A name that identifies the vendor of the migration tool being used.</p>
     */
    inline void SetProgressUpdateStream(const Aws::String& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = value; }

    /**
     * <p>A name that identifies the vendor of the migration tool being used.</p>
     */
    inline void SetProgressUpdateStream(Aws::String&& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = std::move(value); }

    /**
     * <p>A name that identifies the vendor of the migration tool being used.</p>
     */
    inline void SetProgressUpdateStream(const char* value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream.assign(value); }

    /**
     * <p>A name that identifies the vendor of the migration tool being used.</p>
     */
    inline MigrationTask& WithProgressUpdateStream(const Aws::String& value) { SetProgressUpdateStream(value); return *this;}

    /**
     * <p>A name that identifies the vendor of the migration tool being used.</p>
     */
    inline MigrationTask& WithProgressUpdateStream(Aws::String&& value) { SetProgressUpdateStream(std::move(value)); return *this;}

    /**
     * <p>A name that identifies the vendor of the migration tool being used.</p>
     */
    inline MigrationTask& WithProgressUpdateStream(const char* value) { SetProgressUpdateStream(value); return *this;}


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
    inline MigrationTask& WithMigrationTaskName(const Aws::String& value) { SetMigrationTaskName(value); return *this;}

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline MigrationTask& WithMigrationTaskName(Aws::String&& value) { SetMigrationTaskName(std::move(value)); return *this;}

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline MigrationTask& WithMigrationTaskName(const char* value) { SetMigrationTaskName(value); return *this;}


    /**
     * <p>Task object encapsulating task information.</p>
     */
    inline const Task& GetTask() const{ return m_task; }

    /**
     * <p>Task object encapsulating task information.</p>
     */
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }

    /**
     * <p>Task object encapsulating task information.</p>
     */
    inline void SetTask(const Task& value) { m_taskHasBeenSet = true; m_task = value; }

    /**
     * <p>Task object encapsulating task information.</p>
     */
    inline void SetTask(Task&& value) { m_taskHasBeenSet = true; m_task = std::move(value); }

    /**
     * <p>Task object encapsulating task information.</p>
     */
    inline MigrationTask& WithTask(const Task& value) { SetTask(value); return *this;}

    /**
     * <p>Task object encapsulating task information.</p>
     */
    inline MigrationTask& WithTask(Task&& value) { SetTask(std::move(value)); return *this;}


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
    inline MigrationTask& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}

    /**
     * <p>The timestamp when the task was gathered.</p>
     */
    inline MigrationTask& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<ResourceAttribute>& GetResourceAttributeList() const{ return m_resourceAttributeList; }

    /**
     * <p/>
     */
    inline bool ResourceAttributeListHasBeenSet() const { return m_resourceAttributeListHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetResourceAttributeList(const Aws::Vector<ResourceAttribute>& value) { m_resourceAttributeListHasBeenSet = true; m_resourceAttributeList = value; }

    /**
     * <p/>
     */
    inline void SetResourceAttributeList(Aws::Vector<ResourceAttribute>&& value) { m_resourceAttributeListHasBeenSet = true; m_resourceAttributeList = std::move(value); }

    /**
     * <p/>
     */
    inline MigrationTask& WithResourceAttributeList(const Aws::Vector<ResourceAttribute>& value) { SetResourceAttributeList(value); return *this;}

    /**
     * <p/>
     */
    inline MigrationTask& WithResourceAttributeList(Aws::Vector<ResourceAttribute>&& value) { SetResourceAttributeList(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline MigrationTask& AddResourceAttributeList(const ResourceAttribute& value) { m_resourceAttributeListHasBeenSet = true; m_resourceAttributeList.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline MigrationTask& AddResourceAttributeList(ResourceAttribute&& value) { m_resourceAttributeListHasBeenSet = true; m_resourceAttributeList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_progressUpdateStream;
    bool m_progressUpdateStreamHasBeenSet;

    Aws::String m_migrationTaskName;
    bool m_migrationTaskNameHasBeenSet;

    Task m_task;
    bool m_taskHasBeenSet;

    Aws::Utils::DateTime m_updateDateTime;
    bool m_updateDateTimeHasBeenSet;

    Aws::Vector<ResourceAttribute> m_resourceAttributeList;
    bool m_resourceAttributeListHasBeenSet;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
