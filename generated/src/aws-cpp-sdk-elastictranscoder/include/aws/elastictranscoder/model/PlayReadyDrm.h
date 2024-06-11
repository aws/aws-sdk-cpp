﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>The PlayReady DRM settings, if any, that you want Elastic Transcoder to apply
   * to the output files associated with this playlist.</p> <p>PlayReady DRM encrypts
   * your media files using <code>aes-ctr</code> encryption.</p> <p>If you use DRM
   * for an <code>HLSv3</code> playlist, your outputs must have a master
   * playlist.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/PlayReadyDrm">AWS
   * API Reference</a></p>
   */
  class PlayReadyDrm
  {
  public:
    AWS_ELASTICTRANSCODER_API PlayReadyDrm();
    AWS_ELASTICTRANSCODER_API PlayReadyDrm(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API PlayReadyDrm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of DRM, if any, that you want Elastic Transcoder to apply to the
     * output files associated with this playlist.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }
    inline PlayReadyDrm& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}
    inline PlayReadyDrm& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}
    inline PlayReadyDrm& WithFormat(const char* value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DRM key for your file, provided by your DRM license provider. The key
     * must be base64-encoded, and it must be one of the following bit lengths before
     * being base64-encoded:</p> <p> <code>128</code>, <code>192</code>, or
     * <code>256</code>. </p> <p>The key must also be encrypted by using AWS KMS.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline PlayReadyDrm& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline PlayReadyDrm& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline PlayReadyDrm& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MD5 digest of the key used for DRM on your file, and that you want
     * Elastic Transcoder to use as a checksum to make sure your key was not corrupted
     * in transit. The key MD5 must be base64-encoded, and it must be exactly 16 bytes
     * before being base64-encoded.</p>
     */
    inline const Aws::String& GetKeyMd5() const{ return m_keyMd5; }
    inline bool KeyMd5HasBeenSet() const { return m_keyMd5HasBeenSet; }
    inline void SetKeyMd5(const Aws::String& value) { m_keyMd5HasBeenSet = true; m_keyMd5 = value; }
    inline void SetKeyMd5(Aws::String&& value) { m_keyMd5HasBeenSet = true; m_keyMd5 = std::move(value); }
    inline void SetKeyMd5(const char* value) { m_keyMd5HasBeenSet = true; m_keyMd5.assign(value); }
    inline PlayReadyDrm& WithKeyMd5(const Aws::String& value) { SetKeyMd5(value); return *this;}
    inline PlayReadyDrm& WithKeyMd5(Aws::String&& value) { SetKeyMd5(std::move(value)); return *this;}
    inline PlayReadyDrm& WithKeyMd5(const char* value) { SetKeyMd5(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for your DRM key, so that your DRM license provider knows which key to
     * provide.</p> <p>The key ID must be provided in big endian, and Elastic
     * Transcoder converts it to little endian before inserting it into the PlayReady
     * DRM headers. If you are unsure whether your license server provides your key ID
     * in big or little endian, check with your DRM provider.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }
    inline PlayReadyDrm& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline PlayReadyDrm& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline PlayReadyDrm& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The series of random bits created by a random bit generator, unique for every
     * encryption operation, that you want Elastic Transcoder to use to encrypt your
     * files. The initialization vector must be base64-encoded, and it must be exactly
     * 8 bytes long before being base64-encoded. If no initialization vector is
     * provided, Elastic Transcoder generates one for you.</p>
     */
    inline const Aws::String& GetInitializationVector() const{ return m_initializationVector; }
    inline bool InitializationVectorHasBeenSet() const { return m_initializationVectorHasBeenSet; }
    inline void SetInitializationVector(const Aws::String& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = value; }
    inline void SetInitializationVector(Aws::String&& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = std::move(value); }
    inline void SetInitializationVector(const char* value) { m_initializationVectorHasBeenSet = true; m_initializationVector.assign(value); }
    inline PlayReadyDrm& WithInitializationVector(const Aws::String& value) { SetInitializationVector(value); return *this;}
    inline PlayReadyDrm& WithInitializationVector(Aws::String&& value) { SetInitializationVector(std::move(value)); return *this;}
    inline PlayReadyDrm& WithInitializationVector(const char* value) { SetInitializationVector(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the license key required to play DRM content. The URL must be
     * an absolute path, and is referenced by the PlayReady header. The PlayReady
     * header is referenced in the protection header of the client manifest for Smooth
     * Streaming outputs, and in the EXT-X-DXDRM and EXT-XDXDRMINFO metadata tags for
     * HLS playlist outputs. An example URL looks like this:
     * <code>https://www.example.com/exampleKey/</code> </p>
     */
    inline const Aws::String& GetLicenseAcquisitionUrl() const{ return m_licenseAcquisitionUrl; }
    inline bool LicenseAcquisitionUrlHasBeenSet() const { return m_licenseAcquisitionUrlHasBeenSet; }
    inline void SetLicenseAcquisitionUrl(const Aws::String& value) { m_licenseAcquisitionUrlHasBeenSet = true; m_licenseAcquisitionUrl = value; }
    inline void SetLicenseAcquisitionUrl(Aws::String&& value) { m_licenseAcquisitionUrlHasBeenSet = true; m_licenseAcquisitionUrl = std::move(value); }
    inline void SetLicenseAcquisitionUrl(const char* value) { m_licenseAcquisitionUrlHasBeenSet = true; m_licenseAcquisitionUrl.assign(value); }
    inline PlayReadyDrm& WithLicenseAcquisitionUrl(const Aws::String& value) { SetLicenseAcquisitionUrl(value); return *this;}
    inline PlayReadyDrm& WithLicenseAcquisitionUrl(Aws::String&& value) { SetLicenseAcquisitionUrl(std::move(value)); return *this;}
    inline PlayReadyDrm& WithLicenseAcquisitionUrl(const char* value) { SetLicenseAcquisitionUrl(value); return *this;}
    ///@}
  private:

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_keyMd5;
    bool m_keyMd5HasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_initializationVector;
    bool m_initializationVectorHasBeenSet = false;

    Aws::String m_licenseAcquisitionUrl;
    bool m_licenseAcquisitionUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
