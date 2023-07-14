/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/ActivityMetrics.h>
#include <aws/s3control/model/BucketLevel.h>
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
   * <p>A container for the account level Amazon S3 Storage Lens
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/AccountLevel">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API AccountLevel
  {
  public:
    AccountLevel();
    AccountLevel(const Aws::Utils::Xml::XmlNode& xmlNode);
    AccountLevel& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A container for the S3 Storage Lens activity metrics.</p>
     */
    inline const ActivityMetrics& GetActivityMetrics() const{ return m_activityMetrics; }

    /**
     * <p>A container for the S3 Storage Lens activity metrics.</p>
     */
    inline bool ActivityMetricsHasBeenSet() const { return m_activityMetricsHasBeenSet; }

    /**
     * <p>A container for the S3 Storage Lens activity metrics.</p>
     */
    inline void SetActivityMetrics(const ActivityMetrics& value) { m_activityMetricsHasBeenSet = true; m_activityMetrics = value; }

    /**
     * <p>A container for the S3 Storage Lens activity metrics.</p>
     */
    inline void SetActivityMetrics(ActivityMetrics&& value) { m_activityMetricsHasBeenSet = true; m_activityMetrics = std::move(value); }

    /**
     * <p>A container for the S3 Storage Lens activity metrics.</p>
     */
    inline AccountLevel& WithActivityMetrics(const ActivityMetrics& value) { SetActivityMetrics(value); return *this;}

    /**
     * <p>A container for the S3 Storage Lens activity metrics.</p>
     */
    inline AccountLevel& WithActivityMetrics(ActivityMetrics&& value) { SetActivityMetrics(std::move(value)); return *this;}


    /**
     * <p>A container for the S3 Storage Lens bucket-level configuration.</p>
     */
    inline const BucketLevel& GetBucketLevel() const{ return m_bucketLevel; }

    /**
     * <p>A container for the S3 Storage Lens bucket-level configuration.</p>
     */
    inline bool BucketLevelHasBeenSet() const { return m_bucketLevelHasBeenSet; }

    /**
     * <p>A container for the S3 Storage Lens bucket-level configuration.</p>
     */
    inline void SetBucketLevel(const BucketLevel& value) { m_bucketLevelHasBeenSet = true; m_bucketLevel = value; }

    /**
     * <p>A container for the S3 Storage Lens bucket-level configuration.</p>
     */
    inline void SetBucketLevel(BucketLevel&& value) { m_bucketLevelHasBeenSet = true; m_bucketLevel = std::move(value); }

    /**
     * <p>A container for the S3 Storage Lens bucket-level configuration.</p>
     */
    inline AccountLevel& WithBucketLevel(const BucketLevel& value) { SetBucketLevel(value); return *this;}

    /**
     * <p>A container for the S3 Storage Lens bucket-level configuration.</p>
     */
    inline AccountLevel& WithBucketLevel(BucketLevel&& value) { SetBucketLevel(std::move(value)); return *this;}

  private:

    ActivityMetrics m_activityMetrics;
    bool m_activityMetricsHasBeenSet;

    BucketLevel m_bucketLevel;
    bool m_bucketLevelHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
