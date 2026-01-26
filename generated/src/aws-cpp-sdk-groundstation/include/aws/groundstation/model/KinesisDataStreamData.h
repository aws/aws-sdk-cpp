/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>

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
 * <p>Information for telemetry delivery to Kinesis Data Streams.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/KinesisDataStreamData">AWS
 * API Reference</a></p>
 */
class KinesisDataStreamData {
 public:
  AWS_GROUNDSTATION_API KinesisDataStreamData() = default;
  AWS_GROUNDSTATION_API KinesisDataStreamData(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API KinesisDataStreamData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>ARN of the IAM Role used by AWS Ground Station to deliver telemetry.</p>
   */
  inline const Aws::String& GetKinesisRoleArn() const { return m_kinesisRoleArn; }
  inline bool KinesisRoleArnHasBeenSet() const { return m_kinesisRoleArnHasBeenSet; }
  template <typename KinesisRoleArnT = Aws::String>
  void SetKinesisRoleArn(KinesisRoleArnT&& value) {
    m_kinesisRoleArnHasBeenSet = true;
    m_kinesisRoleArn = std::forward<KinesisRoleArnT>(value);
  }
  template <typename KinesisRoleArnT = Aws::String>
  KinesisDataStreamData& WithKinesisRoleArn(KinesisRoleArnT&& value) {
    SetKinesisRoleArn(std::forward<KinesisRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ARN of the Kinesis Data Stream to deliver telemetry to.</p>
   */
  inline const Aws::String& GetKinesisDataStreamArn() const { return m_kinesisDataStreamArn; }
  inline bool KinesisDataStreamArnHasBeenSet() const { return m_kinesisDataStreamArnHasBeenSet; }
  template <typename KinesisDataStreamArnT = Aws::String>
  void SetKinesisDataStreamArn(KinesisDataStreamArnT&& value) {
    m_kinesisDataStreamArnHasBeenSet = true;
    m_kinesisDataStreamArn = std::forward<KinesisDataStreamArnT>(value);
  }
  template <typename KinesisDataStreamArnT = Aws::String>
  KinesisDataStreamData& WithKinesisDataStreamArn(KinesisDataStreamArnT&& value) {
    SetKinesisDataStreamArn(std::forward<KinesisDataStreamArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_kinesisRoleArn;

  Aws::String m_kinesisDataStreamArn;
  bool m_kinesisRoleArnHasBeenSet = false;
  bool m_kinesisDataStreamArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
