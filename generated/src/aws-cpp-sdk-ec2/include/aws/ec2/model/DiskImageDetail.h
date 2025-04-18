﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DiskImageDetail
  {
  public:
    AWS_EC2_API DiskImageDetail() = default;
    AWS_EC2_API DiskImageDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DiskImageDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The disk image format.</p>
     */
    inline DiskImageFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(DiskImageFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline DiskImageDetail& WithFormat(DiskImageFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the disk image, in GiB.</p>
     */
    inline long long GetBytes() const { return m_bytes; }
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
    inline void SetBytes(long long value) { m_bytesHasBeenSet = true; m_bytes = value; }
    inline DiskImageDetail& WithBytes(long long value) { SetBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A presigned URL for the import manifest stored in Amazon S3 and presented
     * here as an Amazon S3 presigned URL. For information about creating a presigned
     * URL for an Amazon S3 object, read the "Query String Request Authentication
     * Alternative" section of the <a
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
    DiskImageDetail& WithImportManifestUrl(ImportManifestUrlT&& value) { SetImportManifestUrl(std::forward<ImportManifestUrlT>(value)); return *this;}
    ///@}
  private:

    DiskImageFormat m_format{DiskImageFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    long long m_bytes{0};
    bool m_bytesHasBeenSet = false;

    Aws::String m_importManifestUrl;
    bool m_importManifestUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
