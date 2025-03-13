/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
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
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>The location of an object in Amazon S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/S3Location">AWS
   * API Reference</a></p>
   */
  class S3Location
  {
  public:
    AWS_KAFKACONNECT_API S3Location() = default;
    AWS_KAFKACONNECT_API S3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an S3 bucket.</p>
     */
    inline const Aws::String& GetBucketArn() const { return m_bucketArn; }
    inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }
    template<typename BucketArnT = Aws::String>
    void SetBucketArn(BucketArnT&& value) { m_bucketArnHasBeenSet = true; m_bucketArn = std::forward<BucketArnT>(value); }
    template<typename BucketArnT = Aws::String>
    S3Location& WithBucketArn(BucketArnT&& value) { SetBucketArn(std::forward<BucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file key for an object in an S3 bucket.</p>
     */
    inline const Aws::String& GetFileKey() const { return m_fileKey; }
    inline bool FileKeyHasBeenSet() const { return m_fileKeyHasBeenSet; }
    template<typename FileKeyT = Aws::String>
    void SetFileKey(FileKeyT&& value) { m_fileKeyHasBeenSet = true; m_fileKey = std::forward<FileKeyT>(value); }
    template<typename FileKeyT = Aws::String>
    S3Location& WithFileKey(FileKeyT&& value) { SetFileKey(std::forward<FileKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of an object in an S3 bucket.</p>
     */
    inline const Aws::String& GetObjectVersion() const { return m_objectVersion; }
    inline bool ObjectVersionHasBeenSet() const { return m_objectVersionHasBeenSet; }
    template<typename ObjectVersionT = Aws::String>
    void SetObjectVersion(ObjectVersionT&& value) { m_objectVersionHasBeenSet = true; m_objectVersion = std::forward<ObjectVersionT>(value); }
    template<typename ObjectVersionT = Aws::String>
    S3Location& WithObjectVersion(ObjectVersionT&& value) { SetObjectVersion(std::forward<ObjectVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketArn;
    bool m_bucketArnHasBeenSet = false;

    Aws::String m_fileKey;
    bool m_fileKeyHasBeenSet = false;

    Aws::String m_objectVersion;
    bool m_objectVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
