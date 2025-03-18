/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes the S3 location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/S3Location">AWS
   * API Reference</a></p>
   */
  class S3Location
  {
  public:
    AWS_APPSTREAM_API S3Location() = default;
    AWS_APPSTREAM_API S3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 bucket of the S3 object.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    S3Location& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 key of the S3 object.</p> <p>This is required when used for the
     * following:</p> <ul> <li> <p>IconS3Location (Actions: CreateApplication and
     * UpdateApplication)</p> </li> <li> <p>SessionScriptS3Location (Actions:
     * CreateFleet and UpdateFleet)</p> </li> <li> <p>ScriptDetails (Actions:
     * CreateAppBlock)</p> </li> <li> <p>SourceS3Location when creating an app block
     * with <code>CUSTOM</code> PackagingType (Actions: CreateAppBlock)</p> </li> <li>
     * <p>SourceS3Location when creating an app block with <code>APPSTREAM2</code>
     * PackagingType, and using an existing application package (VHD file). In this
     * case, <code>S3Key</code> refers to the VHD file. If a new application package is
     * required, then <code>S3Key</code> is not required. (Actions: CreateAppBlock)</p>
     * </li> </ul>
     */
    inline const Aws::String& GetS3Key() const { return m_s3Key; }
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }
    template<typename S3KeyT = Aws::String>
    void SetS3Key(S3KeyT&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::forward<S3KeyT>(value); }
    template<typename S3KeyT = Aws::String>
    S3Location& WithS3Key(S3KeyT&& value) { SetS3Key(std::forward<S3KeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
