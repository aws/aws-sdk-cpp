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
    AWS_ECR_API ImageScanFindings();
    AWS_ECR_API ImageScanFindings(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API ImageScanFindings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time of the last completed image scan.</p>
     */
    inline const Aws::Utils::DateTime& GetImageScanCompletedAt() const{ return m_imageScanCompletedAt; }
    inline bool ImageScanCompletedAtHasBeenSet() const { return m_imageScanCompletedAtHasBeenSet; }
    inline void SetImageScanCompletedAt(const Aws::Utils::DateTime& value) { m_imageScanCompletedAtHasBeenSet = true; m_imageScanCompletedAt = value; }
    inline void SetImageScanCompletedAt(Aws::Utils::DateTime&& value) { m_imageScanCompletedAtHasBeenSet = true; m_imageScanCompletedAt = std::move(value); }
    inline ImageScanFindings& WithImageScanCompletedAt(const Aws::Utils::DateTime& value) { SetImageScanCompletedAt(value); return *this;}
    inline ImageScanFindings& WithImageScanCompletedAt(Aws::Utils::DateTime&& value) { SetImageScanCompletedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the vulnerability data was last scanned.</p>
     */
    inline const Aws::Utils::DateTime& GetVulnerabilitySourceUpdatedAt() const{ return m_vulnerabilitySourceUpdatedAt; }
    inline bool VulnerabilitySourceUpdatedAtHasBeenSet() const { return m_vulnerabilitySourceUpdatedAtHasBeenSet; }
    inline void SetVulnerabilitySourceUpdatedAt(const Aws::Utils::DateTime& value) { m_vulnerabilitySourceUpdatedAtHasBeenSet = true; m_vulnerabilitySourceUpdatedAt = value; }
    inline void SetVulnerabilitySourceUpdatedAt(Aws::Utils::DateTime&& value) { m_vulnerabilitySourceUpdatedAtHasBeenSet = true; m_vulnerabilitySourceUpdatedAt = std::move(value); }
    inline ImageScanFindings& WithVulnerabilitySourceUpdatedAt(const Aws::Utils::DateTime& value) { SetVulnerabilitySourceUpdatedAt(value); return *this;}
    inline ImageScanFindings& WithVulnerabilitySourceUpdatedAt(Aws::Utils::DateTime&& value) { SetVulnerabilitySourceUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image vulnerability counts, sorted by severity.</p>
     */
    inline const Aws::Map<FindingSeverity, int>& GetFindingSeverityCounts() const{ return m_findingSeverityCounts; }
    inline bool FindingSeverityCountsHasBeenSet() const { return m_findingSeverityCountsHasBeenSet; }
    inline void SetFindingSeverityCounts(const Aws::Map<FindingSeverity, int>& value) { m_findingSeverityCountsHasBeenSet = true; m_findingSeverityCounts = value; }
    inline void SetFindingSeverityCounts(Aws::Map<FindingSeverity, int>&& value) { m_findingSeverityCountsHasBeenSet = true; m_findingSeverityCounts = std::move(value); }
    inline ImageScanFindings& WithFindingSeverityCounts(const Aws::Map<FindingSeverity, int>& value) { SetFindingSeverityCounts(value); return *this;}
    inline ImageScanFindings& WithFindingSeverityCounts(Aws::Map<FindingSeverity, int>&& value) { SetFindingSeverityCounts(std::move(value)); return *this;}
    inline ImageScanFindings& AddFindingSeverityCounts(const FindingSeverity& key, int value) { m_findingSeverityCountsHasBeenSet = true; m_findingSeverityCounts.emplace(key, value); return *this; }
    inline ImageScanFindings& AddFindingSeverityCounts(FindingSeverity&& key, int value) { m_findingSeverityCountsHasBeenSet = true; m_findingSeverityCounts.emplace(std::move(key), value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The findings from the image scan.</p>
     */
    inline const Aws::Vector<ImageScanFinding>& GetFindings() const{ return m_findings; }
    inline bool FindingsHasBeenSet() const { return m_findingsHasBeenSet; }
    inline void SetFindings(const Aws::Vector<ImageScanFinding>& value) { m_findingsHasBeenSet = true; m_findings = value; }
    inline void SetFindings(Aws::Vector<ImageScanFinding>&& value) { m_findingsHasBeenSet = true; m_findings = std::move(value); }
    inline ImageScanFindings& WithFindings(const Aws::Vector<ImageScanFinding>& value) { SetFindings(value); return *this;}
    inline ImageScanFindings& WithFindings(Aws::Vector<ImageScanFinding>&& value) { SetFindings(std::move(value)); return *this;}
    inline ImageScanFindings& AddFindings(const ImageScanFinding& value) { m_findingsHasBeenSet = true; m_findings.push_back(value); return *this; }
    inline ImageScanFindings& AddFindings(ImageScanFinding&& value) { m_findingsHasBeenSet = true; m_findings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details about the enhanced scan findings from Amazon Inspector.</p>
     */
    inline const Aws::Vector<EnhancedImageScanFinding>& GetEnhancedFindings() const{ return m_enhancedFindings; }
    inline bool EnhancedFindingsHasBeenSet() const { return m_enhancedFindingsHasBeenSet; }
    inline void SetEnhancedFindings(const Aws::Vector<EnhancedImageScanFinding>& value) { m_enhancedFindingsHasBeenSet = true; m_enhancedFindings = value; }
    inline void SetEnhancedFindings(Aws::Vector<EnhancedImageScanFinding>&& value) { m_enhancedFindingsHasBeenSet = true; m_enhancedFindings = std::move(value); }
    inline ImageScanFindings& WithEnhancedFindings(const Aws::Vector<EnhancedImageScanFinding>& value) { SetEnhancedFindings(value); return *this;}
    inline ImageScanFindings& WithEnhancedFindings(Aws::Vector<EnhancedImageScanFinding>&& value) { SetEnhancedFindings(std::move(value)); return *this;}
    inline ImageScanFindings& AddEnhancedFindings(const EnhancedImageScanFinding& value) { m_enhancedFindingsHasBeenSet = true; m_enhancedFindings.push_back(value); return *this; }
    inline ImageScanFindings& AddEnhancedFindings(EnhancedImageScanFinding&& value) { m_enhancedFindingsHasBeenSet = true; m_enhancedFindings.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_imageScanCompletedAt;
    bool m_imageScanCompletedAtHasBeenSet = false;

    Aws::Utils::DateTime m_vulnerabilitySourceUpdatedAt;
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
