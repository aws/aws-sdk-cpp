/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Contains summary statistics about a test case execution.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ObservationSummary">AWS
 * API Reference</a></p>
 */
class ObservationSummary {
 public:
  AWS_CONNECT_API ObservationSummary() = default;
  AWS_CONNECT_API ObservationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ObservationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of observations in the test case.</p>
   */
  inline int GetTotalObservations() const { return m_totalObservations; }
  inline bool TotalObservationsHasBeenSet() const { return m_totalObservationsHasBeenSet; }
  inline void SetTotalObservations(int value) {
    m_totalObservationsHasBeenSet = true;
    m_totalObservations = value;
  }
  inline ObservationSummary& WithTotalObservations(int value) {
    SetTotalObservations(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of observations that passed during execution.</p>
   */
  inline int GetObservationsPassed() const { return m_observationsPassed; }
  inline bool ObservationsPassedHasBeenSet() const { return m_observationsPassedHasBeenSet; }
  inline void SetObservationsPassed(int value) {
    m_observationsPassedHasBeenSet = true;
    m_observationsPassed = value;
  }
  inline ObservationSummary& WithObservationsPassed(int value) {
    SetObservationsPassed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of observations that failed during execution.</p>
   */
  inline int GetObservationsFailed() const { return m_observationsFailed; }
  inline bool ObservationsFailedHasBeenSet() const { return m_observationsFailedHasBeenSet; }
  inline void SetObservationsFailed(int value) {
    m_observationsFailedHasBeenSet = true;
    m_observationsFailed = value;
  }
  inline ObservationSummary& WithObservationsFailed(int value) {
    SetObservationsFailed(value);
    return *this;
  }
  ///@}
 private:
  int m_totalObservations{0};

  int m_observationsPassed{0};

  int m_observationsFailed{0};
  bool m_totalObservationsHasBeenSet = false;
  bool m_observationsPassedHasBeenSet = false;
  bool m_observationsFailedHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
