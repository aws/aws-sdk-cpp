/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies additional connection options for the Amazon S3 data
   * store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3DirectSourceAdditionalOptions">AWS
   * API Reference</a></p>
   */
  class S3DirectSourceAdditionalOptions
  {
  public:
    AWS_GLUE_API S3DirectSourceAdditionalOptions() = default;
    AWS_GLUE_API S3DirectSourceAdditionalOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3DirectSourceAdditionalOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Sets the upper limit for the target size of the dataset in bytes that will be
     * processed.</p>
     */
    inline long long GetBoundedSize() const { return m_boundedSize; }
    inline bool BoundedSizeHasBeenSet() const { return m_boundedSizeHasBeenSet; }
    inline void SetBoundedSize(long long value) { m_boundedSizeHasBeenSet = true; m_boundedSize = value; }
    inline S3DirectSourceAdditionalOptions& WithBoundedSize(long long value) { SetBoundedSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the upper limit for the target number of files that will be
     * processed.</p>
     */
    inline long long GetBoundedFiles() const { return m_boundedFiles; }
    inline bool BoundedFilesHasBeenSet() const { return m_boundedFilesHasBeenSet; }
    inline void SetBoundedFiles(long long value) { m_boundedFilesHasBeenSet = true; m_boundedFiles = value; }
    inline S3DirectSourceAdditionalOptions& WithBoundedFiles(long long value) { SetBoundedFiles(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets option to enable a sample path.</p>
     */
    inline bool GetEnableSamplePath() const { return m_enableSamplePath; }
    inline bool EnableSamplePathHasBeenSet() const { return m_enableSamplePathHasBeenSet; }
    inline void SetEnableSamplePath(bool value) { m_enableSamplePathHasBeenSet = true; m_enableSamplePath = value; }
    inline S3DirectSourceAdditionalOptions& WithEnableSamplePath(bool value) { SetEnableSamplePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If enabled, specifies the sample path.</p>
     */
    inline const Aws::String& GetSamplePath() const { return m_samplePath; }
    inline bool SamplePathHasBeenSet() const { return m_samplePathHasBeenSet; }
    template<typename SamplePathT = Aws::String>
    void SetSamplePath(SamplePathT&& value) { m_samplePathHasBeenSet = true; m_samplePath = std::forward<SamplePathT>(value); }
    template<typename SamplePathT = Aws::String>
    S3DirectSourceAdditionalOptions& WithSamplePath(SamplePathT&& value) { SetSamplePath(std::forward<SamplePathT>(value)); return *this;}
    ///@}
  private:

    long long m_boundedSize{0};
    bool m_boundedSizeHasBeenSet = false;

    long long m_boundedFiles{0};
    bool m_boundedFilesHasBeenSet = false;

    bool m_enableSamplePath{false};
    bool m_enableSamplePathHasBeenSet = false;

    Aws::String m_samplePath;
    bool m_samplePathHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
