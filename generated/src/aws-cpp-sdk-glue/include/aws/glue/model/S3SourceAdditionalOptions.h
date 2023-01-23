/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>

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
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3SourceAdditionalOptions">AWS
   * API Reference</a></p>
   */
  class S3SourceAdditionalOptions
  {
  public:
    AWS_GLUE_API S3SourceAdditionalOptions();
    AWS_GLUE_API S3SourceAdditionalOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3SourceAdditionalOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline S3SourceAdditionalOptions& WithBoundedSize(long long value) { SetBoundedSize(value); return *this;}


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
    inline S3SourceAdditionalOptions& WithBoundedFiles(long long value) { SetBoundedFiles(value); return *this;}

  private:

    long long m_boundedSize;
    bool m_boundedSizeHasBeenSet = false;

    long long m_boundedFiles;
    bool m_boundedFilesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
