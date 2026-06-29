/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {

/**
 * <p>Details about the resolved Amazon S3 object that contains a function's
 * deployment package.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ResolvedS3Object">AWS
 * API Reference</a></p>
 */
class ResolvedS3Object {
 public:
  AWS_LAMBDA_API ResolvedS3Object() = default;
  AWS_LAMBDA_API ResolvedS3Object(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API ResolvedS3Object& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 bucket that contains the deployment package.</p>
   */
  inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
  inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
  template <typename S3BucketT = Aws::String>
  void SetS3Bucket(S3BucketT&& value) {
    m_s3BucketHasBeenSet = true;
    m_s3Bucket = std::forward<S3BucketT>(value);
  }
  template <typename S3BucketT = Aws::String>
  ResolvedS3Object& WithS3Bucket(S3BucketT&& value) {
    SetS3Bucket(std::forward<S3BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 key of the deployment package.</p>
   */
  inline const Aws::String& GetS3Key() const { return m_s3Key; }
  inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }
  template <typename S3KeyT = Aws::String>
  void SetS3Key(S3KeyT&& value) {
    m_s3KeyHasBeenSet = true;
    m_s3Key = std::forward<S3KeyT>(value);
  }
  template <typename S3KeyT = Aws::String>
  ResolvedS3Object& WithS3Key(S3KeyT&& value) {
    SetS3Key(std::forward<S3KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the deployment package object.</p>
   */
  inline const Aws::String& GetS3ObjectVersion() const { return m_s3ObjectVersion; }
  inline bool S3ObjectVersionHasBeenSet() const { return m_s3ObjectVersionHasBeenSet; }
  template <typename S3ObjectVersionT = Aws::String>
  void SetS3ObjectVersion(S3ObjectVersionT&& value) {
    m_s3ObjectVersionHasBeenSet = true;
    m_s3ObjectVersion = std::forward<S3ObjectVersionT>(value);
  }
  template <typename S3ObjectVersionT = Aws::String>
  ResolvedS3Object& WithS3ObjectVersion(S3ObjectVersionT&& value) {
    SetS3ObjectVersion(std::forward<S3ObjectVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3Bucket;

  Aws::String m_s3Key;

  Aws::String m_s3ObjectVersion;
  bool m_s3BucketHasBeenSet = false;
  bool m_s3KeyHasBeenSet = false;
  bool m_s3ObjectVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
