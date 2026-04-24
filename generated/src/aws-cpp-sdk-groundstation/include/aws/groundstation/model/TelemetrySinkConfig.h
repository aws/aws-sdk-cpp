/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/TelemetrySinkData.h>
#include <aws/groundstation/model/TelemetrySinkType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GroundStation {
namespace Model {

/**
 * <p>Information about a telemetry sink <code>Config</code>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/TelemetrySinkConfig">AWS
 * API Reference</a></p>
 */
class TelemetrySinkConfig {
 public:
  AWS_GROUNDSTATION_API TelemetrySinkConfig() = default;
  AWS_GROUNDSTATION_API TelemetrySinkConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API TelemetrySinkConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of telemetry sink.</p>
   */
  inline TelemetrySinkType GetTelemetrySinkType() const { return m_telemetrySinkType; }
  inline bool TelemetrySinkTypeHasBeenSet() const { return m_telemetrySinkTypeHasBeenSet; }
  inline void SetTelemetrySinkType(TelemetrySinkType value) {
    m_telemetrySinkTypeHasBeenSet = true;
    m_telemetrySinkType = value;
  }
  inline TelemetrySinkConfig& WithTelemetrySinkType(TelemetrySinkType value) {
    SetTelemetrySinkType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the telemetry sink specified by the
   * <code>telemetrySinkType</code>.</p>
   */
  inline const TelemetrySinkData& GetTelemetrySinkData() const { return m_telemetrySinkData; }
  inline bool TelemetrySinkDataHasBeenSet() const { return m_telemetrySinkDataHasBeenSet; }
  template <typename TelemetrySinkDataT = TelemetrySinkData>
  void SetTelemetrySinkData(TelemetrySinkDataT&& value) {
    m_telemetrySinkDataHasBeenSet = true;
    m_telemetrySinkData = std::forward<TelemetrySinkDataT>(value);
  }
  template <typename TelemetrySinkDataT = TelemetrySinkData>
  TelemetrySinkConfig& WithTelemetrySinkData(TelemetrySinkDataT&& value) {
    SetTelemetrySinkData(std::forward<TelemetrySinkDataT>(value));
    return *this;
  }
  ///@}
 private:
  TelemetrySinkType m_telemetrySinkType{TelemetrySinkType::NOT_SET};

  TelemetrySinkData m_telemetrySinkData;
  bool m_telemetrySinkTypeHasBeenSet = false;
  bool m_telemetrySinkDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
