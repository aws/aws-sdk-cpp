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
    AWS_DEADLINE_API JobAttachmentSettings() = default;
    AWS_DEADLINE_API JobAttachmentSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API JobAttachmentSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 bucket name.</p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    JobAttachmentSettings& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root prefix.</p>
     */
    inline const Aws::String& GetRootPrefix() const { return m_rootPrefix; }
    inline bool RootPrefixHasBeenSet() const { return m_rootPrefixHasBeenSet; }
    template<typename RootPrefixT = Aws::String>
    void SetRootPrefix(RootPrefixT&& value) { m_rootPrefixHasBeenSet = true; m_rootPrefix = std::forward<RootPrefixT>(value); }
    template<typename RootPrefixT = Aws::String>
    JobAttachmentSettings& WithRootPrefix(RootPrefixT&& value) { SetRootPrefix(std::forward<RootPrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_rootPrefix;
    bool m_rootPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
