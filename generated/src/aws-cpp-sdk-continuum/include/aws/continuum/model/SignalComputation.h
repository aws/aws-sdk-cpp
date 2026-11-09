/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/SignalBand.h>

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
 * <p>Deterministic values the producer computed from its assessment, as distinct
 * from the assessment itself.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/SignalComputation">AWS
 * API Reference</a></p>
 */
class SignalComputation {
 public:
  AWS_CONTINUUM_API SignalComputation() = default;
  AWS_CONTINUUM_API SignalComputation(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API SignalComputation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Computed likelihood band, on a likelihood signal.</p>
   */
  inline SignalBand GetLikelihoodBand() const { return m_likelihoodBand; }
  inline bool LikelihoodBandHasBeenSet() const { return m_likelihoodBandHasBeenSet; }
  inline void SetLikelihoodBand(SignalBand value) {
    m_likelihoodBandHasBeenSet = true;
    m_likelihoodBand = value;
  }
  inline SignalComputation& WithLikelihoodBand(SignalBand value) {
    SetLikelihoodBand(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Computed impact band, on an impact signal.</p>
   */
  inline SignalBand GetImpactBand() const { return m_impactBand; }
  inline bool ImpactBandHasBeenSet() const { return m_impactBandHasBeenSet; }
  inline void SetImpactBand(SignalBand value) {
    m_impactBandHasBeenSet = true;
    m_impactBand = value;
  }
  inline SignalComputation& WithImpactBand(SignalBand value) {
    SetImpactBand(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How many of the four exploit preconditions act as barriers (0-4).</p>
   */
  inline int GetBarriers() const { return m_barriers; }
  inline bool BarriersHasBeenSet() const { return m_barriersHasBeenSet; }
  inline void SetBarriers(int value) {
    m_barriersHasBeenSet = true;
    m_barriers = value;
  }
  inline SignalComputation& WithBarriers(int value) {
    SetBarriers(value);
    return *this;
  }
  ///@}
 private:
  SignalBand m_likelihoodBand{SignalBand::NOT_SET};

  SignalBand m_impactBand{SignalBand::NOT_SET};

  int m_barriers{0};
  bool m_likelihoodBandHasBeenSet = false;
  bool m_impactBandHasBeenSet = false;
  bool m_barriersHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
