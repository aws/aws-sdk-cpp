/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>Configuration details for insights output.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/OutputDataConfig">AWS
 * API Reference</a></p>
 */
class OutputDataConfig {
 public:
  AWS_CONNECTHEALTH_API OutputDataConfig() = default;
  AWS_CONNECTHEALTH_API OutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API OutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>S3 URI where the insights output will be stored.</p>
   */
  inline const Aws::String& GetS3OutputPath() const { return m_s3OutputPath; }
  inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }
  template <typename S3OutputPathT = Aws::String>
  void SetS3OutputPath(S3OutputPathT&& value) {
    m_s3OutputPathHasBeenSet = true;
    m_s3OutputPath = std::forward<S3OutputPathT>(value);
  }
  template <typename S3OutputPathT = Aws::String>
  OutputDataConfig& WithS3OutputPath(S3OutputPathT&& value) {
    SetS3OutputPath(std::forward<S3OutputPathT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3OutputPath;
  bool m_s3OutputPathHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
