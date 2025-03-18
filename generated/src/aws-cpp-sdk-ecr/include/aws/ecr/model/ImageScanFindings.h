/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/FindingSeverity.h>
#include <aws/ecr/model/ImageScanFinding.h>
#include <aws/ecr/model/EnhancedImageScanFinding.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>The details of an image scan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ImageScanFindings">AWS
   * API Reference</a></p>
   */
  class ImageScanFindings
  {
  public:
    AWS_ECR_API ImageScanFindings() = default;
    AWS_ECR_API ImageScanFindings(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API ImageScanFindings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time of the last completed image scan.</p>
     */
    inline const Aws::Utils::DateTime& GetImageScanCompletedAt() const { return m_imageScanCompletedAt; }
    inline bool ImageScanCompletedAtHasBeenSet() const { return m_imageScanCompletedAtHasBeenSet; }
    template<typename ImageScanCompletedAtT = Aws::Utils::DateTime>
    void SetImageScanCompletedAt(ImageScanCompletedAtT&& value) { m_imageScanCompletedAtHasBeenSet = true; m_imageScanCompletedAt = std::forward<ImageScanCompletedAtT>(value); }
    template<typename ImageScanCompletedAtT = Aws::Utils::DateTime>
    ImageScanFindings& WithImageScanCompletedAt(ImageScanCompletedAtT&& value) { SetImageScanCompletedAt(std::forward<ImageScanCompletedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the vulnerability data was last scanned.</p>
     */
    inline const Aws::Utils::DateTime& GetVulnerabilitySourceUpdatedAt() const { return m_vulnerabilitySourceUpdatedAt; }
    inline bool VulnerabilitySourceUpdatedAtHasBeenSet() const { return m_vulnerabilitySourceUpdatedAtHasBeenSet; }
    template<typename VulnerabilitySourceUpdatedAtT = Aws::Utils::DateTime>
    void SetVulnerabilitySourceUpdatedAt(VulnerabilitySourceUpdatedAtT&& value) { m_vulnerabilitySourceUpdatedAtHasBeenSet = true; m_vulnerabilitySourceUpdatedAt = std::forward<VulnerabilitySourceUpdatedAtT>(value); }
    template<typename VulnerabilitySourceUpdatedAtT = Aws::Utils::DateTime>
    ImageScanFindings& WithVulnerabilitySourceUpdatedAt(VulnerabilitySourceUpdatedAtT&& value) { SetVulnerabilitySourceUpdatedAt(std::forward<VulnerabilitySourceUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image vulnerability counts, sorted by severity.</p>
     */
    inline const Aws::Map<FindingSeverity, int>& GetFindingSeverityCounts() const { return m_findingSeverityCounts; }
    inline bool FindingSeverityCountsHasBeenSet() const { return m_findingSeverityCountsHasBeenSet; }
    template<typename FindingSeverityCountsT = Aws::Map<FindingSeverity, int>>
    void SetFindingSeverityCounts(FindingSeverityCountsT&& value) { m_findingSeverityCountsHasBeenSet = true; m_findingSeverityCounts = std::forward<FindingSeverityCountsT>(value); }
    template<typename FindingSeverityCountsT = Aws::Map<FindingSeverity, int>>
    ImageScanFindings& WithFindingSeverityCounts(FindingSeverityCountsT&& value) { SetFindingSeverityCounts(std::forward<FindingSeverityCountsT>(value)); return *this;}
    inline ImageScanFindings& AddFindingSeverityCounts(FindingSeverity key, int value) {
      m_findingSeverityCountsHasBeenSet = true; m_findingSeverityCounts.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The findings from the image scan.</p>
     */
    inline const Aws::Vector<ImageScanFinding>& GetFindings() const { return m_findings; }
    inline bool FindingsHasBeenSet() const { return m_findingsHasBeenSet; }
    template<typename FindingsT = Aws::Vector<ImageScanFinding>>
    void SetFindings(FindingsT&& value) { m_findingsHasBeenSet = true; m_findings = std::forward<FindingsT>(value); }
    template<typename FindingsT = Aws::Vector<ImageScanFinding>>
    ImageScanFindings& WithFindings(FindingsT&& value) { SetFindings(std::forward<FindingsT>(value)); return *this;}
    template<typename FindingsT = ImageScanFinding>
    ImageScanFindings& AddFindings(FindingsT&& value) { m_findingsHasBeenSet = true; m_findings.emplace_back(std::forward<FindingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details about the enhanced scan findings from Amazon Inspector.</p>
     */
    inline const Aws::Vector<EnhancedImageScanFinding>& GetEnhancedFindings() const { return m_enhancedFindings; }
    inline bool EnhancedFindingsHasBeenSet() const { return m_enhancedFindingsHasBeenSet; }
    template<typename EnhancedFindingsT = Aws::Vector<EnhancedImageScanFinding>>
    void SetEnhancedFindings(EnhancedFindingsT&& value) { m_enhancedFindingsHasBeenSet = true; m_enhancedFindings = std::forward<EnhancedFindingsT>(value); }
    template<typename EnhancedFindingsT = Aws::Vector<EnhancedImageScanFinding>>
    ImageScanFindings& WithEnhancedFindings(EnhancedFindingsT&& value) { SetEnhancedFindings(std::forward<EnhancedFindingsT>(value)); return *this;}
    template<typename EnhancedFindingsT = EnhancedImageScanFinding>
    ImageScanFindings& AddEnhancedFindings(EnhancedFindingsT&& value) { m_enhancedFindingsHasBeenSet = true; m_enhancedFindings.emplace_back(std::forward<EnhancedFindingsT>(value)); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_imageScanCompletedAt{};
    bool m_imageScanCompletedAtHasBeenSet = false;

    Aws::Utils::DateTime m_vulnerabilitySourceUpdatedAt{};
    bool m_vulnerabilitySourceUpdatedAtHasBeenSet = false;

    Aws::Map<FindingSeverity, int> m_findingSeverityCounts;
    bool m_findingSeverityCountsHasBeenSet = false;

    Aws::Vector<ImageScanFinding> m_findings;
    bool m_findingsHasBeenSet = false;

    Aws::Vector<EnhancedImageScanFinding> m_enhancedFindings;
    bool m_enhancedFindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
