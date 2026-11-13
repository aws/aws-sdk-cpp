/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaCore {
namespace Model {

/**
 * <p>Describes a single OCI platform (CPU architecture and operating system)
 * available for a runtime version.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/Platform">AWS
 * API Reference</a></p>
 */
class Platform {
 public:
  AWS_LAMBDACORE_API Platform() = default;
  AWS_LAMBDACORE_API Platform(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API Platform& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The CPU architecture of the platform, for example x86_64 or arm64.</p>
   */
  inline const Aws::String& GetArchitecture() const { return m_architecture; }
  inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
  template <typename ArchitectureT = Aws::String>
  void SetArchitecture(ArchitectureT&& value) {
    m_architectureHasBeenSet = true;
    m_architecture = std::forward<ArchitectureT>(value);
  }
  template <typename ArchitectureT = Aws::String>
  Platform& WithArchitecture(ArchitectureT&& value) {
    SetArchitecture(std::forward<ArchitectureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operating system of the platform.</p>
   */
  inline const Aws::String& GetOs() const { return m_os; }
  inline bool OsHasBeenSet() const { return m_osHasBeenSet; }
  template <typename OsT = Aws::String>
  void SetOs(OsT&& value) {
    m_osHasBeenSet = true;
    m_os = std::forward<OsT>(value);
  }
  template <typename OsT = Aws::String>
  Platform& WithOs(OsT&& value) {
    SetOs(std::forward<OsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content digest of the platform-specific image.</p>
   */
  inline const Aws::String& GetDigest() const { return m_digest; }
  inline bool DigestHasBeenSet() const { return m_digestHasBeenSet; }
  template <typename DigestT = Aws::String>
  void SetDigest(DigestT&& value) {
    m_digestHasBeenSet = true;
    m_digest = std::forward<DigestT>(value);
  }
  template <typename DigestT = Aws::String>
  Platform& WithDigest(DigestT&& value) {
    SetDigest(std::forward<DigestT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_architecture;

  Aws::String m_os;

  Aws::String m_digest;
  bool m_architectureHasBeenSet = false;
  bool m_osHasBeenSet = false;
  bool m_digestHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
