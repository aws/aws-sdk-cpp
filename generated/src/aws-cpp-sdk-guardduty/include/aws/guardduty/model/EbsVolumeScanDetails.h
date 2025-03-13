/**
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
    AWS_GUARDDUTY_API EbsVolumeScanDetails() = default;
    AWS_GUARDDUTY_API EbsVolumeScanDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API EbsVolumeScanDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique Id of the malware scan that generated the finding.</p>
     */
    inline const Aws::String& GetScanId() const { return m_scanId; }
    inline bool ScanIdHasBeenSet() const { return m_scanIdHasBeenSet; }
    template<typename ScanIdT = Aws::String>
    void SetScanId(ScanIdT&& value) { m_scanIdHasBeenSet = true; m_scanId = std::forward<ScanIdT>(value); }
    template<typename ScanIdT = Aws::String>
    EbsVolumeScanDetails& WithScanId(ScanIdT&& value) { SetScanId(std::forward<ScanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the start date and time of the malware scan.</p>
     */
    inline const Aws::Utils::DateTime& GetScanStartedAt() const { return m_scanStartedAt; }
    inline bool ScanStartedAtHasBeenSet() const { return m_scanStartedAtHasBeenSet; }
    template<typename ScanStartedAtT = Aws::Utils::DateTime>
    void SetScanStartedAt(ScanStartedAtT&& value) { m_scanStartedAtHasBeenSet = true; m_scanStartedAt = std::forward<ScanStartedAtT>(value); }
    template<typename ScanStartedAtT = Aws::Utils::DateTime>
    EbsVolumeScanDetails& WithScanStartedAt(ScanStartedAtT&& value) { SetScanStartedAt(std::forward<ScanStartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the completion date and time of the malware scan.</p>
     */
    inline const Aws::Utils::DateTime& GetScanCompletedAt() const { return m_scanCompletedAt; }
    inline bool ScanCompletedAtHasBeenSet() const { return m_scanCompletedAtHasBeenSet; }
    template<typename ScanCompletedAtT = Aws::Utils::DateTime>
    void SetScanCompletedAt(ScanCompletedAtT&& value) { m_scanCompletedAtHasBeenSet = true; m_scanCompletedAt = std::forward<ScanCompletedAtT>(value); }
    template<typename ScanCompletedAtT = Aws::Utils::DateTime>
    EbsVolumeScanDetails& WithScanCompletedAt(ScanCompletedAtT&& value) { SetScanCompletedAt(std::forward<ScanCompletedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>GuardDuty finding ID that triggered a malware scan.</p>
     */
    inline const Aws::String& GetTriggerFindingId() const { return m_triggerFindingId; }
    inline bool TriggerFindingIdHasBeenSet() const { return m_triggerFindingIdHasBeenSet; }
    template<typename TriggerFindingIdT = Aws::String>
    void SetTriggerFindingId(TriggerFindingIdT&& value) { m_triggerFindingIdHasBeenSet = true; m_triggerFindingId = std::forward<TriggerFindingIdT>(value); }
    template<typename TriggerFindingIdT = Aws::String>
    EbsVolumeScanDetails& WithTriggerFindingId(TriggerFindingIdT&& value) { SetTriggerFindingId(std::forward<TriggerFindingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains list of threat intelligence sources used to detect threats.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<Aws::String>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<Aws::String>>
    EbsVolumeScanDetails& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = Aws::String>
    EbsVolumeScanDetails& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains a complete view providing malware scan result details.</p>
     */
    inline const ScanDetections& GetScanDetections() const { return m_scanDetections; }
    inline bool ScanDetectionsHasBeenSet() const { return m_scanDetectionsHasBeenSet; }
    template<typename ScanDetectionsT = ScanDetections>
    void SetScanDetections(ScanDetectionsT&& value) { m_scanDetectionsHasBeenSet = true; m_scanDetections = std::forward<ScanDetectionsT>(value); }
    template<typename ScanDetectionsT = ScanDetections>
    EbsVolumeScanDetails& WithScanDetections(ScanDetectionsT&& value) { SetScanDetections(std::forward<ScanDetectionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the scan type that invoked the malware scan.</p>
     */
    inline ScanType GetScanType() const { return m_scanType; }
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
    inline void SetScanType(ScanType value) { m_scanTypeHasBeenSet = true; m_scanType = value; }
    inline EbsVolumeScanDetails& WithScanType(ScanType value) { SetScanType(value); return *this;}
    ///@}
  private:

    Aws::String m_scanId;
    bool m_scanIdHasBeenSet = false;

    Aws::Utils::DateTime m_scanStartedAt{};
    bool m_scanStartedAtHasBeenSet = false;

    Aws::Utils::DateTime m_scanCompletedAt{};
    bool m_scanCompletedAtHasBeenSet = false;

    Aws::String m_triggerFindingId;
    bool m_triggerFindingIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_sources;
    bool m_sourcesHasBeenSet = false;

    ScanDetections m_scanDetections;
    bool m_scanDetectionsHasBeenSet = false;

    ScanType m_scanType{ScanType::NOT_SET};
    bool m_scanTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
