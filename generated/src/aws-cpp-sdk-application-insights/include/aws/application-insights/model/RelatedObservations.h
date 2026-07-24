/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/model/Observation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ApplicationInsights {
namespace Model {

/**
 * <p>Describes observations related to the problem.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/RelatedObservations">AWS
 * API Reference</a></p>
 */
class RelatedObservations {
 public:
  AWS_APPLICATIONINSIGHTS_API RelatedObservations() = default;
  AWS_APPLICATIONINSIGHTS_API RelatedObservations(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_APPLICATIONINSIGHTS_API RelatedObservations& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_APPLICATIONINSIGHTS_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The list of observations related to the problem.</p>
   */
  inline const Aws::Vector<Observation>& GetObservationList() const { return m_observationList; }
  inline bool ObservationListHasBeenSet() const { return m_observationListHasBeenSet; }
  template <typename ObservationListT = Aws::Vector<Observation>>
  void SetObservationList(ObservationListT&& value) {
    m_observationListHasBeenSet = true;
    m_observationList = std::forward<ObservationListT>(value);
  }
  template <typename ObservationListT = Aws::Vector<Observation>>
  RelatedObservations& WithObservationList(ObservationListT&& value) {
    SetObservationList(std::forward<ObservationListT>(value));
    return *this;
  }
  template <typename ObservationListT = Observation>
  RelatedObservations& AddObservationList(ObservationListT&& value) {
    m_observationListHasBeenSet = true;
    m_observationList.emplace_back(std::forward<ObservationListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Observation> m_observationList;
  bool m_observationListHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationInsights
}  // namespace Aws
