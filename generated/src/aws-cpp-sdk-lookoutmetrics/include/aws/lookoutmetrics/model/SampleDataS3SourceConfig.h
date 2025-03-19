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
    AWS_LOOKOUTMETRICS_API SampleDataS3SourceConfig() = default;
    AWS_LOOKOUTMETRICS_API SampleDataS3SourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API SampleDataS3SourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    SampleDataS3SourceConfig& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings containing the list of templated paths.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTemplatedPathList() const { return m_templatedPathList; }
    inline bool TemplatedPathListHasBeenSet() const { return m_templatedPathListHasBeenSet; }
    template<typename TemplatedPathListT = Aws::Vector<Aws::String>>
    void SetTemplatedPathList(TemplatedPathListT&& value) { m_templatedPathListHasBeenSet = true; m_templatedPathList = std::forward<TemplatedPathListT>(value); }
    template<typename TemplatedPathListT = Aws::Vector<Aws::String>>
    SampleDataS3SourceConfig& WithTemplatedPathList(TemplatedPathListT&& value) { SetTemplatedPathList(std::forward<TemplatedPathListT>(value)); return *this;}
    template<typename TemplatedPathListT = Aws::String>
    SampleDataS3SourceConfig& AddTemplatedPathList(TemplatedPathListT&& value) { m_templatedPathListHasBeenSet = true; m_templatedPathList.emplace_back(std::forward<TemplatedPathListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of strings containing the historical set of data paths.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHistoricalDataPathList() const { return m_historicalDataPathList; }
    inline bool HistoricalDataPathListHasBeenSet() const { return m_historicalDataPathListHasBeenSet; }
    template<typename HistoricalDataPathListT = Aws::Vector<Aws::String>>
    void SetHistoricalDataPathList(HistoricalDataPathListT&& value) { m_historicalDataPathListHasBeenSet = true; m_historicalDataPathList = std::forward<HistoricalDataPathListT>(value); }
    template<typename HistoricalDataPathListT = Aws::Vector<Aws::String>>
    SampleDataS3SourceConfig& WithHistoricalDataPathList(HistoricalDataPathListT&& value) { SetHistoricalDataPathList(std::forward<HistoricalDataPathListT>(value)); return *this;}
    template<typename HistoricalDataPathListT = Aws::String>
    SampleDataS3SourceConfig& AddHistoricalDataPathList(HistoricalDataPathListT&& value) { m_historicalDataPathListHasBeenSet = true; m_historicalDataPathList.emplace_back(std::forward<HistoricalDataPathListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const FileFormatDescriptor& GetFileFormatDescriptor() const { return m_fileFormatDescriptor; }
    inline bool FileFormatDescriptorHasBeenSet() const { return m_fileFormatDescriptorHasBeenSet; }
    template<typename FileFormatDescriptorT = FileFormatDescriptor>
    void SetFileFormatDescriptor(FileFormatDescriptorT&& value) { m_fileFormatDescriptorHasBeenSet = true; m_fileFormatDescriptor = std::forward<FileFormatDescriptorT>(value); }
    template<typename FileFormatDescriptorT = FileFormatDescriptor>
    SampleDataS3SourceConfig& WithFileFormatDescriptor(FileFormatDescriptorT&& value) { SetFileFormatDescriptor(std::forward<FileFormatDescriptorT>(value)); return *this;}
    ///@}
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
