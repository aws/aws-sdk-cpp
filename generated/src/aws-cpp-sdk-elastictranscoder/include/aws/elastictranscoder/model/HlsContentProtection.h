/**
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
   * <p>The HLS content protection settings, if any, that you want Elastic Transcoder
   * to apply to your output files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/HlsContentProtection">AWS
   * API Reference</a></p>
   */
  class HlsContentProtection
  {
  public:
    AWS_ELASTICTRANSCODER_API HlsContentProtection() = default;
    AWS_ELASTICTRANSCODER_API HlsContentProtection(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API HlsContentProtection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content protection method for your output. The only valid value is:
     * <code>aes-128</code>.</p> <p>This value is written into the method attribute of
     * the <code>EXT-X-KEY</code> metadata tag in the output playlist.</p>
     */
    inline const Aws::String& GetMethod() const { return m_method; }
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
    template<typename MethodT = Aws::String>
    void SetMethod(MethodT&& value) { m_methodHasBeenSet = true; m_method = std::forward<MethodT>(value); }
    template<typename MethodT = Aws::String>
    HlsContentProtection& WithMethod(MethodT&& value) { SetMethod(std::forward<MethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you want Elastic Transcoder to generate a key for you, leave this field
     * blank.</p> <p>If you choose to supply your own key, you must encrypt the key by
     * using AWS KMS. The key must be base64-encoded, and it must be one of the
     * following bit lengths before being base64-encoded:</p> <p> <code>128</code>,
     * <code>192</code>, or <code>256</code>. </p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    HlsContentProtection& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If Elastic Transcoder is generating your key for you, you must leave this
     * field blank.</p> <p>The MD5 digest of the key that you want Elastic Transcoder
     * to use to encrypt your output file, and that you want Elastic Transcoder to use
     * as a checksum to make sure your key was not corrupted in transit. The key MD5
     * must be base64-encoded, and it must be exactly 16 bytes before being base64-
     * encoded.</p>
     */
    inline const Aws::String& GetKeyMd5() const { return m_keyMd5; }
    inline bool KeyMd5HasBeenSet() const { return m_keyMd5HasBeenSet; }
    template<typename KeyMd5T = Aws::String>
    void SetKeyMd5(KeyMd5T&& value) { m_keyMd5HasBeenSet = true; m_keyMd5 = std::forward<KeyMd5T>(value); }
    template<typename KeyMd5T = Aws::String>
    HlsContentProtection& WithKeyMd5(KeyMd5T&& value) { SetKeyMd5(std::forward<KeyMd5T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If Elastic Transcoder is generating your key for you, you must leave this
     * field blank.</p> <p>The series of random bits created by a random bit generator,
     * unique for every encryption operation, that you want Elastic Transcoder to use
     * to encrypt your output files. The initialization vector must be base64-encoded,
     * and it must be exactly 16 bytes before being base64-encoded.</p>
     */
    inline const Aws::String& GetInitializationVector() const { return m_initializationVector; }
    inline bool InitializationVectorHasBeenSet() const { return m_initializationVectorHasBeenSet; }
    template<typename InitializationVectorT = Aws::String>
    void SetInitializationVector(InitializationVectorT&& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = std::forward<InitializationVectorT>(value); }
    template<typename InitializationVectorT = Aws::String>
    HlsContentProtection& WithInitializationVector(InitializationVectorT&& value) { SetInitializationVector(std::forward<InitializationVectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the license key required to decrypt your HLS playlist. The
     * URL must be an absolute path, and is referenced in the URI attribute of the
     * EXT-X-KEY metadata tag in the playlist file.</p>
     */
    inline const Aws::String& GetLicenseAcquisitionUrl() const { return m_licenseAcquisitionUrl; }
    inline bool LicenseAcquisitionUrlHasBeenSet() const { return m_licenseAcquisitionUrlHasBeenSet; }
    template<typename LicenseAcquisitionUrlT = Aws::String>
    void SetLicenseAcquisitionUrl(LicenseAcquisitionUrlT&& value) { m_licenseAcquisitionUrlHasBeenSet = true; m_licenseAcquisitionUrl = std::forward<LicenseAcquisitionUrlT>(value); }
    template<typename LicenseAcquisitionUrlT = Aws::String>
    HlsContentProtection& WithLicenseAcquisitionUrl(LicenseAcquisitionUrlT&& value) { SetLicenseAcquisitionUrl(std::forward<LicenseAcquisitionUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify whether you want Elastic Transcoder to write your HLS license key to
     * an Amazon S3 bucket. If you choose <code>WithVariantPlaylists</code>,
     * <code>LicenseAcquisitionUrl</code> must be left blank and Elastic Transcoder
     * writes your data key into the same bucket as the associated playlist.</p>
     */
    inline const Aws::String& GetKeyStoragePolicy() const { return m_keyStoragePolicy; }
    inline bool KeyStoragePolicyHasBeenSet() const { return m_keyStoragePolicyHasBeenSet; }
    template<typename KeyStoragePolicyT = Aws::String>
    void SetKeyStoragePolicy(KeyStoragePolicyT&& value) { m_keyStoragePolicyHasBeenSet = true; m_keyStoragePolicy = std::forward<KeyStoragePolicyT>(value); }
    template<typename KeyStoragePolicyT = Aws::String>
    HlsContentProtection& WithKeyStoragePolicy(KeyStoragePolicyT&& value) { SetKeyStoragePolicy(std::forward<KeyStoragePolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_method;
    bool m_methodHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_keyMd5;
    bool m_keyMd5HasBeenSet = false;

    Aws::String m_initializationVector;
    bool m_initializationVectorHasBeenSet = false;

    Aws::String m_licenseAcquisitionUrl;
    bool m_licenseAcquisitionUrlHasBeenSet = false;

    Aws::String m_keyStoragePolicy;
    bool m_keyStoragePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
