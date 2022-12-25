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
    AWS_GLUE_API S3DirectSourceAdditionalOptions();
    AWS_GLUE_API S3DirectSourceAdditionalOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3DirectSourceAdditionalOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Sets the upper limit for the target size of the dataset in bytes that will be
     * processed.</p>
     */
    inline long long GetBoundedSize() const{ return m_boundedSize; }

    /**
     * <p>Sets the upper limit for the target size of the dataset in bytes that will be
     * processed.</p>
     */
    inline bool BoundedSizeHasBeenSet() const { return m_boundedSizeHasBeenSet; }

    /**
     * <p>Sets the upper limit for the target size of the dataset in bytes that will be
     * processed.</p>
     */
    inline void SetBoundedSize(long long value) { m_boundedSizeHasBeenSet = true; m_boundedSize = value; }

    /**
     * <p>Sets the upper limit for the target size of the dataset in bytes that will be
     * processed.</p>
     */
    inline S3DirectSourceAdditionalOptions& WithBoundedSize(long long value) { SetBoundedSize(value); return *this;}


    /**
     * <p>Sets the upper limit for the target number of files that will be
     * processed.</p>
     */
    inline long long GetBoundedFiles() const{ return m_boundedFiles; }

    /**
     * <p>Sets the upper limit for the target number of files that will be
     * processed.</p>
     */
    inline bool BoundedFilesHasBeenSet() const { return m_boundedFilesHasBeenSet; }

    /**
     * <p>Sets the upper limit for the target number of files that will be
     * processed.</p>
     */
    inline void SetBoundedFiles(long long value) { m_boundedFilesHasBeenSet = true; m_boundedFiles = value; }

    /**
     * <p>Sets the upper limit for the target number of files that will be
     * processed.</p>
     */
    inline S3DirectSourceAdditionalOptions& WithBoundedFiles(long long value) { SetBoundedFiles(value); return *this;}


    /**
     * <p>Sets option to enable a sample path.</p>
     */
    inline bool GetEnableSamplePath() const{ return m_enableSamplePath; }

    /**
     * <p>Sets option to enable a sample path.</p>
     */
    inline bool EnableSamplePathHasBeenSet() const { return m_enableSamplePathHasBeenSet; }

    /**
     * <p>Sets option to enable a sample path.</p>
     */
    inline void SetEnableSamplePath(bool value) { m_enableSamplePathHasBeenSet = true; m_enableSamplePath = value; }

    /**
     * <p>Sets option to enable a sample path.</p>
     */
    inline S3DirectSourceAdditionalOptions& WithEnableSamplePath(bool value) { SetEnableSamplePath(value); return *this;}


    /**
     * <p>If enabled, specifies the sample path.</p>
     */
    inline const Aws::String& GetSamplePath() const{ return m_samplePath; }

    /**
     * <p>If enabled, specifies the sample path.</p>
     */
    inline bool SamplePathHasBeenSet() const { return m_samplePathHasBeenSet; }

    /**
     * <p>If enabled, specifies the sample path.</p>
     */
    inline void SetSamplePath(const Aws::String& value) { m_samplePathHasBeenSet = true; m_samplePath = value; }

    /**
     * <p>If enabled, specifies the sample path.</p>
     */
    inline void SetSamplePath(Aws::String&& value) { m_samplePathHasBeenSet = true; m_samplePath = std::move(value); }

    /**
     * <p>If enabled, specifies the sample path.</p>
     */
    inline void SetSamplePath(const char* value) { m_samplePathHasBeenSet = true; m_samplePath.assign(value); }

    /**
     * <p>If enabled, specifies the sample path.</p>
     */
    inline S3DirectSourceAdditionalOptions& WithSamplePath(const Aws::String& value) { SetSamplePath(value); return *this;}

    /**
     * <p>If enabled, specifies the sample path.</p>
     */
    inline S3DirectSourceAdditionalOptions& WithSamplePath(Aws::String&& value) { SetSamplePath(std::move(value)); return *this;}

    /**
     * <p>If enabled, specifies the sample path.</p>
     */
    inline S3DirectSourceAdditionalOptions& WithSamplePath(const char* value) { SetSamplePath(value); return *this;}

  private:

    long long m_boundedSize;
    bool m_boundedSizeHasBeenSet = false;

    long long m_boundedFiles;
    bool m_boundedFilesHasBeenSet = false;

    bool m_enableSamplePath;
    bool m_enableSamplePathHasBeenSet = false;

    Aws::String m_samplePath;
    bool m_samplePathHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
