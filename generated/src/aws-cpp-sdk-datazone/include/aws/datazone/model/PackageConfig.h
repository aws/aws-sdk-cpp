/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/PackageManager.h>

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
 * <p>The package configuration for a notebook run environment in Amazon SageMaker
 * Unified Studio.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/PackageConfig">AWS
 * API Reference</a></p>
 */
class PackageConfig {
 public:
  AWS_DATAZONE_API PackageConfig() = default;
  AWS_DATAZONE_API PackageConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API PackageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The package manager for the notebook run environment. The default value is
   * <code>UV</code>.</p>
   */
  inline PackageManager GetPackageManager() const { return m_packageManager; }
  inline bool PackageManagerHasBeenSet() const { return m_packageManagerHasBeenSet; }
  inline void SetPackageManager(PackageManager value) {
    m_packageManagerHasBeenSet = true;
    m_packageManager = value;
  }
  inline PackageConfig& WithPackageManager(PackageManager value) {
    SetPackageManager(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The package specification content for the notebook run environment. The
   * maximum length is 10240 characters.</p>
   */
  inline const Aws::String& GetPackageSpecification() const { return m_packageSpecification; }
  inline bool PackageSpecificationHasBeenSet() const { return m_packageSpecificationHasBeenSet; }
  template <typename PackageSpecificationT = Aws::String>
  void SetPackageSpecification(PackageSpecificationT&& value) {
    m_packageSpecificationHasBeenSet = true;
    m_packageSpecification = std::forward<PackageSpecificationT>(value);
  }
  template <typename PackageSpecificationT = Aws::String>
  PackageConfig& WithPackageSpecification(PackageSpecificationT&& value) {
    SetPackageSpecification(std::forward<PackageSpecificationT>(value));
    return *this;
  }
  ///@}
 private:
  PackageManager m_packageManager{PackageManager::NOT_SET};

  Aws::String m_packageSpecification;
  bool m_packageManagerHasBeenSet = false;
  bool m_packageSpecificationHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
