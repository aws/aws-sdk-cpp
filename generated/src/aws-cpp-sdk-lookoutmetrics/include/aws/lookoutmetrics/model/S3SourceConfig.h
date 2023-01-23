/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutmetrics/model/FileFormatDescriptor.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>Contains information about the configuration of the S3 bucket that contains
   * source files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/S3SourceConfig">AWS
   * API Reference</a></p>
   */
  class S3SourceConfig
  {
  public:
    AWS_LOOKOUTMETRICS_API S3SourceConfig();
    AWS_LOOKOUTMETRICS_API S3SourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API S3SourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of an IAM role that has read and write access permissions to the
     * source S3 bucket.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of an IAM role that has read and write access permissions to the
     * source S3 bucket.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of an IAM role that has read and write access permissions to the
     * source S3 bucket.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of an IAM role that has read and write access permissions to the
     * source S3 bucket.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of an IAM role that has read and write access permissions to the
     * source S3 bucket.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of an IAM role that has read and write access permissions to the
     * source S3 bucket.</p>
     */
    inline S3SourceConfig& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of an IAM role that has read and write access permissions to the
     * source S3 bucket.</p>
     */
    inline S3SourceConfig& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an IAM role that has read and write access permissions to the
     * source S3 bucket.</p>
     */
    inline S3SourceConfig& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>A list of templated paths to the source files.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTemplatedPathList() const{ return m_templatedPathList; }

    /**
     * <p>A list of templated paths to the source files.</p>
     */
    inline bool TemplatedPathListHasBeenSet() const { return m_templatedPathListHasBeenSet; }

    /**
     * <p>A list of templated paths to the source files.</p>
     */
    inline void SetTemplatedPathList(const Aws::Vector<Aws::String>& value) { m_templatedPathListHasBeenSet = true; m_templatedPathList = value; }

    /**
     * <p>A list of templated paths to the source files.</p>
     */
    inline void SetTemplatedPathList(Aws::Vector<Aws::String>&& value) { m_templatedPathListHasBeenSet = true; m_templatedPathList = std::move(value); }

    /**
     * <p>A list of templated paths to the source files.</p>
     */
    inline S3SourceConfig& WithTemplatedPathList(const Aws::Vector<Aws::String>& value) { SetTemplatedPathList(value); return *this;}

    /**
     * <p>A list of templated paths to the source files.</p>
     */
    inline S3SourceConfig& WithTemplatedPathList(Aws::Vector<Aws::String>&& value) { SetTemplatedPathList(std::move(value)); return *this;}

    /**
     * <p>A list of templated paths to the source files.</p>
     */
    inline S3SourceConfig& AddTemplatedPathList(const Aws::String& value) { m_templatedPathListHasBeenSet = true; m_templatedPathList.push_back(value); return *this; }

    /**
     * <p>A list of templated paths to the source files.</p>
     */
    inline S3SourceConfig& AddTemplatedPathList(Aws::String&& value) { m_templatedPathListHasBeenSet = true; m_templatedPathList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of templated paths to the source files.</p>
     */
    inline S3SourceConfig& AddTemplatedPathList(const char* value) { m_templatedPathListHasBeenSet = true; m_templatedPathList.push_back(value); return *this; }


    /**
     * <p>A list of paths to the historical data files.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHistoricalDataPathList() const{ return m_historicalDataPathList; }

    /**
     * <p>A list of paths to the historical data files.</p>
     */
    inline bool HistoricalDataPathListHasBeenSet() const { return m_historicalDataPathListHasBeenSet; }

    /**
     * <p>A list of paths to the historical data files.</p>
     */
    inline void SetHistoricalDataPathList(const Aws::Vector<Aws::String>& value) { m_historicalDataPathListHasBeenSet = true; m_historicalDataPathList = value; }

    /**
     * <p>A list of paths to the historical data files.</p>
     */
    inline void SetHistoricalDataPathList(Aws::Vector<Aws::String>&& value) { m_historicalDataPathListHasBeenSet = true; m_historicalDataPathList = std::move(value); }

    /**
     * <p>A list of paths to the historical data files.</p>
     */
    inline S3SourceConfig& WithHistoricalDataPathList(const Aws::Vector<Aws::String>& value) { SetHistoricalDataPathList(value); return *this;}

    /**
     * <p>A list of paths to the historical data files.</p>
     */
    inline S3SourceConfig& WithHistoricalDataPathList(Aws::Vector<Aws::String>&& value) { SetHistoricalDataPathList(std::move(value)); return *this;}

    /**
     * <p>A list of paths to the historical data files.</p>
     */
    inline S3SourceConfig& AddHistoricalDataPathList(const Aws::String& value) { m_historicalDataPathListHasBeenSet = true; m_historicalDataPathList.push_back(value); return *this; }

    /**
     * <p>A list of paths to the historical data files.</p>
     */
    inline S3SourceConfig& AddHistoricalDataPathList(Aws::String&& value) { m_historicalDataPathListHasBeenSet = true; m_historicalDataPathList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of paths to the historical data files.</p>
     */
    inline S3SourceConfig& AddHistoricalDataPathList(const char* value) { m_historicalDataPathListHasBeenSet = true; m_historicalDataPathList.push_back(value); return *this; }


    /**
     * <p>Contains information about a source file's formatting.</p>
     */
    inline const FileFormatDescriptor& GetFileFormatDescriptor() const{ return m_fileFormatDescriptor; }

    /**
     * <p>Contains information about a source file's formatting.</p>
     */
    inline bool FileFormatDescriptorHasBeenSet() const { return m_fileFormatDescriptorHasBeenSet; }

    /**
     * <p>Contains information about a source file's formatting.</p>
     */
    inline void SetFileFormatDescriptor(const FileFormatDescriptor& value) { m_fileFormatDescriptorHasBeenSet = true; m_fileFormatDescriptor = value; }

    /**
     * <p>Contains information about a source file's formatting.</p>
     */
    inline void SetFileFormatDescriptor(FileFormatDescriptor&& value) { m_fileFormatDescriptorHasBeenSet = true; m_fileFormatDescriptor = std::move(value); }

    /**
     * <p>Contains information about a source file's formatting.</p>
     */
    inline S3SourceConfig& WithFileFormatDescriptor(const FileFormatDescriptor& value) { SetFileFormatDescriptor(value); return *this;}

    /**
     * <p>Contains information about a source file's formatting.</p>
     */
    inline S3SourceConfig& WithFileFormatDescriptor(FileFormatDescriptor&& value) { SetFileFormatDescriptor(std::move(value)); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_templatedPathList;
    bool m_templatedPathListHasBeenSet = false;

    Aws::Vector<Aws::String> m_historicalDataPathList;
    bool m_historicalDataPathListHasBeenSet = false;

    FileFormatDescriptor m_fileFormatDescriptor;
    bool m_fileFormatDescriptorHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
