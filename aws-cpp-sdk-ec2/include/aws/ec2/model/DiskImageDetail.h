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
#include <aws/ec2/model/DiskImageFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DiskImageDetail">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DiskImageDetail
  {
  public:
    DiskImageDetail();
    DiskImageDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    DiskImageDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The size of the disk image, in GiB.</p>
     */
    inline long long GetBytes() const{ return m_bytes; }

    /**
     * <p>The size of the disk image, in GiB.</p>
     */
    inline void SetBytes(long long value) { m_bytesHasBeenSet = true; m_bytes = value; }

    /**
     * <p>The size of the disk image, in GiB.</p>
     */
    inline DiskImageDetail& WithBytes(long long value) { SetBytes(value); return *this;}


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
    inline DiskImageDetail& WithFormat(const DiskImageFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The disk image format.</p>
     */
    inline DiskImageDetail& WithFormat(DiskImageFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>A presigned URL for the import manifest stored in Amazon S3 and presented
     * here as an Amazon S3 presigned URL. For information about creating a presigned
     * URL for an Amazon S3 object, read the "Query String Request Authentication
     * Alternative" section of the <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">Authenticating
     * REST Requests</a> topic in the <i>Amazon Simple Storage Service Developer
     * Guide</i>.</p> <p>For information about the import manifest referenced by this
     * API action, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
     * Import Manifest</a>.</p>
     */
    inline const Aws::String& GetImportManifestUrl() const{ return m_importManifestUrl; }

    /**
     * <p>A presigned URL for the import manifest stored in Amazon S3 and presented
     * here as an Amazon S3 presigned URL. For information about creating a presigned
     * URL for an Amazon S3 object, read the "Query String Request Authentication
     * Alternative" section of the <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">Authenticating
     * REST Requests</a> topic in the <i>Amazon Simple Storage Service Developer
     * Guide</i>.</p> <p>For information about the import manifest referenced by this
     * API action, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
     * Import Manifest</a>.</p>
     */
    inline void SetImportManifestUrl(const Aws::String& value) { m_importManifestUrlHasBeenSet = true; m_importManifestUrl = value; }

    /**
     * <p>A presigned URL for the import manifest stored in Amazon S3 and presented
     * here as an Amazon S3 presigned URL. For information about creating a presigned
     * URL for an Amazon S3 object, read the "Query String Request Authentication
     * Alternative" section of the <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">Authenticating
     * REST Requests</a> topic in the <i>Amazon Simple Storage Service Developer
     * Guide</i>.</p> <p>For information about the import manifest referenced by this
     * API action, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
     * Import Manifest</a>.</p>
     */
    inline void SetImportManifestUrl(Aws::String&& value) { m_importManifestUrlHasBeenSet = true; m_importManifestUrl = std::move(value); }

    /**
     * <p>A presigned URL for the import manifest stored in Amazon S3 and presented
     * here as an Amazon S3 presigned URL. For information about creating a presigned
     * URL for an Amazon S3 object, read the "Query String Request Authentication
     * Alternative" section of the <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">Authenticating
     * REST Requests</a> topic in the <i>Amazon Simple Storage Service Developer
     * Guide</i>.</p> <p>For information about the import manifest referenced by this
     * API action, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
     * Import Manifest</a>.</p>
     */
    inline void SetImportManifestUrl(const char* value) { m_importManifestUrlHasBeenSet = true; m_importManifestUrl.assign(value); }

    /**
     * <p>A presigned URL for the import manifest stored in Amazon S3 and presented
     * here as an Amazon S3 presigned URL. For information about creating a presigned
     * URL for an Amazon S3 object, read the "Query String Request Authentication
     * Alternative" section of the <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">Authenticating
     * REST Requests</a> topic in the <i>Amazon Simple Storage Service Developer
     * Guide</i>.</p> <p>For information about the import manifest referenced by this
     * API action, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
     * Import Manifest</a>.</p>
     */
    inline DiskImageDetail& WithImportManifestUrl(const Aws::String& value) { SetImportManifestUrl(value); return *this;}

    /**
     * <p>A presigned URL for the import manifest stored in Amazon S3 and presented
     * here as an Amazon S3 presigned URL. For information about creating a presigned
     * URL for an Amazon S3 object, read the "Query String Request Authentication
     * Alternative" section of the <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">Authenticating
     * REST Requests</a> topic in the <i>Amazon Simple Storage Service Developer
     * Guide</i>.</p> <p>For information about the import manifest referenced by this
     * API action, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
     * Import Manifest</a>.</p>
     */
    inline DiskImageDetail& WithImportManifestUrl(Aws::String&& value) { SetImportManifestUrl(std::move(value)); return *this;}

    /**
     * <p>A presigned URL for the import manifest stored in Amazon S3 and presented
     * here as an Amazon S3 presigned URL. For information about creating a presigned
     * URL for an Amazon S3 object, read the "Query String Request Authentication
     * Alternative" section of the <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">Authenticating
     * REST Requests</a> topic in the <i>Amazon Simple Storage Service Developer
     * Guide</i>.</p> <p>For information about the import manifest referenced by this
     * API action, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
     * Import Manifest</a>.</p>
     */
    inline DiskImageDetail& WithImportManifestUrl(const char* value) { SetImportManifestUrl(value); return *this;}

  private:

    long long m_bytes;
    bool m_bytesHasBeenSet;

    DiskImageFormat m_format;
    bool m_formatHasBeenSet;

    Aws::String m_importManifestUrl;
    bool m_importManifestUrlHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
