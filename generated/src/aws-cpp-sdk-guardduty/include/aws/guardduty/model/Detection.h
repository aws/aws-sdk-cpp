/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/Anomaly.h>
#include <aws/guardduty/model/Sequence.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the detected behavior.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Detection">AWS
   * API Reference</a></p>
   */
  class Detection
  {
  public:
    AWS_GUARDDUTY_API Detection() = default;
    AWS_GUARDDUTY_API Detection(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Detection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details about the anomalous activity that caused GuardDuty to generate
     * the finding.</p>
     */
    inline const Anomaly& GetAnomaly() const { return m_anomaly; }
    inline bool AnomalyHasBeenSet() const { return m_anomalyHasBeenSet; }
    template<typename AnomalyT = Anomaly>
    void SetAnomaly(AnomalyT&& value) { m_anomalyHasBeenSet = true; m_anomaly = std::forward<AnomalyT>(value); }
    template<typename AnomalyT = Anomaly>
    Detection& WithAnomaly(AnomalyT&& value) { SetAnomaly(std::forward<AnomalyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about the attack sequence.</p>
     */
    inline const Sequence& GetSequence() const { return m_sequence; }
    inline bool SequenceHasBeenSet() const { return m_sequenceHasBeenSet; }
    template<typename SequenceT = Sequence>
    void SetSequence(SequenceT&& value) { m_sequenceHasBeenSet = true; m_sequence = std::forward<SequenceT>(value); }
    template<typename SequenceT = Sequence>
    Detection& WithSequence(SequenceT&& value) { SetSequence(std::forward<SequenceT>(value)); return *this;}
    ///@}
  private:

    Anomaly m_anomaly;
    bool m_anomalyHasBeenSet = false;

    Sequence m_sequence;
    bool m_sequenceHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
