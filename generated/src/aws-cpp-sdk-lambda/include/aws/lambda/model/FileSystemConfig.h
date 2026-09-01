/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/S3FilesConfig.h>

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
 * <p>Details about the connection between a Lambda function and an <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-filesystem.html">Amazon
 * EFS file system</a> or an <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-filesystem.html">Amazon
 * S3 file system</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/FileSystemConfig">AWS
 * API Reference</a></p>
 */
class FileSystemConfig {
 public:
  AWS_LAMBDA_API FileSystemConfig() = default;
  AWS_LAMBDA_API FileSystemConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API FileSystemConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon EFS or Amazon S3 Files access
   * point that provides access to the file system.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  FileSystemConfig& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path where the function can access the file system, starting with
   * <code>/mnt/</code>.</p>
   */
  inline const Aws::String& GetLocalMountPath() const { return m_localMountPath; }
  inline bool LocalMountPathHasBeenSet() const { return m_localMountPathHasBeenSet; }
  template <typename LocalMountPathT = Aws::String>
  void SetLocalMountPath(LocalMountPathT&& value) {
    m_localMountPathHasBeenSet = true;
    m_localMountPath = std::forward<LocalMountPathT>(value);
  }
  template <typename LocalMountPathT = Aws::String>
  FileSystemConfig& WithLocalMountPath(LocalMountPathT&& value) {
    SetLocalMountPath(std::forward<LocalMountPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for how your function accesses data on an Amazon S3 file
   * system. Valid only when the file system access point ARN is an Amazon S3 Files
   * access point. If you specify a different access point type (for example, Amazon
   * Elastic File System), the operation returns an
   * <code>InvalidParameterException</code>.</p>
   */
  inline const S3FilesConfig& GetS3FilesConfig() const { return m_s3FilesConfig; }
  inline bool S3FilesConfigHasBeenSet() const { return m_s3FilesConfigHasBeenSet; }
  template <typename S3FilesConfigT = S3FilesConfig>
  void SetS3FilesConfig(S3FilesConfigT&& value) {
    m_s3FilesConfigHasBeenSet = true;
    m_s3FilesConfig = std::forward<S3FilesConfigT>(value);
  }
  template <typename S3FilesConfigT = S3FilesConfig>
  FileSystemConfig& WithS3FilesConfig(S3FilesConfigT&& value) {
    SetS3FilesConfig(std::forward<S3FilesConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_localMountPath;

  S3FilesConfig m_s3FilesConfig;
  bool m_arnHasBeenSet = false;
  bool m_localMountPathHasBeenSet = false;
  bool m_s3FilesConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
