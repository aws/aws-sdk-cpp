/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DiskImageDescription
  {
  public:
    AWS_EC2_API DiskImageDescription();
    AWS_EC2_API DiskImageDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DiskImageDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The checksum computed for the disk image.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }
    inline void SetChecksum(const Aws::String& value) { m_checksumHasBeenSet = true; m_checksum = value; }
    inline void SetChecksum(Aws::String&& value) { m_checksumHasBeenSet = true; m_checksum = std::move(value); }
    inline void SetChecksum(const char* value) { m_checksumHasBeenSet = true; m_checksum.assign(value); }
    inline DiskImageDescription& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}
    inline DiskImageDescription& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}
    inline DiskImageDescription& WithChecksum(const char* value) { SetChecksum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disk image format.</p>
     */
    inline const DiskImageFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const DiskImageFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(DiskImageFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline DiskImageDescription& WithFormat(const DiskImageFormat& value) { SetFormat(value); return *this;}
    inline DiskImageDescription& WithFormat(DiskImageFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A presigned URL for the import manifest stored in Amazon S3. For information
     * about creating a presigned URL for an Amazon S3 object, read the "Query String
     * Request Authentication Alternative" section of the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">Authenticating
     * REST Requests</a> topic in the <i>Amazon Simple Storage Service Developer
     * Guide</i>.</p> <p>For information about the import manifest referenced by this
     * API action, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM
     * Import Manifest</a>.</p>
     */
    inline const Aws::String& GetImportManifestUrl() const{ return m_importManifestUrl; }
    inline bool ImportManifestUrlHasBeenSet() const { return m_importManifestUrlHasBeenSet; }
    inline void SetImportManifestUrl(const Aws::String& value) { m_importManifestUrlHasBeenSet = true; m_importManifestUrl = value; }
    inline void SetImportManifestUrl(Aws::String&& value) { m_importManifestUrlHasBeenSet = true; m_importManifestUrl = std::move(value); }
    inline void SetImportManifestUrl(const char* value) { m_importManifestUrlHasBeenSet = true; m_importManifestUrl.assign(value); }
    inline DiskImageDescription& WithImportManifestUrl(const Aws::String& value) { SetImportManifestUrl(value); return *this;}
    inline DiskImageDescription& WithImportManifestUrl(Aws::String&& value) { SetImportManifestUrl(std::move(value)); return *this;}
    inline DiskImageDescription& WithImportManifestUrl(const char* value) { SetImportManifestUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the disk image, in GiB.</p>
     */
    inline long long GetSize() const{ return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }
    inline DiskImageDescription& WithSize(long long value) { SetSize(value); return *this;}
    ///@}
  private:

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    DiskImageFormat m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_importManifestUrl;
    bool m_importManifestUrlHasBeenSet = false;

    long long m_size;
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
