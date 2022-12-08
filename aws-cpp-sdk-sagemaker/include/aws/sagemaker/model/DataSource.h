/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/S3DataSource.h>
#include <aws/sagemaker/model/FileSystemDataSource.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Describes the location of the channel data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DataSource">AWS
   * API Reference</a></p>
   */
  class DataSource
  {
  public:
    AWS_SAGEMAKER_API DataSource();
    AWS_SAGEMAKER_API DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 location of the data source that is associated with a channel.</p>
     */
    inline const S3DataSource& GetS3DataSource() const{ return m_s3DataSource; }

    /**
     * <p>The S3 location of the data source that is associated with a channel.</p>
     */
    inline bool S3DataSourceHasBeenSet() const { return m_s3DataSourceHasBeenSet; }

    /**
     * <p>The S3 location of the data source that is associated with a channel.</p>
     */
    inline void SetS3DataSource(const S3DataSource& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = value; }

    /**
     * <p>The S3 location of the data source that is associated with a channel.</p>
     */
    inline void SetS3DataSource(S3DataSource&& value) { m_s3DataSourceHasBeenSet = true; m_s3DataSource = std::move(value); }

    /**
     * <p>The S3 location of the data source that is associated with a channel.</p>
     */
    inline DataSource& WithS3DataSource(const S3DataSource& value) { SetS3DataSource(value); return *this;}

    /**
     * <p>The S3 location of the data source that is associated with a channel.</p>
     */
    inline DataSource& WithS3DataSource(S3DataSource&& value) { SetS3DataSource(std::move(value)); return *this;}


    /**
     * <p>The file system that is associated with a channel.</p>
     */
    inline const FileSystemDataSource& GetFileSystemDataSource() const{ return m_fileSystemDataSource; }

    /**
     * <p>The file system that is associated with a channel.</p>
     */
    inline bool FileSystemDataSourceHasBeenSet() const { return m_fileSystemDataSourceHasBeenSet; }

    /**
     * <p>The file system that is associated with a channel.</p>
     */
    inline void SetFileSystemDataSource(const FileSystemDataSource& value) { m_fileSystemDataSourceHasBeenSet = true; m_fileSystemDataSource = value; }

    /**
     * <p>The file system that is associated with a channel.</p>
     */
    inline void SetFileSystemDataSource(FileSystemDataSource&& value) { m_fileSystemDataSourceHasBeenSet = true; m_fileSystemDataSource = std::move(value); }

    /**
     * <p>The file system that is associated with a channel.</p>
     */
    inline DataSource& WithFileSystemDataSource(const FileSystemDataSource& value) { SetFileSystemDataSource(value); return *this;}

    /**
     * <p>The file system that is associated with a channel.</p>
     */
    inline DataSource& WithFileSystemDataSource(FileSystemDataSource&& value) { SetFileSystemDataSource(std::move(value)); return *this;}

  private:

    S3DataSource m_s3DataSource;
    bool m_s3DataSourceHasBeenSet = false;

    FileSystemDataSource m_fileSystemDataSource;
    bool m_fileSystemDataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
