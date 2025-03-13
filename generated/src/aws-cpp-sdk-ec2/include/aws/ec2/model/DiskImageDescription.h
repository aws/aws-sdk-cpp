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
    AWS_EC2_API DiskImageDescription() = default;
    AWS_EC2_API DiskImageDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DiskImageDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The checksum computed for the disk image.</p>
     */
    inline const Aws::String& GetChecksum() const { return m_checksum; }
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }
    template<typename ChecksumT = Aws::String>
    void SetChecksum(ChecksumT&& value) { m_checksumHasBeenSet = true; m_checksum = std::forward<ChecksumT>(value); }
    template<typename ChecksumT = Aws::String>
    DiskImageDescription& WithChecksum(ChecksumT&& value) { SetChecksum(std::forward<ChecksumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disk image format.</p>
     */
    inline DiskImageFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(DiskImageFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline DiskImageDescription& WithFormat(DiskImageFormat value) { SetFormat(value); return *this;}
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
    inline const Aws::String& GetImportManifestUrl() const { return m_importManifestUrl; }
    inline bool ImportManifestUrlHasBeenSet() const { return m_importManifestUrlHasBeenSet; }
    template<typename ImportManifestUrlT = Aws::String>
    void SetImportManifestUrl(ImportManifestUrlT&& value) { m_importManifestUrlHasBeenSet = true; m_importManifestUrl = std::forward<ImportManifestUrlT>(value); }
    template<typename ImportManifestUrlT = Aws::String>
    DiskImageDescription& WithImportManifestUrl(ImportManifestUrlT&& value) { SetImportManifestUrl(std::forward<ImportManifestUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the disk image, in GiB.</p>
     */
    inline long long GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }
    inline DiskImageDescription& WithSize(long long value) { SetSize(value); return *this;}
    ///@}
  private:

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    DiskImageFormat m_format{DiskImageFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::String m_importManifestUrl;
    bool m_importManifestUrlHasBeenSet = false;

    long long m_size{0};
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
