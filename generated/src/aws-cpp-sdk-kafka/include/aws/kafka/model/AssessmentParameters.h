/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kafka {
namespace Model {

/**
 * <p>Type-specific parameters for the assessment. All fields are
 * optional.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/AssessmentParameters">AWS
 * API Reference</a></p>
 */
class AssessmentParameters {
 public:
  AWS_KAFKA_API AssessmentParameters() = default;
  AWS_KAFKA_API AssessmentParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API AssessmentParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The target instance type to assess against (for example, express.m7g.large).
   * Optional: when omitted, the assessment reports a recommended instance type as a
   * CAPACITY finding. Supply it to assess readiness for a specific instance
   * type.</p>
   */
  inline const Aws::String& GetTargetInstanceType() const { return m_targetInstanceType; }
  inline bool TargetInstanceTypeHasBeenSet() const { return m_targetInstanceTypeHasBeenSet; }
  template <typename TargetInstanceTypeT = Aws::String>
  void SetTargetInstanceType(TargetInstanceTypeT&& value) {
    m_targetInstanceTypeHasBeenSet = true;
    m_targetInstanceType = std::forward<TargetInstanceTypeT>(value);
  }
  template <typename TargetInstanceTypeT = Aws::String>
  AssessmentParameters& WithTargetInstanceType(TargetInstanceTypeT&& value) {
    SetTargetInstanceType(std::forward<TargetInstanceTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetInstanceType;
  bool m_targetInstanceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
