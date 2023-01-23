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
    AWS_GUARDDUTY_API EbsVolumeDetails();
    AWS_GUARDDUTY_API EbsVolumeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API EbsVolumeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of EBS volumes that were scanned.</p>
     */
    inline const Aws::Vector<VolumeDetail>& GetScannedVolumeDetails() const{ return m_scannedVolumeDetails; }

    /**
     * <p>List of EBS volumes that were scanned.</p>
     */
    inline bool ScannedVolumeDetailsHasBeenSet() const { return m_scannedVolumeDetailsHasBeenSet; }

    /**
     * <p>List of EBS volumes that were scanned.</p>
     */
    inline void SetScannedVolumeDetails(const Aws::Vector<VolumeDetail>& value) { m_scannedVolumeDetailsHasBeenSet = true; m_scannedVolumeDetails = value; }

    /**
     * <p>List of EBS volumes that were scanned.</p>
     */
    inline void SetScannedVolumeDetails(Aws::Vector<VolumeDetail>&& value) { m_scannedVolumeDetailsHasBeenSet = true; m_scannedVolumeDetails = std::move(value); }

    /**
     * <p>List of EBS volumes that were scanned.</p>
     */
    inline EbsVolumeDetails& WithScannedVolumeDetails(const Aws::Vector<VolumeDetail>& value) { SetScannedVolumeDetails(value); return *this;}

    /**
     * <p>List of EBS volumes that were scanned.</p>
     */
    inline EbsVolumeDetails& WithScannedVolumeDetails(Aws::Vector<VolumeDetail>&& value) { SetScannedVolumeDetails(std::move(value)); return *this;}

    /**
     * <p>List of EBS volumes that were scanned.</p>
     */
    inline EbsVolumeDetails& AddScannedVolumeDetails(const VolumeDetail& value) { m_scannedVolumeDetailsHasBeenSet = true; m_scannedVolumeDetails.push_back(value); return *this; }

    /**
     * <p>List of EBS volumes that were scanned.</p>
     */
    inline EbsVolumeDetails& AddScannedVolumeDetails(VolumeDetail&& value) { m_scannedVolumeDetailsHasBeenSet = true; m_scannedVolumeDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>List of EBS volumes that were skipped from the malware scan.</p>
     */
    inline const Aws::Vector<VolumeDetail>& GetSkippedVolumeDetails() const{ return m_skippedVolumeDetails; }

    /**
     * <p>List of EBS volumes that were skipped from the malware scan.</p>
     */
    inline bool SkippedVolumeDetailsHasBeenSet() const { return m_skippedVolumeDetailsHasBeenSet; }

    /**
     * <p>List of EBS volumes that were skipped from the malware scan.</p>
     */
    inline void SetSkippedVolumeDetails(const Aws::Vector<VolumeDetail>& value) { m_skippedVolumeDetailsHasBeenSet = true; m_skippedVolumeDetails = value; }

    /**
     * <p>List of EBS volumes that were skipped from the malware scan.</p>
     */
    inline void SetSkippedVolumeDetails(Aws::Vector<VolumeDetail>&& value) { m_skippedVolumeDetailsHasBeenSet = true; m_skippedVolumeDetails = std::move(value); }

    /**
     * <p>List of EBS volumes that were skipped from the malware scan.</p>
     */
    inline EbsVolumeDetails& WithSkippedVolumeDetails(const Aws::Vector<VolumeDetail>& value) { SetSkippedVolumeDetails(value); return *this;}

    /**
     * <p>List of EBS volumes that were skipped from the malware scan.</p>
     */
    inline EbsVolumeDetails& WithSkippedVolumeDetails(Aws::Vector<VolumeDetail>&& value) { SetSkippedVolumeDetails(std::move(value)); return *this;}

    /**
     * <p>List of EBS volumes that were skipped from the malware scan.</p>
     */
    inline EbsVolumeDetails& AddSkippedVolumeDetails(const VolumeDetail& value) { m_skippedVolumeDetailsHasBeenSet = true; m_skippedVolumeDetails.push_back(value); return *this; }

    /**
     * <p>List of EBS volumes that were skipped from the malware scan.</p>
     */
    inline EbsVolumeDetails& AddSkippedVolumeDetails(VolumeDetail&& value) { m_skippedVolumeDetailsHasBeenSet = true; m_skippedVolumeDetails.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<VolumeDetail> m_scannedVolumeDetails;
    bool m_scannedVolumeDetailsHasBeenSet = false;

    Aws::Vector<VolumeDetail> m_skippedVolumeDetails;
    bool m_skippedVolumeDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
