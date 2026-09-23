/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace imagebuilder {
namespace Model {

/**
 * <p>Amazon S3 logging configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/S3Logs">AWS
 * API Reference</a></p>
 */
class S3Logs {
 public:
  AWS_IMAGEBUILDER_API S3Logs() = default;
  AWS_IMAGEBUILDER_API S3Logs(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API S3Logs& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of an existing Amazon S3 bucket where Image Builder saves build
   * logs. The bucket isn't validated when you create or update the configuration,
   * and Image Builder doesn't create it. The instance profile associated with this
   * infrastructure configuration must have permission to write to the bucket.</p>
   */
  inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
  inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
  template <typename S3BucketNameT = Aws::String>
  void SetS3BucketName(S3BucketNameT&& value) {
    m_s3BucketNameHasBeenSet = true;
    m_s3BucketName = std::forward<S3BucketNameT>(value);
  }
  template <typename S3BucketNameT = Aws::String>
  S3Logs& WithS3BucketName(S3BucketNameT&& value) {
    SetS3BucketName(std::forward<S3BucketNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 key prefix under which Image Builder writes build and test logs
   * in the bucket.</p>
   */
  inline const Aws::String& GetS3KeyPrefix() const { return m_s3KeyPrefix; }
  inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }
  template <typename S3KeyPrefixT = Aws::String>
  void SetS3KeyPrefix(S3KeyPrefixT&& value) {
    m_s3KeyPrefixHasBeenSet = true;
    m_s3KeyPrefix = std::forward<S3KeyPrefixT>(value);
  }
  template <typename S3KeyPrefixT = Aws::String>
  S3Logs& WithS3KeyPrefix(S3KeyPrefixT&& value) {
    SetS3KeyPrefix(std::forward<S3KeyPrefixT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3BucketName;

  Aws::String m_s3KeyPrefix;
  bool m_s3BucketNameHasBeenSet = false;
  bool m_s3KeyPrefixHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
