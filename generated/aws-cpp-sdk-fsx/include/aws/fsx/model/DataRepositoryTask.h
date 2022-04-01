﻿/**
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
   * perform bulk transfer operations between your Amazon FSx file system and a
   * linked data repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DataRepositoryTask">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API DataRepositoryTask
  {
  public:
    DataRepositoryTask();
    DataRepositoryTask(Aws::Utils::Json::JsonView jsonValue);
    DataRepositoryTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p> <code>PENDING</code> - Amazon FSx has not started the task.</p> </li> <li>
     * <p> <code>EXECUTING</code> - Amazon FSx is processing the task.</p> </li> <li>
     * <p> <code>FAILED</code> - Amazon FSx was not able to complete the task. For
     * example, there may be files the task failed to process. The
     * <a>DataRepositoryTaskFailureDetails</a> property provides more information about
     * task failures.</p> </li> <li> <p> <code>SUCCEEDED</code> - FSx completed the
     * task successfully.</p> </li> <li> <p> <code>CANCELED</code> - Amazon FSx
     * canceled the task and it did not complete.</p> </li> <li> <p>
     * <code>CANCELING</code> - FSx is in process of canceling the task.</p> </li>
     * </ul>  <p>You cannot delete an FSx for Lustre file system if there are
     * data repository tasks for the file system in the <code>PENDING</code> or
     * <code>EXECUTING</code> states. Please retry when the data repository task is
     * finished (with a status of <code>CANCELED</code>, <code>SUCCEEDED</code>, or
     * <code>FAILED</code>). You can use the DescribeDataRepositoryTask action to
     * monitor the task status. Contact the FSx team if you need to delete your file
     * system immediately.</p> 
     */
    inline const DataRepositoryTaskLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The lifecycle status of the data repository task, as follows:</p> <ul> <li>
     * <p> <code>PENDING</code> - Amazon FSx has not started the task.</p> </li> <li>
     * <p> <code>EXECUTING</code> - Amazon FSx is processing the task.</p> </li> <li>
     * <p> <code>FAILED</code> - Amazon FSx was not able to complete the task. For
     * example, there may be files the task failed to process. The
     * <a>DataRepositoryTaskFailureDetails</a> property provides more information about
     * task failures.</p> </li> <li> <p> <code>SUCCEEDED</code> - FSx completed the
     * task successfully.</p> </li> <li> <p> <code>CANCELED</code> - Amazon FSx
     * canceled the task and it did not complete.</p> </li> <li> <p>
     * <code>CANCELING</code> - FSx is in process of canceling the task.</p> </li>
     * </ul>  <p>You cannot delete an FSx for Lustre file system if there are
     * data repository tasks for the file system in the <code>PENDING</code> or
     * <code>EXECUTING</code> states. Please retry when the data repository task is
     * finished (with a status of <code>CANCELED</code>, <code>SUCCEEDED</code>, or
     * <code>FAILED</code>). You can use the DescribeDataRepositoryTask action to
     * monitor the task status. Contact the FSx team if you need to delete your file
     * system immediately.</p> 
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>The lifecycle status of the data repository task, as follows:</p> <ul> <li>
     * <p> <code>PENDING</code> - Amazon FSx has not started the task.</p> </li> <li>
     * <p> <code>EXECUTING</code> - Amazon FSx is processing the task.</p> </li> <li>
     * <p> <code>FAILED</code> - Amazon FSx was not able to complete the task. For
     * example, there may be files the task failed to process. The
     * <a>DataRepositoryTaskFailureDetails</a> property provides more information about
     * task failures.</p> </li> <li> <p> <code>SUCCEEDED</code> - FSx completed the
     * task successfully.</p> </li> <li> <p> <code>CANCELED</code> - Amazon FSx
     * canceled the task and it did not complete.</p> </li> <li> <p>
     * <code>CANCELING</code> - FSx is in process of canceling the task.</p> </li>
     * </ul>  <p>You cannot delete an FSx for Lustre file system if there are
     * data repository tasks for the file system in the <code>PENDING</code> or
     * <code>EXECUTING</code> states. Please retry when the data repository task is
     * finished (with a status of <code>CANCELED</code>, <code>SUCCEEDED</code>, or
     * <code>FAILED</code>). You can use the DescribeDataRepositoryTask action to
     * monitor the task status. Contact the FSx team if you need to delete your file
     * system immediately.</p> 
     */
    inline void SetLifecycle(const DataRepositoryTaskLifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>The lifecycle status of the data repository task, as follows:</p> <ul> <li>
     * <p> <code>PENDING</code> - Amazon FSx has not started the task.</p> </li> <li>
     * <p> <code>EXECUTING</code> - Amazon FSx is processing the task.</p> </li> <li>
     * <p> <code>FAILED</code> - Amazon FSx was not able to complete the task. For
     * example, there may be files the task failed to process. The
     * <a>DataRepositoryTaskFailureDetails</a> property provides more information about
     * task failures.</p> </li> <li> <p> <code>SUCCEEDED</code> - FSx completed the
     * task successfully.</p> </li> <li> <p> <code>CANCELED</code> - Amazon FSx
     * canceled the task and it did not complete.</p> </li> <li> <p>
     * <code>CANCELING</code> - FSx is in process of canceling the task.</p> </li>
     * </ul>  <p>You cannot delete an FSx for Lustre file system if there are
     * data repository tasks for the file system in the <code>PENDING</code> or
     * <code>EXECUTING</code> states. Please retry when the data repository task is
     * finished (with a status of <code>CANCELED</code>, <code>SUCCEEDED</code>, or
     * <code>FAILED</code>). You can use the DescribeDataRepositoryTask action to
     * monitor the task status. Contact the FSx team if you need to delete your file
     * system immediately.</p> 
     */
    inline void SetLifecycle(DataRepositoryTaskLifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>The lifecycle status of the data repository task, as follows:</p> <ul> <li>
     * <p> <code>PENDING</code> - Amazon FSx has not started the task.</p> </li> <li>
     * <p> <code>EXECUTING</code> - Amazon FSx is processing the task.</p> </li> <li>
     * <p> <code>FAILED</code> - Amazon FSx was not able to complete the task. For
     * example, there may be files the task failed to process. The
     * <a>DataRepositoryTaskFailureDetails</a> property provides more information about
     * task failures.</p> </li> <li> <p> <code>SUCCEEDED</code> - FSx completed the
     * task successfully.</p> </li> <li> <p> <code>CANCELED</code> - Amazon FSx
     * canceled the task and it did not complete.</p> </li> <li> <p>
     * <code>CANCELING</code> - FSx is in process of canceling the task.</p> </li>
     * </ul>  <p>You cannot delete an FSx for Lustre file system if there are
     * data repository tasks for the file system in the <code>PENDING</code> or
     * <code>EXECUTING</code> states. Please retry when the data repository task is
     * finished (with a status of <code>CANCELED</code>, <code>SUCCEEDED</code>, or
     * <code>FAILED</code>). You can use the DescribeDataRepositoryTask action to
     * monitor the task status. Contact the FSx team if you need to delete your file
     * system immediately.</p> 
     */
    inline DataRepositoryTask& WithLifecycle(const DataRepositoryTaskLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The lifecycle status of the data repository task, as follows:</p> <ul> <li>
     * <p> <code>PENDING</code> - Amazon FSx has not started the task.</p> </li> <li>
     * <p> <code>EXECUTING</code> - Amazon FSx is processing the task.</p> </li> <li>
     * <p> <code>FAILED</code> - Amazon FSx was not able to complete the task. For
     * example, there may be files the task failed to process. The
     * <a>DataRepositoryTaskFailureDetails</a> property provides more information about
     * task failures.</p> </li> <li> <p> <code>SUCCEEDED</code> - FSx completed the
     * task successfully.</p> </li> <li> <p> <code>CANCELED</code> - Amazon FSx
     * canceled the task and it did not complete.</p> </li> <li> <p>
     * <code>CANCELING</code> - FSx is in process of canceling the task.</p> </li>
     * </ul>  <p>You cannot delete an FSx for Lustre file system if there are
     * data repository tasks for the file system in the <code>PENDING</code> or
     * <code>EXECUTING</code> states. Please retry when the data repository task is
     * finished (with a status of <code>CANCELED</code>, <code>SUCCEEDED</code>, or
     * <code>FAILED</code>). You can use the DescribeDataRepositoryTask action to
     * monitor the task status. Contact the FSx team if you need to delete your file
     * system immediately.</p> 
     */
    inline DataRepositoryTask& WithLifecycle(DataRepositoryTaskLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    /**
     * <p>The type of data repository task.</p> <ul> <li> <p>The
     * <code>EXPORT_TO_REPOSITORY</code> data repository task exports from your Lustre
     * file system from to a linked S3 bucket.</p> </li> <li> <p>The
     * <code>IMPORT_METADATA_FROM_REPOSITORY</code> data repository task imports
     * metadata changes from a linked S3 bucket to your Lustre file system.</p> </li>
     * </ul>
     */
    inline const DataRepositoryTaskType& GetType() const{ return m_type; }

    /**
     * <p>The type of data repository task.</p> <ul> <li> <p>The
     * <code>EXPORT_TO_REPOSITORY</code> data repository task exports from your Lustre
     * file system from to a linked S3 bucket.</p> </li> <li> <p>The
     * <code>IMPORT_METADATA_FROM_REPOSITORY</code> data repository task imports
     * metadata changes from a linked S3 bucket to your Lustre file system.</p> </li>
     * </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of data repository task.</p> <ul> <li> <p>The
     * <code>EXPORT_TO_REPOSITORY</code> data repository task exports from your Lustre
     * file system from to a linked S3 bucket.</p> </li> <li> <p>The
     * <code>IMPORT_METADATA_FROM_REPOSITORY</code> data repository task imports
     * metadata changes from a linked S3 bucket to your Lustre file system.</p> </li>
     * </ul>
     */
    inline void SetType(const DataRepositoryTaskType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of data repository task.</p> <ul> <li> <p>The
     * <code>EXPORT_TO_REPOSITORY</code> data repository task exports from your Lustre
     * file system from to a linked S3 bucket.</p> </li> <li> <p>The
     * <code>IMPORT_METADATA_FROM_REPOSITORY</code> data repository task imports
     * metadata changes from a linked S3 bucket to your Lustre file system.</p> </li>
     * </ul>
     */
    inline void SetType(DataRepositoryTaskType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of data repository task.</p> <ul> <li> <p>The
     * <code>EXPORT_TO_REPOSITORY</code> data repository task exports from your Lustre
     * file system from to a linked S3 bucket.</p> </li> <li> <p>The
     * <code>IMPORT_METADATA_FROM_REPOSITORY</code> data repository task imports
     * metadata changes from a linked S3 bucket to your Lustre file system.</p> </li>
     * </ul>
     */
    inline DataRepositoryTask& WithType(const DataRepositoryTaskType& value) { SetType(value); return *this;}

    /**
     * <p>The type of data repository task.</p> <ul> <li> <p>The
     * <code>EXPORT_TO_REPOSITORY</code> data repository task exports from your Lustre
     * file system from to a linked S3 bucket.</p> </li> <li> <p>The
     * <code>IMPORT_METADATA_FROM_REPOSITORY</code> data repository task imports
     * metadata changes from a linked S3 bucket to your Lustre file system.</p> </li>
     * </ul>
     */
    inline DataRepositoryTask& WithType(DataRepositoryTaskType&& value) { SetType(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    
    inline DataRepositoryTask& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    
    inline DataRepositoryTask& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time that Amazon FSx began processing the task.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time that Amazon FSx began processing the task.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time that Amazon FSx began processing the task.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time that Amazon FSx began processing the task.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time that Amazon FSx began processing the task.</p>
     */
    inline DataRepositoryTask& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time that Amazon FSx began processing the task.</p>
     */
    inline DataRepositoryTask& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time that Amazon FSx completed processing the task, populated after the
     * task is complete.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time that Amazon FSx completed processing the task, populated after the
     * task is complete.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time that Amazon FSx completed processing the task, populated after the
     * task is complete.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time that Amazon FSx completed processing the task, populated after the
     * task is complete.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time that Amazon FSx completed processing the task, populated after the
     * task is complete.</p>
     */
    inline DataRepositoryTask& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time that Amazon FSx completed processing the task, populated after the
     * task is complete.</p>
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


    
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    
    inline DataRepositoryTask& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    
    inline DataRepositoryTask& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    
    inline DataRepositoryTask& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>An array of paths on the Amazon FSx for Lustre file system that specify the
     * data for the data repository task to process. For example, in an
     * EXPORT_TO_REPOSITORY task, the paths specify which data to export to the linked
     * data repository.</p> <p>(Default) If <code>Paths</code> is not specified, Amazon
     * FSx uses the file system root directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPaths() const{ return m_paths; }

    /**
     * <p>An array of paths on the Amazon FSx for Lustre file system that specify the
     * data for the data repository task to process. For example, in an
     * EXPORT_TO_REPOSITORY task, the paths specify which data to export to the linked
     * data repository.</p> <p>(Default) If <code>Paths</code> is not specified, Amazon
     * FSx uses the file system root directory.</p>
     */
    inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }

    /**
     * <p>An array of paths on the Amazon FSx for Lustre file system that specify the
     * data for the data repository task to process. For example, in an
     * EXPORT_TO_REPOSITORY task, the paths specify which data to export to the linked
     * data repository.</p> <p>(Default) If <code>Paths</code> is not specified, Amazon
     * FSx uses the file system root directory.</p>
     */
    inline void SetPaths(const Aws::Vector<Aws::String>& value) { m_pathsHasBeenSet = true; m_paths = value; }

    /**
     * <p>An array of paths on the Amazon FSx for Lustre file system that specify the
     * data for the data repository task to process. For example, in an
     * EXPORT_TO_REPOSITORY task, the paths specify which data to export to the linked
     * data repository.</p> <p>(Default) If <code>Paths</code> is not specified, Amazon
     * FSx uses the file system root directory.</p>
     */
    inline void SetPaths(Aws::Vector<Aws::String>&& value) { m_pathsHasBeenSet = true; m_paths = std::move(value); }

    /**
     * <p>An array of paths on the Amazon FSx for Lustre file system that specify the
     * data for the data repository task to process. For example, in an
     * EXPORT_TO_REPOSITORY task, the paths specify which data to export to the linked
     * data repository.</p> <p>(Default) If <code>Paths</code> is not specified, Amazon
     * FSx uses the file system root directory.</p>
     */
    inline DataRepositoryTask& WithPaths(const Aws::Vector<Aws::String>& value) { SetPaths(value); return *this;}

    /**
     * <p>An array of paths on the Amazon FSx for Lustre file system that specify the
     * data for the data repository task to process. For example, in an
     * EXPORT_TO_REPOSITORY task, the paths specify which data to export to the linked
     * data repository.</p> <p>(Default) If <code>Paths</code> is not specified, Amazon
     * FSx uses the file system root directory.</p>
     */
    inline DataRepositoryTask& WithPaths(Aws::Vector<Aws::String>&& value) { SetPaths(std::move(value)); return *this;}

    /**
     * <p>An array of paths on the Amazon FSx for Lustre file system that specify the
     * data for the data repository task to process. For example, in an
     * EXPORT_TO_REPOSITORY task, the paths specify which data to export to the linked
     * data repository.</p> <p>(Default) If <code>Paths</code> is not specified, Amazon
     * FSx uses the file system root directory.</p>
     */
    inline DataRepositoryTask& AddPaths(const Aws::String& value) { m_pathsHasBeenSet = true; m_paths.push_back(value); return *this; }

    /**
     * <p>An array of paths on the Amazon FSx for Lustre file system that specify the
     * data for the data repository task to process. For example, in an
     * EXPORT_TO_REPOSITORY task, the paths specify which data to export to the linked
     * data repository.</p> <p>(Default) If <code>Paths</code> is not specified, Amazon
     * FSx uses the file system root directory.</p>
     */
    inline DataRepositoryTask& AddPaths(Aws::String&& value) { m_pathsHasBeenSet = true; m_paths.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of paths on the Amazon FSx for Lustre file system that specify the
     * data for the data repository task to process. For example, in an
     * EXPORT_TO_REPOSITORY task, the paths specify which data to export to the linked
     * data repository.</p> <p>(Default) If <code>Paths</code> is not specified, Amazon
     * FSx uses the file system root directory.</p>
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

  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet;

    DataRepositoryTaskLifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet;

    DataRepositoryTaskType m_type;
    bool m_typeHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet;

    Aws::Vector<Aws::String> m_paths;
    bool m_pathsHasBeenSet;

    DataRepositoryTaskFailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet;

    DataRepositoryTaskStatus m_status;
    bool m_statusHasBeenSet;

    CompletionReport m_report;
    bool m_reportHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
