/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>A software package implicated by a finding.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/AffectedPackage">AWS
 * API Reference</a></p>
 */
class AffectedPackage {
 public:
  AWS_CONTINUUM_API AffectedPackage() = default;
  AWS_CONTINUUM_API AffectedPackage(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API AffectedPackage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The package name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  AffectedPackage& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The affected version.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  AffectedPackage& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The earliest version that resolves the issue, when one is known.</p>
   */
  inline const Aws::String& GetFixedInVersion() const { return m_fixedInVersion; }
  inline bool FixedInVersionHasBeenSet() const { return m_fixedInVersionHasBeenSet; }
  template <typename FixedInVersionT = Aws::String>
  void SetFixedInVersion(FixedInVersionT&& value) {
    m_fixedInVersionHasBeenSet = true;
    m_fixedInVersion = std::forward<FixedInVersionT>(value);
  }
  template <typename FixedInVersionT = Aws::String>
  AffectedPackage& WithFixedInVersion(FixedInVersionT&& value) {
    SetFixedInVersion(std::forward<FixedInVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ecosystem supplying the package.</p>
   */
  inline const Aws::String& GetPackageManager() const { return m_packageManager; }
  inline bool PackageManagerHasBeenSet() const { return m_packageManagerHasBeenSet; }
  template <typename PackageManagerT = Aws::String>
  void SetPackageManager(PackageManagerT&& value) {
    m_packageManagerHasBeenSet = true;
    m_packageManager = std::forward<PackageManagerT>(value);
  }
  template <typename PackageManagerT = Aws::String>
  AffectedPackage& WithPackageManager(PackageManagerT&& value) {
    SetPackageManager(std::forward<PackageManagerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_version;

  Aws::String m_fixedInVersion;

  Aws::String m_packageManager;
  bool m_nameHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_fixedInVersionHasBeenSet = false;
  bool m_packageManagerHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
