/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/PackageConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The environment configuration for a notebook run in Amazon SageMaker Unified
 * Studio.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/EnvironmentConfig">AWS
 * API Reference</a></p>
 */
class EnvironmentConfig {
 public:
  AWS_DATAZONE_API EnvironmentConfig() = default;
  AWS_DATAZONE_API EnvironmentConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API EnvironmentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The image version for the notebook run environment.</p>
   */
  inline const Aws::String& GetImageVersion() const { return m_imageVersion; }
  inline bool ImageVersionHasBeenSet() const { return m_imageVersionHasBeenSet; }
  template <typename ImageVersionT = Aws::String>
  void SetImageVersion(ImageVersionT&& value) {
    m_imageVersionHasBeenSet = true;
    m_imageVersion = std::forward<ImageVersionT>(value);
  }
  template <typename ImageVersionT = Aws::String>
  EnvironmentConfig& WithImageVersion(ImageVersionT&& value) {
    SetImageVersion(std::forward<ImageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The package configuration for the notebook run environment.</p>
   */
  inline const PackageConfig& GetPackageConfig() const { return m_packageConfig; }
  inline bool PackageConfigHasBeenSet() const { return m_packageConfigHasBeenSet; }
  template <typename PackageConfigT = PackageConfig>
  void SetPackageConfig(PackageConfigT&& value) {
    m_packageConfigHasBeenSet = true;
    m_packageConfig = std::forward<PackageConfigT>(value);
  }
  template <typename PackageConfigT = PackageConfig>
  EnvironmentConfig& WithPackageConfig(PackageConfigT&& value) {
    SetPackageConfig(std::forward<PackageConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_imageVersion;

  PackageConfig m_packageConfig;
  bool m_imageVersionHasBeenSet = false;
  bool m_packageConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
