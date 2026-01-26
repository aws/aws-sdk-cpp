/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/KinesisDataStreamData.h>

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
 * <p>Information about a telemetry sink.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/TelemetrySinkData">AWS
 * API Reference</a></p>
 */
class TelemetrySinkData {
 public:
  AWS_GROUNDSTATION_API TelemetrySinkData() = default;
  AWS_GROUNDSTATION_API TelemetrySinkData(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API TelemetrySinkData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Information about a telemetry sink of type
   * <code>KINESIS_DATA_STREAM</code>.</p>
   */
  inline const KinesisDataStreamData& GetKinesisDataStreamData() const { return m_kinesisDataStreamData; }
  inline bool KinesisDataStreamDataHasBeenSet() const { return m_kinesisDataStreamDataHasBeenSet; }
  template <typename KinesisDataStreamDataT = KinesisDataStreamData>
  void SetKinesisDataStreamData(KinesisDataStreamDataT&& value) {
    m_kinesisDataStreamDataHasBeenSet = true;
    m_kinesisDataStreamData = std::forward<KinesisDataStreamDataT>(value);
  }
  template <typename KinesisDataStreamDataT = KinesisDataStreamData>
  TelemetrySinkData& WithKinesisDataStreamData(KinesisDataStreamDataT&& value) {
    SetKinesisDataStreamData(std::forward<KinesisDataStreamDataT>(value));
    return *this;
  }
  ///@}
 private:
  KinesisDataStreamData m_kinesisDataStreamData;
  bool m_kinesisDataStreamDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
