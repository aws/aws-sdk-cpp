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
    AWS_GUARDDUTY_API ScanDetections();
    AWS_GUARDDUTY_API ScanDetections(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ScanDetections& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Total number of scanned files.</p>
     */
    inline const ScannedItemCount& GetScannedItemCount() const{ return m_scannedItemCount; }
    inline bool ScannedItemCountHasBeenSet() const { return m_scannedItemCountHasBeenSet; }
    inline void SetScannedItemCount(const ScannedItemCount& value) { m_scannedItemCountHasBeenSet = true; m_scannedItemCount = value; }
    inline void SetScannedItemCount(ScannedItemCount&& value) { m_scannedItemCountHasBeenSet = true; m_scannedItemCount = std::move(value); }
    inline ScanDetections& WithScannedItemCount(const ScannedItemCount& value) { SetScannedItemCount(value); return *this;}
    inline ScanDetections& WithScannedItemCount(ScannedItemCount&& value) { SetScannedItemCount(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of infected files.</p>
     */
    inline const ThreatsDetectedItemCount& GetThreatsDetectedItemCount() const{ return m_threatsDetectedItemCount; }
    inline bool ThreatsDetectedItemCountHasBeenSet() const { return m_threatsDetectedItemCountHasBeenSet; }
    inline void SetThreatsDetectedItemCount(const ThreatsDetectedItemCount& value) { m_threatsDetectedItemCountHasBeenSet = true; m_threatsDetectedItemCount = value; }
    inline void SetThreatsDetectedItemCount(ThreatsDetectedItemCount&& value) { m_threatsDetectedItemCountHasBeenSet = true; m_threatsDetectedItemCount = std::move(value); }
    inline ScanDetections& WithThreatsDetectedItemCount(const ThreatsDetectedItemCount& value) { SetThreatsDetectedItemCount(value); return *this;}
    inline ScanDetections& WithThreatsDetectedItemCount(ThreatsDetectedItemCount&& value) { SetThreatsDetectedItemCount(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the highest severity threat detected during malware scan and
     * number of infected files.</p>
     */
    inline const HighestSeverityThreatDetails& GetHighestSeverityThreatDetails() const{ return m_highestSeverityThreatDetails; }
    inline bool HighestSeverityThreatDetailsHasBeenSet() const { return m_highestSeverityThreatDetailsHasBeenSet; }
    inline void SetHighestSeverityThreatDetails(const HighestSeverityThreatDetails& value) { m_highestSeverityThreatDetailsHasBeenSet = true; m_highestSeverityThreatDetails = value; }
    inline void SetHighestSeverityThreatDetails(HighestSeverityThreatDetails&& value) { m_highestSeverityThreatDetailsHasBeenSet = true; m_highestSeverityThreatDetails = std::move(value); }
    inline ScanDetections& WithHighestSeverityThreatDetails(const HighestSeverityThreatDetails& value) { SetHighestSeverityThreatDetails(value); return *this;}
    inline ScanDetections& WithHighestSeverityThreatDetails(HighestSeverityThreatDetails&& value) { SetHighestSeverityThreatDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about identified threats organized by threat name.</p>
     */
    inline const ThreatDetectedByName& GetThreatDetectedByName() const{ return m_threatDetectedByName; }
    inline bool ThreatDetectedByNameHasBeenSet() const { return m_threatDetectedByNameHasBeenSet; }
    inline void SetThreatDetectedByName(const ThreatDetectedByName& value) { m_threatDetectedByNameHasBeenSet = true; m_threatDetectedByName = value; }
    inline void SetThreatDetectedByName(ThreatDetectedByName&& value) { m_threatDetectedByNameHasBeenSet = true; m_threatDetectedByName = std::move(value); }
    inline ScanDetections& WithThreatDetectedByName(const ThreatDetectedByName& value) { SetThreatDetectedByName(value); return *this;}
    inline ScanDetections& WithThreatDetectedByName(ThreatDetectedByName&& value) { SetThreatDetectedByName(std::move(value)); return *this;}
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
