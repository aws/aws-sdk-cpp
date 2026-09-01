/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/DirectS3Read.h>

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
 * <p>Setting controls how your function accesses data from an Amazon S3 file
 * system.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/S3FilesConfig">AWS
 * API Reference</a></p>
 */
class S3FilesConfig {
 public:
  AWS_LAMBDA_API S3FilesConfig() = default;
  AWS_LAMBDA_API S3FilesConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API S3FilesConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies if a function reads from the file system for the lowest latency, or
   * through Amazon S3 Files feature "direct Amazon S3 bucket reads" for the highest
   * throughput. Valid values:</p> <ul> <li> <p> <code>AUTO</code> (default) – Direct
   * reads are active for functions you configure with 512 MB or more of memory.</p>
   * </li> <li> <p> <code>ENABLED</code> – Enforces all reads are directly from the
   * Amazon S3 bucket, regardless of available memory (less than 512 MB).</p> </li>
   * <li> <p> <code>DISABLED</code> – Routes all reads through the file system,
   * regardless of memory configuration.</p> </li> </ul> <p>To use direct reads, you
   * must grant the execution role the <code>s3:GetObject</code> and
   * <code>s3:GetObjectVersion</code> permissions. If a direct read fails, Lambda
   * automatically falls back to reading through the file system.</p>
   */
  inline DirectS3Read GetDirectS3Read() const { return m_directS3Read; }
  inline bool DirectS3ReadHasBeenSet() const { return m_directS3ReadHasBeenSet; }
  inline void SetDirectS3Read(DirectS3Read value) {
    m_directS3ReadHasBeenSet = true;
    m_directS3Read = value;
  }
  inline S3FilesConfig& WithDirectS3Read(DirectS3Read value) {
    SetDirectS3Read(value);
    return *this;
  }
  ///@}
 private:
  DirectS3Read m_directS3Read{DirectS3Read::NOT_SET};
  bool m_directS3ReadHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
