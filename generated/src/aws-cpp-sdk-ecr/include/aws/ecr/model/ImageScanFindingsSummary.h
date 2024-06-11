/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ecr/model/FindingSeverity.h>
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
   * <p>A summary of the last completed image scan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ImageScanFindingsSummary">AWS
   * API Reference</a></p>
   */
  class ImageScanFindingsSummary
  {
  public:
    AWS_ECR_API ImageScanFindingsSummary();
    AWS_ECR_API ImageScanFindingsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API ImageScanFindingsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time of the last completed image scan.</p>
     */
    inline const Aws::Utils::DateTime& GetImageScanCompletedAt() const{ return m_imageScanCompletedAt; }
    inline bool ImageScanCompletedAtHasBeenSet() const { return m_imageScanCompletedAtHasBeenSet; }
    inline void SetImageScanCompletedAt(const Aws::Utils::DateTime& value) { m_imageScanCompletedAtHasBeenSet = true; m_imageScanCompletedAt = value; }
    inline void SetImageScanCompletedAt(Aws::Utils::DateTime&& value) { m_imageScanCompletedAtHasBeenSet = true; m_imageScanCompletedAt = std::move(value); }
    inline ImageScanFindingsSummary& WithImageScanCompletedAt(const Aws::Utils::DateTime& value) { SetImageScanCompletedAt(value); return *this;}
    inline ImageScanFindingsSummary& WithImageScanCompletedAt(Aws::Utils::DateTime&& value) { SetImageScanCompletedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the vulnerability data was last scanned.</p>
     */
    inline const Aws::Utils::DateTime& GetVulnerabilitySourceUpdatedAt() const{ return m_vulnerabilitySourceUpdatedAt; }
    inline bool VulnerabilitySourceUpdatedAtHasBeenSet() const { return m_vulnerabilitySourceUpdatedAtHasBeenSet; }
    inline void SetVulnerabilitySourceUpdatedAt(const Aws::Utils::DateTime& value) { m_vulnerabilitySourceUpdatedAtHasBeenSet = true; m_vulnerabilitySourceUpdatedAt = value; }
    inline void SetVulnerabilitySourceUpdatedAt(Aws::Utils::DateTime&& value) { m_vulnerabilitySourceUpdatedAtHasBeenSet = true; m_vulnerabilitySourceUpdatedAt = std::move(value); }
    inline ImageScanFindingsSummary& WithVulnerabilitySourceUpdatedAt(const Aws::Utils::DateTime& value) { SetVulnerabilitySourceUpdatedAt(value); return *this;}
    inline ImageScanFindingsSummary& WithVulnerabilitySourceUpdatedAt(Aws::Utils::DateTime&& value) { SetVulnerabilitySourceUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image vulnerability counts, sorted by severity.</p>
     */
    inline const Aws::Map<FindingSeverity, int>& GetFindingSeverityCounts() const{ return m_findingSeverityCounts; }
    inline bool FindingSeverityCountsHasBeenSet() const { return m_findingSeverityCountsHasBeenSet; }
    inline void SetFindingSeverityCounts(const Aws::Map<FindingSeverity, int>& value) { m_findingSeverityCountsHasBeenSet = true; m_findingSeverityCounts = value; }
    inline void SetFindingSeverityCounts(Aws::Map<FindingSeverity, int>&& value) { m_findingSeverityCountsHasBeenSet = true; m_findingSeverityCounts = std::move(value); }
    inline ImageScanFindingsSummary& WithFindingSeverityCounts(const Aws::Map<FindingSeverity, int>& value) { SetFindingSeverityCounts(value); return *this;}
    inline ImageScanFindingsSummary& WithFindingSeverityCounts(Aws::Map<FindingSeverity, int>&& value) { SetFindingSeverityCounts(std::move(value)); return *this;}
    inline ImageScanFindingsSummary& AddFindingSeverityCounts(const FindingSeverity& key, int value) { m_findingSeverityCountsHasBeenSet = true; m_findingSeverityCounts.emplace(key, value); return *this; }
    inline ImageScanFindingsSummary& AddFindingSeverityCounts(FindingSeverity&& key, int value) { m_findingSeverityCountsHasBeenSet = true; m_findingSeverityCounts.emplace(std::move(key), value); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_imageScanCompletedAt;
    bool m_imageScanCompletedAtHasBeenSet = false;

    Aws::Utils::DateTime m_vulnerabilitySourceUpdatedAt;
    bool m_vulnerabilitySourceUpdatedAtHasBeenSet = false;

    Aws::Map<FindingSeverity, int> m_findingSeverityCounts;
    bool m_findingSeverityCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
