/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataQualityEngine.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

class DataQualityTelemetry {
 public:
  AWS_GLUE_API DataQualityTelemetry() = default;
  AWS_GLUE_API DataQualityTelemetry(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API DataQualityTelemetry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline double GetVcpuHours() const { return m_vcpuHours; }
  inline bool VcpuHoursHasBeenSet() const { return m_vcpuHoursHasBeenSet; }
  inline void SetVcpuHours(double value) {
    m_vcpuHoursHasBeenSet = true;
    m_vcpuHours = value;
  }
  inline DataQualityTelemetry& WithVcpuHours(double value) {
    SetVcpuHours(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetFlagsEnabled() const { return m_flagsEnabled; }
  inline bool FlagsEnabledHasBeenSet() const { return m_flagsEnabledHasBeenSet; }
  template <typename FlagsEnabledT = Aws::Map<Aws::String, Aws::String>>
  void SetFlagsEnabled(FlagsEnabledT&& value) {
    m_flagsEnabledHasBeenSet = true;
    m_flagsEnabled = std::forward<FlagsEnabledT>(value);
  }
  template <typename FlagsEnabledT = Aws::Map<Aws::String, Aws::String>>
  DataQualityTelemetry& WithFlagsEnabled(FlagsEnabledT&& value) {
    SetFlagsEnabled(std::forward<FlagsEnabledT>(value));
    return *this;
  }
  template <typename FlagsEnabledKeyT = Aws::String, typename FlagsEnabledValueT = Aws::String>
  DataQualityTelemetry& AddFlagsEnabled(FlagsEnabledKeyT&& key, FlagsEnabledValueT&& value) {
    m_flagsEnabledHasBeenSet = true;
    m_flagsEnabled.emplace(std::forward<FlagsEnabledKeyT>(key), std::forward<FlagsEnabledValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetLibraryVersion() const { return m_libraryVersion; }
  inline bool LibraryVersionHasBeenSet() const { return m_libraryVersionHasBeenSet; }
  template <typename LibraryVersionT = Aws::String>
  void SetLibraryVersion(LibraryVersionT&& value) {
    m_libraryVersionHasBeenSet = true;
    m_libraryVersion = std::forward<LibraryVersionT>(value);
  }
  template <typename LibraryVersionT = Aws::String>
  DataQualityTelemetry& WithLibraryVersion(LibraryVersionT&& value) {
    SetLibraryVersion(std::forward<LibraryVersionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetSparkVersion() const { return m_sparkVersion; }
  inline bool SparkVersionHasBeenSet() const { return m_sparkVersionHasBeenSet; }
  template <typename SparkVersionT = Aws::String>
  void SetSparkVersion(SparkVersionT&& value) {
    m_sparkVersionHasBeenSet = true;
    m_sparkVersion = std::forward<SparkVersionT>(value);
  }
  template <typename SparkVersionT = Aws::String>
  DataQualityTelemetry& WithSparkVersion(SparkVersionT&& value) {
    SetSparkVersion(std::forward<SparkVersionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetHostRuntimeVersion() const { return m_hostRuntimeVersion; }
  inline bool HostRuntimeVersionHasBeenSet() const { return m_hostRuntimeVersionHasBeenSet; }
  template <typename HostRuntimeVersionT = Aws::String>
  void SetHostRuntimeVersion(HostRuntimeVersionT&& value) {
    m_hostRuntimeVersionHasBeenSet = true;
    m_hostRuntimeVersion = std::forward<HostRuntimeVersionT>(value);
  }
  template <typename HostRuntimeVersionT = Aws::String>
  DataQualityTelemetry& WithHostRuntimeVersion(HostRuntimeVersionT&& value) {
    SetHostRuntimeVersion(std::forward<HostRuntimeVersionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline DataQualityEngine GetEngine() const { return m_engine; }
  inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
  inline void SetEngine(DataQualityEngine value) {
    m_engineHasBeenSet = true;
    m_engine = value;
  }
  inline DataQualityTelemetry& WithEngine(DataQualityEngine value) {
    SetEngine(value);
    return *this;
  }
  ///@}
 private:
  double m_vcpuHours{0.0};

  Aws::Map<Aws::String, Aws::String> m_flagsEnabled;

  Aws::String m_libraryVersion;

  Aws::String m_sparkVersion;

  Aws::String m_hostRuntimeVersion;

  DataQualityEngine m_engine{DataQualityEngine::NOT_SET};
  bool m_vcpuHoursHasBeenSet = false;
  bool m_flagsEnabledHasBeenSet = false;
  bool m_libraryVersionHasBeenSet = false;
  bool m_sparkVersionHasBeenSet = false;
  bool m_hostRuntimeVersionHasBeenSet = false;
  bool m_engineHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
