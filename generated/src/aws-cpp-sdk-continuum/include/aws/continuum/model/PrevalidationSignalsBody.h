/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/PrevalidationSignal.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Projected content for an EVIDENCE artifact carrying prioritization's
 * prevalidation signals.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/PrevalidationSignalsBody">AWS
 * API Reference</a></p>
 */
class PrevalidationSignalsBody {
 public:
  AWS_CONTINUUM_API PrevalidationSignalsBody() = default;
  AWS_CONTINUUM_API PrevalidationSignalsBody(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API PrevalidationSignalsBody& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The agent that produced this signal set.</p>
   */
  inline const Aws::String& GetProducedBy() const { return m_producedBy; }
  inline bool ProducedByHasBeenSet() const { return m_producedByHasBeenSet; }
  template <typename ProducedByT = Aws::String>
  void SetProducedBy(ProducedByT&& value) {
    m_producedByHasBeenSet = true;
    m_producedBy = std::forward<ProducedByT>(value);
  }
  template <typename ProducedByT = Aws::String>
  PrevalidationSignalsBody& WithProducedBy(ProducedByT&& value) {
    SetProducedBy(std::forward<ProducedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The signals backing the Issue's proposed severity.</p>
   */
  inline const Aws::Vector<PrevalidationSignal>& GetSignals() const { return m_signals; }
  inline bool SignalsHasBeenSet() const { return m_signalsHasBeenSet; }
  template <typename SignalsT = Aws::Vector<PrevalidationSignal>>
  void SetSignals(SignalsT&& value) {
    m_signalsHasBeenSet = true;
    m_signals = std::forward<SignalsT>(value);
  }
  template <typename SignalsT = Aws::Vector<PrevalidationSignal>>
  PrevalidationSignalsBody& WithSignals(SignalsT&& value) {
    SetSignals(std::forward<SignalsT>(value));
    return *this;
  }
  template <typename SignalsT = PrevalidationSignal>
  PrevalidationSignalsBody& AddSignals(SignalsT&& value) {
    m_signalsHasBeenSet = true;
    m_signals.emplace_back(std::forward<SignalsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_producedBy;

  Aws::Vector<PrevalidationSignal> m_signals;
  bool m_producedByHasBeenSet = false;
  bool m_signalsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
