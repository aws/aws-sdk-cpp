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
   * <p>The HLS content protection settings, if any, that you want Elastic Transcoder
   * to apply to your output files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/HlsContentProtection">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICTRANSCODER_API HlsContentProtection
  {
  public:
    HlsContentProtection();
    HlsContentProtection(Aws::Utils::Json::JsonView jsonValue);
    HlsContentProtection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The content protection method for your output. The only valid value is:
     * <code>aes-128</code>.</p> <p>This value is written into the method attribute of
     * the <code>EXT-X-KEY</code> metadata tag in the output playlist.</p>
     */
    inline const Aws::String& GetMethod() const{ return m_method; }

    /**
     * <p>The content protection method for your output. The only valid value is:
     * <code>aes-128</code>.</p> <p>This value is written into the method attribute of
     * the <code>EXT-X-KEY</code> metadata tag in the output playlist.</p>
     */
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }

    /**
     * <p>The content protection method for your output. The only valid value is:
     * <code>aes-128</code>.</p> <p>This value is written into the method attribute of
     * the <code>EXT-X-KEY</code> metadata tag in the output playlist.</p>
     */
    inline void SetMethod(const Aws::String& value) { m_methodHasBeenSet = true; m_method = value; }

    /**
     * <p>The content protection method for your output. The only valid value is:
     * <code>aes-128</code>.</p> <p>This value is written into the method attribute of
     * the <code>EXT-X-KEY</code> metadata tag in the output playlist.</p>
     */
    inline void SetMethod(Aws::String&& value) { m_methodHasBeenSet = true; m_method = std::move(value); }

    /**
     * <p>The content protection method for your output. The only valid value is:
     * <code>aes-128</code>.</p> <p>This value is written into the method attribute of
     * the <code>EXT-X-KEY</code> metadata tag in the output playlist.</p>
     */
    inline void SetMethod(const char* value) { m_methodHasBeenSet = true; m_method.assign(value); }

    /**
     * <p>The content protection method for your output. The only valid value is:
     * <code>aes-128</code>.</p> <p>This value is written into the method attribute of
     * the <code>EXT-X-KEY</code> metadata tag in the output playlist.</p>
     */
    inline HlsContentProtection& WithMethod(const Aws::String& value) { SetMethod(value); return *this;}

    /**
     * <p>The content protection method for your output. The only valid value is:
     * <code>aes-128</code>.</p> <p>This value is written into the method attribute of
     * the <code>EXT-X-KEY</code> metadata tag in the output playlist.</p>
     */
    inline HlsContentProtection& WithMethod(Aws::String&& value) { SetMethod(std::move(value)); return *this;}

    /**
     * <p>The content protection method for your output. The only valid value is:
     * <code>aes-128</code>.</p> <p>This value is written into the method attribute of
     * the <code>EXT-X-KEY</code> metadata tag in the output playlist.</p>
     */
    inline HlsContentProtection& WithMethod(const char* value) { SetMethod(value); return *this;}


    /**
     * <p>If you want Elastic Transcoder to generate a key for you, leave this field
     * blank.</p> <p>If you choose to supply your own key, you must encrypt the key by
     * using AWS KMS. The key must be base64-encoded, and it must be one of the
     * following bit lengths before being base64-encoded:</p> <p> <code>128</code>,
     * <code>192</code>, or <code>256</code>. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>If you want Elastic Transcoder to generate a key for you, leave this field
     * blank.</p> <p>If you choose to supply your own key, you must encrypt the key by
     * using AWS KMS. The key must be base64-encoded, and it must be one of the
     * following bit lengths before being base64-encoded:</p> <p> <code>128</code>,
     * <code>192</code>, or <code>256</code>. </p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>If you want Elastic Transcoder to generate a key for you, leave this field
     * blank.</p> <p>If you choose to supply your own key, you must encrypt the key by
     * using AWS KMS. The key must be base64-encoded, and it must be one of the
     * following bit lengths before being base64-encoded:</p> <p> <code>128</code>,
     * <code>192</code>, or <code>256</code>. </p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>If you want Elastic Transcoder to generate a key for you, leave this field
     * blank.</p> <p>If you choose to supply your own key, you must encrypt the key by
     * using AWS KMS. The key must be base64-encoded, and it must be one of the
     * following bit lengths before being base64-encoded:</p> <p> <code>128</code>,
     * <code>192</code>, or <code>256</code>. </p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>If you want Elastic Transcoder to generate a key for you, leave this field
     * blank.</p> <p>If you choose to supply your own key, you must encrypt the key by
     * using AWS KMS. The key must be base64-encoded, and it must be one of the
     * following bit lengths before being base64-encoded:</p> <p> <code>128</code>,
     * <code>192</code>, or <code>256</code>. </p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>If you want Elastic Transcoder to generate a key for you, leave this field
     * blank.</p> <p>If you choose to supply your own key, you must encrypt the key by
     * using AWS KMS. The key must be base64-encoded, and it must be one of the
     * following bit lengths before being base64-encoded:</p> <p> <code>128</code>,
     * <code>192</code>, or <code>256</code>. </p>
     */
    inline HlsContentProtection& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>If you want Elastic Transcoder to generate a key for you, leave this field
     * blank.</p> <p>If you choose to supply your own key, you must encrypt the key by
     * using AWS KMS. The key must be base64-encoded, and it must be one of the
     * following bit lengths before being base64-encoded:</p> <p> <code>128</code>,
     * <code>192</code>, or <code>256</code>. </p>
     */
    inline HlsContentProtection& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>If you want Elastic Transcoder to generate a key for you, leave this field
     * blank.</p> <p>If you choose to supply your own key, you must encrypt the key by
     * using AWS KMS. The key must be base64-encoded, and it must be one of the
     * following bit lengths before being base64-encoded:</p> <p> <code>128</code>,
     * <code>192</code>, or <code>256</code>. </p>
     */
    inline HlsContentProtection& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>If Elastic Transcoder is generating your key for you, you must leave this
     * field blank.</p> <p>The MD5 digest of the key that you want Elastic Transcoder
     * to use to encrypt your output file, and that you want Elastic Transcoder to use
     * as a checksum to make sure your key was not corrupted in transit. The key MD5
     * must be base64-encoded, and it must be exactly 16 bytes before being base64-
     * encoded.</p>
     */
    inline const Aws::String& GetKeyMd5() const{ return m_keyMd5; }

    /**
     * <p>If Elastic Transcoder is generating your key for you, you must leave this
     * field blank.</p> <p>The MD5 digest of the key that you want Elastic Transcoder
     * to use to encrypt your output file, and that you want Elastic Transcoder to use
     * as a checksum to make sure your key was not corrupted in transit. The key MD5
     * must be base64-encoded, and it must be exactly 16 bytes before being base64-
     * encoded.</p>
     */
    inline bool KeyMd5HasBeenSet() const { return m_keyMd5HasBeenSet; }

    /**
     * <p>If Elastic Transcoder is generating your key for you, you must leave this
     * field blank.</p> <p>The MD5 digest of the key that you want Elastic Transcoder
     * to use to encrypt your output file, and that you want Elastic Transcoder to use
     * as a checksum to make sure your key was not corrupted in transit. The key MD5
     * must be base64-encoded, and it must be exactly 16 bytes before being base64-
     * encoded.</p>
     */
    inline void SetKeyMd5(const Aws::String& value) { m_keyMd5HasBeenSet = true; m_keyMd5 = value; }

    /**
     * <p>If Elastic Transcoder is generating your key for you, you must leave this
     * field blank.</p> <p>The MD5 digest of the key that you want Elastic Transcoder
     * to use to encrypt your output file, and that you want Elastic Transcoder to use
     * as a checksum to make sure your key was not corrupted in transit. The key MD5
     * must be base64-encoded, and it must be exactly 16 bytes before being base64-
     * encoded.</p>
     */
    inline void SetKeyMd5(Aws::String&& value) { m_keyMd5HasBeenSet = true; m_keyMd5 = std::move(value); }

    /**
     * <p>If Elastic Transcoder is generating your key for you, you must leave this
     * field blank.</p> <p>The MD5 digest of the key that you want Elastic Transcoder
     * to use to encrypt your output file, and that you want Elastic Transcoder to use
     * as a checksum to make sure your key was not corrupted in transit. The key MD5
     * must be base64-encoded, and it must be exactly 16 bytes before being base64-
     * encoded.</p>
     */
    inline void SetKeyMd5(const char* value) { m_keyMd5HasBeenSet = true; m_keyMd5.assign(value); }

    /**
     * <p>If Elastic Transcoder is generating your key for you, you must leave this
     * field blank.</p> <p>The MD5 digest of the key that you want Elastic Transcoder
     * to use to encrypt your output file, and that you want Elastic Transcoder to use
     * as a checksum to make sure your key was not corrupted in transit. The key MD5
     * must be base64-encoded, and it must be exactly 16 bytes before being base64-
     * encoded.</p>
     */
    inline HlsContentProtection& WithKeyMd5(const Aws::String& value) { SetKeyMd5(value); return *this;}

    /**
     * <p>If Elastic Transcoder is generating your key for you, you must leave this
     * field blank.</p> <p>The MD5 digest of the key that you want Elastic Transcoder
     * to use to encrypt your output file, and that you want Elastic Transcoder to use
     * as a checksum to make sure your key was not corrupted in transit. The key MD5
     * must be base64-encoded, and it must be exactly 16 bytes before being base64-
     * encoded.</p>
     */
    inline HlsContentProtection& WithKeyMd5(Aws::String&& value) { SetKeyMd5(std::move(value)); return *this;}

    /**
     * <p>If Elastic Transcoder is generating your key for you, you must leave this
     * field blank.</p> <p>The MD5 digest of the key that you want Elastic Transcoder
     * to use to encrypt your output file, and that you want Elastic Transcoder to use
     * as a checksum to make sure your key was not corrupted in transit. The key MD5
     * must be base64-encoded, and it must be exactly 16 bytes before being base64-
     * encoded.</p>
     */
    inline HlsContentProtection& WithKeyMd5(const char* value) { SetKeyMd5(value); return *this;}


    /**
     * <p>If Elastic Transcoder is generating your key for you, you must leave this
     * field blank.</p> <p>The series of random bits created by a random bit generator,
     * unique for every encryption operation, that you want Elastic Transcoder to use
     * to encrypt your output files. The initialization vector must be base64-encoded,
     * and it must be exactly 16 bytes before being base64-encoded.</p>
     */
    inline const Aws::String& GetInitializationVector() const{ return m_initializationVector; }

    /**
     * <p>If Elastic Transcoder is generating your key for you, you must leave this
     * field blank.</p> <p>The series of random bits created by a random bit generator,
     * unique for every encryption operation, that you want Elastic Transcoder to use
     * to encrypt your output files. The initialization vector must be base64-encoded,
     * and it must be exactly 16 bytes before being base64-encoded.</p>
     */
    inline bool InitializationVectorHasBeenSet() const { return m_initializationVectorHasBeenSet; }

    /**
     * <p>If Elastic Transcoder is generating your key for you, you must leave this
     * field blank.</p> <p>The series of random bits created by a random bit generator,
     * unique for every encryption operation, that you want Elastic Transcoder to use
     * to encrypt your output files. The initialization vector must be base64-encoded,
     * and it must be exactly 16 bytes before being base64-encoded.</p>
     */
    inline void SetInitializationVector(const Aws::String& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = value; }

    /**
     * <p>If Elastic Transcoder is generating your key for you, you must leave this
     * field blank.</p> <p>The series of random bits created by a random bit generator,
     * unique for every encryption operation, that you want Elastic Transcoder to use
     * to encrypt your output files. The initialization vector must be base64-encoded,
     * and it must be exactly 16 bytes before being base64-encoded.</p>
     */
    inline void SetInitializationVector(Aws::String&& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = std::move(value); }

    /**
     * <p>If Elastic Transcoder is generating your key for you, you must leave this
     * field blank.</p> <p>The series of random bits created by a random bit generator,
     * unique for every encryption operation, that you want Elastic Transcoder to use
     * to encrypt your output files. The initialization vector must be base64-encoded,
     * and it must be exactly 16 bytes before being base64-encoded.</p>
     */
    inline void SetInitializationVector(const char* value) { m_initializationVectorHasBeenSet = true; m_initializationVector.assign(value); }

    /**
     * <p>If Elastic Transcoder is generating your key for you, you must leave this
     * field blank.</p> <p>The series of random bits created by a random bit generator,
     * unique for every encryption operation, that you want Elastic Transcoder to use
     * to encrypt your output files. The initialization vector must be base64-encoded,
     * and it must be exactly 16 bytes before being base64-encoded.</p>
     */
    inline HlsContentProtection& WithInitializationVector(const Aws::String& value) { SetInitializationVector(value); return *this;}

    /**
     * <p>If Elastic Transcoder is generating your key for you, you must leave this
     * field blank.</p> <p>The series of random bits created by a random bit generator,
     * unique for every encryption operation, that you want Elastic Transcoder to use
     * to encrypt your output files. The initialization vector must be base64-encoded,
     * and it must be exactly 16 bytes before being base64-encoded.</p>
     */
    inline HlsContentProtection& WithInitializationVector(Aws::String&& value) { SetInitializationVector(std::move(value)); return *this;}

    /**
     * <p>If Elastic Transcoder is generating your key for you, you must leave this
     * field blank.</p> <p>The series of random bits created by a random bit generator,
     * unique for every encryption operation, that you want Elastic Transcoder to use
     * to encrypt your output files. The initialization vector must be base64-encoded,
     * and it must be exactly 16 bytes before being base64-encoded.</p>
     */
    inline HlsContentProtection& WithInitializationVector(const char* value) { SetInitializationVector(value); return *this;}


    /**
     * <p>The location of the license key required to decrypt your HLS playlist. The
     * URL must be an absolute path, and is referenced in the URI attribute of the
     * EXT-X-KEY metadata tag in the playlist file.</p>
     */
    inline const Aws::String& GetLicenseAcquisitionUrl() const{ return m_licenseAcquisitionUrl; }

    /**
     * <p>The location of the license key required to decrypt your HLS playlist. The
     * URL must be an absolute path, and is referenced in the URI attribute of the
     * EXT-X-KEY metadata tag in the playlist file.</p>
     */
    inline bool LicenseAcquisitionUrlHasBeenSet() const { return m_licenseAcquisitionUrlHasBeenSet; }

    /**
     * <p>The location of the license key required to decrypt your HLS playlist. The
     * URL must be an absolute path, and is referenced in the URI attribute of the
     * EXT-X-KEY metadata tag in the playlist file.</p>
     */
    inline void SetLicenseAcquisitionUrl(const Aws::String& value) { m_licenseAcquisitionUrlHasBeenSet = true; m_licenseAcquisitionUrl = value; }

    /**
     * <p>The location of the license key required to decrypt your HLS playlist. The
     * URL must be an absolute path, and is referenced in the URI attribute of the
     * EXT-X-KEY metadata tag in the playlist file.</p>
     */
    inline void SetLicenseAcquisitionUrl(Aws::String&& value) { m_licenseAcquisitionUrlHasBeenSet = true; m_licenseAcquisitionUrl = std::move(value); }

    /**
     * <p>The location of the license key required to decrypt your HLS playlist. The
     * URL must be an absolute path, and is referenced in the URI attribute of the
     * EXT-X-KEY metadata tag in the playlist file.</p>
     */
    inline void SetLicenseAcquisitionUrl(const char* value) { m_licenseAcquisitionUrlHasBeenSet = true; m_licenseAcquisitionUrl.assign(value); }

    /**
     * <p>The location of the license key required to decrypt your HLS playlist. The
     * URL must be an absolute path, and is referenced in the URI attribute of the
     * EXT-X-KEY metadata tag in the playlist file.</p>
     */
    inline HlsContentProtection& WithLicenseAcquisitionUrl(const Aws::String& value) { SetLicenseAcquisitionUrl(value); return *this;}

    /**
     * <p>The location of the license key required to decrypt your HLS playlist. The
     * URL must be an absolute path, and is referenced in the URI attribute of the
     * EXT-X-KEY metadata tag in the playlist file.</p>
     */
    inline HlsContentProtection& WithLicenseAcquisitionUrl(Aws::String&& value) { SetLicenseAcquisitionUrl(std::move(value)); return *this;}

    /**
     * <p>The location of the license key required to decrypt your HLS playlist. The
     * URL must be an absolute path, and is referenced in the URI attribute of the
     * EXT-X-KEY metadata tag in the playlist file.</p>
     */
    inline HlsContentProtection& WithLicenseAcquisitionUrl(const char* value) { SetLicenseAcquisitionUrl(value); return *this;}


    /**
     * <p>Specify whether you want Elastic Transcoder to write your HLS license key to
     * an Amazon S3 bucket. If you choose <code>WithVariantPlaylists</code>,
     * <code>LicenseAcquisitionUrl</code> must be left blank and Elastic Transcoder
     * writes your data key into the same bucket as the associated playlist.</p>
     */
    inline const Aws::String& GetKeyStoragePolicy() const{ return m_keyStoragePolicy; }

    /**
     * <p>Specify whether you want Elastic Transcoder to write your HLS license key to
     * an Amazon S3 bucket. If you choose <code>WithVariantPlaylists</code>,
     * <code>LicenseAcquisitionUrl</code> must be left blank and Elastic Transcoder
     * writes your data key into the same bucket as the associated playlist.</p>
     */
    inline bool KeyStoragePolicyHasBeenSet() const { return m_keyStoragePolicyHasBeenSet; }

    /**
     * <p>Specify whether you want Elastic Transcoder to write your HLS license key to
     * an Amazon S3 bucket. If you choose <code>WithVariantPlaylists</code>,
     * <code>LicenseAcquisitionUrl</code> must be left blank and Elastic Transcoder
     * writes your data key into the same bucket as the associated playlist.</p>
     */
    inline void SetKeyStoragePolicy(const Aws::String& value) { m_keyStoragePolicyHasBeenSet = true; m_keyStoragePolicy = value; }

    /**
     * <p>Specify whether you want Elastic Transcoder to write your HLS license key to
     * an Amazon S3 bucket. If you choose <code>WithVariantPlaylists</code>,
     * <code>LicenseAcquisitionUrl</code> must be left blank and Elastic Transcoder
     * writes your data key into the same bucket as the associated playlist.</p>
     */
    inline void SetKeyStoragePolicy(Aws::String&& value) { m_keyStoragePolicyHasBeenSet = true; m_keyStoragePolicy = std::move(value); }

    /**
     * <p>Specify whether you want Elastic Transcoder to write your HLS license key to
     * an Amazon S3 bucket. If you choose <code>WithVariantPlaylists</code>,
     * <code>LicenseAcquisitionUrl</code> must be left blank and Elastic Transcoder
     * writes your data key into the same bucket as the associated playlist.</p>
     */
    inline void SetKeyStoragePolicy(const char* value) { m_keyStoragePolicyHasBeenSet = true; m_keyStoragePolicy.assign(value); }

    /**
     * <p>Specify whether you want Elastic Transcoder to write your HLS license key to
     * an Amazon S3 bucket. If you choose <code>WithVariantPlaylists</code>,
     * <code>LicenseAcquisitionUrl</code> must be left blank and Elastic Transcoder
     * writes your data key into the same bucket as the associated playlist.</p>
     */
    inline HlsContentProtection& WithKeyStoragePolicy(const Aws::String& value) { SetKeyStoragePolicy(value); return *this;}

    /**
     * <p>Specify whether you want Elastic Transcoder to write your HLS license key to
     * an Amazon S3 bucket. If you choose <code>WithVariantPlaylists</code>,
     * <code>LicenseAcquisitionUrl</code> must be left blank and Elastic Transcoder
     * writes your data key into the same bucket as the associated playlist.</p>
     */
    inline HlsContentProtection& WithKeyStoragePolicy(Aws::String&& value) { SetKeyStoragePolicy(std::move(value)); return *this;}

    /**
     * <p>Specify whether you want Elastic Transcoder to write your HLS license key to
     * an Amazon S3 bucket. If you choose <code>WithVariantPlaylists</code>,
     * <code>LicenseAcquisitionUrl</code> must be left blank and Elastic Transcoder
     * writes your data key into the same bucket as the associated playlist.</p>
     */
    inline HlsContentProtection& WithKeyStoragePolicy(const char* value) { SetKeyStoragePolicy(value); return *this;}

  private:

    Aws::String m_method;
    bool m_methodHasBeenSet;

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_keyMd5;
    bool m_keyMd5HasBeenSet;

    Aws::String m_initializationVector;
    bool m_initializationVectorHasBeenSet;

    Aws::String m_licenseAcquisitionUrl;
    bool m_licenseAcquisitionUrlHasBeenSet;

    Aws::String m_keyStoragePolicy;
    bool m_keyStoragePolicyHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
