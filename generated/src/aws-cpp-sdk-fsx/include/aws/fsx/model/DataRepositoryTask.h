/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/DataRepositoryTaskLifecycle.h>
#include <aws/fsx/model/DataRepositoryTaskType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/DataRepositoryTaskFailureDetails.h>
#include <aws/fsx/model/DataRepositoryTaskStatus.h>
#include <aws/fsx/model/CompletionReport.h>
#include <aws/fsx/model/Tag.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>A description of the data repository task. You use data repository tasks to
   * perform bulk transfer operations between an Amazon FSx for Lustre file system
   * and a linked data repository. An Amazon File Cache resource uses a task to
   * automatically release files from the cache.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DataRepositoryTask">AWS
   * API Reference</a></p>
   */
  class DataRepositoryTask
  {
  public:
    AWS_FSX_API DataRepositoryTask();
    AWS_FSX_API DataRepositoryTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DataRepositoryTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The system-generated, unique 17-digit ID of the data repository task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The system-generated, unique 17-digit ID of the data repository task.</p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p>The system-generated, unique 17-digit ID of the data repository task.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>The system-generated, unique 17-digit ID of the data repository task.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>The system-generated, unique 17-digit ID of the data repository task.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>The system-generated, unique 17-digit ID of the data repository task.</p>
     */
    inline DataRepositoryTask& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The system-generated, unique 17-digit ID of the data repository task.</p>
     */
    inline DataRepositoryTask& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The system-generated, unique 17-digit ID of the data repository task.</p>
     */
    inline DataRepositoryTask& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    /**
     * <p>The lifecycle status of the data repository task, as follows:</p> <ul> <li>
     * <p> <code>PENDING</code> - The task has not started.</p> </li> <li> <p>
     * <code>EXECUTING</code> - The task is in process.</p> </li> <li> <p>
     * <code>FAILED</code> - The task was not able to be completed. For example, there
     * may be files the task failed to process. The
     * <a>DataRepositoryTaskFailureDetails</a> property provides more information about
     * task failures.</p> </li> <li> <p> <code>SUCCEEDED</code> - The task has
     * completed successfully.</p> </li> <li> <p> <code>CANCELED</code> - The task was
     * canceled and it did not complete.</p> </li> <li> <p> <code>CANCELING</code> -
     * The task is in process of being canceled.</p> </li> </ul>  <p>You cannot
     * delete an FSx for Lustre file system if there are data repository tasks for the
     * file system in the <code>PENDING</code> or <code>EXECUTING</code> states. Please
     * retry when the data repository task is finished (with a status of
     * <code>CANCELED</code>, <code>SUCCEEDED</code>, or <code>FAILED</code>). You can
     * use the DescribeDataRepositoryTask action to monitor the task status. Contact
     * the FSx team if you need to delete your file system immediately.</p> 
     */
    inline const DataRepositoryTaskLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The lifecycle status of the data repository task, as follows:</p> <ul> <li>
     * <p> <code>PENDING</code> - The task has not started.</p> </li> <li> <p>
     * <code>EXECUTING</code> - The task is in process.</p> </li> <li> <p>
     * <code>FAILED</code> - The task was not able to be completed. For example, there
     * may be files the task failed to process. The
     * <a>DataRepositoryTaskFailureDetails</a> property provides more information about
     * task failures.</p> </li> <li> <p> <code>SUCCEEDED</code> - The task has
     * completed successfully.</p> </li> <li> <p> <code>CANCELED</code> - The task was
     * canceled and it did not complete.</p> </li> <li> <p> <code>CANCELING</code> -
     * The task is in process of being canceled.</p> </li> </ul>  <p>You cannot
     * delete an FSx for Lustre file system if there are data repository tasks for the
     * file system in the <code>PENDING</code> or <code>EXECUTING</code> states. Please
     * retry when the data repository task is finished (with a status of
     * <code>CANCELED</code>, <code>SUCCEEDED</code>, or <code>FAILED</code>). You can
     * use the DescribeDataRepositoryTask action to monitor the task status. Contact
     * the FSx team if you need to delete your file system immediately.</p> 
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>The lifecycle status of the data repository task, as follows:</p> <ul> <li>
     * <p> <code>PENDING</code> - The task has not started.</p> </li> <li> <p>
     * <code>EXECUTING</code> - The task is in process.</p> </li> <li> <p>
     * <code>FAILED</code> - The task was not able to be completed. For example, there
     * may be files the task failed to process. The
     * <a>DataRepositoryTaskFailureDetails</a> property provides more information about
     * task failures.</p> </li> <li> <p> <code>SUCCEEDED</code> - The task has
     * completed successfully.</p> </li> <li> <p> <code>CANCELED</code> - The task was
     * canceled and it did not complete.</p> </li> <li> <p> <code>CANCELING</code> -
     * The task is in process of being canceled.</p> </li> </ul>  <p>You cannot
     * delete an FSx for Lustre file system if there are data repository tasks for the
     * file system in the <code>PENDING</code> or <code>EXECUTING</code> states. Please
     * retry when the data repository task is finished (with a status of
     * <code>CANCELED</code>, <code>SUCCEEDED</code>, or <code>FAILED</code>). You can
     * use the DescribeDataRepositoryTask action to monitor the task status. Contact
     * the FSx team if you need to delete your file system immediately.</p> 
     */
    inline void SetLifecycle(const DataRepositoryTaskLifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>The lifecycle status of the data repository task, as follows:</p> <ul> <li>
     * <p> <code>PENDING</code> - The task has not started.</p> </li> <li> <p>
     * <code>EXECUTING</code> - The task is in process.</p> </li> <li> <p>
     * <code>FAILED</code> - The task was not able to be completed. For example, there
     * may be files the task failed to process. The
     * <a>DataRepositoryTaskFailureDetails</a> property provides more information about
     * task failures.</p> </li> <li> <p> <code>SUCCEEDED</code> - The task has
     * completed successfully.</p> </li> <li> <p> <code>CANCELED</code> - The task was
     * canceled and it did not complete.</p> </li> <li> <p> <code>CANCELING</code> -
     * The task is in process of being canceled.</p> </li> </ul>  <p>You cannot
     * delete an FSx for Lustre file system if there are data repository tasks for the
     * file system in the <code>PENDING</code> or <code>EXECUTING</code> states. Please
     * retry when the data repository task is finished (with a status of
     * <code>CANCELED</code>, <code>SUCCEEDED</code>, or <code>FAILED</code>). You can
     * use the DescribeDataRepositoryTask action to monitor the task status. Contact
     * the FSx team if you need to delete your file system immediately.</p> 
     */
    inline void SetLifecycle(DataRepositoryTaskLifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>The lifecycle status of the data repository task, as follows:</p> <ul> <li>
     * <p> <code>PENDING</code> - The task has not started.</p> </li> <li> <p>
     * <code>EXECUTING</code> - The task is in process.</p> </li> <li> <p>
     * <code>FAILED</code> - The task was not able to be completed. For example, there
     * may be files the task failed to process. The
     * <a>DataRepositoryTaskFailureDetails</a> property provides more information about
     * task failures.</p> </li> <li> <p> <code>SUCCEEDED</code> - The task has
     * completed successfully.</p> </li> <li> <p> <code>CANCELED</code> - The task was
     * canceled and it did not complete.</p> </li> <li> <p> <code>CANCELING</code> -
     * The task is in process of being canceled.</p> </li> </ul>  <p>You cannot
     * delete an FSx for Lustre file system if there are data repository tasks for the
     * file system in the <code>PENDING</code> or <code>EXECUTING</code> states. Please
     * retry when the data repository task is finished (with a status of
     * <code>CANCELED</code>, <code>SUCCEEDED</code>, or <code>FAILED</code>). You can
     * use the DescribeDataRepositoryTask action to monitor the task status. Contact
     * the FSx team if you need to delete your file system immediately.</p> 
     */
    inline DataRepositoryTask& WithLifecycle(const DataRepositoryTaskLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The lifecycle status of the data repository task, as follows:</p> <ul> <li>
     * <p> <code>PENDING</code> - The task has not started.</p> </li> <li> <p>
     * <code>EXECUTING</code> - The task is in process.</p> </li> <li> <p>
     * <code>FAILED</code> - The task was not able to be completed. For example, there
     * may be files the task failed to process. The
     * <a>DataRepositoryTaskFailureDetails</a> property provides more information about
     * task failures.</p> </li> <li> <p> <code>SUCCEEDED</code> - The task has
     * completed successfully.</p> </li> <li> <p> <code>CANCELED</code> - The task was
     * canceled and it did not complete.</p> </li> <li> <p> <code>CANCELING</code> -
     * The task is in process of being canceled.</p> </li> </ul>  <p>You cannot
     * delete an FSx for Lustre file system if there are data repository tasks for the
     * file system in the <code>PENDING</code> or <code>EXECUTING</code> states. Please
     * retry when the data repository task is finished (with a status of
     * <code>CANCELED</code>, <code>SUCCEEDED</code>, or <code>FAILED</code>). You can
     * use the DescribeDataRepositoryTask action to monitor the task status. Contact
     * the FSx team if you need to delete your file system immediately.</p> 
     */
    inline DataRepositoryTask& WithLifecycle(DataRepositoryTaskLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    /**
     * <p>The type of data repository task.</p> <ul> <li> <p>
     * <code>EXPORT_TO_REPOSITORY</code> tasks export from your Amazon FSx for Lustre
     * file system to a linked data repository.</p> </li> <li> <p>
     * <code>IMPORT_METADATA_FROM_REPOSITORY</code> tasks import metadata changes from
     * a linked S3 bucket to your Amazon FSx for Lustre file system.</p> </li> <li> <p>
     * <code>AUTO_RELEASE_DATA</code> tasks automatically release files from an Amazon
     * File Cache resource.</p> </li> </ul>
     */
    inline const DataRepositoryTaskType& GetType() const{ return m_type; }

    /**
     * <p>The type of data repository task.</p> <ul> <li> <p>
     * <code>EXPORT_TO_REPOSITORY</code> tasks export from your Amazon FSx for Lustre
     * file system to a linked data repository.</p> </li> <li> <p>
     * <code>IMPORT_METADATA_FROM_REPOSITORY</code> tasks import metadata changes from
     * a linked S3 bucket to your Amazon FSx for Lustre file system.</p> </li> <li> <p>
     * <code>AUTO_RELEASE_DATA</code> tasks automatically release files from an Amazon
     * File Cache resource.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of data repository task.</p> <ul> <li> <p>
     * <code>EXPORT_TO_REPOSITORY</code> tasks export from your Amazon FSx for Lustre
     * file system to a linked data repository.</p> </li> <li> <p>
     * <code>IMPORT_METADATA_FROM_REPOSITORY</code> tasks import metadata changes from
     * a linked S3 bucket to your Amazon FSx for Lustre file system.</p> </li> <li> <p>
     * <code>AUTO_RELEASE_DATA</code> tasks automatically release files from an Amazon
     * File Cache resource.</p> </li> </ul>
     */
    inline void SetType(const DataRepositoryTaskType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of data repository task.</p> <ul> <li> <p>
     * <code>EXPORT_TO_REPOSITORY</code> tasks export from your Amazon FSx for Lustre
     * file system to a linked data repository.</p> </li> <li> <p>
     * <code>IMPORT_METADATA_FROM_REPOSITORY</code> tasks import metadata changes from
     * a linked S3 bucket to your Amazon FSx for Lustre file system.</p> </li> <li> <p>
     * <code>AUTO_RELEASE_DATA</code> tasks automatically release files from an Amazon
     * File Cache resource.</p> </li> </ul>
     */
    inline void SetType(DataRepositoryTaskType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of data repository task.</p> <ul> <li> <p>
     * <code>EXPORT_TO_REPOSITORY</code> tasks export from your Amazon FSx for Lustre
     * file system to a linked data repository.</p> </li> <li> <p>
     * <code>IMPORT_METADATA_FROM_REPOSITORY</code> tasks import metadata changes from
     * a linked S3 bucket to your Amazon FSx for Lustre file system.</p> </li> <li> <p>
     * <code>AUTO_RELEASE_DATA</code> tasks automatically release files from an Amazon
     * File Cache resource.</p> </li> </ul>
     */
    inline DataRepositoryTask& WithType(const DataRepositoryTaskType& value) { SetType(value); return *this;}

    /**
     * <p>The type of data repository task.</p> <ul> <li> <p>
     * <code>EXPORT_TO_REPOSITORY</code> tasks export from your Amazon FSx for Lustre
     * file system to a linked data repository.</p> </li> <li> <p>
     * <code>IMPORT_METADATA_FROM_REPOSITORY</code> tasks import metadata changes from
     * a linked S3 bucket to your Amazon FSx for Lustre file system.</p> </li> <li> <p>
     * <code>AUTO_RELEASE_DATA</code> tasks automatically release files from an Amazon
     * File Cache resource.</p> </li> </ul>
     */
    inline DataRepositoryTask& WithType(DataRepositoryTaskType&& value) { SetType(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    
    inline DataRepositoryTask& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    
    inline DataRepositoryTask& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time the system began processing the task.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time the system began processing the task.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time the system began processing the task.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time the system began processing the task.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time the system began processing the task.</p>
     */
    inline DataRepositoryTask& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time the system began processing the task.</p>
     */
    inline DataRepositoryTask& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time the system completed processing the task, populated after the task
     * is complete.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time the system completed processing the task, populated after the task
     * is complete.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time the system completed processing the task, populated after the task
     * is complete.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time the system completed processing the task, populated after the task
     * is complete.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time the system completed processing the task, populated after the task
     * is complete.</p>
     */
    inline DataRepositoryTask& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time the system completed processing the task, populated after the task
     * is complete.</p>
     */
    inline DataRepositoryTask& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    
    inline DataRepositoryTask& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    
    inline DataRepositoryTask& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    
    inline DataRepositoryTask& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline DataRepositoryTask& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline DataRepositoryTask& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline DataRepositoryTask& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline DataRepositoryTask& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The globally unique ID of the file system.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The globally unique ID of the file system.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The globally unique ID of the file system.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The globally unique ID of the file system.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The globally unique ID of the file system.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The globally unique ID of the file system.</p>
     */
    inline DataRepositoryTask& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The globally unique ID of the file system.</p>
     */
    inline DataRepositoryTask& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The globally unique ID of the file system.</p>
     */
    inline DataRepositoryTask& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>An array of paths that specify the data for the data repository task to
     * process. For example, in an EXPORT_TO_REPOSITORY task, the paths specify which
     * data to export to the linked data repository.</p> <p>(Default) If
     * <code>Paths</code> is not specified, Amazon FSx uses the file system root
     * directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPaths() const{ return m_paths; }

    /**
     * <p>An array of paths that specify the data for the data repository task to
     * process. For example, in an EXPORT_TO_REPOSITORY task, the paths specify which
     * data to export to the linked data repository.</p> <p>(Default) If
     * <code>Paths</code> is not specified, Amazon FSx uses the file system root
     * directory.</p>
     */
    inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }

    /**
     * <p>An array of paths that specify the data for the data repository task to
     * process. For example, in an EXPORT_TO_REPOSITORY task, the paths specify which
     * data to export to the linked data repository.</p> <p>(Default) If
     * <code>Paths</code> is not specified, Amazon FSx uses the file system root
     * directory.</p>
     */
    inline void SetPaths(const Aws::Vector<Aws::String>& value) { m_pathsHasBeenSet = true; m_paths = value; }

    /**
     * <p>An array of paths that specify the data for the data repository task to
     * process. For example, in an EXPORT_TO_REPOSITORY task, the paths specify which
     * data to export to the linked data repository.</p> <p>(Default) If
     * <code>Paths</code> is not specified, Amazon FSx uses the file system root
     * directory.</p>
     */
    inline void SetPaths(Aws::Vector<Aws::String>&& value) { m_pathsHasBeenSet = true; m_paths = std::move(value); }

    /**
     * <p>An array of paths that specify the data for the data repository task to
     * process. For example, in an EXPORT_TO_REPOSITORY task, the paths specify which
     * data to export to the linked data repository.</p> <p>(Default) If
     * <code>Paths</code> is not specified, Amazon FSx uses the file system root
     * directory.</p>
     */
    inline DataRepositoryTask& WithPaths(const Aws::Vector<Aws::String>& value) { SetPaths(value); return *this;}

    /**
     * <p>An array of paths that specify the data for the data repository task to
     * process. For example, in an EXPORT_TO_REPOSITORY task, the paths specify which
     * data to export to the linked data repository.</p> <p>(Default) If
     * <code>Paths</code> is not specified, Amazon FSx uses the file system root
     * directory.</p>
     */
    inline DataRepositoryTask& WithPaths(Aws::Vector<Aws::String>&& value) { SetPaths(std::move(value)); return *this;}

    /**
     * <p>An array of paths that specify the data for the data repository task to
     * process. For example, in an EXPORT_TO_REPOSITORY task, the paths specify which
     * data to export to the linked data repository.</p> <p>(Default) If
     * <code>Paths</code> is not specified, Amazon FSx uses the file system root
     * directory.</p>
     */
    inline DataRepositoryTask& AddPaths(const Aws::String& value) { m_pathsHasBeenSet = true; m_paths.push_back(value); return *this; }

    /**
     * <p>An array of paths that specify the data for the data repository task to
     * process. For example, in an EXPORT_TO_REPOSITORY task, the paths specify which
     * data to export to the linked data repository.</p> <p>(Default) If
     * <code>Paths</code> is not specified, Amazon FSx uses the file system root
     * directory.</p>
     */
    inline DataRepositoryTask& AddPaths(Aws::String&& value) { m_pathsHasBeenSet = true; m_paths.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of paths that specify the data for the data repository task to
     * process. For example, in an EXPORT_TO_REPOSITORY task, the paths specify which
     * data to export to the linked data repository.</p> <p>(Default) If
     * <code>Paths</code> is not specified, Amazon FSx uses the file system root
     * directory.</p>
     */
    inline DataRepositoryTask& AddPaths(const char* value) { m_pathsHasBeenSet = true; m_paths.push_back(value); return *this; }


    /**
     * <p>Failure message describing why the task failed, it is populated only when
     * <code>Lifecycle</code> is set to <code>FAILED</code>.</p>
     */
    inline const DataRepositoryTaskFailureDetails& GetFailureDetails() const{ return m_failureDetails; }

    /**
     * <p>Failure message describing why the task failed, it is populated only when
     * <code>Lifecycle</code> is set to <code>FAILED</code>.</p>
     */
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }

    /**
     * <p>Failure message describing why the task failed, it is populated only when
     * <code>Lifecycle</code> is set to <code>FAILED</code>.</p>
     */
    inline void SetFailureDetails(const DataRepositoryTaskFailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }

    /**
     * <p>Failure message describing why the task failed, it is populated only when
     * <code>Lifecycle</code> is set to <code>FAILED</code>.</p>
     */
    inline void SetFailureDetails(DataRepositoryTaskFailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::move(value); }

    /**
     * <p>Failure message describing why the task failed, it is populated only when
     * <code>Lifecycle</code> is set to <code>FAILED</code>.</p>
     */
    inline DataRepositoryTask& WithFailureDetails(const DataRepositoryTaskFailureDetails& value) { SetFailureDetails(value); return *this;}

    /**
     * <p>Failure message describing why the task failed, it is populated only when
     * <code>Lifecycle</code> is set to <code>FAILED</code>.</p>
     */
    inline DataRepositoryTask& WithFailureDetails(DataRepositoryTaskFailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}


    /**
     * <p>Provides the status of the number of files that the task has processed
     * successfully and failed to process.</p>
     */
    inline const DataRepositoryTaskStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Provides the status of the number of files that the task has processed
     * successfully and failed to process.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Provides the status of the number of files that the task has processed
     * successfully and failed to process.</p>
     */
    inline void SetStatus(const DataRepositoryTaskStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Provides the status of the number of files that the task has processed
     * successfully and failed to process.</p>
     */
    inline void SetStatus(DataRepositoryTaskStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Provides the status of the number of files that the task has processed
     * successfully and failed to process.</p>
     */
    inline DataRepositoryTask& WithStatus(const DataRepositoryTaskStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Provides the status of the number of files that the task has processed
     * successfully and failed to process.</p>
     */
    inline DataRepositoryTask& WithStatus(DataRepositoryTaskStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const CompletionReport& GetReport() const{ return m_report; }

    
    inline bool ReportHasBeenSet() const { return m_reportHasBeenSet; }

    
    inline void SetReport(const CompletionReport& value) { m_reportHasBeenSet = true; m_report = value; }

    
    inline void SetReport(CompletionReport&& value) { m_reportHasBeenSet = true; m_report = std::move(value); }

    
    inline DataRepositoryTask& WithReport(const CompletionReport& value) { SetReport(value); return *this;}

    
    inline DataRepositoryTask& WithReport(CompletionReport&& value) { SetReport(std::move(value)); return *this;}


    /**
     * <p>Specifies the amount of data to release, in GiB, by an Amazon File Cache
     * AUTO_RELEASE_DATA task that automatically releases files from the cache.</p>
     */
    inline long long GetCapacityToRelease() const{ return m_capacityToRelease; }

    /**
     * <p>Specifies the amount of data to release, in GiB, by an Amazon File Cache
     * AUTO_RELEASE_DATA task that automatically releases files from the cache.</p>
     */
    inline bool CapacityToReleaseHasBeenSet() const { return m_capacityToReleaseHasBeenSet; }

    /**
     * <p>Specifies the amount of data to release, in GiB, by an Amazon File Cache
     * AUTO_RELEASE_DATA task that automatically releases files from the cache.</p>
     */
    inline void SetCapacityToRelease(long long value) { m_capacityToReleaseHasBeenSet = true; m_capacityToRelease = value; }

    /**
     * <p>Specifies the amount of data to release, in GiB, by an Amazon File Cache
     * AUTO_RELEASE_DATA task that automatically releases files from the cache.</p>
     */
    inline DataRepositoryTask& WithCapacityToRelease(long long value) { SetCapacityToRelease(value); return *this;}


    /**
     * <p>The system-generated, unique ID of the cache.</p>
     */
    inline const Aws::String& GetFileCacheId() const{ return m_fileCacheId; }

    /**
     * <p>The system-generated, unique ID of the cache.</p>
     */
    inline bool FileCacheIdHasBeenSet() const { return m_fileCacheIdHasBeenSet; }

    /**
     * <p>The system-generated, unique ID of the cache.</p>
     */
    inline void SetFileCacheId(const Aws::String& value) { m_fileCacheIdHasBeenSet = true; m_fileCacheId = value; }

    /**
     * <p>The system-generated, unique ID of the cache.</p>
     */
    inline void SetFileCacheId(Aws::String&& value) { m_fileCacheIdHasBeenSet = true; m_fileCacheId = std::move(value); }

    /**
     * <p>The system-generated, unique ID of the cache.</p>
     */
    inline void SetFileCacheId(const char* value) { m_fileCacheIdHasBeenSet = true; m_fileCacheId.assign(value); }

    /**
     * <p>The system-generated, unique ID of the cache.</p>
     */
    inline DataRepositoryTask& WithFileCacheId(const Aws::String& value) { SetFileCacheId(value); return *this;}

    /**
     * <p>The system-generated, unique ID of the cache.</p>
     */
    inline DataRepositoryTask& WithFileCacheId(Aws::String&& value) { SetFileCacheId(std::move(value)); return *this;}

    /**
     * <p>The system-generated, unique ID of the cache.</p>
     */
    inline DataRepositoryTask& WithFileCacheId(const char* value) { SetFileCacheId(value); return *this;}

  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    DataRepositoryTaskLifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    DataRepositoryTaskType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_paths;
    bool m_pathsHasBeenSet = false;

    DataRepositoryTaskFailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet = false;

    DataRepositoryTaskStatus m_status;
    bool m_statusHasBeenSet = false;

    CompletionReport m_report;
    bool m_reportHasBeenSet = false;

    long long m_capacityToRelease;
    bool m_capacityToReleaseHasBeenSet = false;

    Aws::String m_fileCacheId;
    bool m_fileCacheIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
