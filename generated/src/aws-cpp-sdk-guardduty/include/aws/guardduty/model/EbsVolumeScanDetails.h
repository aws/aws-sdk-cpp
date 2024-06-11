﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/ScanDetections.h>
#include <aws/guardduty/model/ScanType.h>
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
   * <p>Contains details from the malware scan that created a finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/EbsVolumeScanDetails">AWS
   * API Reference</a></p>
   */
  class EbsVolumeScanDetails
  {
  public:
    AWS_GUARDDUTY_API EbsVolumeScanDetails();
    AWS_GUARDDUTY_API EbsVolumeScanDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API EbsVolumeScanDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique Id of the malware scan that generated the finding.</p>
     */
    inline const Aws::String& GetScanId() const{ return m_scanId; }
    inline bool ScanIdHasBeenSet() const { return m_scanIdHasBeenSet; }
    inline void SetScanId(const Aws::String& value) { m_scanIdHasBeenSet = true; m_scanId = value; }
    inline void SetScanId(Aws::String&& value) { m_scanIdHasBeenSet = true; m_scanId = std::move(value); }
    inline void SetScanId(const char* value) { m_scanIdHasBeenSet = true; m_scanId.assign(value); }
    inline EbsVolumeScanDetails& WithScanId(const Aws::String& value) { SetScanId(value); return *this;}
    inline EbsVolumeScanDetails& WithScanId(Aws::String&& value) { SetScanId(std::move(value)); return *this;}
    inline EbsVolumeScanDetails& WithScanId(const char* value) { SetScanId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the start date and time of the malware scan.</p>
     */
    inline const Aws::Utils::DateTime& GetScanStartedAt() const{ return m_scanStartedAt; }
    inline bool ScanStartedAtHasBeenSet() const { return m_scanStartedAtHasBeenSet; }
    inline void SetScanStartedAt(const Aws::Utils::DateTime& value) { m_scanStartedAtHasBeenSet = true; m_scanStartedAt = value; }
    inline void SetScanStartedAt(Aws::Utils::DateTime&& value) { m_scanStartedAtHasBeenSet = true; m_scanStartedAt = std::move(value); }
    inline EbsVolumeScanDetails& WithScanStartedAt(const Aws::Utils::DateTime& value) { SetScanStartedAt(value); return *this;}
    inline EbsVolumeScanDetails& WithScanStartedAt(Aws::Utils::DateTime&& value) { SetScanStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the completion date and time of the malware scan.</p>
     */
    inline const Aws::Utils::DateTime& GetScanCompletedAt() const{ return m_scanCompletedAt; }
    inline bool ScanCompletedAtHasBeenSet() const { return m_scanCompletedAtHasBeenSet; }
    inline void SetScanCompletedAt(const Aws::Utils::DateTime& value) { m_scanCompletedAtHasBeenSet = true; m_scanCompletedAt = value; }
    inline void SetScanCompletedAt(Aws::Utils::DateTime&& value) { m_scanCompletedAtHasBeenSet = true; m_scanCompletedAt = std::move(value); }
    inline EbsVolumeScanDetails& WithScanCompletedAt(const Aws::Utils::DateTime& value) { SetScanCompletedAt(value); return *this;}
    inline EbsVolumeScanDetails& WithScanCompletedAt(Aws::Utils::DateTime&& value) { SetScanCompletedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>GuardDuty finding ID that triggered a malware scan.</p>
     */
    inline const Aws::String& GetTriggerFindingId() const{ return m_triggerFindingId; }
    inline bool TriggerFindingIdHasBeenSet() const { return m_triggerFindingIdHasBeenSet; }
    inline void SetTriggerFindingId(const Aws::String& value) { m_triggerFindingIdHasBeenSet = true; m_triggerFindingId = value; }
    inline void SetTriggerFindingId(Aws::String&& value) { m_triggerFindingIdHasBeenSet = true; m_triggerFindingId = std::move(value); }
    inline void SetTriggerFindingId(const char* value) { m_triggerFindingIdHasBeenSet = true; m_triggerFindingId.assign(value); }
    inline EbsVolumeScanDetails& WithTriggerFindingId(const Aws::String& value) { SetTriggerFindingId(value); return *this;}
    inline EbsVolumeScanDetails& WithTriggerFindingId(Aws::String&& value) { SetTriggerFindingId(std::move(value)); return *this;}
    inline EbsVolumeScanDetails& WithTriggerFindingId(const char* value) { SetTriggerFindingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains list of threat intelligence sources used to detect threats.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSources() const{ return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    inline void SetSources(const Aws::Vector<Aws::String>& value) { m_sourcesHasBeenSet = true; m_sources = value; }
    inline void SetSources(Aws::Vector<Aws::String>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }
    inline EbsVolumeScanDetails& WithSources(const Aws::Vector<Aws::String>& value) { SetSources(value); return *this;}
    inline EbsVolumeScanDetails& WithSources(Aws::Vector<Aws::String>&& value) { SetSources(std::move(value)); return *this;}
    inline EbsVolumeScanDetails& AddSources(const Aws::String& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    inline EbsVolumeScanDetails& AddSources(Aws::String&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }
    inline EbsVolumeScanDetails& AddSources(const char* value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains a complete view providing malware scan result details.</p>
     */
    inline const ScanDetections& GetScanDetections() const{ return m_scanDetections; }
    inline bool ScanDetectionsHasBeenSet() const { return m_scanDetectionsHasBeenSet; }
    inline void SetScanDetections(const ScanDetections& value) { m_scanDetectionsHasBeenSet = true; m_scanDetections = value; }
    inline void SetScanDetections(ScanDetections&& value) { m_scanDetectionsHasBeenSet = true; m_scanDetections = std::move(value); }
    inline EbsVolumeScanDetails& WithScanDetections(const ScanDetections& value) { SetScanDetections(value); return *this;}
    inline EbsVolumeScanDetails& WithScanDetections(ScanDetections&& value) { SetScanDetections(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the scan type that invoked the malware scan.</p>
     */
    inline const ScanType& GetScanType() const{ return m_scanType; }
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
    inline void SetScanType(const ScanType& value) { m_scanTypeHasBeenSet = true; m_scanType = value; }
    inline void SetScanType(ScanType&& value) { m_scanTypeHasBeenSet = true; m_scanType = std::move(value); }
    inline EbsVolumeScanDetails& WithScanType(const ScanType& value) { SetScanType(value); return *this;}
    inline EbsVolumeScanDetails& WithScanType(ScanType&& value) { SetScanType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_scanId;
    bool m_scanIdHasBeenSet = false;

    Aws::Utils::DateTime m_scanStartedAt;
    bool m_scanStartedAtHasBeenSet = false;

    Aws::Utils::DateTime m_scanCompletedAt;
    bool m_scanCompletedAtHasBeenSet = false;

    Aws::String m_triggerFindingId;
    bool m_triggerFindingIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_sources;
    bool m_sourcesHasBeenSet = false;

    ScanDetections m_scanDetections;
    bool m_scanDetectionsHasBeenSet = false;

    ScanType m_scanType;
    bool m_scanTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
