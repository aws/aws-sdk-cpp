/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/S3Object.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaWeb {
namespace Model {

/**
 * <p>The code configuration specifying the location of the deployment
 * artifact.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/CodeConfig">AWS
 * API Reference</a></p>
 */
class CodeConfig {
 public:
  AWS_LAMBDAWEB_API CodeConfig() = default;
  AWS_LAMBDAWEB_API CodeConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API CodeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 location of the deployment artifact.</p>
   */
  inline const S3Object& GetS3Object() const { return m_s3Object; }
  inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }
  template <typename S3ObjectT = S3Object>
  void SetS3Object(S3ObjectT&& value) {
    m_s3ObjectHasBeenSet = true;
    m_s3Object = std::forward<S3ObjectT>(value);
  }
  template <typename S3ObjectT = S3Object>
  CodeConfig& WithS3Object(S3ObjectT&& value) {
    SetS3Object(std::forward<S3ObjectT>(value));
    return *this;
  }
  ///@}
 private:
  S3Object m_s3Object;
  bool m_s3ObjectHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
