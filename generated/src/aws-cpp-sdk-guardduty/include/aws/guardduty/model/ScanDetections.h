/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/ScannedItemCount.h>
#include <aws/guardduty/model/ThreatsDetectedItemCount.h>
#include <aws/guardduty/model/HighestSeverityThreatDetails.h>
#include <aws/guardduty/model/ThreatDetectedByName.h>
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
   * <p>Contains a complete view providing malware scan result details.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ScanDetections">AWS
   * API Reference</a></p>
   */
  class ScanDetections
  {
  public:
    AWS_GUARDDUTY_API ScanDetections() = default;
    AWS_GUARDDUTY_API ScanDetections(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ScanDetections& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Total number of scanned files.</p>
     */
    inline const ScannedItemCount& GetScannedItemCount() const { return m_scannedItemCount; }
    inline bool ScannedItemCountHasBeenSet() const { return m_scannedItemCountHasBeenSet; }
    template<typename ScannedItemCountT = ScannedItemCount>
    void SetScannedItemCount(ScannedItemCountT&& value) { m_scannedItemCountHasBeenSet = true; m_scannedItemCount = std::forward<ScannedItemCountT>(value); }
    template<typename ScannedItemCountT = ScannedItemCount>
    ScanDetections& WithScannedItemCount(ScannedItemCountT&& value) { SetScannedItemCount(std::forward<ScannedItemCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of infected files.</p>
     */
    inline const ThreatsDetectedItemCount& GetThreatsDetectedItemCount() const { return m_threatsDetectedItemCount; }
    inline bool ThreatsDetectedItemCountHasBeenSet() const { return m_threatsDetectedItemCountHasBeenSet; }
    template<typename ThreatsDetectedItemCountT = ThreatsDetectedItemCount>
    void SetThreatsDetectedItemCount(ThreatsDetectedItemCountT&& value) { m_threatsDetectedItemCountHasBeenSet = true; m_threatsDetectedItemCount = std::forward<ThreatsDetectedItemCountT>(value); }
    template<typename ThreatsDetectedItemCountT = ThreatsDetectedItemCount>
    ScanDetections& WithThreatsDetectedItemCount(ThreatsDetectedItemCountT&& value) { SetThreatsDetectedItemCount(std::forward<ThreatsDetectedItemCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the highest severity threat detected during malware scan and
     * number of infected files.</p>
     */
    inline const HighestSeverityThreatDetails& GetHighestSeverityThreatDetails() const { return m_highestSeverityThreatDetails; }
    inline bool HighestSeverityThreatDetailsHasBeenSet() const { return m_highestSeverityThreatDetailsHasBeenSet; }
    template<typename HighestSeverityThreatDetailsT = HighestSeverityThreatDetails>
    void SetHighestSeverityThreatDetails(HighestSeverityThreatDetailsT&& value) { m_highestSeverityThreatDetailsHasBeenSet = true; m_highestSeverityThreatDetails = std::forward<HighestSeverityThreatDetailsT>(value); }
    template<typename HighestSeverityThreatDetailsT = HighestSeverityThreatDetails>
    ScanDetections& WithHighestSeverityThreatDetails(HighestSeverityThreatDetailsT&& value) { SetHighestSeverityThreatDetails(std::forward<HighestSeverityThreatDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about identified threats organized by threat name.</p>
     */
    inline const ThreatDetectedByName& GetThreatDetectedByName() const { return m_threatDetectedByName; }
    inline bool ThreatDetectedByNameHasBeenSet() const { return m_threatDetectedByNameHasBeenSet; }
    template<typename ThreatDetectedByNameT = ThreatDetectedByName>
    void SetThreatDetectedByName(ThreatDetectedByNameT&& value) { m_threatDetectedByNameHasBeenSet = true; m_threatDetectedByName = std::forward<ThreatDetectedByNameT>(value); }
    template<typename ThreatDetectedByNameT = ThreatDetectedByName>
    ScanDetections& WithThreatDetectedByName(ThreatDetectedByNameT&& value) { SetThreatDetectedByName(std::forward<ThreatDetectedByNameT>(value)); return *this;}
    ///@}
  private:

    ScannedItemCount m_scannedItemCount;
    bool m_scannedItemCountHasBeenSet = false;

    ThreatsDetectedItemCount m_threatsDetectedItemCount;
    bool m_threatsDetectedItemCountHasBeenSet = false;

    HighestSeverityThreatDetails m_highestSeverityThreatDetails;
    bool m_highestSeverityThreatDetailsHasBeenSet = false;

    ThreatDetectedByName m_threatDetectedByName;
    bool m_threatDetectedByNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
