/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/ActivityMetrics.h>
#include <aws/s3control/model/PrefixLevel.h>
#include <aws/s3control/model/AdvancedCostOptimizationMetrics.h>
#include <aws/s3control/model/AdvancedDataProtectionMetrics.h>
#include <aws/s3control/model/DetailedStatusCodesMetrics.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>A container for the bucket-level configuration for Amazon S3 Storage
   * Lens.</p> <p>For more information about S3 Storage Lens, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage_lens.html">Assessing
   * your storage activity and usage with S3 Storage Lens</a> in the <i>Amazon S3
   * User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/BucketLevel">AWS
   * API Reference</a></p>
   */
  class BucketLevel
  {
  public:
    AWS_S3CONTROL_API BucketLevel();
    AWS_S3CONTROL_API BucketLevel(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API BucketLevel& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A container for the bucket-level activity metrics for S3 Storage Lens.</p>
     */
    inline const ActivityMetrics& GetActivityMetrics() const{ return m_activityMetrics; }

    /**
     * <p>A container for the bucket-level activity metrics for S3 Storage Lens.</p>
     */
    inline bool ActivityMetricsHasBeenSet() const { return m_activityMetricsHasBeenSet; }

    /**
     * <p>A container for the bucket-level activity metrics for S3 Storage Lens.</p>
     */
    inline void SetActivityMetrics(const ActivityMetrics& value) { m_activityMetricsHasBeenSet = true; m_activityMetrics = value; }

    /**
     * <p>A container for the bucket-level activity metrics for S3 Storage Lens.</p>
     */
    inline void SetActivityMetrics(ActivityMetrics&& value) { m_activityMetricsHasBeenSet = true; m_activityMetrics = std::move(value); }

    /**
     * <p>A container for the bucket-level activity metrics for S3 Storage Lens.</p>
     */
    inline BucketLevel& WithActivityMetrics(const ActivityMetrics& value) { SetActivityMetrics(value); return *this;}

    /**
     * <p>A container for the bucket-level activity metrics for S3 Storage Lens.</p>
     */
    inline BucketLevel& WithActivityMetrics(ActivityMetrics&& value) { SetActivityMetrics(std::move(value)); return *this;}


    /**
     * <p>A container for the prefix-level metrics for S3 Storage Lens. </p>
     */
    inline const PrefixLevel& GetPrefixLevel() const{ return m_prefixLevel; }

    /**
     * <p>A container for the prefix-level metrics for S3 Storage Lens. </p>
     */
    inline bool PrefixLevelHasBeenSet() const { return m_prefixLevelHasBeenSet; }

    /**
     * <p>A container for the prefix-level metrics for S3 Storage Lens. </p>
     */
    inline void SetPrefixLevel(const PrefixLevel& value) { m_prefixLevelHasBeenSet = true; m_prefixLevel = value; }

    /**
     * <p>A container for the prefix-level metrics for S3 Storage Lens. </p>
     */
    inline void SetPrefixLevel(PrefixLevel&& value) { m_prefixLevelHasBeenSet = true; m_prefixLevel = std::move(value); }

    /**
     * <p>A container for the prefix-level metrics for S3 Storage Lens. </p>
     */
    inline BucketLevel& WithPrefixLevel(const PrefixLevel& value) { SetPrefixLevel(value); return *this;}

    /**
     * <p>A container for the prefix-level metrics for S3 Storage Lens. </p>
     */
    inline BucketLevel& WithPrefixLevel(PrefixLevel&& value) { SetPrefixLevel(std::move(value)); return *this;}


    /**
     * <p>A container for bucket-level advanced cost-optimization metrics for S3
     * Storage Lens.</p>
     */
    inline const AdvancedCostOptimizationMetrics& GetAdvancedCostOptimizationMetrics() const{ return m_advancedCostOptimizationMetrics; }

    /**
     * <p>A container for bucket-level advanced cost-optimization metrics for S3
     * Storage Lens.</p>
     */
    inline bool AdvancedCostOptimizationMetricsHasBeenSet() const { return m_advancedCostOptimizationMetricsHasBeenSet; }

    /**
     * <p>A container for bucket-level advanced cost-optimization metrics for S3
     * Storage Lens.</p>
     */
    inline void SetAdvancedCostOptimizationMetrics(const AdvancedCostOptimizationMetrics& value) { m_advancedCostOptimizationMetricsHasBeenSet = true; m_advancedCostOptimizationMetrics = value; }

    /**
     * <p>A container for bucket-level advanced cost-optimization metrics for S3
     * Storage Lens.</p>
     */
    inline void SetAdvancedCostOptimizationMetrics(AdvancedCostOptimizationMetrics&& value) { m_advancedCostOptimizationMetricsHasBeenSet = true; m_advancedCostOptimizationMetrics = std::move(value); }

    /**
     * <p>A container for bucket-level advanced cost-optimization metrics for S3
     * Storage Lens.</p>
     */
    inline BucketLevel& WithAdvancedCostOptimizationMetrics(const AdvancedCostOptimizationMetrics& value) { SetAdvancedCostOptimizationMetrics(value); return *this;}

    /**
     * <p>A container for bucket-level advanced cost-optimization metrics for S3
     * Storage Lens.</p>
     */
    inline BucketLevel& WithAdvancedCostOptimizationMetrics(AdvancedCostOptimizationMetrics&& value) { SetAdvancedCostOptimizationMetrics(std::move(value)); return *this;}


    /**
     * <p>A container for bucket-level advanced data-protection metrics for S3 Storage
     * Lens.</p>
     */
    inline const AdvancedDataProtectionMetrics& GetAdvancedDataProtectionMetrics() const{ return m_advancedDataProtectionMetrics; }

    /**
     * <p>A container for bucket-level advanced data-protection metrics for S3 Storage
     * Lens.</p>
     */
    inline bool AdvancedDataProtectionMetricsHasBeenSet() const { return m_advancedDataProtectionMetricsHasBeenSet; }

    /**
     * <p>A container for bucket-level advanced data-protection metrics for S3 Storage
     * Lens.</p>
     */
    inline void SetAdvancedDataProtectionMetrics(const AdvancedDataProtectionMetrics& value) { m_advancedDataProtectionMetricsHasBeenSet = true; m_advancedDataProtectionMetrics = value; }

    /**
     * <p>A container for bucket-level advanced data-protection metrics for S3 Storage
     * Lens.</p>
     */
    inline void SetAdvancedDataProtectionMetrics(AdvancedDataProtectionMetrics&& value) { m_advancedDataProtectionMetricsHasBeenSet = true; m_advancedDataProtectionMetrics = std::move(value); }

    /**
     * <p>A container for bucket-level advanced data-protection metrics for S3 Storage
     * Lens.</p>
     */
    inline BucketLevel& WithAdvancedDataProtectionMetrics(const AdvancedDataProtectionMetrics& value) { SetAdvancedDataProtectionMetrics(value); return *this;}

    /**
     * <p>A container for bucket-level advanced data-protection metrics for S3 Storage
     * Lens.</p>
     */
    inline BucketLevel& WithAdvancedDataProtectionMetrics(AdvancedDataProtectionMetrics&& value) { SetAdvancedDataProtectionMetrics(std::move(value)); return *this;}


    /**
     * <p>A container for bucket-level detailed status code metrics for S3 Storage
     * Lens.</p>
     */
    inline const DetailedStatusCodesMetrics& GetDetailedStatusCodesMetrics() const{ return m_detailedStatusCodesMetrics; }

    /**
     * <p>A container for bucket-level detailed status code metrics for S3 Storage
     * Lens.</p>
     */
    inline bool DetailedStatusCodesMetricsHasBeenSet() const { return m_detailedStatusCodesMetricsHasBeenSet; }

    /**
     * <p>A container for bucket-level detailed status code metrics for S3 Storage
     * Lens.</p>
     */
    inline void SetDetailedStatusCodesMetrics(const DetailedStatusCodesMetrics& value) { m_detailedStatusCodesMetricsHasBeenSet = true; m_detailedStatusCodesMetrics = value; }

    /**
     * <p>A container for bucket-level detailed status code metrics for S3 Storage
     * Lens.</p>
     */
    inline void SetDetailedStatusCodesMetrics(DetailedStatusCodesMetrics&& value) { m_detailedStatusCodesMetricsHasBeenSet = true; m_detailedStatusCodesMetrics = std::move(value); }

    /**
     * <p>A container for bucket-level detailed status code metrics for S3 Storage
     * Lens.</p>
     */
    inline BucketLevel& WithDetailedStatusCodesMetrics(const DetailedStatusCodesMetrics& value) { SetDetailedStatusCodesMetrics(value); return *this;}

    /**
     * <p>A container for bucket-level detailed status code metrics for S3 Storage
     * Lens.</p>
     */
    inline BucketLevel& WithDetailedStatusCodesMetrics(DetailedStatusCodesMetrics&& value) { SetDetailedStatusCodesMetrics(std::move(value)); return *this;}

  private:

    ActivityMetrics m_activityMetrics;
    bool m_activityMetricsHasBeenSet = false;

    PrefixLevel m_prefixLevel;
    bool m_prefixLevelHasBeenSet = false;

    AdvancedCostOptimizationMetrics m_advancedCostOptimizationMetrics;
    bool m_advancedCostOptimizationMetricsHasBeenSet = false;

    AdvancedDataProtectionMetrics m_advancedDataProtectionMetrics;
    bool m_advancedDataProtectionMetricsHasBeenSet = false;

    DetailedStatusCodesMetrics m_detailedStatusCodesMetrics;
    bool m_detailedStatusCodesMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
