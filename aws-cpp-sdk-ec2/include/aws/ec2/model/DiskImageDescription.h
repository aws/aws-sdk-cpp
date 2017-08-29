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
#include <aws/ec2/model/DiskImageFormat.h>
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
   * <p>Describes a disk image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DiskImageDescription">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DiskImageDescription
  {
  public:
    DiskImageDescription();
    DiskImageDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    DiskImageDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The checksum computed for the disk image.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * <p>The checksum computed for the disk image.</p>
     */
    inline void SetChecksum(const Aws::String& value) { m_checksumHasBeenSet = true; m_checksum = value; }

    /**
     * <p>The checksum computed for the disk image.</p>
     */
    inline void SetChecksum(Aws::String&& value) { m_checksumHasBeenSet = true; m_checksum = std::move(value); }

    /**
     * <p>The checksum computed for the disk image.</p>
     */
    inline void SetChecksum(const char* value) { m_checksumHasBeenSet = true; m_checksum.assign(value); }

    /**
     * <p>The checksum computed for the disk image.</p>
     */
    inline DiskImageDescription& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * <p>The checksum computed for the disk image.</p>
     */
    inline DiskImageDescription& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * <p>The checksum computed for the disk image.</p>
     */
    inline DiskImageDescription& WithChecksum(const char* value) { SetChecksum(value); return *this;}


    /**
     * <p>The disk image format.</p>
     */
    inline const DiskImageFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The disk image format.</p>
     */
    inline void SetFormat(const DiskImageFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The disk image format.</p>
     */
    inline void SetFormat(DiskImageFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The disk image format.</p>
     */
    inline DiskImageDescription& WithFormat(const DiskImageFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The disk image format.</p>
     */
    inline DiskImageDescription& WithFormat(DiskImageFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>A presigned URL for the import manifest stored in Amazon S3. For information
     * about creating a presigned URL for an Amazon S3 object, read the "Query String
     * Request Authentication Alternative" section of the <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">Authenticating
     * REST Requests</a> topic in the <i>Amazon Simple Storage Service Developer
     * Guide</i>.</p> <p>For information about the import manifest referenced by this
     * API action, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
     * Import Manifest</a>.</p>
     */
    inline const Aws::String& GetImportManifestUrl() const{ return m_importManifestUrl; }

    /**
     * <p>A presigned URL for the import manifest stored in Amazon S3. For information
     * about creating a presigned URL for an Amazon S3 object, read the "Query String
     * Request Authentication Alternative" section of the <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">Authenticating
     * REST Requests</a> topic in the <i>Amazon Simple Storage Service Developer
     * Guide</i>.</p> <p>For information about the import manifest referenced by this
     * API action, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
     * Import Manifest</a>.</p>
     */
    inline void SetImportManifestUrl(const Aws::String& value) { m_importManifestUrlHasBeenSet = true; m_importManifestUrl = value; }

    /**
     * <p>A presigned URL for the import manifest stored in Amazon S3. For information
     * about creating a presigned URL for an Amazon S3 object, read the "Query String
     * Request Authentication Alternative" section of the <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">Authenticating
     * REST Requests</a> topic in the <i>Amazon Simple Storage Service Developer
     * Guide</i>.</p> <p>For information about the import manifest referenced by this
     * API action, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
     * Import Manifest</a>.</p>
     */
    inline void SetImportManifestUrl(Aws::String&& value) { m_importManifestUrlHasBeenSet = true; m_importManifestUrl = std::move(value); }

    /**
     * <p>A presigned URL for the import manifest stored in Amazon S3. For information
     * about creating a presigned URL for an Amazon S3 object, read the "Query String
     * Request Authentication Alternative" section of the <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">Authenticating
     * REST Requests</a> topic in the <i>Amazon Simple Storage Service Developer
     * Guide</i>.</p> <p>For information about the import manifest referenced by this
     * API action, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
     * Import Manifest</a>.</p>
     */
    inline void SetImportManifestUrl(const char* value) { m_importManifestUrlHasBeenSet = true; m_importManifestUrl.assign(value); }

    /**
     * <p>A presigned URL for the import manifest stored in Amazon S3. For information
     * about creating a presigned URL for an Amazon S3 object, read the "Query String
     * Request Authentication Alternative" section of the <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">Authenticating
     * REST Requests</a> topic in the <i>Amazon Simple Storage Service Developer
     * Guide</i>.</p> <p>For information about the import manifest referenced by this
     * API action, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
     * Import Manifest</a>.</p>
     */
    inline DiskImageDescription& WithImportManifestUrl(const Aws::String& value) { SetImportManifestUrl(value); return *this;}

    /**
     * <p>A presigned URL for the import manifest stored in Amazon S3. For information
     * about creating a presigned URL for an Amazon S3 object, read the "Query String
     * Request Authentication Alternative" section of the <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">Authenticating
     * REST Requests</a> topic in the <i>Amazon Simple Storage Service Developer
     * Guide</i>.</p> <p>For information about the import manifest referenced by this
     * API action, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
     * Import Manifest</a>.</p>
     */
    inline DiskImageDescription& WithImportManifestUrl(Aws::String&& value) { SetImportManifestUrl(std::move(value)); return *this;}

    /**
     * <p>A presigned URL for the import manifest stored in Amazon S3. For information
     * about creating a presigned URL for an Amazon S3 object, read the "Query String
     * Request Authentication Alternative" section of the <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">Authenticating
     * REST Requests</a> topic in the <i>Amazon Simple Storage Service Developer
     * Guide</i>.</p> <p>For information about the import manifest referenced by this
     * API action, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
     * Import Manifest</a>.</p>
     */
    inline DiskImageDescription& WithImportManifestUrl(const char* value) { SetImportManifestUrl(value); return *this;}


    /**
     * <p>The size of the disk image, in GiB.</p>
     */
    inline long long GetSize() const{ return m_size; }

    /**
     * <p>The size of the disk image, in GiB.</p>
     */
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the disk image, in GiB.</p>
     */
    inline DiskImageDescription& WithSize(long long value) { SetSize(value); return *this;}

  private:

    Aws::String m_checksum;
    bool m_checksumHasBeenSet;

    DiskImageFormat m_format;
    bool m_formatHasBeenSet;

    Aws::String m_importManifestUrl;
    bool m_importManifestUrlHasBeenSet;

    long long m_size;
    bool m_sizeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
