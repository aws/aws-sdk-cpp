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
 * <p>The output configuration for a medical coding job.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalCodingOutputDataConfig">AWS
 * API Reference</a></p>
 */
class MedicalCodingOutputDataConfig {
 public:
  AWS_CONNECTHEALTH_API MedicalCodingOutputDataConfig() = default;
  AWS_CONNECTHEALTH_API MedicalCodingOutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalCodingOutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 location where Amazon Connect Health writes the results of the
   * job.</p>
   */
  inline const Aws::String& GetS3OutputPath() const { return m_s3OutputPath; }
  inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }
  template <typename S3OutputPathT = Aws::String>
  void SetS3OutputPath(S3OutputPathT&& value) {
    m_s3OutputPathHasBeenSet = true;
    m_s3OutputPath = std::forward<S3OutputPathT>(value);
  }
  template <typename S3OutputPathT = Aws::String>
  MedicalCodingOutputDataConfig& WithS3OutputPath(S3OutputPathT&& value) {
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
