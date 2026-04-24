/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/LambdaSavingsEstimationModeSource.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ComputeOptimizer {
namespace Model {

/**
 * <p> Describes the savings estimation used for calculating savings opportunity
 * for Lambda functions. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/LambdaSavingsEstimationMode">AWS
 * API Reference</a></p>
 */
class LambdaSavingsEstimationMode {
 public:
  AWS_COMPUTEOPTIMIZER_API LambdaSavingsEstimationMode() = default;
  AWS_COMPUTEOPTIMIZER_API LambdaSavingsEstimationMode(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZER_API LambdaSavingsEstimationMode& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZER_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p> Describes the source for calculation of savings opportunity for Lambda
   * functions. </p>
   */
  inline LambdaSavingsEstimationModeSource GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  inline void SetSource(LambdaSavingsEstimationModeSource value) {
    m_sourceHasBeenSet = true;
    m_source = value;
  }
  inline LambdaSavingsEstimationMode& WithSource(LambdaSavingsEstimationModeSource value) {
    SetSource(value);
    return *this;
  }
  ///@}
 private:
  LambdaSavingsEstimationModeSource m_source{LambdaSavingsEstimationModeSource::NOT_SET};
  bool m_sourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws
