/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

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
 * <p>The compute configuration for a notebook run in Amazon SageMaker Unified
 * Studio.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ComputeConfig">AWS
 * API Reference</a></p>
 */
class ComputeConfig {
 public:
  AWS_DATAZONE_API ComputeConfig() = default;
  AWS_DATAZONE_API ComputeConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API ComputeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The instance type for the notebook run compute.</p>
   */
  inline const Aws::String& GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  template <typename InstanceTypeT = Aws::String>
  void SetInstanceType(InstanceTypeT&& value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = std::forward<InstanceTypeT>(value);
  }
  template <typename InstanceTypeT = Aws::String>
  ComputeConfig& WithInstanceType(InstanceTypeT&& value) {
    SetInstanceType(std::forward<InstanceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment version for the notebook run compute.</p>
   */
  inline const Aws::String& GetEnvironmentVersion() const { return m_environmentVersion; }
  inline bool EnvironmentVersionHasBeenSet() const { return m_environmentVersionHasBeenSet; }
  template <typename EnvironmentVersionT = Aws::String>
  void SetEnvironmentVersion(EnvironmentVersionT&& value) {
    m_environmentVersionHasBeenSet = true;
    m_environmentVersion = std::forward<EnvironmentVersionT>(value);
  }
  template <typename EnvironmentVersionT = Aws::String>
  ComputeConfig& WithEnvironmentVersion(EnvironmentVersionT&& value) {
    SetEnvironmentVersion(std::forward<EnvironmentVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceType;

  Aws::String m_environmentVersion;
  bool m_instanceTypeHasBeenSet = false;
  bool m_environmentVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
