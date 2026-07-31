/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/ConnectionStartPoint.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCampaignsV2 {
namespace Model {

/**
 * <p>Configuration for abandonment-rate-based dialer throttling.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/AbandonmentRatePacingConfig">AWS
 * API Reference</a></p>
 */
class AbandonmentRatePacingConfig {
 public:
  AWS_CONNECTCAMPAIGNSV2_API AbandonmentRatePacingConfig() = default;
  AWS_CONNECTCAMPAIGNSV2_API AbandonmentRatePacingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API AbandonmentRatePacingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline double GetTargetRate() const { return m_targetRate; }
  inline bool TargetRateHasBeenSet() const { return m_targetRateHasBeenSet; }
  inline void SetTargetRate(double value) {
    m_targetRateHasBeenSet = true;
    m_targetRate = value;
  }
  inline AbandonmentRatePacingConfig& WithTargetRate(double value) {
    SetTargetRate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Event from which connectionThresholdSeconds is measured.</p>
   */
  inline ConnectionStartPoint GetConnectionStartPoint() const { return m_connectionStartPoint; }
  inline bool ConnectionStartPointHasBeenSet() const { return m_connectionStartPointHasBeenSet; }
  inline void SetConnectionStartPoint(ConnectionStartPoint value) {
    m_connectionStartPointHasBeenSet = true;
    m_connectionStartPoint = value;
  }
  inline AbandonmentRatePacingConfig& WithConnectionStartPoint(ConnectionStartPoint value) {
    SetConnectionStartPoint(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Seconds after connectionStartPoint before a contact counts as abandoned.</p>
   */
  inline int GetConnectionThresholdSeconds() const { return m_connectionThresholdSeconds; }
  inline bool ConnectionThresholdSecondsHasBeenSet() const { return m_connectionThresholdSecondsHasBeenSet; }
  inline void SetConnectionThresholdSeconds(int value) {
    m_connectionThresholdSecondsHasBeenSet = true;
    m_connectionThresholdSeconds = value;
  }
  inline AbandonmentRatePacingConfig& WithConnectionThresholdSeconds(int value) {
    SetConnectionThresholdSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Rolling window over which abandonmentRate is computed.</p>
   */
  inline const Aws::String& GetEvaluationWindow() const { return m_evaluationWindow; }
  inline bool EvaluationWindowHasBeenSet() const { return m_evaluationWindowHasBeenSet; }
  template <typename EvaluationWindowT = Aws::String>
  void SetEvaluationWindow(EvaluationWindowT&& value) {
    m_evaluationWindowHasBeenSet = true;
    m_evaluationWindow = std::forward<EvaluationWindowT>(value);
  }
  template <typename EvaluationWindowT = Aws::String>
  AbandonmentRatePacingConfig& WithEvaluationWindow(EvaluationWindowT&& value) {
    SetEvaluationWindow(std::forward<EvaluationWindowT>(value));
    return *this;
  }
  ///@}
 private:
  double m_targetRate{0.0};

  ConnectionStartPoint m_connectionStartPoint{ConnectionStartPoint::NOT_SET};

  int m_connectionThresholdSeconds{0};

  Aws::String m_evaluationWindow;
  bool m_targetRateHasBeenSet = false;
  bool m_connectionStartPointHasBeenSet = false;
  bool m_connectionThresholdSecondsHasBeenSet = false;
  bool m_evaluationWindowHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
