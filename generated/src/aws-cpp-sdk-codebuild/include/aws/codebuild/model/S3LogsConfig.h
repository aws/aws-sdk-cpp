/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/LogsConfigStatusType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/BucketOwnerAccess.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p> Information about S3 logs for a build project. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/S3LogsConfig">AWS
   * API Reference</a></p>
   */
  class S3LogsConfig
  {
  public:
    AWS_CODEBUILD_API S3LogsConfig() = default;
    AWS_CODEBUILD_API S3LogsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API S3LogsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current status of the S3 build logs. Valid values are:</p> <ul> <li> <p>
     * <code>ENABLED</code>: S3 build logs are enabled for this build project.</p>
     * </li> <li> <p> <code>DISABLED</code>: S3 build logs are not enabled for this
     * build project.</p> </li> </ul>
     */
    inline LogsConfigStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(LogsConfigStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline S3LogsConfig& WithStatus(LogsConfigStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of an S3 bucket and the path prefix for S3 logs. If your Amazon S3
     * bucket name is <code>my-bucket</code>, and your path prefix is
     * <code>build-log</code>, then acceptable formats are
     * <code>my-bucket/build-log</code> or
     * <code>arn:aws:s3:::my-bucket/build-log</code>. </p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    S3LogsConfig& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Set to true if you do not want your S3 build log output encrypted. By
     * default S3 build logs are encrypted. </p>
     */
    inline bool GetEncryptionDisabled() const { return m_encryptionDisabled; }
    inline bool EncryptionDisabledHasBeenSet() const { return m_encryptionDisabledHasBeenSet; }
    inline void SetEncryptionDisabled(bool value) { m_encryptionDisabledHasBeenSet = true; m_encryptionDisabled = value; }
    inline S3LogsConfig& WithEncryptionDisabled(bool value) { SetEncryptionDisabled(value); return *this;}
    ///@}

    ///@{
    
    inline BucketOwnerAccess GetBucketOwnerAccess() const { return m_bucketOwnerAccess; }
    inline bool BucketOwnerAccessHasBeenSet() const { return m_bucketOwnerAccessHasBeenSet; }
    inline void SetBucketOwnerAccess(BucketOwnerAccess value) { m_bucketOwnerAccessHasBeenSet = true; m_bucketOwnerAccess = value; }
    inline S3LogsConfig& WithBucketOwnerAccess(BucketOwnerAccess value) { SetBucketOwnerAccess(value); return *this;}
    ///@}
  private:

    LogsConfigStatusType m_status{LogsConfigStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    bool m_encryptionDisabled{false};
    bool m_encryptionDisabledHasBeenSet = false;

    BucketOwnerAccess m_bucketOwnerAccess{BucketOwnerAccess::NOT_SET};
    bool m_bucketOwnerAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
