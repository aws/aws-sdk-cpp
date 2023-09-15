/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/fsx/model/DataRepositoryTaskType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/CompletionReport.h>
#include <aws/fsx/model/ReleaseConfiguration.h>
#include <aws/fsx/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   */
  class CreateDataRepositoryTaskRequest : public FSxRequest
  {
  public:
    AWS_FSX_API CreateDataRepositoryTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataRepositoryTask"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the type of data repository task to create.</p> <ul> <li> <p>
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
    inline const DataRepositoryTaskType& GetType() const{ return m_type; }

    /**
     * <p>Specifies the type of data repository task to create.</p> <ul> <li> <p>
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
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies the type of data repository task to create.</p> <ul> <li> <p>
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
    inline void SetType(const DataRepositoryTaskType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies the type of data repository task to create.</p> <ul> <li> <p>
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
    inline void SetType(DataRepositoryTaskType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies the type of data repository task to create.</p> <ul> <li> <p>
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
    inline CreateDataRepositoryTaskRequest& WithType(const DataRepositoryTaskType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies the type of data repository task to create.</p> <ul> <li> <p>
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
    inline CreateDataRepositoryTaskRequest& WithType(DataRepositoryTaskType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A list of paths for the data repository task to use when the task is
     * processed. If a path that you provide isn't valid, the task fails. If you don't
     * provide paths, the default behavior is to export all files to S3 (for export
     * tasks), import all files from S3 (for import tasks), or release all exported
     * files that meet the last accessed time criteria (for release tasks).</p> <ul>
     * <li> <p>For export tasks, the list contains paths on the FSx for Lustre file
     * system from which the files are exported to the Amazon S3 bucket. The default
     * path is the file system root directory. The paths you provide need to be
     * relative to the mount point of the file system. If the mount point is
     * <code>/mnt/fsx</code> and <code>/mnt/fsx/path1</code> is a directory or file on
     * the file system you want to export, then the path to provide is
     * <code>path1</code>.</p> </li> <li> <p>For import tasks, the list contains paths
     * in the Amazon S3 bucket from which POSIX metadata changes are imported to the
     * FSx for Lustre file system. The path can be an S3 bucket or prefix in the format
     * <code>s3://myBucket/myPrefix</code> (where <code>myPrefix</code> is optional).
     * </p> </li> <li> <p>For release tasks, the list contains directory or file paths
     * on the FSx for Lustre file system from which to release exported files. If a
     * directory is specified, files within the directory are released. If a file path
     * is specified, only that file is released. To release all exported files in the
     * file system, specify a forward slash (/) as the path.</p>  <p>A file must
     * also meet the last accessed time criteria specified in for the file to be
     * released.</p>  </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetPaths() const{ return m_paths; }

    /**
     * <p>A list of paths for the data repository task to use when the task is
     * processed. If a path that you provide isn't valid, the task fails. If you don't
     * provide paths, the default behavior is to export all files to S3 (for export
     * tasks), import all files from S3 (for import tasks), or release all exported
     * files that meet the last accessed time criteria (for release tasks).</p> <ul>
     * <li> <p>For export tasks, the list contains paths on the FSx for Lustre file
     * system from which the files are exported to the Amazon S3 bucket. The default
     * path is the file system root directory. The paths you provide need to be
     * relative to the mount point of the file system. If the mount point is
     * <code>/mnt/fsx</code> and <code>/mnt/fsx/path1</code> is a directory or file on
     * the file system you want to export, then the path to provide is
     * <code>path1</code>.</p> </li> <li> <p>For import tasks, the list contains paths
     * in the Amazon S3 bucket from which POSIX metadata changes are imported to the
     * FSx for Lustre file system. The path can be an S3 bucket or prefix in the format
     * <code>s3://myBucket/myPrefix</code> (where <code>myPrefix</code> is optional).
     * </p> </li> <li> <p>For release tasks, the list contains directory or file paths
     * on the FSx for Lustre file system from which to release exported files. If a
     * directory is specified, files within the directory are released. If a file path
     * is specified, only that file is released. To release all exported files in the
     * file system, specify a forward slash (/) as the path.</p>  <p>A file must
     * also meet the last accessed time criteria specified in for the file to be
     * released.</p>  </li> </ul>
     */
    inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }

    /**
     * <p>A list of paths for the data repository task to use when the task is
     * processed. If a path that you provide isn't valid, the task fails. If you don't
     * provide paths, the default behavior is to export all files to S3 (for export
     * tasks), import all files from S3 (for import tasks), or release all exported
     * files that meet the last accessed time criteria (for release tasks).</p> <ul>
     * <li> <p>For export tasks, the list contains paths on the FSx for Lustre file
     * system from which the files are exported to the Amazon S3 bucket. The default
     * path is the file system root directory. The paths you provide need to be
     * relative to the mount point of the file system. If the mount point is
     * <code>/mnt/fsx</code> and <code>/mnt/fsx/path1</code> is a directory or file on
     * the file system you want to export, then the path to provide is
     * <code>path1</code>.</p> </li> <li> <p>For import tasks, the list contains paths
     * in the Amazon S3 bucket from which POSIX metadata changes are imported to the
     * FSx for Lustre file system. The path can be an S3 bucket or prefix in the format
     * <code>s3://myBucket/myPrefix</code> (where <code>myPrefix</code> is optional).
     * </p> </li> <li> <p>For release tasks, the list contains directory or file paths
     * on the FSx for Lustre file system from which to release exported files. If a
     * directory is specified, files within the directory are released. If a file path
     * is specified, only that file is released. To release all exported files in the
     * file system, specify a forward slash (/) as the path.</p>  <p>A file must
     * also meet the last accessed time criteria specified in for the file to be
     * released.</p>  </li> </ul>
     */
    inline void SetPaths(const Aws::Vector<Aws::String>& value) { m_pathsHasBeenSet = true; m_paths = value; }

    /**
     * <p>A list of paths for the data repository task to use when the task is
     * processed. If a path that you provide isn't valid, the task fails. If you don't
     * provide paths, the default behavior is to export all files to S3 (for export
     * tasks), import all files from S3 (for import tasks), or release all exported
     * files that meet the last accessed time criteria (for release tasks).</p> <ul>
     * <li> <p>For export tasks, the list contains paths on the FSx for Lustre file
     * system from which the files are exported to the Amazon S3 bucket. The default
     * path is the file system root directory. The paths you provide need to be
     * relative to the mount point of the file system. If the mount point is
     * <code>/mnt/fsx</code> and <code>/mnt/fsx/path1</code> is a directory or file on
     * the file system you want to export, then the path to provide is
     * <code>path1</code>.</p> </li> <li> <p>For import tasks, the list contains paths
     * in the Amazon S3 bucket from which POSIX metadata changes are imported to the
     * FSx for Lustre file system. The path can be an S3 bucket or prefix in the format
     * <code>s3://myBucket/myPrefix</code> (where <code>myPrefix</code> is optional).
     * </p> </li> <li> <p>For release tasks, the list contains directory or file paths
     * on the FSx for Lustre file system from which to release exported files. If a
     * directory is specified, files within the directory are released. If a file path
     * is specified, only that file is released. To release all exported files in the
     * file system, specify a forward slash (/) as the path.</p>  <p>A file must
     * also meet the last accessed time criteria specified in for the file to be
     * released.</p>  </li> </ul>
     */
    inline void SetPaths(Aws::Vector<Aws::String>&& value) { m_pathsHasBeenSet = true; m_paths = std::move(value); }

    /**
     * <p>A list of paths for the data repository task to use when the task is
     * processed. If a path that you provide isn't valid, the task fails. If you don't
     * provide paths, the default behavior is to export all files to S3 (for export
     * tasks), import all files from S3 (for import tasks), or release all exported
     * files that meet the last accessed time criteria (for release tasks).</p> <ul>
     * <li> <p>For export tasks, the list contains paths on the FSx for Lustre file
     * system from which the files are exported to the Amazon S3 bucket. The default
     * path is the file system root directory. The paths you provide need to be
     * relative to the mount point of the file system. If the mount point is
     * <code>/mnt/fsx</code> and <code>/mnt/fsx/path1</code> is a directory or file on
     * the file system you want to export, then the path to provide is
     * <code>path1</code>.</p> </li> <li> <p>For import tasks, the list contains paths
     * in the Amazon S3 bucket from which POSIX metadata changes are imported to the
     * FSx for Lustre file system. The path can be an S3 bucket or prefix in the format
     * <code>s3://myBucket/myPrefix</code> (where <code>myPrefix</code> is optional).
     * </p> </li> <li> <p>For release tasks, the list contains directory or file paths
     * on the FSx for Lustre file system from which to release exported files. If a
     * directory is specified, files within the directory are released. If a file path
     * is specified, only that file is released. To release all exported files in the
     * file system, specify a forward slash (/) as the path.</p>  <p>A file must
     * also meet the last accessed time criteria specified in for the file to be
     * released.</p>  </li> </ul>
     */
    inline CreateDataRepositoryTaskRequest& WithPaths(const Aws::Vector<Aws::String>& value) { SetPaths(value); return *this;}

    /**
     * <p>A list of paths for the data repository task to use when the task is
     * processed. If a path that you provide isn't valid, the task fails. If you don't
     * provide paths, the default behavior is to export all files to S3 (for export
     * tasks), import all files from S3 (for import tasks), or release all exported
     * files that meet the last accessed time criteria (for release tasks).</p> <ul>
     * <li> <p>For export tasks, the list contains paths on the FSx for Lustre file
     * system from which the files are exported to the Amazon S3 bucket. The default
     * path is the file system root directory. The paths you provide need to be
     * relative to the mount point of the file system. If the mount point is
     * <code>/mnt/fsx</code> and <code>/mnt/fsx/path1</code> is a directory or file on
     * the file system you want to export, then the path to provide is
     * <code>path1</code>.</p> </li> <li> <p>For import tasks, the list contains paths
     * in the Amazon S3 bucket from which POSIX metadata changes are imported to the
     * FSx for Lustre file system. The path can be an S3 bucket or prefix in the format
     * <code>s3://myBucket/myPrefix</code> (where <code>myPrefix</code> is optional).
     * </p> </li> <li> <p>For release tasks, the list contains directory or file paths
     * on the FSx for Lustre file system from which to release exported files. If a
     * directory is specified, files within the directory are released. If a file path
     * is specified, only that file is released. To release all exported files in the
     * file system, specify a forward slash (/) as the path.</p>  <p>A file must
     * also meet the last accessed time criteria specified in for the file to be
     * released.</p>  </li> </ul>
     */
    inline CreateDataRepositoryTaskRequest& WithPaths(Aws::Vector<Aws::String>&& value) { SetPaths(std::move(value)); return *this;}

    /**
     * <p>A list of paths for the data repository task to use when the task is
     * processed. If a path that you provide isn't valid, the task fails. If you don't
     * provide paths, the default behavior is to export all files to S3 (for export
     * tasks), import all files from S3 (for import tasks), or release all exported
     * files that meet the last accessed time criteria (for release tasks).</p> <ul>
     * <li> <p>For export tasks, the list contains paths on the FSx for Lustre file
     * system from which the files are exported to the Amazon S3 bucket. The default
     * path is the file system root directory. The paths you provide need to be
     * relative to the mount point of the file system. If the mount point is
     * <code>/mnt/fsx</code> and <code>/mnt/fsx/path1</code> is a directory or file on
     * the file system you want to export, then the path to provide is
     * <code>path1</code>.</p> </li> <li> <p>For import tasks, the list contains paths
     * in the Amazon S3 bucket from which POSIX metadata changes are imported to the
     * FSx for Lustre file system. The path can be an S3 bucket or prefix in the format
     * <code>s3://myBucket/myPrefix</code> (where <code>myPrefix</code> is optional).
     * </p> </li> <li> <p>For release tasks, the list contains directory or file paths
     * on the FSx for Lustre file system from which to release exported files. If a
     * directory is specified, files within the directory are released. If a file path
     * is specified, only that file is released. To release all exported files in the
     * file system, specify a forward slash (/) as the path.</p>  <p>A file must
     * also meet the last accessed time criteria specified in for the file to be
     * released.</p>  </li> </ul>
     */
    inline CreateDataRepositoryTaskRequest& AddPaths(const Aws::String& value) { m_pathsHasBeenSet = true; m_paths.push_back(value); return *this; }

    /**
     * <p>A list of paths for the data repository task to use when the task is
     * processed. If a path that you provide isn't valid, the task fails. If you don't
     * provide paths, the default behavior is to export all files to S3 (for export
     * tasks), import all files from S3 (for import tasks), or release all exported
     * files that meet the last accessed time criteria (for release tasks).</p> <ul>
     * <li> <p>For export tasks, the list contains paths on the FSx for Lustre file
     * system from which the files are exported to the Amazon S3 bucket. The default
     * path is the file system root directory. The paths you provide need to be
     * relative to the mount point of the file system. If the mount point is
     * <code>/mnt/fsx</code> and <code>/mnt/fsx/path1</code> is a directory or file on
     * the file system you want to export, then the path to provide is
     * <code>path1</code>.</p> </li> <li> <p>For import tasks, the list contains paths
     * in the Amazon S3 bucket from which POSIX metadata changes are imported to the
     * FSx for Lustre file system. The path can be an S3 bucket or prefix in the format
     * <code>s3://myBucket/myPrefix</code> (where <code>myPrefix</code> is optional).
     * </p> </li> <li> <p>For release tasks, the list contains directory or file paths
     * on the FSx for Lustre file system from which to release exported files. If a
     * directory is specified, files within the directory are released. If a file path
     * is specified, only that file is released. To release all exported files in the
     * file system, specify a forward slash (/) as the path.</p>  <p>A file must
     * also meet the last accessed time criteria specified in for the file to be
     * released.</p>  </li> </ul>
     */
    inline CreateDataRepositoryTaskRequest& AddPaths(Aws::String&& value) { m_pathsHasBeenSet = true; m_paths.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of paths for the data repository task to use when the task is
     * processed. If a path that you provide isn't valid, the task fails. If you don't
     * provide paths, the default behavior is to export all files to S3 (for export
     * tasks), import all files from S3 (for import tasks), or release all exported
     * files that meet the last accessed time criteria (for release tasks).</p> <ul>
     * <li> <p>For export tasks, the list contains paths on the FSx for Lustre file
     * system from which the files are exported to the Amazon S3 bucket. The default
     * path is the file system root directory. The paths you provide need to be
     * relative to the mount point of the file system. If the mount point is
     * <code>/mnt/fsx</code> and <code>/mnt/fsx/path1</code> is a directory or file on
     * the file system you want to export, then the path to provide is
     * <code>path1</code>.</p> </li> <li> <p>For import tasks, the list contains paths
     * in the Amazon S3 bucket from which POSIX metadata changes are imported to the
     * FSx for Lustre file system. The path can be an S3 bucket or prefix in the format
     * <code>s3://myBucket/myPrefix</code> (where <code>myPrefix</code> is optional).
     * </p> </li> <li> <p>For release tasks, the list contains directory or file paths
     * on the FSx for Lustre file system from which to release exported files. If a
     * directory is specified, files within the directory are released. If a file path
     * is specified, only that file is released. To release all exported files in the
     * file system, specify a forward slash (/) as the path.</p>  <p>A file must
     * also meet the last accessed time criteria specified in for the file to be
     * released.</p>  </li> </ul>
     */
    inline CreateDataRepositoryTaskRequest& AddPaths(const char* value) { m_pathsHasBeenSet = true; m_paths.push_back(value); return *this; }


    
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    
    inline CreateDataRepositoryTaskRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    
    inline CreateDataRepositoryTaskRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    
    inline CreateDataRepositoryTaskRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>Defines whether or not Amazon FSx provides a CompletionReport once the task
     * has completed. A CompletionReport provides a detailed report on the files that
     * Amazon FSx processed that meet the criteria specified by the <code>Scope</code>
     * parameter. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/task-completion-report.html">Working
     * with Task Completion Reports</a>.</p>
     */
    inline const CompletionReport& GetReport() const{ return m_report; }

    /**
     * <p>Defines whether or not Amazon FSx provides a CompletionReport once the task
     * has completed. A CompletionReport provides a detailed report on the files that
     * Amazon FSx processed that meet the criteria specified by the <code>Scope</code>
     * parameter. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/task-completion-report.html">Working
     * with Task Completion Reports</a>.</p>
     */
    inline bool ReportHasBeenSet() const { return m_reportHasBeenSet; }

    /**
     * <p>Defines whether or not Amazon FSx provides a CompletionReport once the task
     * has completed. A CompletionReport provides a detailed report on the files that
     * Amazon FSx processed that meet the criteria specified by the <code>Scope</code>
     * parameter. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/task-completion-report.html">Working
     * with Task Completion Reports</a>.</p>
     */
    inline void SetReport(const CompletionReport& value) { m_reportHasBeenSet = true; m_report = value; }

    /**
     * <p>Defines whether or not Amazon FSx provides a CompletionReport once the task
     * has completed. A CompletionReport provides a detailed report on the files that
     * Amazon FSx processed that meet the criteria specified by the <code>Scope</code>
     * parameter. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/task-completion-report.html">Working
     * with Task Completion Reports</a>.</p>
     */
    inline void SetReport(CompletionReport&& value) { m_reportHasBeenSet = true; m_report = std::move(value); }

    /**
     * <p>Defines whether or not Amazon FSx provides a CompletionReport once the task
     * has completed. A CompletionReport provides a detailed report on the files that
     * Amazon FSx processed that meet the criteria specified by the <code>Scope</code>
     * parameter. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/task-completion-report.html">Working
     * with Task Completion Reports</a>.</p>
     */
    inline CreateDataRepositoryTaskRequest& WithReport(const CompletionReport& value) { SetReport(value); return *this;}

    /**
     * <p>Defines whether or not Amazon FSx provides a CompletionReport once the task
     * has completed. A CompletionReport provides a detailed report on the files that
     * Amazon FSx processed that meet the criteria specified by the <code>Scope</code>
     * parameter. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/task-completion-report.html">Working
     * with Task Completion Reports</a>.</p>
     */
    inline CreateDataRepositoryTaskRequest& WithReport(CompletionReport&& value) { SetReport(std::move(value)); return *this;}


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline CreateDataRepositoryTaskRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline CreateDataRepositoryTaskRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline CreateDataRepositoryTaskRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateDataRepositoryTaskRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateDataRepositoryTaskRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateDataRepositoryTaskRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CreateDataRepositoryTaskRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the amount of data to release, in GiB, by an Amazon File Cache
     * <code>AUTO_RELEASE_DATA</code> task that automatically releases files from the
     * cache.</p>
     */
    inline long long GetCapacityToRelease() const{ return m_capacityToRelease; }

    /**
     * <p>Specifies the amount of data to release, in GiB, by an Amazon File Cache
     * <code>AUTO_RELEASE_DATA</code> task that automatically releases files from the
     * cache.</p>
     */
    inline bool CapacityToReleaseHasBeenSet() const { return m_capacityToReleaseHasBeenSet; }

    /**
     * <p>Specifies the amount of data to release, in GiB, by an Amazon File Cache
     * <code>AUTO_RELEASE_DATA</code> task that automatically releases files from the
     * cache.</p>
     */
    inline void SetCapacityToRelease(long long value) { m_capacityToReleaseHasBeenSet = true; m_capacityToRelease = value; }

    /**
     * <p>Specifies the amount of data to release, in GiB, by an Amazon File Cache
     * <code>AUTO_RELEASE_DATA</code> task that automatically releases files from the
     * cache.</p>
     */
    inline CreateDataRepositoryTaskRequest& WithCapacityToRelease(long long value) { SetCapacityToRelease(value); return *this;}


    /**
     * <p>The configuration that specifies the last accessed time criteria for files
     * that will be released from an Amazon FSx for Lustre file system.</p>
     */
    inline const ReleaseConfiguration& GetReleaseConfiguration() const{ return m_releaseConfiguration; }

    /**
     * <p>The configuration that specifies the last accessed time criteria for files
     * that will be released from an Amazon FSx for Lustre file system.</p>
     */
    inline bool ReleaseConfigurationHasBeenSet() const { return m_releaseConfigurationHasBeenSet; }

    /**
     * <p>The configuration that specifies the last accessed time criteria for files
     * that will be released from an Amazon FSx for Lustre file system.</p>
     */
    inline void SetReleaseConfiguration(const ReleaseConfiguration& value) { m_releaseConfigurationHasBeenSet = true; m_releaseConfiguration = value; }

    /**
     * <p>The configuration that specifies the last accessed time criteria for files
     * that will be released from an Amazon FSx for Lustre file system.</p>
     */
    inline void SetReleaseConfiguration(ReleaseConfiguration&& value) { m_releaseConfigurationHasBeenSet = true; m_releaseConfiguration = std::move(value); }

    /**
     * <p>The configuration that specifies the last accessed time criteria for files
     * that will be released from an Amazon FSx for Lustre file system.</p>
     */
    inline CreateDataRepositoryTaskRequest& WithReleaseConfiguration(const ReleaseConfiguration& value) { SetReleaseConfiguration(value); return *this;}

    /**
     * <p>The configuration that specifies the last accessed time criteria for files
     * that will be released from an Amazon FSx for Lustre file system.</p>
     */
    inline CreateDataRepositoryTaskRequest& WithReleaseConfiguration(ReleaseConfiguration&& value) { SetReleaseConfiguration(std::move(value)); return *this;}

  private:

    DataRepositoryTaskType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_paths;
    bool m_pathsHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    CompletionReport m_report;
    bool m_reportHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    long long m_capacityToRelease;
    bool m_capacityToReleaseHasBeenSet = false;

    ReleaseConfiguration m_releaseConfiguration;
    bool m_releaseConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
