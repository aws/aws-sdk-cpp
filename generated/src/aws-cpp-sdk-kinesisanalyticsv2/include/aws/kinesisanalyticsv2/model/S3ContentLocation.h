/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>For a Managed Service for Apache Flink application provides a description of
   * an Amazon S3 object, including the Amazon Resource Name (ARN) of the S3 bucket,
   * the name of the Amazon S3 object that contains the data, and the version number
   * of the Amazon S3 object that contains the data. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/S3ContentLocation">AWS
   * API Reference</a></p>
   */
  class S3ContentLocation
  {
  public:
    AWS_KINESISANALYTICSV2_API S3ContentLocation() = default;
    AWS_KINESISANALYTICSV2_API S3ContentLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API S3ContentLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the S3 bucket containing the application
     * code.</p>
     */
    inline const Aws::String& GetBucketARN() const { return m_bucketARN; }
    inline bool BucketARNHasBeenSet() const { return m_bucketARNHasBeenSet; }
    template<typename BucketARNT = Aws::String>
    void SetBucketARN(BucketARNT&& value) { m_bucketARNHasBeenSet = true; m_bucketARN = std::forward<BucketARNT>(value); }
    template<typename BucketARNT = Aws::String>
    S3ContentLocation& WithBucketARN(BucketARNT&& value) { SetBucketARN(std::forward<BucketARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file key for the object containing the application code.</p>
     */
    inline const Aws::String& GetFileKey() const { return m_fileKey; }
    inline bool FileKeyHasBeenSet() const { return m_fileKeyHasBeenSet; }
    template<typename FileKeyT = Aws::String>
    void SetFileKey(FileKeyT&& value) { m_fileKeyHasBeenSet = true; m_fileKey = std::forward<FileKeyT>(value); }
    template<typename FileKeyT = Aws::String>
    S3ContentLocation& WithFileKey(FileKeyT&& value) { SetFileKey(std::forward<FileKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the object containing the application code.</p>
     */
    inline const Aws::String& GetObjectVersion() const { return m_objectVersion; }
    inline bool ObjectVersionHasBeenSet() const { return m_objectVersionHasBeenSet; }
    template<typename ObjectVersionT = Aws::String>
    void SetObjectVersion(ObjectVersionT&& value) { m_objectVersionHasBeenSet = true; m_objectVersion = std::forward<ObjectVersionT>(value); }
    template<typename ObjectVersionT = Aws::String>
    S3ContentLocation& WithObjectVersion(ObjectVersionT&& value) { SetObjectVersion(std::forward<ObjectVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketARN;
    bool m_bucketARNHasBeenSet = false;

    Aws::String m_fileKey;
    bool m_fileKeyHasBeenSet = false;

    Aws::String m_objectVersion;
    bool m_objectVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
