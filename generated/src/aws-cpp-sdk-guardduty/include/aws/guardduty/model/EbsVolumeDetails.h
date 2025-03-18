/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/VolumeDetail.h>
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
   * <p>Contains list of scanned and skipped EBS volumes with details.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/EbsVolumeDetails">AWS
   * API Reference</a></p>
   */
  class EbsVolumeDetails
  {
  public:
    AWS_GUARDDUTY_API EbsVolumeDetails() = default;
    AWS_GUARDDUTY_API EbsVolumeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API EbsVolumeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of EBS volumes that were scanned.</p>
     */
    inline const Aws::Vector<VolumeDetail>& GetScannedVolumeDetails() const { return m_scannedVolumeDetails; }
    inline bool ScannedVolumeDetailsHasBeenSet() const { return m_scannedVolumeDetailsHasBeenSet; }
    template<typename ScannedVolumeDetailsT = Aws::Vector<VolumeDetail>>
    void SetScannedVolumeDetails(ScannedVolumeDetailsT&& value) { m_scannedVolumeDetailsHasBeenSet = true; m_scannedVolumeDetails = std::forward<ScannedVolumeDetailsT>(value); }
    template<typename ScannedVolumeDetailsT = Aws::Vector<VolumeDetail>>
    EbsVolumeDetails& WithScannedVolumeDetails(ScannedVolumeDetailsT&& value) { SetScannedVolumeDetails(std::forward<ScannedVolumeDetailsT>(value)); return *this;}
    template<typename ScannedVolumeDetailsT = VolumeDetail>
    EbsVolumeDetails& AddScannedVolumeDetails(ScannedVolumeDetailsT&& value) { m_scannedVolumeDetailsHasBeenSet = true; m_scannedVolumeDetails.emplace_back(std::forward<ScannedVolumeDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of EBS volumes that were skipped from the malware scan.</p>
     */
    inline const Aws::Vector<VolumeDetail>& GetSkippedVolumeDetails() const { return m_skippedVolumeDetails; }
    inline bool SkippedVolumeDetailsHasBeenSet() const { return m_skippedVolumeDetailsHasBeenSet; }
    template<typename SkippedVolumeDetailsT = Aws::Vector<VolumeDetail>>
    void SetSkippedVolumeDetails(SkippedVolumeDetailsT&& value) { m_skippedVolumeDetailsHasBeenSet = true; m_skippedVolumeDetails = std::forward<SkippedVolumeDetailsT>(value); }
    template<typename SkippedVolumeDetailsT = Aws::Vector<VolumeDetail>>
    EbsVolumeDetails& WithSkippedVolumeDetails(SkippedVolumeDetailsT&& value) { SetSkippedVolumeDetails(std::forward<SkippedVolumeDetailsT>(value)); return *this;}
    template<typename SkippedVolumeDetailsT = VolumeDetail>
    EbsVolumeDetails& AddSkippedVolumeDetails(SkippedVolumeDetailsT&& value) { m_skippedVolumeDetailsHasBeenSet = true; m_skippedVolumeDetails.emplace_back(std::forward<SkippedVolumeDetailsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<VolumeDetail> m_scannedVolumeDetails;
    bool m_scannedVolumeDetailsHasBeenSet = false;

    Aws::Vector<VolumeDetail> m_skippedVolumeDetails;
    bool m_skippedVolumeDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
