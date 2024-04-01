/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The job attachment settings. These are the Amazon S3 bucket name and the
   * Amazon S3 prefix.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/JobAttachmentSettings">AWS
   * API Reference</a></p>
   */
  class JobAttachmentSettings
  {
  public:
    AWS_DEADLINE_API JobAttachmentSettings();
    AWS_DEADLINE_API JobAttachmentSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API JobAttachmentSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The root prefix.</p>
     */
    inline const Aws::String& GetRootPrefix() const{ return m_rootPrefix; }

    /**
     * <p>The root prefix.</p>
     */
    inline bool RootPrefixHasBeenSet() const { return m_rootPrefixHasBeenSet; }

    /**
     * <p>The root prefix.</p>
     */
    inline void SetRootPrefix(const Aws::String& value) { m_rootPrefixHasBeenSet = true; m_rootPrefix = value; }

    /**
     * <p>The root prefix.</p>
     */
    inline void SetRootPrefix(Aws::String&& value) { m_rootPrefixHasBeenSet = true; m_rootPrefix = std::move(value); }

    /**
     * <p>The root prefix.</p>
     */
    inline void SetRootPrefix(const char* value) { m_rootPrefixHasBeenSet = true; m_rootPrefix.assign(value); }

    /**
     * <p>The root prefix.</p>
     */
    inline JobAttachmentSettings& WithRootPrefix(const Aws::String& value) { SetRootPrefix(value); return *this;}

    /**
     * <p>The root prefix.</p>
     */
    inline JobAttachmentSettings& WithRootPrefix(Aws::String&& value) { SetRootPrefix(std::move(value)); return *this;}

    /**
     * <p>The root prefix.</p>
     */
    inline JobAttachmentSettings& WithRootPrefix(const char* value) { SetRootPrefix(value); return *this;}


    /**
     * <p>The Amazon S3 bucket name.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The Amazon S3 bucket name.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket name.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The Amazon S3 bucket name.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The Amazon S3 bucket name.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The Amazon S3 bucket name.</p>
     */
    inline JobAttachmentSettings& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The Amazon S3 bucket name.</p>
     */
    inline JobAttachmentSettings& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket name.</p>
     */
    inline JobAttachmentSettings& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}

  private:

    Aws::String m_rootPrefix;
    bool m_rootPrefixHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
