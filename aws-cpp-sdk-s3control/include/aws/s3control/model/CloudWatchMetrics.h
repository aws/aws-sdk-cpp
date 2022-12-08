/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>

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
   * <p>A container for enabling Amazon CloudWatch publishing for S3 Storage Lens
   * metrics.</p> <p>For more information about publishing S3 Storage Lens metrics to
   * CloudWatch, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage_lens_view_metrics_cloudwatch.html">Monitor
   * S3 Storage Lens metrics in CloudWatch</a> in the <i>Amazon S3 User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CloudWatchMetrics">AWS
   * API Reference</a></p>
   */
  class CloudWatchMetrics
  {
  public:
    AWS_S3CONTROL_API CloudWatchMetrics();
    AWS_S3CONTROL_API CloudWatchMetrics(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API CloudWatchMetrics& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A container that indicates whether CloudWatch publishing for S3 Storage Lens
     * metrics is enabled. A value of <code>true</code> indicates that CloudWatch
     * publishing for S3 Storage Lens metrics is enabled.</p>
     */
    inline bool GetIsEnabled() const{ return m_isEnabled; }

    /**
     * <p>A container that indicates whether CloudWatch publishing for S3 Storage Lens
     * metrics is enabled. A value of <code>true</code> indicates that CloudWatch
     * publishing for S3 Storage Lens metrics is enabled.</p>
     */
    inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }

    /**
     * <p>A container that indicates whether CloudWatch publishing for S3 Storage Lens
     * metrics is enabled. A value of <code>true</code> indicates that CloudWatch
     * publishing for S3 Storage Lens metrics is enabled.</p>
     */
    inline void SetIsEnabled(bool value) { m_isEnabledHasBeenSet = true; m_isEnabled = value; }

    /**
     * <p>A container that indicates whether CloudWatch publishing for S3 Storage Lens
     * metrics is enabled. A value of <code>true</code> indicates that CloudWatch
     * publishing for S3 Storage Lens metrics is enabled.</p>
     */
    inline CloudWatchMetrics& WithIsEnabled(bool value) { SetIsEnabled(value); return *this;}

  private:

    bool m_isEnabled;
    bool m_isEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
