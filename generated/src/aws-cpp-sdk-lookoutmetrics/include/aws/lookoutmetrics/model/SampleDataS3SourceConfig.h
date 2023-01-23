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
   * <p>Contains information about the source configuration in Amazon
   * S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/SampleDataS3SourceConfig">AWS
   * API Reference</a></p>
   */
  class SampleDataS3SourceConfig
  {
  public:
    AWS_LOOKOUTMETRICS_API SampleDataS3SourceConfig();
    AWS_LOOKOUTMETRICS_API SampleDataS3SourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API SampleDataS3SourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the role.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role.</p>
     */
    inline SampleDataS3SourceConfig& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role.</p>
     */
    inline SampleDataS3SourceConfig& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role.</p>
     */
    inline SampleDataS3SourceConfig& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>An array of strings containing the list of templated paths.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTemplatedPathList() const{ return m_templatedPathList; }

    /**
     * <p>An array of strings containing the list of templated paths.</p>
     */
    inline bool TemplatedPathListHasBeenSet() const { return m_templatedPathListHasBeenSet; }

    /**
     * <p>An array of strings containing the list of templated paths.</p>
     */
    inline void SetTemplatedPathList(const Aws::Vector<Aws::String>& value) { m_templatedPathListHasBeenSet = true; m_templatedPathList = value; }

    /**
     * <p>An array of strings containing the list of templated paths.</p>
     */
    inline void SetTemplatedPathList(Aws::Vector<Aws::String>&& value) { m_templatedPathListHasBeenSet = true; m_templatedPathList = std::move(value); }

    /**
     * <p>An array of strings containing the list of templated paths.</p>
     */
    inline SampleDataS3SourceConfig& WithTemplatedPathList(const Aws::Vector<Aws::String>& value) { SetTemplatedPathList(value); return *this;}

    /**
     * <p>An array of strings containing the list of templated paths.</p>
     */
    inline SampleDataS3SourceConfig& WithTemplatedPathList(Aws::Vector<Aws::String>&& value) { SetTemplatedPathList(std::move(value)); return *this;}

    /**
     * <p>An array of strings containing the list of templated paths.</p>
     */
    inline SampleDataS3SourceConfig& AddTemplatedPathList(const Aws::String& value) { m_templatedPathListHasBeenSet = true; m_templatedPathList.push_back(value); return *this; }

    /**
     * <p>An array of strings containing the list of templated paths.</p>
     */
    inline SampleDataS3SourceConfig& AddTemplatedPathList(Aws::String&& value) { m_templatedPathListHasBeenSet = true; m_templatedPathList.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings containing the list of templated paths.</p>
     */
    inline SampleDataS3SourceConfig& AddTemplatedPathList(const char* value) { m_templatedPathListHasBeenSet = true; m_templatedPathList.push_back(value); return *this; }


    /**
     * <p>An array of strings containing the historical set of data paths.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHistoricalDataPathList() const{ return m_historicalDataPathList; }

    /**
     * <p>An array of strings containing the historical set of data paths.</p>
     */
    inline bool HistoricalDataPathListHasBeenSet() const { return m_historicalDataPathListHasBeenSet; }

    /**
     * <p>An array of strings containing the historical set of data paths.</p>
     */
    inline void SetHistoricalDataPathList(const Aws::Vector<Aws::String>& value) { m_historicalDataPathListHasBeenSet = true; m_historicalDataPathList = value; }

    /**
     * <p>An array of strings containing the historical set of data paths.</p>
     */
    inline void SetHistoricalDataPathList(Aws::Vector<Aws::String>&& value) { m_historicalDataPathListHasBeenSet = true; m_historicalDataPathList = std::move(value); }

    /**
     * <p>An array of strings containing the historical set of data paths.</p>
     */
    inline SampleDataS3SourceConfig& WithHistoricalDataPathList(const Aws::Vector<Aws::String>& value) { SetHistoricalDataPathList(value); return *this;}

    /**
     * <p>An array of strings containing the historical set of data paths.</p>
     */
    inline SampleDataS3SourceConfig& WithHistoricalDataPathList(Aws::Vector<Aws::String>&& value) { SetHistoricalDataPathList(std::move(value)); return *this;}

    /**
     * <p>An array of strings containing the historical set of data paths.</p>
     */
    inline SampleDataS3SourceConfig& AddHistoricalDataPathList(const Aws::String& value) { m_historicalDataPathListHasBeenSet = true; m_historicalDataPathList.push_back(value); return *this; }

    /**
     * <p>An array of strings containing the historical set of data paths.</p>
     */
    inline SampleDataS3SourceConfig& AddHistoricalDataPathList(Aws::String&& value) { m_historicalDataPathListHasBeenSet = true; m_historicalDataPathList.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings containing the historical set of data paths.</p>
     */
    inline SampleDataS3SourceConfig& AddHistoricalDataPathList(const char* value) { m_historicalDataPathListHasBeenSet = true; m_historicalDataPathList.push_back(value); return *this; }


    
    inline const FileFormatDescriptor& GetFileFormatDescriptor() const{ return m_fileFormatDescriptor; }

    
    inline bool FileFormatDescriptorHasBeenSet() const { return m_fileFormatDescriptorHasBeenSet; }

    
    inline void SetFileFormatDescriptor(const FileFormatDescriptor& value) { m_fileFormatDescriptorHasBeenSet = true; m_fileFormatDescriptor = value; }

    
    inline void SetFileFormatDescriptor(FileFormatDescriptor&& value) { m_fileFormatDescriptorHasBeenSet = true; m_fileFormatDescriptor = std::move(value); }

    
    inline SampleDataS3SourceConfig& WithFileFormatDescriptor(const FileFormatDescriptor& value) { SetFileFormatDescriptor(value); return *this;}

    
    inline SampleDataS3SourceConfig& WithFileFormatDescriptor(FileFormatDescriptor&& value) { SetFileFormatDescriptor(std::move(value)); return *this;}

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
