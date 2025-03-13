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
#include <aws/fsx/model/ReleaseConfiguration.h>
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
   * <p>A description of the data repository task.</p> <ul> <li> <p>You use import
   * and export data repository tasks to perform bulk transfer operations between an
   * Amazon FSx for Lustre file system and a linked data repository.</p> </li> <li>
   * <p>You use release data repository tasks to release files that have been
   * exported to a linked S3 bucket from your Amazon FSx for Lustre file system.</p>
   * </li> <li> <p>An Amazon File Cache resource uses a task to automatically release
   * files from the cache.</p> </li> </ul> <p>To learn more about data repository
   * tasks, see <a
   * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-repository-tasks.html">Data
   * Repository Tasks</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DataRepositoryTask">AWS
   * API Reference</a></p>
   */
  class DataRepositoryTask
  {
  public:
    AWS_FSX_API DataRepositoryTask() = default;
    AWS_FSX_API DataRepositoryTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DataRepositoryTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated, unique 17-digit ID of the data repository task.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    DataRepositoryTask& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
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
    inline DataRepositoryTaskLifecycle GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    inline void SetLifecycle(DataRepositoryTaskLifecycle value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline DataRepositoryTask& WithLifecycle(DataRepositoryTaskLifecycle value) { SetLifecycle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data repository task.</p> <ul> <li> <p>
     * <code>EXPORT_TO_REPOSITORY</code> tasks export from your Amazon FSx for Lustre
     * file system to a linked data repository.</p> </li> <li> <p>
     * <code>IMPORT_METADATA_FROM_REPOSITORY</code> tasks import metadata changes from
     * a linked S3 bucket to your Amazon FSx for Lustre file system.</p> </li> <li> <p>
     * <code>RELEASE_DATA_FROM_FILESYSTEM</code> tasks release files in your Amazon FSx
     * for Lustre file system that have been exported to a linked S3 bucket and that
     * meet your specified release criteria.</p> </li> <li> <p>
     * <code>AUTO_RELEASE_DATA</code> tasks automatically release files from an Amazon
     * File Cache resource.</p> </li> </ul>
     */
    inline DataRepositoryTaskType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DataRepositoryTaskType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DataRepositoryTask& WithType(DataRepositoryTaskType value) { SetType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DataRepositoryTask& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the system began processing the task.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    DataRepositoryTask& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the system completed processing the task, populated after the task
     * is complete.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    DataRepositoryTask& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    template<typename ResourceARNT = Aws::String>
    void SetResourceARN(ResourceARNT&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::forward<ResourceARNT>(value); }
    template<typename ResourceARNT = Aws::String>
    DataRepositoryTask& WithResourceARN(ResourceARNT&& value) { SetResourceARN(std::forward<ResourceARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    DataRepositoryTask& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    DataRepositoryTask& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The globally unique ID of the file system.</p>
     */
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    DataRepositoryTask& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of paths that specify the data for the data repository task to
     * process. For example, in an EXPORT_TO_REPOSITORY task, the paths specify which
     * data to export to the linked data repository.</p> <p>(Default) If
     * <code>Paths</code> is not specified, Amazon FSx uses the file system root
     * directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPaths() const { return m_paths; }
    inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }
    template<typename PathsT = Aws::Vector<Aws::String>>
    void SetPaths(PathsT&& value) { m_pathsHasBeenSet = true; m_paths = std::forward<PathsT>(value); }
    template<typename PathsT = Aws::Vector<Aws::String>>
    DataRepositoryTask& WithPaths(PathsT&& value) { SetPaths(std::forward<PathsT>(value)); return *this;}
    template<typename PathsT = Aws::String>
    DataRepositoryTask& AddPaths(PathsT&& value) { m_pathsHasBeenSet = true; m_paths.emplace_back(std::forward<PathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Failure message describing why the task failed, it is populated only when
     * <code>Lifecycle</code> is set to <code>FAILED</code>.</p>
     */
    inline const DataRepositoryTaskFailureDetails& GetFailureDetails() const { return m_failureDetails; }
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }
    template<typename FailureDetailsT = DataRepositoryTaskFailureDetails>
    void SetFailureDetails(FailureDetailsT&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::forward<FailureDetailsT>(value); }
    template<typename FailureDetailsT = DataRepositoryTaskFailureDetails>
    DataRepositoryTask& WithFailureDetails(FailureDetailsT&& value) { SetFailureDetails(std::forward<FailureDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the status of the number of files that the task has processed
     * successfully and failed to process.</p>
     */
    inline const DataRepositoryTaskStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = DataRepositoryTaskStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = DataRepositoryTaskStatus>
    DataRepositoryTask& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CompletionReport& GetReport() const { return m_report; }
    inline bool ReportHasBeenSet() const { return m_reportHasBeenSet; }
    template<typename ReportT = CompletionReport>
    void SetReport(ReportT&& value) { m_reportHasBeenSet = true; m_report = std::forward<ReportT>(value); }
    template<typename ReportT = CompletionReport>
    DataRepositoryTask& WithReport(ReportT&& value) { SetReport(std::forward<ReportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the amount of data to release, in GiB, by an Amazon File Cache
     * AUTO_RELEASE_DATA task that automatically releases files from the cache.</p>
     */
    inline long long GetCapacityToRelease() const { return m_capacityToRelease; }
    inline bool CapacityToReleaseHasBeenSet() const { return m_capacityToReleaseHasBeenSet; }
    inline void SetCapacityToRelease(long long value) { m_capacityToReleaseHasBeenSet = true; m_capacityToRelease = value; }
    inline DataRepositoryTask& WithCapacityToRelease(long long value) { SetCapacityToRelease(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated, unique ID of the cache.</p>
     */
    inline const Aws::String& GetFileCacheId() const { return m_fileCacheId; }
    inline bool FileCacheIdHasBeenSet() const { return m_fileCacheIdHasBeenSet; }
    template<typename FileCacheIdT = Aws::String>
    void SetFileCacheId(FileCacheIdT&& value) { m_fileCacheIdHasBeenSet = true; m_fileCacheId = std::forward<FileCacheIdT>(value); }
    template<typename FileCacheIdT = Aws::String>
    DataRepositoryTask& WithFileCacheId(FileCacheIdT&& value) { SetFileCacheId(std::forward<FileCacheIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that specifies the last accessed time criteria for files
     * that will be released from an Amazon FSx for Lustre file system.</p>
     */
    inline const ReleaseConfiguration& GetReleaseConfiguration() const { return m_releaseConfiguration; }
    inline bool ReleaseConfigurationHasBeenSet() const { return m_releaseConfigurationHasBeenSet; }
    template<typename ReleaseConfigurationT = ReleaseConfiguration>
    void SetReleaseConfiguration(ReleaseConfigurationT&& value) { m_releaseConfigurationHasBeenSet = true; m_releaseConfiguration = std::forward<ReleaseConfigurationT>(value); }
    template<typename ReleaseConfigurationT = ReleaseConfiguration>
    DataRepositoryTask& WithReleaseConfiguration(ReleaseConfigurationT&& value) { SetReleaseConfiguration(std::forward<ReleaseConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    DataRepositoryTaskLifecycle m_lifecycle{DataRepositoryTaskLifecycle::NOT_SET};
    bool m_lifecycleHasBeenSet = false;

    DataRepositoryTaskType m_type{DataRepositoryTaskType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
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

    long long m_capacityToRelease{0};
    bool m_capacityToReleaseHasBeenSet = false;

    Aws::String m_fileCacheId;
    bool m_fileCacheIdHasBeenSet = false;

    ReleaseConfiguration m_releaseConfiguration;
    bool m_releaseConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
