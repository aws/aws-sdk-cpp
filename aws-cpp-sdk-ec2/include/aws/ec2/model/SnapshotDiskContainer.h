/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/UserBucket.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>The disk container object for the import snapshot request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SnapshotDiskContainer">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API SnapshotDiskContainer
  {
  public:
    SnapshotDiskContainer();
    SnapshotDiskContainer(const Aws::Utils::Xml::XmlNode& xmlNode);
    SnapshotDiskContainer& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The description of the disk image being imported.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the disk image being imported.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the disk image being imported.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the disk image being imported.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the disk image being imported.</p>
     */
    inline SnapshotDiskContainer& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the disk image being imported.</p>
     */
    inline SnapshotDiskContainer& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the disk image being imported.</p>
     */
    inline SnapshotDiskContainer& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The format of the disk image being imported.</p> <p>Valid values:
     * <code>VHD</code> | <code>VMDK</code> | <code>OVA</code> </p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the disk image being imported.</p> <p>Valid values:
     * <code>VHD</code> | <code>VMDK</code> | <code>OVA</code> </p>
     */
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the disk image being imported.</p> <p>Valid values:
     * <code>VHD</code> | <code>VMDK</code> | <code>OVA</code> </p>
     */
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the disk image being imported.</p> <p>Valid values:
     * <code>VHD</code> | <code>VMDK</code> | <code>OVA</code> </p>
     */
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }

    /**
     * <p>The format of the disk image being imported.</p> <p>Valid values:
     * <code>VHD</code> | <code>VMDK</code> | <code>OVA</code> </p>
     */
    inline SnapshotDiskContainer& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the disk image being imported.</p> <p>Valid values:
     * <code>VHD</code> | <code>VMDK</code> | <code>OVA</code> </p>
     */
    inline SnapshotDiskContainer& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}

    /**
     * <p>The format of the disk image being imported.</p> <p>Valid values:
     * <code>VHD</code> | <code>VMDK</code> | <code>OVA</code> </p>
     */
    inline SnapshotDiskContainer& WithFormat(const char* value) { SetFormat(value); return *this;}


    /**
     * <p>The URL to the Amazon S3-based disk image being imported. It can either be a
     * https URL (https://..) or an Amazon S3 URL (s3://..).</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL to the Amazon S3-based disk image being imported. It can either be a
     * https URL (https://..) or an Amazon S3 URL (s3://..).</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL to the Amazon S3-based disk image being imported. It can either be a
     * https URL (https://..) or an Amazon S3 URL (s3://..).</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL to the Amazon S3-based disk image being imported. It can either be a
     * https URL (https://..) or an Amazon S3 URL (s3://..).</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL to the Amazon S3-based disk image being imported. It can either be a
     * https URL (https://..) or an Amazon S3 URL (s3://..).</p>
     */
    inline SnapshotDiskContainer& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL to the Amazon S3-based disk image being imported. It can either be a
     * https URL (https://..) or an Amazon S3 URL (s3://..).</p>
     */
    inline SnapshotDiskContainer& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL to the Amazon S3-based disk image being imported. It can either be a
     * https URL (https://..) or an Amazon S3 URL (s3://..).</p>
     */
    inline SnapshotDiskContainer& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>The S3 bucket for the disk image.</p>
     */
    inline const UserBucket& GetUserBucket() const{ return m_userBucket; }

    /**
     * <p>The S3 bucket for the disk image.</p>
     */
    inline void SetUserBucket(const UserBucket& value) { m_userBucketHasBeenSet = true; m_userBucket = value; }

    /**
     * <p>The S3 bucket for the disk image.</p>
     */
    inline void SetUserBucket(UserBucket&& value) { m_userBucketHasBeenSet = true; m_userBucket = std::move(value); }

    /**
     * <p>The S3 bucket for the disk image.</p>
     */
    inline SnapshotDiskContainer& WithUserBucket(const UserBucket& value) { SetUserBucket(value); return *this;}

    /**
     * <p>The S3 bucket for the disk image.</p>
     */
    inline SnapshotDiskContainer& WithUserBucket(UserBucket&& value) { SetUserBucket(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_format;
    bool m_formatHasBeenSet;

    Aws::String m_url;
    bool m_urlHasBeenSet;

    UserBucket m_userBucket;
    bool m_userBucketHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
