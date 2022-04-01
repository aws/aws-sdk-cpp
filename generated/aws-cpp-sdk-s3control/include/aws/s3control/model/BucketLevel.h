﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/ActivityMetrics.h>
#include <aws/s3control/model/PrefixLevel.h>
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
   * <p>A container for the bucket-level configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/BucketLevel">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API BucketLevel
  {
  public:
    BucketLevel();
    BucketLevel(const Aws::Utils::Xml::XmlNode& xmlNode);
    BucketLevel& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A container for the bucket-level activity metrics for Amazon S3 Storage
     * Lens</p>
     */
    inline const ActivityMetrics& GetActivityMetrics() const{ return m_activityMetrics; }

    /**
     * <p>A container for the bucket-level activity metrics for Amazon S3 Storage
     * Lens</p>
     */
    inline bool ActivityMetricsHasBeenSet() const { return m_activityMetricsHasBeenSet; }

    /**
     * <p>A container for the bucket-level activity metrics for Amazon S3 Storage
     * Lens</p>
     */
    inline void SetActivityMetrics(const ActivityMetrics& value) { m_activityMetricsHasBeenSet = true; m_activityMetrics = value; }

    /**
     * <p>A container for the bucket-level activity metrics for Amazon S3 Storage
     * Lens</p>
     */
    inline void SetActivityMetrics(ActivityMetrics&& value) { m_activityMetricsHasBeenSet = true; m_activityMetrics = std::move(value); }

    /**
     * <p>A container for the bucket-level activity metrics for Amazon S3 Storage
     * Lens</p>
     */
    inline BucketLevel& WithActivityMetrics(const ActivityMetrics& value) { SetActivityMetrics(value); return *this;}

    /**
     * <p>A container for the bucket-level activity metrics for Amazon S3 Storage
     * Lens</p>
     */
    inline BucketLevel& WithActivityMetrics(ActivityMetrics&& value) { SetActivityMetrics(std::move(value)); return *this;}


    /**
     * <p>A container for the bucket-level prefix-level metrics for S3 Storage Lens</p>
     */
    inline const PrefixLevel& GetPrefixLevel() const{ return m_prefixLevel; }

    /**
     * <p>A container for the bucket-level prefix-level metrics for S3 Storage Lens</p>
     */
    inline bool PrefixLevelHasBeenSet() const { return m_prefixLevelHasBeenSet; }

    /**
     * <p>A container for the bucket-level prefix-level metrics for S3 Storage Lens</p>
     */
    inline void SetPrefixLevel(const PrefixLevel& value) { m_prefixLevelHasBeenSet = true; m_prefixLevel = value; }

    /**
     * <p>A container for the bucket-level prefix-level metrics for S3 Storage Lens</p>
     */
    inline void SetPrefixLevel(PrefixLevel&& value) { m_prefixLevelHasBeenSet = true; m_prefixLevel = std::move(value); }

    /**
     * <p>A container for the bucket-level prefix-level metrics for S3 Storage Lens</p>
     */
    inline BucketLevel& WithPrefixLevel(const PrefixLevel& value) { SetPrefixLevel(value); return *this;}

    /**
     * <p>A container for the bucket-level prefix-level metrics for S3 Storage Lens</p>
     */
    inline BucketLevel& WithPrefixLevel(PrefixLevel&& value) { SetPrefixLevel(std::move(value)); return *this;}

  private:

    ActivityMetrics m_activityMetrics;
    bool m_activityMetricsHasBeenSet;

    PrefixLevel m_prefixLevel;
    bool m_prefixLevelHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
