/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/MFADelete.h>
#include <aws/s3control/model/BucketVersioningStatus.h>
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
   * <p>Describes the versioning state of an Amazon S3 on Outposts bucket. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_PutBucketVersioning.html">PutBucketVersioning</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/VersioningConfiguration">AWS
   * API Reference</a></p>
   */
  class VersioningConfiguration
  {
  public:
    AWS_S3CONTROL_API VersioningConfiguration();
    AWS_S3CONTROL_API VersioningConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API VersioningConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Specifies whether MFA delete is enabled or disabled in the bucket versioning
     * configuration for the S3 on Outposts bucket.</p>
     */
    inline const MFADelete& GetMFADelete() const{ return m_mFADelete; }

    /**
     * <p>Specifies whether MFA delete is enabled or disabled in the bucket versioning
     * configuration for the S3 on Outposts bucket.</p>
     */
    inline bool MFADeleteHasBeenSet() const { return m_mFADeleteHasBeenSet; }

    /**
     * <p>Specifies whether MFA delete is enabled or disabled in the bucket versioning
     * configuration for the S3 on Outposts bucket.</p>
     */
    inline void SetMFADelete(const MFADelete& value) { m_mFADeleteHasBeenSet = true; m_mFADelete = value; }

    /**
     * <p>Specifies whether MFA delete is enabled or disabled in the bucket versioning
     * configuration for the S3 on Outposts bucket.</p>
     */
    inline void SetMFADelete(MFADelete&& value) { m_mFADeleteHasBeenSet = true; m_mFADelete = std::move(value); }

    /**
     * <p>Specifies whether MFA delete is enabled or disabled in the bucket versioning
     * configuration for the S3 on Outposts bucket.</p>
     */
    inline VersioningConfiguration& WithMFADelete(const MFADelete& value) { SetMFADelete(value); return *this;}

    /**
     * <p>Specifies whether MFA delete is enabled or disabled in the bucket versioning
     * configuration for the S3 on Outposts bucket.</p>
     */
    inline VersioningConfiguration& WithMFADelete(MFADelete&& value) { SetMFADelete(std::move(value)); return *this;}


    /**
     * <p>Sets the versioning state of the S3 on Outposts bucket.</p>
     */
    inline const BucketVersioningStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Sets the versioning state of the S3 on Outposts bucket.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Sets the versioning state of the S3 on Outposts bucket.</p>
     */
    inline void SetStatus(const BucketVersioningStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Sets the versioning state of the S3 on Outposts bucket.</p>
     */
    inline void SetStatus(BucketVersioningStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Sets the versioning state of the S3 on Outposts bucket.</p>
     */
    inline VersioningConfiguration& WithStatus(const BucketVersioningStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Sets the versioning state of the S3 on Outposts bucket.</p>
     */
    inline VersioningConfiguration& WithStatus(BucketVersioningStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    MFADelete m_mFADelete;
    bool m_mFADeleteHasBeenSet = false;

    BucketVersioningStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
